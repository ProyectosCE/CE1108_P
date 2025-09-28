
// Generated from C:/Users/amv22/Dev/repos/COMPILADORES/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LogotecGramarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, HAZ = 3, INIC = 4, INC = 5, TODO = 6, AVANZA = 7, 
    AV = 8, TRUE = 9, FALSE = 10, NUMBER = 11, CADENA_TEXTO = 12, ID = 13, 
    NEWLINE = 14, WS = 15, LINE_COMMENT = 16, PROGRAM = 17, VAR = 18, PRINTLN = 19, 
    PLUS = 20, MINUS = 21, MULT = 22, DIV = 23, IF = 24, ELSE = 25, WHILE = 26, 
    FOR = 27, AND = 28, OR = 29, NOT = 30, GT = 31, LT = 32, GEQ = 33, LEQ = 34, 
    EQ = 35, NEQ = 36, ASSIGN = 37, BRACKET_OPEN = 38, BRACKET_CLOSE = 39, 
    PAR_OPEN = 40, PAR_CLOSE = 41, SEMICOLON = 42
  };

  enum {
    RulePrograma = 0, RuleInstruccion = 1, RuleComentario_linea = 2, RuleComentario = 3, 
    RuleHaz_variable = 4, RuleInic_variable = 5, RuleInc_variable = 6, RuleTodo_variable = 7, 
    RuleAvanza_variable = 8, RuleExpr = 9, RuleLogico = 10, RuleValor = 11, 
    RuleOperador = 12
  };

  explicit LogotecGramarParser(antlr4::TokenStream *input);

  LogotecGramarParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~LogotecGramarParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramaContext;
  class InstruccionContext;
  class Comentario_lineaContext;
  class ComentarioContext;
  class Haz_variableContext;
  class Inic_variableContext;
  class Inc_variableContext;
  class Todo_variableContext;
  class Avanza_variableContext;
  class ExprContext;
  class LogicoContext;
  class ValorContext;
  class OperadorContext; 

  class  ProgramaContext : public antlr4::ParserRuleContext {
  public:
    ProgramaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramaContext* programa();

  class  InstruccionContext : public antlr4::ParserRuleContext {
  public:
    InstruccionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Haz_variableContext *haz_variable();
    Comentario_lineaContext *comentario_linea();
    Inic_variableContext *inic_variable();
    Inc_variableContext *inc_variable();
    Avanza_variableContext *avanza_variable();
    Todo_variableContext *todo_variable();
    ComentarioContext *comentario();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstruccionContext* instruccion();

  class  Comentario_lineaContext : public antlr4::ParserRuleContext {
  public:
    Comentario_lineaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LINE_COMMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comentario_lineaContext* comentario_linea();

  class  ComentarioContext : public antlr4::ParserRuleContext {
  public:
    ComentarioContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LINE_COMMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComentarioContext* comentario();

  class  Haz_variableContext : public antlr4::ParserRuleContext {
  public:
    LogotecGramarParser::ValorContext *v = nullptr;
    Haz_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAZ();
    antlr4::tree::TerminalNode *ID();
    ValorContext *valor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Haz_variableContext* haz_variable();

  class  Inic_variableContext : public antlr4::ParserRuleContext {
  public:
    LogotecGramarParser::ExprContext *e = nullptr;
    Inic_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INIC();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inic_variableContext* inic_variable();

  class  Inc_variableContext : public antlr4::ParserRuleContext {
  public:
    Inc_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INC();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inc_variableContext* inc_variable();

  class  Todo_variableContext : public antlr4::ParserRuleContext {
  public:
    Todo_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TODO();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Todo_variableContext* todo_variable();

  class  Avanza_variableContext : public antlr4::ParserRuleContext {
  public:
    LogotecGramarParser::ExprContext *e = nullptr;
    Avanza_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AVANZA();
    antlr4::tree::TerminalNode *AV();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Avanza_variableContext* avanza_variable();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    LogotecGramarParser::ExprContext *e1 = nullptr;
    LogotecGramarParser::ExprContext *e2 = nullptr;
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    LogicoContext *logico();
    antlr4::tree::TerminalNode *CADENA_TEXTO();
    antlr4::tree::TerminalNode *ID();
    OperadorContext *operador();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  LogicoContext : public antlr4::ParserRuleContext {
  public:
    LogicoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicoContext* logico();

  class  ValorContext : public antlr4::ParserRuleContext {
  public:
    ValorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    LogicoContext *logico();
    antlr4::tree::TerminalNode *CADENA_TEXTO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValorContext* valor();

  class  OperadorContext : public antlr4::ParserRuleContext {
  public:
    OperadorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *MULT();
    antlr4::tree::TerminalNode *DIV();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperadorContext* operador();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

