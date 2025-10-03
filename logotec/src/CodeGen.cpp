//
// Created by amv22 on 27/9/2025.
//

#include "CodeGen.h"

// Recorre el programa
any CodeGen::visitPrograma(LogotecGramarParser::ProgramaContext *ctx) {
    for (auto instr : ctx->instruccion()) {
        visit(instr);
    }
    return nullptr;
}

// Haz: crear variable
any CodeGen::visitHaz_variable(LogotecGramarParser::Haz_variableContext *ctx) {
    if (hayError) return nullptr; // <-- no generar nada si hay error

    string nombre = ctx->ID()->getText();

    if (tablaTipos.find(nombre) != tablaTipos.end()) {
        error("Variable '" + nombre + "' ya declarada.");
        return nullptr;
    }

    string tipo;
    string valor;

    if (ctx->v->NUMBER()) {
        tipo = "int";
        valor = ctx->v->NUMBER()->getText();
    } else if (ctx->v->logico()) {
        tipo = "bool";
        string texto = ctx->v->logico()->getText();
        valor = (texto == "True") ? "true" : "false";
    } else if (ctx->v->CADENA_TEXTO()) {
        tipo = "string";
        valor = ctx->v->CADENA_TEXTO()->getText();
    } else {
        tipo = "desconocido";
        valor = "";
    }

    tablaTipos[nombre] = tipo;
    codigo += tipo + " " + nombre + " = " + valor + ";";

    // Agregar comentario si existe
    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(ctx->parent)) {
        agregarComentarioLinea(instrCtx);
    }
    codigo += "\n";
    return nullptr;
}

// INIC: asignación
any CodeGen::visitInic_variable(LogotecGramarParser::Inic_variableContext *ctx) {
    if (hayError) return nullptr; // <-- no generar nada si hay error

    string nombre = ctx->ID()->getText();
    auto it = tablaTipos.find(nombre);
    if (it == tablaTipos.end()) {
        error("Variable '" + nombre + "' no declarada antes de asignar.");
        return nullptr;
    }

    string tipoOriginal = it->second;
    string tipoNuevo;
    string valor;

    if (ctx->e->NUMBER()) {
        tipoNuevo = "int";
        valor = ctx->e->NUMBER()->getText();
    } else if (ctx->e->logico()) {
        tipoNuevo = "bool";
        string texto = ctx->e->logico()->getText();
        valor = (texto == "True") ? "true" : "false";
    } else if (ctx->e->CADENA_TEXTO()) {
        tipoNuevo = "string";
        valor = ctx->e->CADENA_TEXTO()->getText();
    } else if (ctx->e->ID()) {
        tipoNuevo = inferTipo(ctx->e);
        valor = ctx->e->ID()->getText();
    } else {
        tipoNuevo = inferTipo(ctx->e);
        valor = "";
    }

    if (tipoOriginal != tipoNuevo) {
        error("Error semántico: asignación de tipo '" + tipoNuevo +
              "' a variable '" + nombre + "' de tipo '" + tipoOriginal + "'.");
        return nullptr;
    }

    codigo += nombre + " = " + valor + ";";
    /// Agregar comentario si existe
    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(ctx->parent)) {
        agregarComentarioLinea(instrCtx);
    }
    codigo += "\n";
    return nullptr;
}

any CodeGen::visitInc_variable(LogotecGramarParser::Inc_variableContext *ctx) {
    if (hayError) return nullptr; // no generar nada si hay error previo

    string n1 = ctx->ID(0)->getText(); // primer parámetro
    auto it = tablaTipos.find(n1);
    if (it == tablaTipos.end()) {
        error("Variable '" + n1 + "' no declarada antes de INC.");
        return nullptr;
    }

    // Comprobar que N1 es int
    if (it->second != "int") {
        error("Variable '" + n1 + "' no es numérica y no se puede usar en INC.");
        return nullptr;
    }

    string codigoLinea;

    if (ctx->ID().size() == 2) {
        // Segundo parámetro es una variable
        string n2 = ctx->ID(1)->getText();
        auto it2 = tablaTipos.find(n2);
        if (it2 == tablaTipos.end()) {
            error("Variable '" + n2 + "' no declarada como segundo parámetro de INC.");
            return nullptr;
        }
        if (it2->second != "int") {
            error("Variable '" + n2 + "' no es numérica y no se puede usar como segundo parámetro de INC.");
            return nullptr;
        }
        codigoLinea = n1 + " += " + n2 + ";";
    } else if (ctx->NUMBER()) {
        // Segundo parámetro es un número literal
        codigoLinea = n1 + " += " + ctx->NUMBER()->getText() + ";";
    } else {
        // Solo N1
        codigoLinea = n1 + "++;";
    }

    codigo += codigoLinea;

    // Agregar comentario si existe
    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(ctx->parent)) {
        agregarComentarioLinea(instrCtx);
    }
    codigo += "\n";

    return nullptr;
}

