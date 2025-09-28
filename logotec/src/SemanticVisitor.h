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

/**
 * Clase para la verificación semántica.
 * Aquí se pueden chequear tipos, existencia de variables, etc.
 */
class SemanticVisitor : public LogotecGramarBaseVisitor {
public:
    // Tabla de símbolos simple: nombre de variable -> tipo
    std::unordered_map<std::string, std::string> symbolTable;
    std::unordered_map<std::string, std::string> tablaTipos;

    // Programa
    virtual std::any visitPrograma(LogotecGramarParser::ProgramaContext *ctx) override;

    // Declaración de variable
    virtual std::any visitHaz_variable(LogotecGramarParser::Haz_variableContext *ctx) override;

    // Inicialización de variable
    virtual std::any visitInic_variable(LogotecGramarParser::Inic_variableContext *ctx) override;

    // Expresiones
    virtual std::any visitExpr(LogotecGramarParser::ExprContext *ctx) override;

private:
    void error(const std::string &msg) {
        std::cerr << "Error semántico: " << msg << std::endl;
    }
};



#endif //SEMANTICVISITOR_H
