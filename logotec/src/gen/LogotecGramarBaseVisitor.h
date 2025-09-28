
// Generated from C:/Users/amv22/Dev/repos/COMPILADORES/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "LogotecGramarVisitor.h"


/**
 * This class provides an empty implementation of LogotecGramarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  LogotecGramarBaseVisitor : public LogotecGramarVisitor {
public:

  virtual std::any visitPrograma(LogotecGramarParser::ProgramaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInstruccion(LogotecGramarParser::InstruccionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHaz_variable(LogotecGramarParser::Haz_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInic_variable(LogotecGramarParser::Inic_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInc_variable(LogotecGramarParser::Inc_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(LogotecGramarParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogico(LogotecGramarParser::LogicoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValor(LogotecGramarParser::ValorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperador(LogotecGramarParser::OperadorContext *ctx) override {
    return visitChildren(ctx);
  }


};

