
// Generated from C:/Users/amv22/Dev/repos/COMPILADORES/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "LogotecGramarParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by LogotecGramarParser.
 */
class  LogotecGramarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterPrograma(LogotecGramarParser::ProgramaContext *ctx) = 0;
  virtual void exitPrograma(LogotecGramarParser::ProgramaContext *ctx) = 0;

  virtual void enterInstruccion(LogotecGramarParser::InstruccionContext *ctx) = 0;
  virtual void exitInstruccion(LogotecGramarParser::InstruccionContext *ctx) = 0;

  virtual void enterHaz_variable(LogotecGramarParser::Haz_variableContext *ctx) = 0;
  virtual void exitHaz_variable(LogotecGramarParser::Haz_variableContext *ctx) = 0;

  virtual void enterInic_variable(LogotecGramarParser::Inic_variableContext *ctx) = 0;
  virtual void exitInic_variable(LogotecGramarParser::Inic_variableContext *ctx) = 0;

  virtual void enterInc_variable(LogotecGramarParser::Inc_variableContext *ctx) = 0;
  virtual void exitInc_variable(LogotecGramarParser::Inc_variableContext *ctx) = 0;

  virtual void enterExpr(LogotecGramarParser::ExprContext *ctx) = 0;
  virtual void exitExpr(LogotecGramarParser::ExprContext *ctx) = 0;

  virtual void enterLogico(LogotecGramarParser::LogicoContext *ctx) = 0;
  virtual void exitLogico(LogotecGramarParser::LogicoContext *ctx) = 0;

  virtual void enterValor(LogotecGramarParser::ValorContext *ctx) = 0;
  virtual void exitValor(LogotecGramarParser::ValorContext *ctx) = 0;

  virtual void enterOperador(LogotecGramarParser::OperadorContext *ctx) = 0;
  virtual void exitOperador(LogotecGramarParser::OperadorContext *ctx) = 0;


};

