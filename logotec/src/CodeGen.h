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

    any visitRetrocede_variable(LogotecGramarParser::Retrocede_variableContext *ctx);

    any visitGira_derecha_variable(LogotecGramarParser::Gira_derecha_variableContext *context) override;

    any visitGira_izquierda_variable(LogotecGramarParser::Gira_izquierda_variableContext *ctx);

    any visitOcultar_tortuga_variable(LogotecGramarParser::Ocultar_tortuga_variableContext *ctx);

    any visitPonpos_variable(LogotecGramarParser::Ponpos_variableContext *ctx);

    any visitPonxy_variable(LogotecGramarParser::Ponxy_variableContext *ctx);

    any visitPonrumbo_variable(LogotecGramarParser::Ponrumbo_variableContext *ctx);

    std::any visitComentario(LogotecGramarParser::ComentarioContext *ctx);

    void agregarComentarioLinea(LogotecGramarParser::InstruccionContext *ctx);

    void agregarComentario(LogotecGramarParser::InstruccionContext *ctx);

    virtual any visitBajalapiz_variable(LogotecGramarParser::Bajalapiz_variableContext *context) override;
    virtual any visitSubelapiz_variable(LogotecGramarParser::Subelapiz_variableContext *context) override;
    virtual any visitCentro_variable(LogotecGramarParser::Centro_variableContext *context) override;
    virtual any visitEsperar_variable(LogotecGramarParser::Esperar_variableContext *context) override;
    virtual any visitPoncolorlapiz_variable(LogotecGramarParser::Poncolorlapiz_variableContext *context) override;
    virtual any visitPonx_variable(LogotecGramarParser::Ponx_variableContext *context) override;
    virtual any visitPony_variable(LogotecGramarParser::Pony_variableContext *context) override;

private:
    void error(const string &msg) {
        cerr << "Error: " << msg << endl;
        hayError = true;
    }

    string inferTipo(LogotecGramarParser::ExprContext *ctx);
};


#endif //CODEGEN_H
