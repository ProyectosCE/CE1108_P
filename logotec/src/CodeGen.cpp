//
// Created by amv22 on 27/9/2025.
//

#include "CodeGen.h"
#include "TypeChecker.h"
#include <fstream>

CodeGen::CodeGen() {

}


// Recorre el programa
any CodeGen::visitPrograma(LogotecGramarParser::ProgramaContext *ctx) {

    codigoHeader =
            "#include <Arduino.h>\n"
            "#include \"turtle_hw.h\"\n"
            "using namespace std;\n\n";
    codigoFooter =
        "}\n"
            "void setup() {\n"
            "initTurtle();\n"
            "main();\n}\n"
        "void loop() {}\n";
    string mainstring = "int main() {\n";
    std::string codigoMain;
    for (size_t i = 0; i < ctx->children.size(); ++i) {
        auto child = ctx->children[i];
        // Ignorar NEWLINE
        if (dynamic_cast<antlr4::tree::TerminalNode*>(child)) {
            auto terminal = dynamic_cast<antlr4::tree::TerminalNode*>(child);
            if (terminal->getSymbol()->getType() == LogotecGramarParser::NEWLINE) {
                continue;
            }
        }
        // Visitar linea_instrucciones
        if (auto linea = dynamic_cast<LogotecGramarParser::Linea_instruccionesContext*>(child)) {
            visit(linea);
            codigoMain += codigo;
            codigo.clear();
        }
        // Visitar procedimiento
        else if (auto proc = dynamic_cast<LogotecGramarParser::ProcedimientoContext*>(child)) {
            visit(proc);
        }
    }
    // Al finalizar, añadir los procedimientos fuera de main
    codigo = codigoHeader + procGen.generarCodigoProcedimientos() + "\n" + mainstring + codigoMain + codigoFooter;
    return nullptr;
}

// Haz: crear variable
any CodeGen::visitHaz_variable(LogotecGramarParser::Haz_variableContext *ctx) {
    if (errorReporter.hasErrors()) return nullptr;

    std::string nombre = visitvariable_nombre(ctx->variable_nombre());
    if (nombre.empty()) {
        errorReporter.error(ctx->getStart()->getLine(), "Nombre de variable inválido.");
        return nullptr;
    }
    Type tipo = getValorType(ctx->e, symbolTable);
    std::string tipoStr;
    switch (tipo) {
        case Type::INT:
            tipoStr = "int";
            break;
        case Type::BOOL:
            tipoStr = "bool";
            break;
        case Type::STRING:
            tipoStr = "string";
            break;
        case Type::COLOR:
            tipoStr = "Color";
            break;
        default:
            tipoStr = "desconocido";
            errorReporter.error(ctx->getStart()->getLine(), "Tipo desconocido para la variable '" + nombre + "'.");
            break;
    }
    // Guardar tipo en la tabla de símbolos
    tablaTipos[nombre] = tipoStr;
    if (!symbolTable.insert(nombre, tipo)) {
        errorReporter.error(ctx->getStart()->getLine(), "Variable '" + nombre + "' ya declarada en este ámbito.");
        return nullptr;
    }
    // Solo validar expresión matemática si es int
    if (tipo == Type::INT && checkMathExpr(ctx->e) != "int") {
        error("La expresión para la variable '" + nombre + "' no es válida o no es de tipo int.");
        return nullptr;
    }
    std::string valor = generarExprCodigo(ctx->e);
    codigo += tipoStr + " " + nombre + " = " + valor + ";";
    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(ctx->parent)) {
        agregarComentarioLinea(instrCtx);
    }
    codigo += "\n";
    cout << "Variable '" << nombre << "' creada de tipo " << tipoStr << endl;
    return nullptr;
}

std::string CodeGen::visitvariable_nombre(LogotecGramarParser::Variable_nombreContext *ctx) {
    if (errorReporter.hasErrors()) return nullptr;

    std::string nombre = ctx->ID()->getText();

    // Verificar si el primer carácter es una letra minúscula
    if (!nombre.empty() && !std::islower(nombre[0])) {
        errorReporter.error(ctx->getStart()->getLine(), "El nombre de la variable debe comenzar con una letra minúscula.");
        return "";
    }

    // Verificar que el nombre no contenga el símbolo '_'
    if (nombre.find('_') != std::string::npos) {
        errorReporter.error(ctx->getStart()->getLine(), "El nombre de la variable no debe contener el símbolo '_'.");
        return "";
    }

    //verificar que tenga extrictamente menos de 10 caracteres
    if (nombre.length() >= 10) {
        errorReporter.error(ctx->getStart()->getLine(), "El nombre de la variable debe tener menos de 10 caracteres.");
        return "";
    }

    return nombre;
}



// INIC: asignación
any CodeGen::visitInic_variable(LogotecGramarParser::Inic_variableContext *ctx) {
    if (errorReporter.hasErrors()) return nullptr;

    std::string nombre = visitvariable_nombre(ctx->variable_nombre());
    if (nombre.empty()) {
        errorReporter.error(ctx->getStart()->getLine(), "Nombre de variable inválido.");
        return nullptr;
    }
    auto sym = symbolTable.lookup(nombre);
    if (!sym) {
        errorReporter.error(ctx->getStart()->getLine(), "Variable '" + nombre + "' no declarada antes de asignar.");
        return nullptr;
    }
    // Inferir tipo de la expresión
    Type tipoNuevo = getValorType(ctx->e, symbolTable);
    // Solo validar expresión matemática si es int
    if (tipoNuevo == Type::INT && checkMathExpr(ctx->e) != "int") {
        error("La expresión de asignación para la variable '" + nombre + "' no es válida o no es de tipo int.");
        return nullptr;
    }
    // Actualizar tipo en tablaTipos (opcional, si quieres mantenerlo sincronizado)
    switch (tipoNuevo) {
        case Type::INT:
            tablaTipos[nombre] = "int";
            break;
        case Type::BOOL:
            tablaTipos[nombre] = "bool";
            break;
        case Type::STRING:
            tablaTipos[nombre] = "string";
            break;
        case Type::COLOR:
            tablaTipos[nombre] = "Color";
            break;
        default:
            tablaTipos[nombre] = "desconocido";
            break;
    }
    // Verificar compatibilidad de tipos
    if (!tiposEquivalentes(sym->type, tipoNuevo)) {
        errorReporter.error(ctx->getStart()->getLine(), "Error semántico: asignación de tipo incorrecto a variable '" + nombre + "'.");
        return nullptr;
    }
    std::string valor = generarExprCodigo(ctx->e);
    codigo += nombre + " = " + valor + ";";
    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(ctx->parent)) {
        agregarComentarioLinea(instrCtx);
    }
    codigo += "\n";
    return nullptr;
}

