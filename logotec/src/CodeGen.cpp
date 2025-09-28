//
// Created by amv22 on 27/9/2025.
//

#include "CodeGen.h"

// Recorre el programa
std::any CodeGen::visitPrograma(LogotecGramarParser::ProgramaContext *ctx) {
    for (auto instr : ctx->instruccion()) {
        visit(instr);
    }
    return nullptr;
}

// Haz: crear variable
std::any CodeGen::visitHaz_variable(LogotecGramarParser::Haz_variableContext *ctx) {
    if (hayError) return nullptr; // <-- no generar nada si hay error

    std::string nombre = ctx->ID()->getText();

    if (tablaTipos.find(nombre) != tablaTipos.end()) {
        error("Variable '" + nombre + "' ya declarada.");
        return nullptr;
    }

    std::string tipo;
    std::string valor;

    if (ctx->v->NUMBER()) {
        tipo = "int";
        valor = ctx->v->NUMBER()->getText();
    } else if (ctx->v->logico()) {
        tipo = "bool";
        std::string texto = ctx->v->logico()->getText();
        valor = (texto == "True") ? "true" : "false";
    } else if (ctx->v->CADENA_TEXTO()) {
        tipo = "string";
        valor = ctx->v->CADENA_TEXTO()->getText();
    } else {
        tipo = "desconocido";
        valor = "";
    }

    tablaTipos[nombre] = tipo;
    codigo += tipo + " " + nombre + " = " + valor + ";\n";

    return nullptr;
}

// INIC: asignación
std::any CodeGen::visitInic_variable(LogotecGramarParser::Inic_variableContext *ctx) {
    if (hayError) return nullptr; // <-- no generar nada si hay error

    std::string nombre = ctx->ID()->getText();
    auto it = tablaTipos.find(nombre);
    if (it == tablaTipos.end()) {
        error("Variable '" + nombre + "' no declarada antes de asignar.");
        return nullptr;
    }

    std::string tipoOriginal = it->second;
    std::string tipoNuevo;
    std::string valor;

    if (ctx->e->NUMBER()) {
        tipoNuevo = "int";
        valor = ctx->e->NUMBER()->getText();
    } else if (ctx->e->logico()) {
        tipoNuevo = "bool";
        std::string texto = ctx->e->logico()->getText();
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

    codigo += nombre + " = " + valor + ";\n";
    return nullptr;
}


// Expresiones
std::any CodeGen::visitExpr(LogotecGramarParser::ExprContext *ctx) {
    if (ctx->NUMBER()) return ctx->NUMBER()->getText();
    if (ctx->logico()) return ctx->logico()->getText();
    if (ctx->CADENA_TEXTO()) return ctx->CADENA_TEXTO()->getText();
    if (ctx->ID()) return ctx->ID()->getText();
    if (ctx->expr().size() == 2) {
        std::string left = std::any_cast<std::string>(visit(ctx->expr(0)));
        std::string right = std::any_cast<std::string>(visit(ctx->expr(1)));
        return left + " + " + right;
    }
    return std::string();
}


// Inferir tipo de expresiones
std::string CodeGen::inferTipo(LogotecGramarParser::ExprContext *ctx) {
    if (ctx->NUMBER()) return "int";
    if (ctx->logico()) return "bool";
    if (ctx->CADENA_TEXTO()) return "string";
    if (ctx->ID()) {
        auto it = tablaTipos.find(ctx->ID()->getText());
        if (it != tablaTipos.end()) return it->second;
        else return "desconocido";
    }
    if (ctx->expr().size() == 2) { // suma de enteros
        std::string t1 = inferTipo(ctx->expr(0));
        std::string t2 = inferTipo(ctx->expr(1));
        if (t1 == "int" && t2 == "int") return "int";
        else return "error";
    }
    return "desconocido";
}
