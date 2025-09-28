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

using namespace std;

class CodeGen : public LogotecGramarBaseVisitor {
public:
    unordered_map<string,string> tablaTipos;
    string codigo;

    bool hayError = false; // <-- flag de error

    virtual any visitPrograma(LogotecGramarParser::ProgramaContext *ctx) override;
    virtual any visitHaz_variable(LogotecGramarParser::Haz_variableContext *ctx) override;
    virtual any visitInic_variable(LogotecGramarParser::Inic_variableContext *ctx) override;
    virtual any visitExpr(LogotecGramarParser::ExprContext *ctx) override;
    virtual any visitInc_variable(LogotecGramarParser::Inc_variableContext *context) override;

    std::any visitAvanza_variable(LogotecGramarParser::Avanza_variableContext *ctx);
    virtual any visitTodo_variable(LogotecGramarParser::Todo_variableContext *context) override;

    std::any visitComentario(LogotecGramarParser::ComentarioContext *ctx);

    void agregarComentarioLinea(LogotecGramarParser::InstruccionContext *ctx);

    void agregarComentario(LogotecGramarParser::InstruccionContext *ctx);

private:
    void error(const string &msg) {
        cerr << "Error: " << msg << endl;
        hayError = true;
    }

    string inferTipo(LogotecGramarParser::ExprContext *ctx);
};


#endif //CODEGEN_H