any CodeGen::visitInc_variable(LogotecGramarParser::Inc_variableContext *ctx) {
    if (errorReporter.hasErrors()) return nullptr;

    string n1 = visitvariable_nombre(ctx->variable_nombre());
    if (n1.empty()) {
        errorReporter.error(ctx->getStart()->getLine(), "Nombre de variable inválido.");
        return nullptr;
    }
    auto sym1 = symbolTable.lookup(n1);
    if (!sym1) {
        errorReporter.error(ctx->getStart()->getLine(), "Variable '" + n1 + "' no declarada antes de INC.");
        return nullptr;
    }
    if (sym1->type != Type::INT) {
        errorReporter.error(ctx->getStart()->getLine(), "Variable '" + n1 + "' no es de tipo int y no se puede usar en INC.");
        return nullptr;
    }
    //check the type of the expression
    string n2;
    if (!ctx->expr_mat_aritm()) {
        n2 = "++";
        codigo += n1 + "++;";
        // comentario si existe
        if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(ctx->parent)) {
            agregarComentarioLinea(instrCtx);
        }
        codigo += "\n";
        return nullptr;
    }
    if (checkMathExpr(ctx->expr_mat_aritm()) != "int") {
        error("La expresión en INC no es válida o no es de tipo int.");
        return nullptr;
    }
    n2 = generarExprCodigo(ctx->expr_mat_aritm());
    codigo += n1 + " = " + n1 + " + " + n2 + ";";
    // comentario si existe
    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(ctx->parent)) {
        agregarComentarioLinea(instrCtx);
    }
    codigo += "\n";
    return nullptr;
}

any CodeGen::visitAvanza_variable(LogotecGramarParser::Avanza_variableContext *ctx) {
    if (errorReporter.hasErrors()) return nullptr;

    // Validar tipo de la expresión
    if (checkMathExpr(ctx->e) != "int") {
        error("La expresión en AVANZA no es válida o no es de tipo int.");
        return nullptr;
    }

    // Obtener valor de la expresión usando generarExprCodigo
    string valor = generarExprCodigo(ctx->e);
    if (hayError) return nullptr;

    codigo += "avanzaTortuga(" + valor + ");";

    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(ctx->parent)) {
        agregarComentarioLinea(instrCtx);
    }
    codigo += "\n";
    return nullptr;
}


any CodeGen::visitRetrocede_variable(LogotecGramarParser::Retrocede_variableContext *ctx) {
    if (errorReporter.hasErrors()) return nullptr;

    // Validar tipo de la expresión
    if (checkMathExpr(ctx->e) != "int") {
        error("La expresión en AVANZA no es válida o no es de tipo int.");
        return nullptr;
    }

    // Obtener valor de la expresión usando generarExprCodigo
    string valor = generarExprCodigo(ctx->e);
    if (hayError) return nullptr;

    codigo += "retrocedeTortuga(" + valor + ");";

    // Agregar comentario si existe
    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(ctx->parent)) {
        agregarComentarioLinea(instrCtx);
    }

    codigo += "\n";
    return nullptr;
}


any CodeGen::visitGira_derecha_variable(LogotecGramarParser::Gira_derecha_variableContext *ctx) {
    if (errorReporter.hasErrors()) return nullptr;

    // Validar tipo de la expresión
    if (checkMathExpr(ctx->e) != "int") {
        error("La expresión en AVANZA no es válida o no es de tipo int.");
        return nullptr;
    }

    // Obtener valor de la expresión usando generarExprCodigo
    string valor = generarExprCodigo(ctx->e);
    if (hayError) return nullptr;

    codigo += "giraDerecha(" + valor + ");";

    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(ctx->parent)) {
        agregarComentarioLinea(instrCtx);
    }

    codigo += "\n";
    return nullptr;
}


any CodeGen::visitGira_izquierda_variable(LogotecGramarParser::Gira_izquierda_variableContext *ctx) {
    if (errorReporter.hasErrors()) return nullptr;

    // Validar tipo de la expresión
    if (checkMathExpr(ctx->e) != "int") {
        error("La expresión no es válida o no es de tipo int.");
        return nullptr;
    }

    // Obtener valor de la expresión usando generarExprCodigo
    string valor = generarExprCodigo(ctx->e);
    if (hayError) return nullptr;

    codigo += "giraIzquierda(" + valor + ");";

    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(ctx->parent)) {
        agregarComentarioLinea(instrCtx);
    }

    codigo += "\n";
    return nullptr;
}


any CodeGen::visitOcultar_tortuga_variable(LogotecGramarParser::Ocultar_tortuga_variableContext *ctx) {
    if (hayError) return nullptr; // no generar nada si hay error previo
    codigo += "ocultaTortuga();";
    // Agregar comentario si existe
    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(ctx->parent)) {
        agregarComentarioLinea(instrCtx);
    }
    codigo += "\n";
    return nullptr;
}


any CodeGen::visitPonpos_variable(LogotecGramarParser::Ponpos_variableContext *ctx) {
    if (hayError) return nullptr;

        //check the type of the expressions
        // Validar tipo de la expresión
        if (checkMathExpr(ctx->expr_mat_aritm(0)) != "int" || checkMathExpr(ctx->expr_mat_aritm(1)) != "int") {
            error("La expresión en no es válida o no es de tipo int.");
            return nullptr;
        }
        string n1 = generarExprCodigo(ctx->expr_mat_aritm(0));
        string n2 = generarExprCodigo(ctx->expr_mat_aritm(1));
        codigo += "ponPos(" + n1 + "," + n2 + ");";

    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(ctx->parent)) {
        agregarComentarioLinea(instrCtx);
    }

    codigo += "\n";
    return nullptr;
}



any CodeGen::visitPonxy_variable(LogotecGramarParser::Ponxy_variableContext *ctx) {
    if (hayError) return nullptr;

    // Validar tipo de la expresión
    if (checkMathExpr(ctx->expr_mat_aritm(0)) != "int" || checkMathExpr(ctx->expr_mat_aritm(1)) != "int") {
        error("La expresión en no es válida o no es de tipo int.");
        return nullptr;
    }
    string n1 = generarExprCodigo(ctx->expr_mat_aritm(0));
    string n2 = generarExprCodigo(ctx->expr_mat_aritm(1));

    codigo += "ponXY(" + n1 + "," + n2 + ");";

    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(ctx->parent)) {
        agregarComentarioLinea(instrCtx);
    }

    codigo += "\n";
    return nullptr;
}


any CodeGen::visitPonrumbo_variable(LogotecGramarParser::Ponrumbo_variableContext *ctx) {
    if (hayError) return nullptr;

    // Validar tipo de la expresi��n
    if (checkMathExpr(ctx->expr_mat_aritm()) != "int") {
        error("La expresión en no es válida o no es de tipo int.");
        return nullptr;
    }
    string n1 = generarExprCodigo(ctx->expr_mat_aritm());

    codigo += "ponRumbo(" + n1 + ");";

    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(ctx->parent)) {
        agregarComentarioLinea(instrCtx);
    }

    codigo += "\n";
    return nullptr;
}



any CodeGen::visitComentario(LogotecGramarParser::ComentarioContext *ctx) {
    // Simplemente agrega la línea de comentario al código generado
    codigo += ctx->getText() + "\n";
    return nullptr;
}

// Función auxiliar para agregar comentario si existe
void CodeGen::agregarComentarioLinea(LogotecGramarParser::InstruccionContext *ctx) {
    if (ctx->comentario_linea()) {
        codigo += " " + ctx->comentario_linea()->getText();
    }
}



