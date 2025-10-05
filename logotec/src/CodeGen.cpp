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

    std::string n1 = ctx->ID(0)->getText();
    auto sym1 = symbolTable.lookup(n1);
    if (!sym1) {
        errorReporter.error(ctx->getStart()->getLine(), "Variable '" + n1 + "' no declarada antes de INC.");
        return nullptr;
    }
    if (!tiposEquivalentes(sym1->type, Type::INT)) {
        errorReporter.error(ctx->getStart()->getLine(), "Variable '" + n1 + "' no es numérica y no se puede usar en INC.");
        return nullptr;
    }
    std::string codigoLinea;
    if (ctx->ID().size() == 2) {
        std::string n2 = ctx->ID(1)->getText();
        auto sym2 = symbolTable.lookup(n2);
        if (!sym2) {
            errorReporter.error(ctx->getStart()->getLine(), "Variable '" + n2 + "' no declarada como segundo parámetro de INC.");
            return nullptr;
        }
        if (!tiposEquivalentes(sym2->type, Type::INT)) {
            errorReporter.error(ctx->getStart()->getLine(), "Variable '" + n2 + "' no es numérica y no se puede usar como segundo parámetro de INC.");
            return nullptr;
        }
        codigoLinea = n1 + " += " + n2 + ";";
    } else if (ctx->NUMBER()) {
        codigoLinea = n1 + " += " + ctx->NUMBER()->getText() + ";";
    } else {
        codigoLinea = n1 + "++;";
    }
    codigo += codigoLinea;
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

    // Obtener valor de la expresión
    string valor;
    if (ctx->e->exp_integer()) {
        valor = ctx->e->exp_integer()->getText();
    } else if (ctx->e->ID()) {
        string id = ctx->e->ID()->getText();
        auto it = tablaTipos.find(id);
        if (it == tablaTipos.end()) {
            error("Variable '" + id + "' no declarada antes de AVANZA.");
            return nullptr;
        }
        if (it->second != "int") {
            error("Variable '" + id + "' no es numérica y no se puede usar en AVANZA.");
            return nullptr;
        }
        valor = id;
    } else if (ctx->e->exp_integer()) {
        ctx->e->exp_integer()->getText();
    }
     else {
        error("Expresión inválida en AVANZA.");
        return nullptr;
    }

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
        error("La expresión en RETROCEDE no es válida o no es de tipo int.");
        return nullptr;
    }

    // Obtener valor de la expresión
    string valor;
    if (ctx->e->exp_integer()) {
        valor = ctx->e->exp_integer()->getText();
    } else if (ctx->e->ID()) {
        string id = ctx->e->ID()->getText();
        auto it = tablaTipos.find(id);
        if (it == tablaTipos.end()) {
            error("Variable '" + id + "' no declarada antes de AVANZA.");
            return nullptr;
        }
        if (it->second != "int") {
            error("Variable '" + id + "' no es numérica y no se puede usar en AVANZA.");
            return nullptr;
        }
        valor = id;
    } else if (ctx->e->exp_integer()) {
        ctx->e->exp_integer()->getText();
    }

    else {
        error("Expresión inválida en AVANZA.");
        return nullptr;
    }

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
        error("La expresión en GIRA_DERECHA no es válida o no es de tipo int.");
        return nullptr;
    }

    // Obtener valor de la expresión
    string valor;
    if (ctx->e->exp_integer()) {
        valor = ctx->e->exp_integer()->getText();
    } else if (ctx->e->ID()) {
        string id = ctx->e->ID()->getText();
        auto it = tablaTipos.find(id);
        if (it == tablaTipos.end()) {
            error("Variable '" + id + "' no declarada antes de AVANZA.");
            return nullptr;
        }
        if (it->second != "int") {
            error("Variable '" + id + "' no es numérica y no se puede usar en AVANZA.");
            return nullptr;
        }
        valor = id;
    } else {
        error("Expresión inválida en AVANZA.");
        return nullptr;
    }

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
        error("La expresión en GIRA_IZQUIERDA no es válida o no es de tipo int.");
        return nullptr;
    }

    // Obtener valor de la expresión
    string valor;
    if (ctx->e->exp_integer()) {
        valor = ctx->e->exp_integer()->getText();
    } else if (ctx->e->ID()) {
        string id = ctx->e->ID()->getText();
        auto it = tablaTipos.find(id);
        if (it == tablaTipos.end()) {
            error("Variable '" + id + "' no declarada antes de AVANZA.");
            return nullptr;
        }
        if (it->second != "int") {
            error("Variable '" + id + "' no es numérica y no se puede usar en AVANZA.");
            return nullptr;
        }
        valor = id;
    } else {
        error("Expresión inválida en AVANZA.");
        return nullptr;
    }

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

        string n1 = ctx->NUMBER(0)->getText();
        string n2 = ctx->NUMBER(1)->getText();

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

    string n1 = ctx->NUMBER(0)->getText();
    string n2 = ctx->NUMBER(1)->getText();

    codigo += "ponXY(" + n1 + "," + n2 + ");";

    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(ctx->parent)) {
        agregarComentarioLinea(instrCtx);
    }
    codigo += "\n";
    return nullptr;
}

any CodeGen::visitPonrumbo_variable(LogotecGramarParser::Ponrumbo_variableContext *ctx) {
    if (hayError) return nullptr;

    string n1 = ctx->NUMBER()->getText();

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
    string n1 = context->NUMBER()->getText();
    codigo += "ponX(" + n1 + ");";
    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(context->parent)) {
        agregarComentarioLinea(instrCtx);
    }
    codigo += "\n";
    return nullptr;
}

any CodeGen::visitPony_variable(LogotecGramarParser::Pony_variableContext *context) {
    if (hayError) return nullptr;
    string n1 = context->NUMBER()->getText();
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
    string n1 = context->colores()->getText();
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
    if (ctx->exp_integer()) {
        return checkMathExpr(ctx->exp_integer());
    }
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
