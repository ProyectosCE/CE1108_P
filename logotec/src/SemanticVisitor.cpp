#include "SemanticVisitor.h"

std::any SemanticVisitor::visitPrograma(LogotecGramarParser::ProgramaContext *ctx) {
    return visitChildren(ctx);
}



// Haz: crear variable e inferir tipo
std::any SemanticVisitor::visitHaz_variable(LogotecGramarParser::Haz_variableContext *ctx) {
    std::string nombre = ctx->ID()->getText();

    if (tablaTipos.find(nombre) != tablaTipos.end()) {
        error("Variable '" + nombre + "' ya declarada.");
        return nullptr;
    }

    // Inferir tipo básico según valor
    std::string tipo;
    if (ctx->v->NUMBER()) tipo = "int";
    else if (ctx->v->logico()) tipo = "bool";
    else if (ctx->v->CADENA_TEXTO()) tipo = "string";
    else tipo = "desconocido";

    tablaTipos[nombre] = tipo;
    std::cout << "Variable '" << nombre << "' creada de tipo " << tipo << std::endl;

    return visitChildren(ctx);
}

// INIC: asignar valor, verificar tipo
std::any SemanticVisitor::visitInic_variable(LogotecGramarParser::Inic_variableContext *ctx) {
    std::string nombre = ctx->ID()->getText();

    auto it = tablaTipos.find(nombre);
    if (it == tablaTipos.end()) {
        error("Variable '" + nombre + "' no declarada antes de asignar.");
        return nullptr;
    }

    std::string tipoOriginal = it->second;

    // Inferir tipo de la expresión
    std::string tipoNuevo;
    if (ctx->e->NUMBER()) tipoNuevo = "int";
    else if (ctx->e->logico()) tipoNuevo = "bool";
    else if (ctx->e->CADENA_TEXTO()) tipoNuevo = "string";
    else tipoNuevo = "desconocido";  // podrías mejorar para expresiones más complejas

    // Verificar tipo
    if (tipoOriginal != tipoNuevo) {
        error("Error semántico: asignación de tipo '" + tipoNuevo +
              "' a variable '" + nombre + "' de tipo '" + tipoOriginal + "'.");
    } else {
        std::cout << "Variable '" << nombre << "' asignada de tipo " << tipoNuevo << std::endl;
    }

    return visitChildren(ctx);
}

std::any SemanticVisitor::visitExpr(LogotecGramarParser::ExprContext *ctx) {
    return visitChildren(ctx);
}