// Expresiones
any CodeGen::visitExpr(LogotecGramarParser::ExprContext *ctx) {
    // Validar tipo de la expresión si es matemática
    checkMathExpr(ctx);

    // Usar getExprType para chequeo de tipos si es necesario
    if (ctx->exp_integer()) return ctx->exp_integer()->getText();
    if (ctx->exp_logica()) return ctx->exp_logica()->getText();
    if (ctx->NUMBER()) return ctx->NUMBER()->getText();
    if (ctx->colores()) return ctx->colores()->getText();
    if (ctx->CADENA_TEXTO()) return ctx->CADENA_TEXTO()->getText();
    if (ctx->variable_nombre()) {
        auto sym = symbolTable.lookup(visitvariable_nombre(ctx->variable_nombre()));
        if (!sym) errorReporter.error(ctx->getStart()->getLine(), "Variable '" + visitvariable_nombre(ctx->variable_nombre()) + "' no declarada.");
        return visitvariable_nombre(ctx->variable_nombre());
    }
    if (ctx->exp_integer()) return ctx->exp_integer()->getText();
    return std::string();
}


// Inferir tipo de expresiones
string CodeGen::inferTipo(LogotecGramarParser::ExprContext *ctx) {
    if (ctx->exp_integer()) return "int";
    if (ctx->exp_logica()) return "bool";
    if (ctx->CADENA_TEXTO()) return "string";
    if (ctx->NUMBER()) return "int";
    if (ctx->colores()) return "Color";
    if (ctx->variable_nombre()) {
        auto it = tablaTipos.find(visitvariable_nombre(ctx->variable_nombre()));
        if (it != tablaTipos.end()) return it->second;
        else return "desconocido";
    }
    if (ctx->exp_integer()) return "int";
    return "desconocido";
}

any CodeGen::visitPonx_variable(LogotecGramarParser::Ponx_variableContext *context) {
    if (hayError) return nullptr;
    // Validar tipo de la expresión
    if (checkMathExpr(context->expr_mat_aritm()) != "int") {
        error("La expresión en no es válida o no es de tipo int.");
        return nullptr;
    }
    string n1 = generarExprCodigo(context->expr_mat_aritm());
    codigo += "ponX(" + n1 + ");";

    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(context->parent)) {
        agregarComentarioLinea(instrCtx);
    }

    codigo += "\n";
    return nullptr;
}


any CodeGen::visitPony_variable(LogotecGramarParser::Pony_variableContext *context) {
    if (hayError) return nullptr;
    // Validar tipo de la expresión
    if (checkMathExpr(context->expr_mat_aritm()) != "int") {
        error("La expresión en no es válida o no es de tipo int.");
        return nullptr;
    }
    string n1 = generarExprCodigo(context->expr_mat_aritm());
    codigo += "ponY(" + n1 + ");";

    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(context->parent)) {
        agregarComentarioLinea(instrCtx);
    }

    codigo += "\n";
    return nullptr;
}


any CodeGen::visitCentro_variable(LogotecGramarParser::Centro_variableContext *context) {
    if (hayError) return nullptr;
    codigo += "centro();";
    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(context->parent)) {
        agregarComentarioLinea(instrCtx);
    }
    codigo += "\n";
    return nullptr;
}

any CodeGen::visitSubelapiz_variable(LogotecGramarParser::Subelapiz_variableContext *context) {
    if (hayError) return nullptr;
    codigo += "subeLapiz();";
    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(context->parent)) {
        agregarComentarioLinea(instrCtx);
    }
    codigo += "\n";
    return nullptr;
}

any CodeGen::visitBajalapiz_variable(LogotecGramarParser::Bajalapiz_variableContext *context) {
    if (hayError) return nullptr;
    codigo += "bajaLapiz();";
    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(context->parent)) {
        agregarComentarioLinea(instrCtx);
    }
    codigo += "\n";
    return nullptr;
}

any CodeGen::visitEsperar_variable(LogotecGramarParser::Esperar_variableContext *context) {
    if (hayError) return nullptr;
    if (!context->exp_integer()) {
        error("La expresión en ESPERAR no es válida o no es de tipo int.");
        return nullptr;
    }
    // Validar tipo de la expresión
    if (checkMathExpr(context->exp_integer()) != "int") {
        error("La expresión en ESPERAR no es válida o no es de tipo int.");
        return nullptr;
    }
    // generar código usando el valor de la expresión usnado generarExprCodigo
    codigo += "esperar(" + generarExprCodigo(context->exp_integer()) + ");";
    if (hayError) return nullptr;

    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(context->parent)) {
        agregarComentarioLinea(instrCtx);
    }

    codigo += "\n";
    return nullptr;
}


any CodeGen::visitPoncolorlapiz_variable(LogotecGramarParser::Poncolorlapiz_variableContext *context) {
    if (hayError) return nullptr;
    string n1;
    if (context->colores_variable()->variable_nombre()) {
        std::string colorVar = visitvariable_nombre(context->colores_variable()->variable_nombre());
        auto sym = symbolTable.lookup(colorVar);
        if (!sym) {
            error("Variable de color '" + colorVar + "' no declarada.");
            return nullptr;
        }
        if (sym->type != Type::COLOR) {
            error("Variable '" + colorVar + "' no es de tipo Color.");
            return nullptr;
        }
        n1 = colorVar;
    }
    else if (context->colores_variable()->colores()) {
        n1 = "\"" + context->colores_variable()->colores()->getText() + "\""; // literal de color: poner comillas
    } else {
        error("Color no válido en PONCOLORLAPIZ.");
        return nullptr;
    }

    codigo += "ponColorLapiz(" + n1 + ");";

    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(context->parent)) {
        agregarComentarioLinea(instrCtx);
    }

    codigo += "\n";
    return nullptr;
}


any CodeGen::visitProcedimiento(LogotecGramarParser::ProcedimientoContext *ctx) {
    // Manejar scope de parámetros
    symbolTable.pushScope();

    if (hayError) return nullptr;

    // Obtener nombre del procedimiento
    std::string nombre = ctx->ID()->getText();

    // Obtener lista de parámetros
    std::vector<std::string> parametros;
    if (ctx->parametros() &&ctx->parametros()->lista_parametros()) {
        auto lista = ctx->parametros()->lista_parametros();
        for (size_t i = 0; i < lista->variable_nombre().size(); ++i) {
            parametros.push_back(visitvariable_nombre(lista->variable_nombre(i)));
        }
    }

    // Obtener tipos de los parámetros
    std::vector<std::pair<std::string, std::string>> parametrosTipados;
    for (const auto& param : parametros) {
        Type tipo = Type::INT;
        auto sym = symbolTable.lookup(param);
        if (sym) tipo = sym->type;
        parametrosTipados.emplace_back(
            (tipo == Type::INT ? "int" : tipo == Type::BOOL ? "bool" : tipo == Type::STRING ? "string" : tipo == Type::COLOR ? "desconocido" : "Color"),
            param);
    }

    // Generar cuerpo del procedimiento
    std::string cuerpo;

    // Recorrer las instrucciones opcionales
    for (size_t i = 0; i < ctx->linea_instrucciones().size(); ++i) {
        auto linea = ctx->linea_instrucciones(i);
        visit(linea);
        cuerpo += codigo;
        codigo.clear();
    }

    // Validar que el procedimiento termine con FIN SEMICOLON
    if (!ctx->FIN() || !ctx->SEMICOLON()) {
        error("Error: El procedimiento no termina correctamente con 'FIN;'.");
        hayError = true;
    }


    // Registrar el procedimiento en ProcedimientosGen
    if (!procGen.registrarProcedimiento(nombre, parametrosTipados, cuerpo)) {
        std::string tipos;
        for (size_t i = 0; i < parametrosTipados.size(); i++) {
            if (i > 0) tipos += ", ";
            tipos += parametrosTipados[i].first;
        }
        error("Error: Ya existe un procedimiento con la firma '" + nombre + "(" + tipos + ").");
        hayError = true;
    }
    // Al salir del procedimiento, cerrar el scope
    symbolTable.popScope();
    return nullptr;
}

