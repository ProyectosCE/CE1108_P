
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

  virtual void enterProcedimiento(LogotecGramarParser::ProcedimientoContext *ctx) = 0;
  virtual void exitProcedimiento(LogotecGramarParser::ProcedimientoContext *ctx) = 0;

  virtual void enterParametros(LogotecGramarParser::ParametrosContext *ctx) = 0;
  virtual void exitParametros(LogotecGramarParser::ParametrosContext *ctx) = 0;

  virtual void enterLista_parametros(LogotecGramarParser::Lista_parametrosContext *ctx) = 0;
  virtual void exitLista_parametros(LogotecGramarParser::Lista_parametrosContext *ctx) = 0;

  virtual void enterLinea(LogotecGramarParser::LineaContext *ctx) = 0;
  virtual void exitLinea(LogotecGramarParser::LineaContext *ctx) = 0;

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

  virtual void enterEjecuta_variable(LogotecGramarParser::Ejecuta_variableContext *ctx) = 0;
  virtual void exitEjecuta_variable(LogotecGramarParser::Ejecuta_variableContext *ctx) = 0;

  virtual void enterRepite_variable(LogotecGramarParser::Repite_variableContext *ctx) = 0;
  virtual void exitRepite_variable(LogotecGramarParser::Repite_variableContext *ctx) = 0;

  virtual void enterSi_variable(LogotecGramarParser::Si_variableContext *ctx) = 0;
  virtual void exitSi_variable(LogotecGramarParser::Si_variableContext *ctx) = 0;

  virtual void enterSi_sino_variable(LogotecGramarParser::Si_sino_variableContext *ctx) = 0;
  virtual void exitSi_sino_variable(LogotecGramarParser::Si_sino_variableContext *ctx) = 0;

  virtual void enterHaz_hasta_variable(LogotecGramarParser::Haz_hasta_variableContext *ctx) = 0;
  virtual void exitHaz_hasta_variable(LogotecGramarParser::Haz_hasta_variableContext *ctx) = 0;

  virtual void enterHasta_variable(LogotecGramarParser::Hasta_variableContext *ctx) = 0;
  virtual void exitHasta_variable(LogotecGramarParser::Hasta_variableContext *ctx) = 0;

  virtual void enterHaz_mientras_variable(LogotecGramarParser::Haz_mientras_variableContext *ctx) = 0;
  virtual void exitHaz_mientras_variable(LogotecGramarParser::Haz_mientras_variableContext *ctx) = 0;

  virtual void enterMientras_variable(LogotecGramarParser::Mientras_variableContext *ctx) = 0;
  virtual void exitMientras_variable(LogotecGramarParser::Mientras_variableContext *ctx) = 0;

  virtual void enterIguales_variable(LogotecGramarParser::Iguales_variableContext *ctx) = 0;
  virtual void exitIguales_variable(LogotecGramarParser::Iguales_variableContext *ctx) = 0;

  virtual void enterY_variable(LogotecGramarParser::Y_variableContext *ctx) = 0;
  virtual void exitY_variable(LogotecGramarParser::Y_variableContext *ctx) = 0;

  virtual void enterO_variable(LogotecGramarParser::O_variableContext *ctx) = 0;
  virtual void exitO_variable(LogotecGramarParser::O_variableContext *ctx) = 0;

  virtual void enterMayorque_variable(LogotecGramarParser::Mayorque_variableContext *ctx) = 0;
  virtual void exitMayorque_variable(LogotecGramarParser::Mayorque_variableContext *ctx) = 0;

  virtual void enterMenorque_variable(LogotecGramarParser::Menorque_variableContext *ctx) = 0;
  virtual void exitMenorque_variable(LogotecGramarParser::Menorque_variableContext *ctx) = 0;

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

  virtual void enterDiferencia_expr(LogotecGramarParser::Diferencia_exprContext *ctx) = 0;
  virtual void exitDiferencia_expr(LogotecGramarParser::Diferencia_exprContext *ctx) = 0;

  virtual void enterAzar_expr(LogotecGramarParser::Azar_exprContext *ctx) = 0;
  virtual void exitAzar_expr(LogotecGramarParser::Azar_exprContext *ctx) = 0;

  virtual void enterProducto_expr(LogotecGramarParser::Producto_exprContext *ctx) = 0;
  virtual void exitProducto_expr(LogotecGramarParser::Producto_exprContext *ctx) = 0;

  virtual void enterPotencia_expr(LogotecGramarParser::Potencia_exprContext *ctx) = 0;
  virtual void exitPotencia_expr(LogotecGramarParser::Potencia_exprContext *ctx) = 0;

  virtual void enterDivision_expr(LogotecGramarParser::Division_exprContext *ctx) = 0;
  virtual void exitDivision_expr(LogotecGramarParser::Division_exprContext *ctx) = 0;

  virtual void enterSuma_expr(LogotecGramarParser::Suma_exprContext *ctx) = 0;
  virtual void exitSuma_expr(LogotecGramarParser::Suma_exprContext *ctx) = 0;


};

