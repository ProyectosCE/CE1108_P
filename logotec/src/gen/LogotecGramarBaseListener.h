
// Generated from C:/Users/amv22/Dev/repos/COMPILADORES/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "LogotecGramarListener.h"


/**
 * This class provides an empty implementation of LogotecGramarListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  LogotecGramarBaseListener : public LogotecGramarListener {
public:

  virtual void enterPrograma(LogotecGramarParser::ProgramaContext * /*ctx*/) override { }
  virtual void exitPrograma(LogotecGramarParser::ProgramaContext * /*ctx*/) override { }

  virtual void enterInstruccion(LogotecGramarParser::InstruccionContext * /*ctx*/) override { }
  virtual void exitInstruccion(LogotecGramarParser::InstruccionContext * /*ctx*/) override { }

  virtual void enterComentario_linea(LogotecGramarParser::Comentario_lineaContext * /*ctx*/) override { }
  virtual void exitComentario_linea(LogotecGramarParser::Comentario_lineaContext * /*ctx*/) override { }

  virtual void enterComentario(LogotecGramarParser::ComentarioContext * /*ctx*/) override { }
  virtual void exitComentario(LogotecGramarParser::ComentarioContext * /*ctx*/) override { }

  virtual void enterHaz_variable(LogotecGramarParser::Haz_variableContext * /*ctx*/) override { }
  virtual void exitHaz_variable(LogotecGramarParser::Haz_variableContext * /*ctx*/) override { }

  virtual void enterInic_variable(LogotecGramarParser::Inic_variableContext * /*ctx*/) override { }
  virtual void exitInic_variable(LogotecGramarParser::Inic_variableContext * /*ctx*/) override { }

  virtual void enterInc_variable(LogotecGramarParser::Inc_variableContext * /*ctx*/) override { }
  virtual void exitInc_variable(LogotecGramarParser::Inc_variableContext * /*ctx*/) override { }

  virtual void enterTodo_variable(LogotecGramarParser::Todo_variableContext * /*ctx*/) override { }
  virtual void exitTodo_variable(LogotecGramarParser::Todo_variableContext * /*ctx*/) override { }

  virtual void enterAvanza_variable(LogotecGramarParser::Avanza_variableContext * /*ctx*/) override { }
  virtual void exitAvanza_variable(LogotecGramarParser::Avanza_variableContext * /*ctx*/) override { }

  virtual void enterExpr(LogotecGramarParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(LogotecGramarParser::ExprContext * /*ctx*/) override { }

  virtual void enterLogico(LogotecGramarParser::LogicoContext * /*ctx*/) override { }
  virtual void exitLogico(LogotecGramarParser::LogicoContext * /*ctx*/) override { }

  virtual void enterValor(LogotecGramarParser::ValorContext * /*ctx*/) override { }
  virtual void exitValor(LogotecGramarParser::ValorContext * /*ctx*/) override { }

  virtual void enterOperador(LogotecGramarParser::OperadorContext * /*ctx*/) override { }
  virtual void exitOperador(LogotecGramarParser::OperadorContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