// procedimiento_llamado
any CodeGen::visitProcedimiento_llamado(LogotecGramarParser::Procedimiento_llamadoContext *ctx) {
    if (hayError) return nullptr;

    std::string nombre = ctx->ID()->getText();
    std::vector<std::string> args;
    if (ctx->parametros_llamado() && ctx->parametros_llamado()->lista_parametros_llamado()) {
        auto lista = ctx->parametros_llamado()->lista_parametros_llamado();
        for (size_t i = 0; i < lista->expr().size(); ++i) {
            args.push_back(any_cast<std::string>(visit(lista->expr(i))));
        }
    }

    // Generar llamada al procedimiento
    codigo += nombre + "(";
    for (size_t i = 0; i < args.size(); ++i) {
        if (i > 0) codigo += ", ";
        codigo += args[i];
    }
    codigo += ");";

    // Agregar comentario si existe
    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(ctx->parent)) {
        agregarComentarioLinea(instrCtx);
    }
    codigo += "\n";
    return nullptr;
}

// Método reutilizable para verificación de expresiones matemáticas
string CodeGen::checkMathExpr(LogotecGramarParser::ExprContext* ctx) {
    // expr: CADENA_TEXTO | ID | exp_logica | exp_integer | colores
    if (ctx->NUMBER()) {
        return "int";
    }
    if (ctx->variable_nombre()) {
        std::string nombre = visitvariable_nombre(ctx->variable_nombre());
        auto it = tablaTipos.find(nombre);
        if (it == tablaTipos.end()) {
            error("Variable '" + nombre + "' no declarada.");
            return "error";
        }
        if (it->second != "int") {
            error("Variable '" + nombre + "' no es de tipo int.");
            return "error";
        }
        return "int";
    }
    if (ctx->exp_integer()) return checkMathExpr(ctx->exp_integer());
    // No se permite CADENA_TEXTO, colores ni exp_logica en contexto matemático
    error("Expresión no válida en contexto matemático: debe ser número, variable int o expresión matemática.");
    return "error";
}

// Utilidad para obtener todos los hijos exprcion_mat_aritm de un contexto
template<typename T>
static std::vector<antlr4::ParserRuleContext*> getExprcionMatAritmChildren(T* ctx) {
    std::vector<antlr4::ParserRuleContext*> result;
    for (auto child : ctx->children) {
        if (auto aritm = dynamic_cast<LogotecGramarParser::Expr_mat_aritmContext*>(child)) {
            result.push_back(aritm);
        }
    }
    return result;
}

// checkMathExpr para exprcion_mat_aritm
std::string CodeGen::checkMathExpr(LogotecGramarParser::Expr_mat_aritmContext* ctx) {
    if (ctx->exp_matematica()) return checkMathExpr(ctx->exp_matematica());
    if (ctx->exp_aritmetica()) return checkMathExpr(ctx->exp_aritmetica());
    error("exprcion_mat_aritm inválido en contexto matemático.");
    return "error";
}

// Modifica los métodos de checkMathExpr para usar exprcion_mat_aritm:

std::string CodeGen::checkMathExpr(LogotecGramarParser::Diferencia_exprContext* ctx) {
    // diferencia_expr: DIFERENCIA exprcion_mat_aritm (exprcion_mat_aritm)+
    for (auto em : ctx->expr_mat_aritm()) {
        if (checkMathExpr(em) != "int") return "error";
    }
    return "int";
}

std::string CodeGen::checkMathExpr(LogotecGramarParser::Producto_exprContext* ctx) {
    // producto_expr: PRODUCTO exprcion_mat_aritm (exprcion_mat_aritm)+
    for (auto em : ctx->expr_mat_aritm()) {
        if (checkMathExpr(em) != "int") return "error";
    }
    return "int";
}

std::string CodeGen::checkMathExpr(LogotecGramarParser::Suma_exprContext* ctx) {
    // suma_expr: SUMA exprcion_mat_aritm (exprcion_mat_aritm)+
    for (auto em : ctx->expr_mat_aritm()) {
        if (checkMathExpr(em) != "int") return "error";
    }
    return "int";
}

std::string CodeGen::checkMathExpr(LogotecGramarParser::Division_exprContext* ctx) {
    // division_expr: DIVISION exprcion_mat_aritm (exprcion_mat_aritm)+
    for (auto em : ctx->expr_mat_aritm()) {
        if (checkMathExpr(em) != "int") return "error";
    }
    return "int";
}

std::string CodeGen::checkMathExpr(LogotecGramarParser::Potencia_exprContext* ctx) {
    // potencia_expr: POTENCIA exprcion_mat_aritm (exprcion_mat_aritm)+
    for (auto em : ctx->expr_mat_aritm()) {
        if (checkMathExpr(em) != "int") return "error";
    }
    return "int";
}

std::string CodeGen::checkMathExpr(LogotecGramarParser::Azar_exprContext* ctx) {
    // azar_expr: AZAR exprcion_mat_aritm
    if (checkMathExpr(ctx->expr_mat_aritm()) != "int") return "error";
    return "int";
}

// generarExprCodigo para exprcion_mat_aritm
std::string CodeGen::generarExprCodigo(LogotecGramarParser::Expr_mat_aritmContext* ctx) {
    if (ctx->exp_matematica()) return generarExprCodigo(ctx->exp_matematica());
    if (ctx->exp_aritmetica()) return generarExprCodigo(ctx->exp_aritmetica());
    return ctx->getText();
}

// Modifica los métodos de generarExprCodigo para usar exprcion_mat_aritm:

std::string CodeGen::generarExprCodigo(LogotecGramarParser::Diferencia_exprContext* ctx) {
    if (!ctx) return "";
    std::string result = "DIFERENCIA(";
    auto exprs = ctx->expr_mat_aritm();
    for (size_t i = 0; i < exprs.size(); ++i) {
        if (i > 0) result += ", ";
        result += generarExprCodigo(exprs[i]);
    }
    result += ")";
    return result;
}

std::string CodeGen::generarExprCodigo(LogotecGramarParser::Producto_exprContext* ctx) {
    if (!ctx) return "";
    std::string result = "PRODUCTO({";
    auto exprs = ctx->expr_mat_aritm();
    for (size_t i = 0; i < exprs.size(); ++i) {
        if (i > 0) result += ", ";
        result += generarExprCodigo(exprs[i]);
    }
    result += "})";
    return result;
}


std::string CodeGen::generarExprCodigo(LogotecGramarParser::Suma_exprContext* ctx) {
    if (!ctx) return "";
    std::string result = "SUMA(";
    auto exprs = ctx->expr_mat_aritm();
    for (size_t i = 0; i < exprs.size(); ++i) {
        if (i > 0) result += ", ";
        result += generarExprCodigo(exprs[i]);
    }
    result += ")";
    return result;
}

std::string CodeGen::generarExprCodigo(LogotecGramarParser::Division_exprContext* ctx) {
    if (!ctx) return "";
    std::string result = "DIVISION(";
    auto exprs = ctx->expr_mat_aritm();
    for (size_t i = 0; i < exprs.size(); ++i) {
        if (i > 0) result += ", ";
        result += generarExprCodigo(exprs[i]);
    }
    result += ")";
    return result;
}

