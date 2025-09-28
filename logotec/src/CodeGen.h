//
// Created by amv22 on 27/9/2025.
//

#ifndef CODEGEN_H
#define CODEGEN_H

#pragma once
#include "gen/LogotecGramarBaseVisitor.h"
#include "gen/LogotecGramarParser.h"
#include <string>
#include <unordered_map>
#include <iostream>
class CodeGen : public LogotecGramarBaseVisitor {
public:
    std::unordered_map<std::string,std::string> tablaTipos;
    std::string codigo;

    bool hayError = false; // <-- flag de error

    virtual std::any visitPrograma(LogotecGramarParser::ProgramaContext *ctx) override;
    virtual std::any visitHaz_variable(LogotecGramarParser::Haz_variableContext *ctx) override;
    virtual std::any visitInic_variable(LogotecGramarParser::Inic_variableContext *ctx) override;
    virtual std::any visitExpr(LogotecGramarParser::ExprContext *ctx) override;

private:
    void error(const std::string &msg) {
        std::cerr << "Error: " << msg << std::endl;
        hayError = true;
    }

    std::string inferTipo(LogotecGramarParser::ExprContext *ctx);
};


#endif //CODEGEN_H
