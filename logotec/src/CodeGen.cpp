//
// Created by amv22 on 27/9/2025.
//

#include "CodeGen.h"
#include "ProcedimientosGen.h"
#include "SymbolTable.h"
#include "TypeChecker.cpp"
#include <algorithm>
#include <cctype>

// Instancia global/local de ProcedimientosGen
procedimientos::ProcedimientosGen procGen;
// Instancia global/local de SymbolTable y ErrorReporter
SymbolTable symbolTable;
ErrorReporter errorReporter;

// Recorre el programa
any CodeGen::visitPrograma(LogotecGramarParser::ProgramaContext *ctx) {
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
    codigo = procGen.generarCodigoProcedimientos() + "\n" + "int main() {\n" + codigoMain + "}\n";
    return nullptr;
}

// Haz: crear variable
any CodeGen::visitHaz_variable(LogotecGramarParser::Haz_variableContext *ctx) {
    if (errorReporter.hasErrors()) return nullptr;

    std::string nombre = ctx->ID()->getText();
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

// INIC: asignación
any CodeGen::visitInic_variable(LogotecGramarParser::Inic_variableContext *ctx) {
    if (errorReporter.hasErrors()) return nullptr;

    std::string nombre = ctx->ID()->getText();
    auto sym = symbolTable.lookup(nombre);
    if (!sym) {
        errorReporter.error(ctx->getStart()->getLine(), "Variable '" + nombre + "' no declarada antes de asignar.");
        return nullptr;
    }
    // Inferir tipo de la expresión
    Type tipoNuevo = getExprType(ctx->e, symbolTable);
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

    std::string n1 = ctx->ID()->getText();
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

    // Agregar comentario si existe
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

    // Agregar comentario si existe
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

    // Agregar comentario si existe
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
    if (hayError) return nullptr; // no generar nada si hay error previo

        //check the type of the expressions
        // Validar tipo de la expresión
        if (checkMathExpr(ctx->expr_mat_aritm(0)) != "int" || checkMathExpr(ctx->expr_mat_aritm(1)) != "int") {
            error("La expresión en no es válida o no es de tipo int.");
            return nullptr;
        }
        string n1 = generarExprCodigo(ctx->expr_mat_aritm(0));
        string n2 = generarExprCodigo(ctx->expr_mat_aritm(1));
        codigo += "ponPos(" + n1 + "," + n2 + ");";

        // comentario si existe
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
    if (ctx->CADENA_TEXTO()) return ctx->CADENA_TEXTO()->getText();
    if (ctx->ID()) {
        auto sym = symbolTable.lookup(ctx->ID()->getText());
        if (!sym) errorReporter.error(ctx->getStart()->getLine(), "Variable '" + ctx->ID()->getText() + "' no declarada.");
        return ctx->ID()->getText();
    }
    if (ctx->exp_integer()) return ctx->exp_integer()->getText();
    return std::string();
}


// Inferir tipo de expresiones
string CodeGen::inferTipo(LogotecGramarParser::ExprContext *ctx) {
    if (ctx->exp_integer()) return "int";
    if (ctx->exp_logica()) return "bool";
    if (ctx->CADENA_TEXTO()) return "string";
    if (ctx->ID()) {
        auto it = tablaTipos.find(ctx->ID()->getText());
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
    //check that the color is valid color or variable of type color
    string n1;
    if (context->colores_variable()->ID()) {
        std::string colorVar = context->colores_variable()->ID()->getText();
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
        n1 = context->colores_variable()->colores()->getText();
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
    if (ctx->parametros()->lista_parametros()) {
        auto lista = ctx->parametros()->lista_parametros();
        for (size_t i = 0; i < lista->ID().size(); ++i) {
            parametros.push_back(lista->ID(i)->getText());
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
    for (size_t i = 0; i < ctx->children.size(); ++i) {
        auto child = ctx->children[i];
        if (auto linea = dynamic_cast<LogotecGramarParser::Linea_instruccionesContext*>(child)) {
            visit(linea);
            cuerpo += codigo;
            codigo.clear();
        }
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
    if (ctx->parametros_llamado()->lista_parametros_llamado()) {
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
    if (ctx->ID()) {
        std::string nombre = ctx->ID()->getText();
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
    std::string result = "PRODUCTO(";
    auto exprs = ctx->expr_mat_aritm();
    for (size_t i = 0; i < exprs.size(); ++i) {
        if (i > 0) result += ", ";
        result += generarExprCodigo(exprs[i]);
    }
    result += ")";
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
    if (ctx->ID()) {
        std::string nombre = ctx->ID()->getText();
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

// Implementación faltante para generarExprCodigo(ExprContext*)
std::string CodeGen::generarExprCodigo(LogotecGramarParser::ExprContext* ctx) {
    if (ctx->NUMBER()) return ctx->NUMBER()->getText();
    if (ctx->ID()) return ctx->ID()->getText();
    if (ctx->exp_integer()) return generarExprCodigo(ctx->exp_integer());
    if (ctx->CADENA_TEXTO()) return ctx->CADENA_TEXTO()->getText();
    if (ctx->colores()) return ctx->colores()->getText();
    if (ctx->exp_logica()) if (ctx->exp_logica()->getText() == "True" || ctx->exp_logica()->getText() == "False")
        return ctx->exp_logica()->getText() == "True" ? "true" : "false";
    return "";
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
    if (ctx->ID()) return ctx->ID()->getText();
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

std::string CodeGen::generarExprCodigo(LogotecGramarParser::Exp_logicas_exprContext* ctx) {
    if (ctx->NOT()) return "!" + generarExprCodigo(ctx->exp_logicas_expr()[0]);
    if (ctx->operador_logico()) {
        std::string left = generarExprCodigo(ctx->exp_logica_operaciones());
        std::string right = generarExprCodigo(ctx->exp_logicas_expr()[0]);
        std::string op = ctx->operador_logico()->getText();
        if (op == "Y") op = "&&";
        else if (op == "O") op = "||";
        return "(" + left + " " + op + " " + right + ")";
    }
    if (ctx->exp_logica_operaciones()) return generarExprCodigo(ctx->exp_logica_operaciones());
    return "";
}

std::string CodeGen::generarExprCodigo(LogotecGramarParser::Exp_logica_operacionesContext* ctx) {
    if (ctx->iguales_variable()) return generarExprCodigo(ctx->iguales_variable());
    if (ctx->y_variable()) return generarExprCodigo(ctx->y_variable());
    if (ctx->o_variable()) return generarExprCodigo(ctx->o_variable());
    if (ctx->mayorque_variable()) return generarExprCodigo(ctx->mayorque_variable());
    if (ctx->menorque_variable()) return generarExprCodigo(ctx->menorque_variable());
    if (ctx->logico()) return generarExprCodigo(ctx->logico());
    if (ctx->ID()) {
        // Si es solo una variable ID, debe ser de tipo bool
        auto it = tablaTipos.find(ctx->getText());
        if (it != tablaTipos.end()) {
            if (it->second == "bool") return "bool";
            else {
                error("Variable '" + ctx->getText() + "' debe ser de tipo bool en expresión lógica simple.");
                return "error";
            }
        } else {
            error("Variable '" + ctx->getText() + "' no declarada.");
            return "error";
        }
    }
    if (ctx->NUMBER()) {
        // Los números en contexto lógico se consideran válidos (0 = false, cualquier otro = true)
        return "bool";
    }

    error("Expresión lógica inválida.");
    return "error";
}

std::string CodeGen::generarExprCodigo(LogotecGramarParser::Iguales_variableContext* ctx) {
    if (ctx->expr(0) && ctx->expr(1)) {
        std::string left = generarExprCodigo(ctx->expr(0));
        std::string right = generarExprCodigo(ctx->expr(1));
        return "(" + left + " == " + right + ")";
    }
    return "";
}

std::string CodeGen::generarExprCodigo(LogotecGramarParser::Y_variableContext* ctx) {
    if (ctx->expr(0) && ctx->expr(1)) {
        std::string left = generarExprCodigo(ctx->expr(0));
        std::string right = generarExprCodigo(ctx->expr(1));
        return "(" + left + " && " + right + ")";
    }
    return "";
}

std::string CodeGen::generarExprCodigo(LogotecGramarParser::O_variableContext* ctx) {
    if (ctx->expr(0) && ctx->expr(1)) {
        std::string left = generarExprCodigo(ctx->expr(0));
        std::string right = generarExprCodigo(ctx->expr(1));
        return "(" + left + " || " + right + ")";
    }
    return "";
}
std::string CodeGen::generarExprCodigo(LogotecGramarParser::Mayorque_variableContext* ctx) {
    if (ctx->expr(0) && ctx->expr(1)) {
        std::string left = generarExprCodigo(ctx->expr(0));
        std::string right = generarExprCodigo(ctx->expr(1));
        return "(" + left + " > " + right + ")";
    }
    return "";
}
std::string CodeGen::generarExprCodigo(LogotecGramarParser::Menorque_variableContext* ctx) {
    if (ctx->expr(0) && ctx->expr(1)) {
        std::string left = generarExprCodigo(ctx->expr(0));
        std::string right = generarExprCodigo(ctx->expr(1));
        return "(" + left + " < " + right + ")";
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



std::string CodeGen::checkLogicExpr(LogotecGramarParser::Exp_logicas_exprContext* ctx) {
    if (ctx->NOT()) return checkLogicExpr(ctx->exp_logicas_expr()[0]);
    if (ctx->operador_logico()) {
        std::string left = checkLogicExpr(ctx->exp_logica_operaciones());
        std::string right = checkLogicExpr(ctx->exp_logicas_expr()[0]);
        if (left == "bool" && right == "bool") return "bool";
        return "error";
    }
    if (ctx->exp_logica_operaciones()) return checkLogicExpr(ctx->exp_logica_operaciones());


    error("exprcion_mat_aritm inválido en contexto matemático.");
    return "error";
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
    if (ctx->ID()) {
        // Si es solo una variable ID, debe ser de tipo bool
        auto it = tablaTipos.find(ctx->getText());
        if (it != tablaTipos.end()) {
            if (it->second == "bool") return "bool";
            else {
                error("Variable '" + ctx->getText() + "' debe ser de tipo bool en expresión lógica simple.");
                return "error";
            }
        } else {
            error("Variable '" + ctx->getText() + "' no declarada.");
            return "error";
        }
    }
    if (ctx->NUMBER()) {
        // Los números en contexto lógico se consideran válidos (0 = false, cualquier otro = true)
        return "bool";
    }

    error("Expresión lógica inválida.");
    return "error";
}

// Implementación faltante para checkLogicExpr(LogotecGramarParser::LogicoContext*)
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
    if (ctx->expr(0) && ctx->expr(1)) {
        std::string tipo1 = inferTipo(ctx->expr(0));
        std::string tipo2 = inferTipo(ctx->expr(1));
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
    if (ctx->expr(0) && ctx->expr(1)) {
        // Para Y lógico, ambos operandos deben evaluar a bool
        // Pero pueden ser expresiones que retornen bool, no necesariamente variables bool
        std::string tipo1 = inferTipo(ctx->expr(0));
        std::string tipo2 = inferTipo(ctx->expr(1));
        
        // Si son variables simples, deben ser bool
        if (ctx->expr(0)->ID() && !ctx->expr(0)->exp_logica()) {
            if (tipo1 != "bool") {
                error("Variable '" + ctx->expr(0)->ID()->getText() + "' debe ser de tipo bool en operador Y.");
                return "error";
            }
        }
        if (ctx->expr(1)->ID() && !ctx->expr(1)->exp_logica()) {
            if (tipo2 != "bool") {
                error("Variable '" + ctx->expr(1)->ID()->getText() + "' debe ser de tipo bool en operador Y.");
                return "error";
            }
        }
        
        // Si son expresiones lógicas, verificar que evalúen a bool
        if (ctx->expr(0)->exp_logica()) {
            if (checkLogicExpr(ctx->expr(0)->exp_logica()) != "bool") return "error";
        }
        if (ctx->expr(1)->exp_logica()) {
            if (checkLogicExpr(ctx->expr(1)->exp_logica()) != "bool") return "error";
        }
        
        return "bool";
    }
    return "error";
}

std::string CodeGen::checkLogicExpr(LogotecGramarParser::O_variableContext* ctx) {
    if (ctx->expr(0) && ctx->expr(1)) {
        // Para O lógico, mismo tratamiento que Y
        std::string tipo1 = inferTipo(ctx->expr(0));
        std::string tipo2 = inferTipo(ctx->expr(1));
        
        // Si son variables simples, deben ser bool
        if (ctx->expr(0)->ID() && !ctx->expr(0)->exp_logica()) {
            if (tipo1 != "bool") {
                error("Variable '" + ctx->expr(0)->ID()->getText() + "' debe ser de tipo bool en operador O.");
                return "error";
            }
        }
        if (ctx->expr(1)->ID() && !ctx->expr(1)->exp_logica()) {
            if (tipo2 != "bool") {
                error("Variable '" + ctx->expr(1)->ID()->getText() + "' debe ser de tipo bool en operador O.");
                return "error";
            }
        }
        
        // Si son expresiones lógicas, verificar que evalúen a bool
        if (ctx->expr(0)->exp_logica()) {
            if (checkLogicExpr(ctx->expr(0)->exp_logica()) != "bool") return "error";
        }
        if (ctx->expr(1)->exp_logica()) {
            if (checkLogicExpr(ctx->expr(1)->exp_logica()) != "bool") return "error";
        }
        
        return "bool";
    }
    return "error";
}

std::string CodeGen::checkLogicExpr(LogotecGramarParser::Menorque_variableContext* ctx) {
    if (ctx->expr(0) && ctx->expr(1)) {
        std::string tipo1 = inferTipo(ctx->expr(0));
        std::string tipo2 = inferTipo(ctx->expr(1));
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
    if (ctx->expr(0) && ctx->expr(1)) {
        std::string tipo1 = inferTipo(ctx->expr(0));
        std::string tipo2 = inferTipo(ctx->expr(1));
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
