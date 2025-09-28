//
// Created by amv22 on 27/9/2025.
//

#ifndef SEMANTICVISITOR_H
#define SEMANTICVISITOR_H


#pragma once

#include "gen/LogotecGramarBaseVisitor.h"
#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

/**
 * Clase para la verificación semántica.
 * Aquí se pueden chequear tipos, existencia de variables, etc.
 */
class SemanticVisitor : public LogotecGramarBaseVisitor {
public:
    // Tabla de símbolos simple: nombre de variable -> tipo
    unordered_map<string, string> symbolTable;
    unordered_map<string, string> tablaTipos;

    // Programa
    virtual any visitPrograma(LogotecGramarParser::ProgramaContext *ctx) override;

    // Declaración de variable
    virtual any visitHaz_variable(LogotecGramarParser::Haz_variableContext *ctx) override;

    // Inicialización de variable
    virtual any visitInic_variable(LogotecGramarParser::Inic_variableContext *ctx) override;

    // Expresiones
    virtual any visitExpr(LogotecGramarParser::ExprContext *ctx) override;

    // Incremento de variable
    virtual any visitInc_variable(LogotecGramarParser::Inc_variableContext *ctx) override;
    //

private:
    void error(const string &msg) {
        cerr << "Error semántico: " << msg << endl;
    }
};



#endif //SEMANTICVISITOR_H