any CodeGen::visitAvanza_variable(LogotecGramarParser::Avanza_variableContext *ctx) {
    if (hayError) return nullptr;

    if (!ctx->e) {
        error("Error semántico: AVANZA requiere una expresión válida.");
        return nullptr;
    }

    string valor;

    if (ctx->e->NUMBER()) {
        valor = ctx->e->NUMBER()->getText();
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
    } else if (ctx->e->expr().size() == 2 && ctx->e->expr(0) && ctx->e->expr(1)) {
        string left = any_cast<string>(visit(ctx->e->expr(0)));
        string right = any_cast<string>(visit(ctx->e->expr(1)));
        string op;
        if (ctx->e->operador()->PLUS()) op = " + ";
        else if (ctx->e->operador()->MINUS()) op = " - ";
        else if (ctx->e->operador()->MULT()) op = " * ";
        else if (ctx->e->operador()->DIV()) op = " / ";
        valor = left + op + right;
    } else {
        error("Expresión inválida en AVANZA.");
        return nullptr;
    }

    codigo += "avanzaTortuga(" + valor + ");";

    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(ctx->parent)) {
        agregarComentarioLinea(instrCtx);
    }
    codigo += "\n";
    return nullptr;
}


any CodeGen::visitRetrocede_variable(LogotecGramarParser::Retrocede_variableContext *ctx) {
    if (hayError) return nullptr; // no generar nada si hay error previo

    if (!ctx->e) {
        error("Error semántico: RETROCEDE requiere una expresión válida.");
        return nullptr;
    }

    string valor;

    if (ctx->e->NUMBER()) {
        valor = ctx->e->NUMBER()->getText();
    } else if (ctx->e->ID()) {
        string id = ctx->e->ID()->getText();
        auto it = tablaTipos.find(id);
        if (it == tablaTipos.end()) {
            error("Variable '" + id + "' no declarada antes de RETROCEDE.");
            return nullptr;
        }
        if (it->second != "int") {
            error("Variable '" + id + "' no es numérica y no se puede usar en RETROCEDE.");
            return nullptr;
        }
        valor = id;
    } else if (ctx->e->expr().size() == 2 && ctx->e->expr(0) && ctx->e->expr(1)) {
        // Operación binaria simple (+,-,*,/)
        string left = any_cast<string>(visit(ctx->e->expr(0)));
        string right = any_cast<string>(visit(ctx->e->expr(1)));
        string op;
        if (ctx->e->operador()->PLUS()) op = " + ";
        else if (ctx->e->operador()->MINUS()) op = " - ";
        else if (ctx->e->operador()->MULT()) op = " * ";
        else if (ctx->e->operador()->DIV()) op = " / ";
        valor = left + op + right;
    } else {
        error("Expresión inválida en RETROCEDE.");
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
    if (hayError) return nullptr;

    if (!ctx->e) {
        error("Error semántico: GIRA DERECHA requiere una expresión válida.");
        return nullptr;
    }

    string valor;

    if (ctx->e->NUMBER()) {
        valor = ctx->e->NUMBER()->getText();
    } else if (ctx->e->ID()) {
        string id = ctx->e->ID()->getText();
        auto it = tablaTipos.find(id);
        if (it == tablaTipos.end()) {
            error("Variable '" + id + "' no declarada antes de GIRA DERECHA.");
            return nullptr;
        }
        if (it->second != "int") {
            error("Variable '" + id + "' no es numérica y no se puede usar en GIRA DERECHA.");
            return nullptr;
        }
        valor = id;
    } else {
        error("Expresión inválida en GIRA DERECHA.");
        return nullptr;
    }

    codigo += "giraDerecha(" + valor + ");";

    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(ctx->parent)) {
        agregarComentarioLinea(instrCtx);
    }

    codigo += "\n";
    return nullptr;
}