std::string CodeGen::generarExprCodigo(LogotecGramarParser::Potencia_exprContext* ctx) {
    if (!ctx) return "";
    std::string result = "POTENCIA(";
    auto exprs = ctx->expr_mat_aritm();
    for (size_t i = 0; i < exprs.size(); ++i) {
        if (i > 0) result += ", ";
        result += generarExprCodigo(exprs[i]);
    }
    result += ")";
    return result;
}

std::string CodeGen::generarExprCodigo(LogotecGramarParser::Azar_exprContext* ctx) {
    if (!ctx) return "";
    return "AZAR(" + generarExprCodigo(ctx->expr_mat_aritm()) + ")";
}

// Implementación faltante para checkMathExpr(Exp_integerContext*)
std::string CodeGen::checkMathExpr(LogotecGramarParser::Exp_integerContext* ctx) {
    if (ctx->exp_matematica()) return checkMathExpr(ctx->exp_matematica());
    if (ctx->exp_aritmetica()) return checkMathExpr(ctx->exp_aritmetica());
    return "error";
}

// Implementación faltante para checkMathExpr(Exp_matematicaContext*)
std::string CodeGen::checkMathExpr(LogotecGramarParser::Exp_matematicaContext* ctx) {
    if (ctx->diferencia_expr()) return checkMathExpr(ctx->diferencia_expr());
    if (ctx->azar_expr()) return checkMathExpr(ctx->azar_expr());
    if (ctx->producto_expr()) return checkMathExpr(ctx->producto_expr());
    if (ctx->potencia_expr()) return checkMathExpr(ctx->potencia_expr());
    if (ctx->division_expr()) return checkMathExpr(ctx->division_expr());
    if (ctx->suma_expr()) return checkMathExpr(ctx->suma_expr());
    if (ctx->variable_nombre()) {
        std::string nombre = visitvariable_nombre(ctx->variable_nombre());
        auto it = tablaTipos.find(nombre);
        if (it == tablaTipos.end()) {
            error("Variable '" + nombre + "' no declarada.");
            return "error";
        }
        if (it->second != "int") {
            error("Variable '" + nombre + "' no es de tipo int.");
            return "error";
        }
        return "int";
    }
    if (ctx->NUMBER()) return "int";
    return "error";
}

// Implementación faltante para checkMathExpr(Exp_aritmeticaContext*)
std::string CodeGen::checkMathExpr(LogotecGramarParser::Exp_aritmeticaContext* ctx) {
    // exp_aritmetica: exp_matematica (operador exp_matematica)* operador exp_matematica ;
    if (ctx->exp_matematica().empty()) return "error";
    for (auto em : ctx->exp_matematica()) {
        if (checkMathExpr(em) != "int") return "error";
    }
    return "int";
}


void replaceUnicode(std::string& str, const std::string& from, const std::string& to) {
    size_t pos = 0;
    while ((pos = str.find(from, pos)) != std::string::npos) {
        str.replace(pos, from.length(), to);
        pos += to.length();
    }
}

// Implementación faltante para generarExprCodigo(ExprContext*)
std::string CodeGen::generarExprCodigo(LogotecGramarParser::ExprContext* ctx) {
    if (ctx->NUMBER()) return ctx->NUMBER()->getText();
    if (ctx->variable_nombre()) return visitvariable_nombre(ctx->variable_nombre());
    if (ctx->exp_integer()) return generarExprCodigo(ctx->exp_integer());
    if (ctx->CADENA_TEXTO()) {
        std::string texto = ctx->CADENA_TEXTO()->getText();
        replaceUnicode(texto, "\u201C", "\"");
        replaceUnicode(texto, "\u201D", "\"");
        return texto;
    }
    if (ctx->colores()) return ctx->colores()->getText();
    if (ctx->exp_logica()) {
        std::string valorLogico = ctx->exp_logica()->getText();

        // Convertir a minúsculas para comparación
        std::transform(valorLogico.begin(), valorLogico.end(), valorLogico.begin(), ::tolower);

        if (valorLogico == "true" || valorLogico == "false") {
            return valorLogico == "true" ? "true" : "false";
        }
    }
    return "";
}

std::string CodeGen::generarExprCodigo(LogotecGramarParser::Rumbo_getContext* ctx) {
    return "getRumbo()";
}

// Implementación faltante para generarExprCodigo(Exp_integerContext*)
std::string CodeGen::generarExprCodigo(LogotecGramarParser::Exp_integerContext* ctx) {
    if (ctx->exp_matematica()) return generarExprCodigo(ctx->exp_matematica());
    if (ctx->exp_aritmetica()) return generarExprCodigo(ctx->exp_aritmetica());
    return "";
}

// Implementación faltante para generarExprCodigo(Exp_matematicaContext*)
std::string CodeGen::generarExprCodigo(LogotecGramarParser::Exp_matematicaContext* ctx) {
    if (ctx->diferencia_expr()) return generarExprCodigo(ctx->diferencia_expr());
    if (ctx->azar_expr()) return generarExprCodigo(ctx->azar_expr());
    if (ctx->producto_expr()) return generarExprCodigo(ctx->producto_expr());
    if (ctx->potencia_expr()) return generarExprCodigo(ctx->potencia_expr());
    if (ctx->division_expr()) return generarExprCodigo(ctx->division_expr());
    if (ctx->suma_expr()) return generarExprCodigo(ctx->suma_expr());
    if (ctx->variable_nombre()) return visitvariable_nombre(ctx->variable_nombre());
    if (ctx->NUMBER()) return ctx->NUMBER()->getText();
    return "";
}

// Implementación faltante para generarExprCodigo(Exp_aritmeticaContext*)
std::string CodeGen::generarExprCodigo(LogotecGramarParser::Exp_aritmeticaContext* ctx) {
    // exp_aritmetica: exp_matematica (operador exp_matematica)* operador exp_matematica ;
    std::string result;
    const auto& ems = ctx->exp_matematica();
    const auto& ops = ctx->operador();
    size_t n = ems.size();
    for (size_t i = 0; i < n; ++i) {
        if (i > 0 && i-1 < ops.size()) {
            result += " " + ops[i-1]->getText() + " ";
        }
        result += generarExprCodigo(ems[i]);
    }
    // El último operador y exp_matematica
    if (ops.size() == n) {
        result += " " + ops.back()->getText() + " " + generarExprCodigo(ems.back());
    }
    return result;
}


//geberar codigo para exoresuibes logicas
std::string CodeGen::generarExprCodigo(LogotecGramarParser::Exp_logicaContext* ctx) {
    if (ctx->exp_logicas_expr()) return generarExprCodigo(ctx->exp_logicas_expr());
    if (ctx->exp_logica_operaciones()) return generarExprCodigo(ctx->exp_logica_operaciones());
    return "";
}

std::string CodeGen::generarExprCodigo(LogotecGramarParser::OperacionLogicaSimpleContext* ctx) {
    string exp1 = generarExprCodigo(ctx->exp_logicas_expr(0));
    string exp2 = generarExprCodigo(ctx->exp_logicas_expr(1));
    string op = ctx->operador_logico()->getText();

    // Verificar si el operador es '=' y cambiarlo por '=='
    if (op == "=") {
        op = "==";
    }

    return exp1 + " " + op + " " + exp2;
}

