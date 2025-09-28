
// Generated from C:/Users/amv22/Dev/repos/COMPILADORES/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.2

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

    virtual std::any visitHaz_variable(LogotecGramarParser::Haz_variableContext *context) = 0;

    virtual std::any visitInic_variable(LogotecGramarParser::Inic_variableContext *context) = 0;

    virtual std::any visitInc_variable(LogotecGramarParser::Inc_variableContext *context) = 0;

    virtual std::any visitExpr(LogotecGramarParser::ExprContext *context) = 0;

    virtual std::any visitLogico(LogotecGramarParser::LogicoContext *context) = 0;

    virtual std::any visitValor(LogotecGramarParser::ValorContext *context) = 0;

    virtual std::any visitOperador(LogotecGramarParser::OperadorContext *context) = 0;


};

