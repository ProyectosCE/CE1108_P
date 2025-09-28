
// Generated from C:/Users/amv22/Dev/repos/COMPILADORES/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LogotecGramarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, HAZ = 3, INIC = 4, INC = 5, TRUE = 6, FALSE = 7, 
    NUMBER = 8, CADENA_TEXTO = 9, ID = 10, NEWLINE = 11, WS = 12, LINE_COMMENT = 13, 
    PROGRAM = 14, VAR = 15, PRINTLN = 16, PLUS = 17, MINUS = 18, MULT = 19, 
    DIV = 20, IF = 21, ELSE = 22, WHILE = 23, FOR = 24, AND = 25, OR = 26, 
    NOT = 27, GT = 28, LT = 29, GEQ = 30, LEQ = 31, EQ = 32, NEQ = 33, ASSIGN = 34, 
    BRACKET_OPEN = 35, BRACKET_CLOSE = 36, PAR_OPEN = 37, PAR_CLOSE = 38, 
    SEMICOLON = 39
  };

  enum {
    RulePrograma = 0, RuleInstruccion = 1, RuleHaz_variable = 2, RuleInic_variable = 3, 
    RuleInc_variable = 4, RuleExpr = 5, RuleLogico = 6, RuleValor = 7, RuleOperador = 8
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
  class Haz_variableContext;
  class Inic_variableContext;
  class Inc_variableContext;
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
    Inic_variableContext *inic_variable();
    Inc_variableContext *inc_variable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstruccionContext* instruccion();

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