string CodeGen::generarExprCodigo(LogotecGramarParser::OperacionLogicaComplejaContext* ctx) {
    //for each exp_logicas_expr
    // for each andor
    // return (exp1 andor exp2 andor exp3 ...)
    if (ctx->exp_logicas_expr().empty()) return "";
    string result;
    for (size_t i = 0; i < ctx->exp_logicas_expr().size(); ++i) {
        if (i > 0 && i-1 < ctx->andor().size()) {
            result += " " + ctx->andor(i-1)->getText() + " ";
        }
        result += generarExprCodigo(ctx->exp_logicas_expr(i));
    }
    return result;

}

std::string CodeGen::generarExprCodigo(LogotecGramarParser::Exp_logicas_exprContext* ctx) {
    if (auto negacionCtx = dynamic_cast<LogotecGramarParser::NegacionContext*>(ctx)) {
        return "!" + generarExprCodigo(negacionCtx->exp_logicas_expr());
    }
    if (auto parentesisCtx = dynamic_cast<LogotecGramarParser::ExpLogicaParentesisContext*>(ctx)) {
        string temp;

        temp += generarExprCodigo(parentesisCtx->exp_logicas_expr());

        return "(" + temp + ")";
    }
    if (auto opSimpleCtx = dynamic_cast<LogotecGramarParser::OperacionLogicaSimpleContext*>(ctx)) {
       return generarExprCodigo(opSimpleCtx);
    }
    if (auto opComplejaCtx = dynamic_cast<LogotecGramarParser::OperacionLogicaComplejaContext*>(ctx)) {
        return generarExprCodigo(opComplejaCtx);
    }
    if (auto simpleCtx = dynamic_cast<LogotecGramarParser::ExpLogicaSimpleContext*>(ctx)) {
        return generarExprCodigo(simpleCtx->exp_logica_operaciones());
    }
    return "";
}

std::string CodeGen::generarExprCodigo(LogotecGramarParser::Exp_logica_operacionesContext* ctx) {
    if (ctx->iguales_variable()) return generarExprCodigo(ctx->iguales_variable());
    if (ctx->y_variable()) return generarExprCodigo(ctx->y_variable());
    if (ctx->o_variable()) return generarExprCodigo(ctx->o_variable());
    if (ctx->mayorque_variable()) return generarExprCodigo(ctx->mayorque_variable());
    if (ctx->menorque_variable()) return generarExprCodigo(ctx->menorque_variable());
    if (ctx->logico()) return generarExprCodigo(ctx->logico());
    if (ctx->variable_nombre()) return visitvariable_nombre(ctx->variable_nombre());
    if (ctx->NUMBER()) return ctx->NUMBER()->getText();
    if (ctx->CADENA_TEXTO()) return ctx->CADENA_TEXTO()->getText();

    error("Expresión lógica inválida.");
    return "error";
}

std::string CodeGen::generarExprCodigo(LogotecGramarParser::Iguales_variableContext* ctx) {
    if (ctx->exp_logica(0) && ctx->exp_logica(1)) {
        std::string left = generarExprCodigo(ctx->exp_logica(0));
        std::string right = generarExprCodigo(ctx->exp_logica(1));
        return left + " == " + right;
    }
    return "";
}

std::string CodeGen::generarExprCodigo(LogotecGramarParser::Y_variableContext* ctx) {
    if (ctx->exp_logica(0) && ctx->exp_logica(1)) {
        std::string left = generarExprCodigo(ctx->exp_logica(0));
        std::string right = generarExprCodigo(ctx->exp_logica(1));
        return left + " && " + right;
    }
    return "";
}

std::string CodeGen::generarExprCodigo(LogotecGramarParser::O_variableContext* ctx) {
    if (ctx->exp_logica(0) && ctx->exp_logica(1)) {
        std::string left = generarExprCodigo(ctx->exp_logica(0));
        std::string right = generarExprCodigo(ctx->exp_logica(1));
        return left + " || " + right;
    }
    return "";
}
std::string CodeGen::generarExprCodigo(LogotecGramarParser::Mayorque_variableContext* ctx) {
    if (ctx->expr_mat_aritm(0) && ctx->expr_mat_aritm(1)) {
        std::string left = generarExprCodigo(ctx->expr_mat_aritm(0));
        std::string right = generarExprCodigo(ctx->expr_mat_aritm(1));
        return left + " > " + right;
    }
    return "";
}
std::string CodeGen::generarExprCodigo(LogotecGramarParser::Menorque_variableContext* ctx) {
    if (ctx->expr_mat_aritm(0) && ctx->expr_mat_aritm(1)) {
        std::string left = generarExprCodigo(ctx->expr_mat_aritm(0));
        std::string right = generarExprCodigo(ctx->expr_mat_aritm(1));
        return left + " < " + right;
    }
    return "";
}
std::string CodeGen::generarExprCodigo(LogotecGramarParser::LogicoContext* ctx) {
    if (ctx->getText() == "True") return "true";
    if (ctx->getText() == "False") return "false";
    return "";
}

// Ejecuta [instrucciones*]
any CodeGen::visitEjecuta_variable(LogotecGramarParser::Ejecuta_variableContext *ctx) {
    if (hayError) return nullptr;

    // Abrir bloque de código para Ejecuta
    codigo += "{\n";
    // Recorrer cada instruccion dentro de EJECUTA
    for (auto instr : ctx->instruccion()) {
        visit(instr);
        // El código generado por cada instrucción ya se agrega a 'codigo' por los visit
    }
    codigo += "}\n";
    return nullptr;
}

//repite n [instrucciones*]
any CodeGen::visitRepite_variable(LogotecGramarParser::Repite_variableContext *ctx) {
    if (hayError) return nullptr;

    // Validar tipo de la expresión
    if (checkMathExpr(ctx->e) != "int") {
        error("La expresión en REPITE no es válida o no es de tipo int.");
        return nullptr;
    }

    // Obtener valor de la expresión usando generarExprCodigo
    string valor = generarExprCodigo(ctx->e);
    if (hayError) return nullptr;

    // Abrir bloque de código para Repite
    codigo += "for(int _i=0; _i<" + valor + "; _i++) {\n";
    // Recorrer cada instruccion dentro de REPITE
    for (auto instr : ctx->instruccion()) {
        visit(instr);
        // El código generado por cada instrucción ya se agrega a 'codigo' por los visit
    }
    codigo += "}\n";
    return nullptr;
}



std::string CodeGen::checkLogicExpr(LogotecGramarParser::NegacionContext* ctx) {
    auto em = ctx->exp_logicas_expr();
    if (checkLogicExpr(em) != "bool") return "error";
    return "bool";
}

string CodeGen::checkLogicExpr(LogotecGramarParser::ExpLogicaSimpleContext *ctx) {
    auto em = ctx->exp_logica_operaciones();
    if (checkLogicExpr(em) != "bool") return "error";
    return "bool";

}

string CodeGen::checkLogicExpr(LogotecGramarParser::ExpLogicaParentesisContext *ctx) {
    //exp_logicas_expr* are many
    auto em =  ctx->exp_logicas_expr();
    if (checkLogicExpr(em) != "bool") return "error";
    return "bool";
}

