
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

  virtual void enterLinea_instrucciones(LogotecGramarParser::Linea_instruccionesContext *ctx) = 0;
  virtual void exitLinea_instrucciones(LogotecGramarParser::Linea_instruccionesContext *ctx) = 0;

  virtual void enterLista_parametros(LogotecGramarParser::Lista_parametrosContext *ctx) = 0;
  virtual void exitLista_parametros(LogotecGramarParser::Lista_parametrosContext *ctx) = 0;

  virtual void enterInstruccion(LogotecGramarParser::InstruccionContext *ctx) = 0;
  virtual void exitInstruccion(LogotecGramarParser::InstruccionContext *ctx) = 0;

  virtual void enterSalida(LogotecGramarParser::SalidaContext *ctx) = 0;
  virtual void exitSalida(LogotecGramarParser::SalidaContext *ctx) = 0;

  virtual void enterMuestra(LogotecGramarParser::MuestraContext *ctx) = 0;
  virtual void exitMuestra(LogotecGramarParser::MuestraContext *ctx) = 0;

  virtual void enterRumbo_get(LogotecGramarParser::Rumbo_getContext *ctx) = 0;
  virtual void exitRumbo_get(LogotecGramarParser::Rumbo_getContext *ctx) = 0;

  virtual void enterComentario_linea(LogotecGramarParser::Comentario_lineaContext *ctx) = 0;
  virtual void exitComentario_linea(LogotecGramarParser::Comentario_lineaContext *ctx) = 0;

  virtual void enterComentario(LogotecGramarParser::ComentarioContext *ctx) = 0;
  virtual void exitComentario(LogotecGramarParser::ComentarioContext *ctx) = 0;

  virtual void enterProcedimiento_llamado(LogotecGramarParser::Procedimiento_llamadoContext *ctx) = 0;
  virtual void exitProcedimiento_llamado(LogotecGramarParser::Procedimiento_llamadoContext *ctx) = 0;

  virtual void enterParametros_llamado(LogotecGramarParser::Parametros_llamadoContext *ctx) = 0;
  virtual void exitParametros_llamado(LogotecGramarParser::Parametros_llamadoContext *ctx) = 0;

  virtual void enterLista_parametros_llamado(LogotecGramarParser::Lista_parametros_llamadoContext *ctx) = 0;
  virtual void exitLista_parametros_llamado(LogotecGramarParser::Lista_parametros_llamadoContext *ctx) = 0;

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

  virtual void enterExp_logica(LogotecGramarParser::Exp_logicaContext *ctx) = 0;
  virtual void exitExp_logica(LogotecGramarParser::Exp_logicaContext *ctx) = 0;

  virtual void enterExp_logica_operaciones(LogotecGramarParser::Exp_logica_operacionesContext *ctx) = 0;
  virtual void exitExp_logica_operaciones(LogotecGramarParser::Exp_logica_operacionesContext *ctx) = 0;

  virtual void enterOperacionLogicaSimple(LogotecGramarParser::OperacionLogicaSimpleContext *ctx) = 0;
  virtual void exitOperacionLogicaSimple(LogotecGramarParser::OperacionLogicaSimpleContext *ctx) = 0;

  virtual void enterOperacionLogicaCompleja(LogotecGramarParser::OperacionLogicaComplejaContext *ctx) = 0;
  virtual void exitOperacionLogicaCompleja(LogotecGramarParser::OperacionLogicaComplejaContext *ctx) = 0;

  virtual void enterExpLogicaParentesis(LogotecGramarParser::ExpLogicaParentesisContext *ctx) = 0;
  virtual void exitExpLogicaParentesis(LogotecGramarParser::ExpLogicaParentesisContext *ctx) = 0;

  virtual void enterExpLogicaSimple(LogotecGramarParser::ExpLogicaSimpleContext *ctx) = 0;
  virtual void exitExpLogicaSimple(LogotecGramarParser::ExpLogicaSimpleContext *ctx) = 0;

  virtual void enterNegacion(LogotecGramarParser::NegacionContext *ctx) = 0;
  virtual void exitNegacion(LogotecGramarParser::NegacionContext *ctx) = 0;

  virtual void enterAndor(LogotecGramarParser::AndorContext *ctx) = 0;
  virtual void exitAndor(LogotecGramarParser::AndorContext *ctx) = 0;

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

  virtual void enterColores_variable(LogotecGramarParser::Colores_variableContext *ctx) = 0;
  virtual void exitColores_variable(LogotecGramarParser::Colores_variableContext *ctx) = 0;

  virtual void enterColores(LogotecGramarParser::ColoresContext *ctx) = 0;
  virtual void exitColores(LogotecGramarParser::ColoresContext *ctx) = 0;

  virtual void enterExpr(LogotecGramarParser::ExprContext *ctx) = 0;
  virtual void exitExpr(LogotecGramarParser::ExprContext *ctx) = 0;

  virtual void enterExp_integer(LogotecGramarParser::Exp_integerContext *ctx) = 0;
  virtual void exitExp_integer(LogotecGramarParser::Exp_integerContext *ctx) = 0;

  virtual void enterExp_aritmetica(LogotecGramarParser::Exp_aritmeticaContext *ctx) = 0;
  virtual void exitExp_aritmetica(LogotecGramarParser::Exp_aritmeticaContext *ctx) = 0;

  virtual void enterExp_matematica(LogotecGramarParser::Exp_matematicaContext *ctx) = 0;
  virtual void exitExp_matematica(LogotecGramarParser::Exp_matematicaContext *ctx) = 0;

  virtual void enterExpr_mat_aritm(LogotecGramarParser::Expr_mat_aritmContext *ctx) = 0;
  virtual void exitExpr_mat_aritm(LogotecGramarParser::Expr_mat_aritmContext *ctx) = 0;

  virtual void enterLogico(LogotecGramarParser::LogicoContext *ctx) = 0;
  virtual void exitLogico(LogotecGramarParser::LogicoContext *ctx) = 0;

  virtual void enterValor(LogotecGramarParser::ValorContext *ctx) = 0;
  virtual void exitValor(LogotecGramarParser::ValorContext *ctx) = 0;

  virtual void enterOperador_logico(LogotecGramarParser::Operador_logicoContext *ctx) = 0;
  virtual void exitOperador_logico(LogotecGramarParser::Operador_logicoContext *ctx) = 0;

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