any CodeGen::visitGira_izquierda_variable(LogotecGramarParser::Gira_izquierda_variableContext *ctx) {
    if (hayError) return nullptr;

    if (!ctx->e) {
        error("Error semántico: GIRA IZQUIERDA requiere una expresión válida.");
        return nullptr;
    }

    string valor;

    if (ctx->e->NUMBER()) {
        valor = ctx->e->NUMBER()->getText();
    } else if (ctx->e->ID()) {
        string id = ctx->e->ID()->getText();
        auto it = tablaTipos.find(id);
        if (it == tablaTipos.end()) {
            error("Variable '" + id + "' no declarada antes de GIRA IZQUIERDA.");
            return nullptr;
        }
        if (it->second != "int") {
            error("Variable '" + id + "' no es numérica y no se puede usar en GIRA IZQUIERDA.");
            return nullptr;
        }
        valor = id;
    } else {
        error("Expresión inválida en GIRA IZQUIERDA.");
        return nullptr;
    }

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

    if (ctx->NUMBER().size() < 2 || !ctx->NUMBER(0) || !ctx->NUMBER(1)) {
        error("Error semántico: 'ponPos' requiere dos números.");
        return nullptr;
    }

    string n1 = ctx->NUMBER(0)->getText();
    string n2 = ctx->NUMBER(1)->getText();

    codigo += "ponPos(" + n1 + "," + n2 + ");";

    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(ctx->parent)) {
        agregarComentarioLinea(instrCtx);
    }

    codigo += "\n";
    return nullptr;
}



any CodeGen::visitPonxy_variable(LogotecGramarParser::Ponxy_variableContext *ctx) {
    if (hayError) return nullptr;

    if (ctx->NUMBER().size() < 2 || !ctx->NUMBER(0) || !ctx->NUMBER(1)) {
        error("Error semántico: 'ponXY' requiere dos números.");
        return nullptr;
    }

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

    if (!ctx->NUMBER()) {
        error("Error semántico: 'ponRumbo' requiere un número.");
        return nullptr;
    }

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
    if (ctx->NUMBER()) return ctx->NUMBER()->getText();
    if (ctx->logico()) return ctx->logico()->getText();
    if (ctx->CADENA_TEXTO()) return ctx->CADENA_TEXTO()->getText();
    if (ctx->ID()) return ctx->ID()->getText();
    if (ctx->expr().size() == 2) {
        string left = any_cast<string>(visit(ctx->expr(0)));
        string right = any_cast<string>(visit(ctx->expr(1)));
        return left + " + " + right;
    }
    return string();
}


// Inferir tipo de expresiones
string CodeGen::inferTipo(LogotecGramarParser::ExprContext *ctx) {
    if (ctx->NUMBER()) return "int";
    if (ctx->logico()) return "bool";
    if (ctx->CADENA_TEXTO()) return "string";
    if (ctx->ID()) {
        auto it = tablaTipos.find(ctx->ID()->getText());
        if (it != tablaTipos.end()) return it->second;
        else return "desconocido";
    }
    if (ctx->expr().size() == 2) { // suma de enteros
        string t1 = inferTipo(ctx->expr(0));
        string t2 = inferTipo(ctx->expr(1));
        if (t1 == "int" && t2 == "int") return "int";
        else return "error";
    }
    return "desconocido";
}

any CodeGen::visitPonx_variable(LogotecGramarParser::Ponx_variableContext *context) {
    if (hayError) return nullptr;

    if (!context->NUMBER()) {
        error("Error semántico: 'ponX' requiere un número.");
        return nullptr;
    }

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

    if (!context->NUMBER()) {
        error("Error semántico: 'ponY' requiere un número.");
        return nullptr;
    }

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

    if (!context->NUMBER()) {
        error("Error semántico: 'esperar' requiere un número.");
        return nullptr;
    }

    string n1 = context->NUMBER()->getText();
    codigo += "espera(" + n1 + ");";

    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(context->parent)) {
        agregarComentarioLinea(instrCtx);
    }

    codigo += "\n";
    return nullptr;
}


any CodeGen::visitPoncolorlapiz_variable(LogotecGramarParser::Poncolorlapiz_variableContext *context) {
    if (hayError) return nullptr;

    if (!context->colores()) {
        error("Error semántico: 'ponColorLapiz' requiere un color válido.");
        return nullptr;
    }

    string n1 = context->colores()->getText();
    codigo += "ponColorLapiz(" + n1 + ");";

    if (auto instrCtx = dynamic_cast<LogotecGramarParser::InstruccionContext*>(context->parent)) {
        agregarComentarioLinea(instrCtx);
    }

    codigo += "\n";
    return nullptr;
}