//checkLogicExpr(opSimpleCtx);
// exp_logicas_expr operador_logico exp_logicas_expr   #OperacionLogicaSimple
// in this case both exp_logicas_expr can be any expression that returns bool
// this expresion is valid 5 > 3 and True
string CodeGen::checkLogicExpr(LogotecGramarParser::OperacionLogicaSimpleContext* ctx) {
    // Should have exactly two operands
    if (ctx->exp_logicas_expr().size() != 2) {
        error("OperacionLogicaSimple debe tener exactamente dos operandos.");
        return "error";
    }
    std::string tipo1 = checkLogicExpr(ctx->exp_logicas_expr(0));
    std::string tipo2 = checkLogicExpr(ctx->exp_logicas_expr(1));
    if (tipo1 == "error" || tipo2 == "error") return "error";
    // Both must be bool for logical operators
    if (tipo1 != tipo2) {
        error("Los operandos de la operación deben ser del mismo tipo");
        error( "Tipos encontrados: '" + tipo1 + "' y '" + tipo2 + "'");
        return "error";
    }
    return "bool";
}

// checkLogicExpr(opComplejaCtx);
// exp_logicas_expr ((AND | OR) exp_logicas_expr)* ((AND | OR) exp_logicas_expr)
// any exp_logicas_expr can be any expression that returns bool
// at least asume it will have two exp_logicas_expr asume that, but can have more
string CodeGen::checkLogicExpr(LogotecGramarParser::OperacionLogicaComplejaContext* ctx) {
    auto exprs = ctx->exp_logicas_expr();
    if (exprs.size() < 2) {
        error("OperacionLogicaCompleja debe tener al menos dos operandos.");
        return "error";
    }
    for (auto em : exprs) {
        std::string tipo = checkLogicExpr(em);
        if (tipo == "error") return "error";
        if (tipo != "bool") {
            error("Los operandos de la operación deben ser de tipo bool.");
            return "error";
        }
    }
    return "bool";
}


std::string CodeGen::checkLogicExpr(LogotecGramarParser::Exp_logicas_exprContext *ctx) {
    if (auto negacionCtx = dynamic_cast<LogotecGramarParser::NegacionContext*>(ctx)) {
        checkLogicExpr(negacionCtx);
    }
    else if (auto parentesisCtx = dynamic_cast<LogotecGramarParser::ExpLogicaParentesisContext*>(ctx)) {
        checkLogicExpr(parentesisCtx);
    }
    else if (auto opSimpleCtx = dynamic_cast<LogotecGramarParser::OperacionLogicaSimpleContext*>(ctx)) {
        checkLogicExpr(opSimpleCtx);
    }
    else if (auto opComplejaCtx = dynamic_cast<LogotecGramarParser::OperacionLogicaComplejaContext*>(ctx)) {
        checkLogicExpr(opComplejaCtx);
    }
    else if (auto simpleCtx = dynamic_cast<LogotecGramarParser::ExpLogicaSimpleContext*>(ctx)) {
        checkLogicExpr(simpleCtx);
    }
    return "bool";
}



std::string CodeGen::checkLogicExpr(LogotecGramarParser::Exp_logicaContext* ctx) {
    if (ctx->exp_logicas_expr()) return checkLogicExpr(ctx->exp_logicas_expr());
    if (ctx->exp_logica_operaciones()) return checkLogicExpr(ctx->exp_logica_operaciones());
    error("exprcion_mat_aritm inválido en contexto matemático.");
    return "error";
}



std::string CodeGen::checkLogicExpr(LogotecGramarParser::Exp_logica_operacionesContext* ctx) {
    if (ctx->iguales_variable()) return checkLogicExpr(ctx->iguales_variable());
    if (ctx->y_variable()) return checkLogicExpr(ctx->y_variable());
    if (ctx->o_variable()) return checkLogicExpr(ctx->o_variable());
    if (ctx->mayorque_variable()) return checkLogicExpr(ctx->mayorque_variable());
    if (ctx->menorque_variable()) return checkLogicExpr(ctx->menorque_variable());
    if (ctx->logico()) return checkLogicExpr(ctx->logico());
    if (ctx->variable_nombre()) {
       //check the id type, any type is valid not only bool
        std::string nombre = visitvariable_nombre(ctx->variable_nombre());
        auto it = tablaTipos.find(nombre);
        if (it == tablaTipos.end()) {
            error("Variable '" + nombre + "' no declarada.");
            return "error";
        }
        // Any type is valid in logical context, but we will return its type
        return it->second;
    }
    if (ctx->NUMBER()) {
        // Los números en contexto lógico se consideran válidos (0 = false, cualquier otro = true)
        return "int";
    }
    if (ctx->CADENA_TEXTO()) {
        return "String";
    }

    error("Expresión lógica inválida.");
    return "error";
}

// Implementación faltante para checkLogicExpr(LogicoContext*)
std::string CodeGen::checkLogicExpr(LogotecGramarParser::LogicoContext* ctx) {
    // Asume que LogicoContext representa un valor booleano literal (True/False)
    std::string val = ctx->getText();
    if (val == "True" || val == "False") {
        return "bool";
    }
    error("Valor lógico inválido: " + val);
    return "error";
}

std::string CodeGen::checkLogicExpr(LogotecGramarParser::Iguales_variableContext* ctx) {
    if (ctx->exp_logica(0) && ctx->exp_logica(1)) {
        std::string tipo1 = checkLogicExpr(ctx->exp_logica(0));
        std::string tipo2 = checkLogicExpr(ctx->exp_logica(1));
        if (tipo1 == "error" || tipo2 == "error") return "error";

        // Para igualdad, los tipos deben ser compatibles
        if (tipo1 != tipo2) {
            error("Error de tipos en comparación de igualdad: '" + tipo1 + "' y '" + tipo2 + "' no son compatibles.");
            return "error";
        }
        // La comparación siempre retorna bool
        return "bool";
    }
    return "error";
}

std::string CodeGen::checkLogicExpr(LogotecGramarParser::Y_variableContext* ctx) {
    if (ctx->exp_logica(0) && ctx->exp_logica(1)) {
        // Para Y lógico, ambos operandos deben evaluar a bool
        // Pero pueden ser expresiones que retornen bool, no necesariamente variables bool
        std::string tipo1 = checkLogicExpr(ctx->exp_logica(0));
        std::string tipo2 = checkLogicExpr(ctx->exp_logica(1));

        if (tipo1 == "error" || tipo2 == "error") return "error";
        if (tipo1 != "bool" || tipo2 != "bool") {
            error("Los operandos de la operación Y deben ser de tipo bool.");
            return "error";
        }

        return "bool";
    }
    return "error";
}

std::string CodeGen::checkLogicExpr(LogotecGramarParser::O_variableContext* ctx) {
    if (ctx->exp_logica(0) && ctx->exp_logica(1)) {
        // Para Y lógico, ambos operandos deben evaluar a bool
        // Pero pueden ser expresiones que retornen bool, no necesariamente variables bool
        std::string tipo1 = checkLogicExpr(ctx->exp_logica(0));
        std::string tipo2 = checkLogicExpr(ctx->exp_logica(1));

        if (tipo1 == "error" || tipo2 == "error") return "error";
        if (tipo1 != "bool" || tipo2 != "bool") {
            error("Los operandos de la operación Y deben ser de tipo bool.");
            return "error";
        }

        return "bool";
    }
    return "error";
}

