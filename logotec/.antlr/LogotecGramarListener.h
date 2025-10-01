
// Generated from /home/josc/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.1

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

  virtual void enterComentario_linea(LogotecGramarParser::Comentario_lineaContext *ctx) = 0;
  virtual void exitComentario_linea(LogotecGramarParser::Comentario_lineaContext *ctx) = 0;

  virtual void enterComentario(LogotecGramarParser::ComentarioContext *ctx) = 0;
  virtual void exitComentario(LogotecGramarParser::ComentarioContext *ctx) = 0;

  virtual void enterHaz_variable(LogotecGramarParser::Haz_variableContext *ctx) = 0;
  virtual void exitHaz_variable(LogotecGramarParser::Haz_variableContext *ctx) = 0;

  virtual void enterInic_variable(LogotecGramarParser::Inic_variableContext *ctx) = 0;
  virtual void exitInic_variable(LogotecGramarParser::Inic_variableContext *ctx) = 0;

  virtual void enterInc_variable(LogotecGramarParser::Inc_variableContext *ctx) = 0;
  virtual void exitInc_variable(LogotecGramarParser::Inc_variableContext *ctx) = 0;

  virtual void enterAvanza_variable(LogotecGramarParser::Avanza_variableContext *ctx) = 0;
  virtual void exitAvanza_variable(LogotecGramarParser::Avanza_variableContext *ctx) = 0;

  virtual void enterRetrocede_variable(LogotecGramarParser::Retrocede_variableContext *ctx) = 0;
  virtual void exitRetrocede_variable(LogotecGramarParser::Retrocede_variableContext *ctx) = 0;

  virtual void enterGira_derecha_variable(LogotecGramarParser::Gira_derecha_variableContext *ctx) = 0;
  virtual void exitGira_derecha_variable(LogotecGramarParser::Gira_derecha_variableContext *ctx) = 0;

  virtual void enterGira_izquierda_variable(LogotecGramarParser::Gira_izquierda_variableContext *ctx) = 0;
  virtual void exitGira_izquierda_variable(LogotecGramarParser::Gira_izquierda_variableContext *ctx) = 0;

  virtual void enterOcultar_tortuga_variable(LogotecGramarParser::Ocultar_tortuga_variableContext *ctx) = 0;
  virtual void exitOcultar_tortuga_variable(LogotecGramarParser::Ocultar_tortuga_variableContext *ctx) = 0;

  virtual void enterPonpos_variable(LogotecGramarParser::Ponpos_variableContext *ctx) = 0;
  virtual void exitPonpos_variable(LogotecGramarParser::Ponpos_variableContext *ctx) = 0;

  virtual void enterPonxy_variable(LogotecGramarParser::Ponxy_variableContext *ctx) = 0;
  virtual void exitPonxy_variable(LogotecGramarParser::Ponxy_variableContext *ctx) = 0;

  virtual void enterPonrumbo_variable(LogotecGramarParser::Ponrumbo_variableContext *ctx) = 0;
  virtual void exitPonrumbo_variable(LogotecGramarParser::Ponrumbo_variableContext *ctx) = 0;

  virtual void enterPonx_variable(LogotecGramarParser::Ponx_variableContext *ctx) = 0;
  virtual void exitPonx_variable(LogotecGramarParser::Ponx_variableContext *ctx) = 0;

  virtual void enterPony_variable(LogotecGramarParser::Pony_variableContext *ctx) = 0;
  virtual void exitPony_variable(LogotecGramarParser::Pony_variableContext *ctx) = 0;

  virtual void enterBajalapiz_variable(LogotecGramarParser::Bajalapiz_variableContext *ctx) = 0;
  virtual void exitBajalapiz_variable(LogotecGramarParser::Bajalapiz_variableContext *ctx) = 0;

  virtual void enterSubelapiz_variable(LogotecGramarParser::Subelapiz_variableContext *ctx) = 0;
  virtual void exitSubelapiz_variable(LogotecGramarParser::Subelapiz_variableContext *ctx) = 0;

  virtual void enterPoncolorlapiz_variable(LogotecGramarParser::Poncolorlapiz_variableContext *ctx) = 0;
  virtual void exitPoncolorlapiz_variable(LogotecGramarParser::Poncolorlapiz_variableContext *ctx) = 0;

  virtual void enterCentro_variable(LogotecGramarParser::Centro_variableContext *ctx) = 0;
  virtual void exitCentro_variable(LogotecGramarParser::Centro_variableContext *ctx) = 0;

  virtual void enterEsperar_variable(LogotecGramarParser::Esperar_variableContext *ctx) = 0;
  virtual void exitEsperar_variable(LogotecGramarParser::Esperar_variableContext *ctx) = 0;

  virtual void enterColores(LogotecGramarParser::ColoresContext *ctx) = 0;
  virtual void exitColores(LogotecGramarParser::ColoresContext *ctx) = 0;

  virtual void enterExpr(LogotecGramarParser::ExprContext *ctx) = 0;
  virtual void exitExpr(LogotecGramarParser::ExprContext *ctx) = 0;

  virtual void enterLogico(LogotecGramarParser::LogicoContext *ctx) = 0;
  virtual void exitLogico(LogotecGramarParser::LogicoContext *ctx) = 0;

  virtual void enterValor(LogotecGramarParser::ValorContext *ctx) = 0;
  virtual void exitValor(LogotecGramarParser::ValorContext *ctx) = 0;

  virtual void enterOperador(LogotecGramarParser::OperadorContext *ctx) = 0;
  virtual void exitOperador(LogotecGramarParser::OperadorContext *ctx) = 0;


};

