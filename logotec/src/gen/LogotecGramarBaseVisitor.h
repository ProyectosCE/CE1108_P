
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

  virtual std::any visitComentario_linea(LogotecGramarParser::Comentario_lineaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComentario(LogotecGramarParser::ComentarioContext *ctx) override {
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

  virtual std::any visitAvanza_variable(LogotecGramarParser::Avanza_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRetrocede_variable(LogotecGramarParser::Retrocede_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGira_derecha_variable(LogotecGramarParser::Gira_derecha_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGira_izquierda_variable(LogotecGramarParser::Gira_izquierda_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOcultar_tortuga_variable(LogotecGramarParser::Ocultar_tortuga_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPonpos_variable(LogotecGramarParser::Ponpos_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPonxy_variable(LogotecGramarParser::Ponxy_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPonrumbo_variable(LogotecGramarParser::Ponrumbo_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPonx_variable(LogotecGramarParser::Ponx_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPony_variable(LogotecGramarParser::Pony_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBajalapiz_variable(LogotecGramarParser::Bajalapiz_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubelapiz_variable(LogotecGramarParser::Subelapiz_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPoncolorlapiz_variable(LogotecGramarParser::Poncolorlapiz_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCentro_variable(LogotecGramarParser::Centro_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEsperar_variable(LogotecGramarParser::Esperar_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColores(LogotecGramarParser::ColoresContext *ctx) override {
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

