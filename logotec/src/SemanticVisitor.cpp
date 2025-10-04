#include "SemanticVisitor.h"
using namespace std;

any SemanticVisitor::visitPrograma(LogotecGramarParser::ProgramaContext *ctx) {
    return visitChildren(ctx);
}



// Haz: crear variable e inferir tipo
any SemanticVisitor::visitHaz_variable(LogotecGramarParser::Haz_variableContext *ctx) {
    string nombre = ctx->ID()->getText();

    if (tablaTipos.find(nombre) != tablaTipos.end()) {
        error("Variable '" + nombre + "' ya declarada.");
        return nullptr;
    }

    // Inferir tipo básico según valor
    string tipo;
    if (ctx->e->exp_integer()) tipo = "int";
    else if (ctx->e->exp_logica()) tipo = "bool";
    else if (ctx->e->CADENA_TEXTO()) tipo = "string";
    else tipo = "desconocido";

    tablaTipos[nombre] = tipo;
    cout << "Variable '" << nombre << "' creada de tipo " << tipo << endl;

    return visitChildren(ctx);
}

// INIC: asignar valor, verificar tipo
any SemanticVisitor::visitInic_variable(LogotecGramarParser::Inic_variableContext *ctx) {
    string nombre = ctx->ID()->getText();

    auto it = tablaTipos.find(nombre);
    if (it == tablaTipos.end()) {
        error("Variable '" + nombre + "' no declarada antes de asignar.");
        return nullptr;
    }

    string tipoOriginal = it->second;

    // Inferir tipo de la expresión
    string tipoNuevo;
    if (ctx->e->exp_integer()) tipoNuevo = "int";
    else if (ctx->e->exp_logica()) tipoNuevo = "bool";
    else if (ctx->e->CADENA_TEXTO()) tipoNuevo = "string";
    else tipoNuevo = "desconocido";  // podrías mejorar para expresiones más complejas

    // Verificar tipo
    if (tipoOriginal != tipoNuevo) {
        error("Error semántico: asignación de tipo '" + tipoNuevo +
              "' a variable '" + nombre + "' de tipo '" + tipoOriginal + "'.");
    } else {
        cout << "Variable '" << nombre << "' asignada de tipo " << tipoNuevo << endl;
    }

    return visitChildren(ctx);
}

any SemanticVisitor::visitInc_variable(LogotecGramarParser::Inc_variableContext *ctx) {
    std::string n1 = ctx->ID(0)->getText(); // primer parámetro
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

    std::string codigoLinea;

    if (ctx->ID().size() == 2) {
        // Segundo parámetro es una variable
        std::string n2 = ctx->ID(1)->getText();
        auto it2 = tablaTipos.find(n2);
        if (it2 == tablaTipos.end()) {
            error("Variable '" + n2 + "' no declarada como segundo parámetro de INC.");
            return nullptr;
        }
        if (it2->second != "int") {
            error("Variable '" + n2 + "' no es numérica y no se puede usar como segundo parámetro de INC.");
            return nullptr;
        }
        codigoLinea = n1 + " += " + n2 + ";\n";
    } else if (ctx->NUMBER()) {
        // Segundo parámetro es un número literal
        codigoLinea = n1 + " += " + ctx->NUMBER()->getText() + ";\n";
    } else {
        // Solo N1
        codigoLinea = n1 + "++;\n";
    }

    return visitChildren(ctx);
}
any SemanticVisitor::visitExpr(LogotecGramarParser::ExprContext *ctx) {
    return visitChildren(ctx);
}