std::string CodeGen::checkLogicExpr(LogotecGramarParser::Menorque_variableContext* ctx) {
    if (ctx->expr_mat_aritm(0) && ctx->expr_mat_aritm(1)) {
        std::string tipo1 = checkMathExpr(ctx->expr_mat_aritm(0));
        std::string tipo2 = checkMathExpr(ctx->expr_mat_aritm(1));
        if (tipo1 == "error" || tipo2 == "error") return "error";

        // Para comparaciones relacionales, ambos deben ser numéricos o del mismo tipo
        if (tipo1 == "int" && tipo2 == "int") {
            return "bool";
        } else if (tipo1 == tipo2) {
            // Permitir comparación de otros tipos si son iguales
            return "bool";
        } else {
            error("Error de tipos en operador menor que: los operandos deben ser del mismo tipo.");
            return "error";
        }
    }
    return "error";
}

std::string CodeGen::checkLogicExpr(LogotecGramarParser::Mayorque_variableContext* ctx) {
    if (ctx->expr_mat_aritm(0) && ctx->expr_mat_aritm(1)) {
        std::string tipo1 = checkMathExpr(ctx->expr_mat_aritm(0));
        std::string tipo2 = checkMathExpr(ctx->expr_mat_aritm(1));
        if (tipo1 == "error" || tipo2 == "error") return "error";

        // Para comparaciones relacionales, ambos deben ser numéricos o del mismo tipo
        if (tipo1 == "int" && tipo2 == "int") {
            return "bool";
        } else if (tipo1 == tipo2) {
            // Permitir comparación de otros tipos si son iguales
            return "bool";
        } else {
            error("Error de tipos en operador mayor que: los operandos deben ser del mismo tipo.");
            return "error";
        }
    }
    return "error";
}

// visit Si_variable
any CodeGen::visitSi_variable(LogotecGramarParser::Si_variableContext *ctx) {
    if (hayError) return nullptr;

    // Validar tipo de la expresión
    if (checkLogicExpr(ctx->exp_logica()) != "bool") {
        error("La expresión en SI no es válida o no es de tipo bool.");
        return nullptr;
    }

    // Obtener valor de la expresión usando generarExprCodigo
    string valor = generarExprCodigo(ctx->exp_logica());
    if (hayError) return nullptr;

    // Abrir bloque de código para Si
    codigo += "if (" + valor + ") {\n";
    // Recorrer cada instruccion dentro de SI
    for (auto instr : ctx->instruccion()) {
        visit(instr);
        // El código generado por cada instrucción ya se agrega a 'codigo' por los visit
    }
    codigo += "}\n";

    return nullptr;
}

//implementar visit Si_no_variable
//  si_sino_variable : SI '(' exp_logica ')' '[' instruccion* ']' '[' instruccion* ']' ;

any CodeGen::visitSi_sino_variable(LogotecGramarParser::Si_sino_variableContext *ctx){
    if (hayError) return nullptr;

    // Validar la expresión lógica del si_variable interno
    auto siCtx = ctx->si_variable();
    if (checkLogicExpr(siCtx->exp_logica()) != "bool") {
        error("La expresión en SI no es válida o no es de tipo bool.");
        return nullptr;
    }

    string valor = generarExprCodigo(siCtx->exp_logica());
    if (hayError) return nullptr;

    // Bloque SI
    codigo += "if (" + valor + ") {\n";
    for (auto instr : siCtx->instruccion()) {
        visit(instr);
    }
    codigo += "} else {\n";

    // Bloque SINO
    for (auto instr : ctx->instruccion()) {
        visit(instr);
    }

    codigo += "}\n";
    return nullptr;
}


// visit haz_hasta_variable
//  haz_hasta_variable : HAZ_HASTA '[' instruccion* ']' '(' exp_logica ')' ;
any CodeGen::visitHaz_hasta_variable(LogotecGramarParser::Haz_hasta_variableContext *ctx) {
    if (hayError) return nullptr;

    // Validar tipo de la expresión lógica
    if (checkLogicExpr(ctx->exp_logica()) != "bool") {
        error("La expresión en HAZ.HASTA no es válida o no es de tipo bool.");
        return nullptr;
    }

    // Generar código para la condición
    std::string condicion = generarExprCodigo(ctx->exp_logica());
    if (hayError) return nullptr;

    // Abrir bloque do-while
    codigo += "do {\n";
    for (auto instr : ctx->instruccion()) {
        visit(instr);
        // El código generado por cada instrucción ya se agrega a 'codigo' por los visit
    }
    codigo += "} while (!(" + condicion + "));\n";

    return nullptr;
}

any CodeGen::visitHasta_variable(LogotecGramarParser::Hasta_variableContext *ctx) {
    if (hayError) return nullptr;

    // Validar tipo de la expresión lógica
    if (checkLogicExpr(ctx->exp_logica()) != "bool") {
        error("La expresión en HASTA no es válida o no es de tipo bool.");
        return nullptr;
    }

    // Generar código para la condición
    std::string condicion = generarExprCodigo(ctx->exp_logica());
    if (hayError) return nullptr;

    // Abrir bloque while (se ejecuta mientras la condición sea falsa)
    codigo += "while (!(" + condicion + ")) {\n";

    // Generar las instrucciones dentro del bloque
    for (auto instr : ctx->instruccion()) {
        visit(instr);
        // Cada instrucción agrega su código a 'codigo'
    }

    // Cerrar el bloque
    codigo += "}\n";

    return nullptr;
}


any CodeGen::visitHaz_mientras_variable(LogotecGramarParser::Haz_mientras_variableContext *ctx) {
    if (hayError) return nullptr;

    // Validar tipo de la expresión lógica
    if (checkLogicExpr(ctx->exp_logica()) != "bool") {
        error("La expresión en HAZ.MIENTRAS no es válida o no es de tipo bool.");
        return nullptr;
    }

    // Generar código para la condición
    std::string condicion = generarExprCodigo(ctx->exp_logica());
    if (hayError) return nullptr;

    // Abrir bloque do-while
    codigo += "do {\n";

    // Generar las instrucciones dentro del bloque
    for (auto instr : ctx->instruccion()) {
        visit(instr);
        // Cada instrucción agrega su código a 'codigo'
    }

    // Cerrar el bloque do-while
    codigo += "} while (" + condicion + ");\n";

    return nullptr;
}


any CodeGen::visitMientras_variable(LogotecGramarParser::Mientras_variableContext *ctx) {
    if (hayError) return nullptr;

    // Validar tipo de la expresión lógica
    if (checkLogicExpr(ctx->exp_logica()) != "bool") {
        error("La expresión en MIENTRAS no es válida o no es de tipo bool.");
        return nullptr;
    }

    // Generar código para la condición
    std::string condicion = generarExprCodigo(ctx->exp_logica());
    if (hayError) return nullptr;

    // Abrir bloque while
    codigo += "while (" + condicion + ") {\n";

    // Generar las instrucciones dentro del bloque
    for (auto instr : ctx->instruccion()) {
        visit(instr);
        // Cada instrucción agrega su código a 'codigo'
    }

    // Cerrar el bloque
    codigo += "}\n";

    return nullptr;
}

any CodeGen::visitMuestra(LogotecGramarParser::MuestraContext *ctx) {
    if (hayError) return nullptr;

    std::string valor;

    if (ctx->expr()) {
        // Si es una expresión normal
        valor = generarExprCodigo(ctx->expr());
    } else if (ctx->rumbo_get()) {
        // Si es un RUMBO
        valor = generarExprCodigo(ctx->rumbo_get());
    }

    if (hayError) return nullptr;

    // Generar el cout
    codigo += "std::cout << " + valor + " << std::endl;\n";

    return nullptr;
}