
// Generated from /home/jimmy/Documents/GitHub/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "LogotecGramarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by LogotecGramarParser.
 */
class  LogotecGramarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by LogotecGramarParser.
   */
    virtual std::any visitPrograma(LogotecGramarParser::ProgramaContext *context) = 0;

    virtual std::any visitInstruccion(LogotecGramarParser::InstruccionContext *context) = 0;

    virtual std::any visitComentario_linea(LogotecGramarParser::Comentario_lineaContext *context) = 0;

    virtual std::any visitComentario(LogotecGramarParser::ComentarioContext *context) = 0;

    virtual std::any visitHaz_variable(LogotecGramarParser::Haz_variableContext *context) = 0;

    virtual std::any visitInic_variable(LogotecGramarParser::Inic_variableContext *context) = 0;

    virtual std::any visitInc_variable(LogotecGramarParser::Inc_variableContext *context) = 0;

    virtual std::any visitAvanza_variable(LogotecGramarParser::Avanza_variableContext *context) = 0;

    virtual std::any visitRetrocede_variable(LogotecGramarParser::Retrocede_variableContext *context) = 0;

    virtual std::any visitGira_derecha_variable(LogotecGramarParser::Gira_derecha_variableContext *context) = 0;

    virtual std::any visitGira_izquierda_variable(LogotecGramarParser::Gira_izquierda_variableContext *context) = 0;

    virtual std::any visitOcultar_tortuga_variable(LogotecGramarParser::Ocultar_tortuga_variableContext *context) = 0;

    virtual std::any visitPonpos_variable(LogotecGramarParser::Ponpos_variableContext *context) = 0;

    virtual std::any visitPonxy_variable(LogotecGramarParser::Ponxy_variableContext *context) = 0;

    virtual std::any visitPonrumbo_variable(LogotecGramarParser::Ponrumbo_variableContext *context) = 0;

    virtual std::any visitPonx_variable(LogotecGramarParser::Ponx_variableContext *context) = 0;

    virtual std::any visitPony_variable(LogotecGramarParser::Pony_variableContext *context) = 0;

    virtual std::any visitBajalapiz_variable(LogotecGramarParser::Bajalapiz_variableContext *context) = 0;

    virtual std::any visitSubelapiz_variable(LogotecGramarParser::Subelapiz_variableContext *context) = 0;

    virtual std::any visitPoncolorlapiz_variable(LogotecGramarParser::Poncolorlapiz_variableContext *context) = 0;

    virtual std::any visitCentro_variable(LogotecGramarParser::Centro_variableContext *context) = 0;

    virtual std::any visitEsperar_variable(LogotecGramarParser::Esperar_variableContext *context) = 0;

    virtual std::any visitColores(LogotecGramarParser::ColoresContext *context) = 0;

    virtual std::any visitExpr(LogotecGramarParser::ExprContext *context) = 0;

    virtual std::any visitLogico(LogotecGramarParser::LogicoContext *context) = 0;

    virtual std::any visitValor(LogotecGramarParser::ValorContext *context) = 0;

    virtual std::any visitOperador(LogotecGramarParser::OperadorContext *context) = 0;


};

