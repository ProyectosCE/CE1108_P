
// Generated from /home/josc/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  LogotecGramarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, HAZ = 3, INIC = 4, INC = 5, AVANZA = 6, AV = 7, 
    RETROCEDE = 8, RE = 9, GIRA_DERECHA = 10, GD = 11, GIRA_IZQUIERDA = 12, 
    GI = 13, OCULTAR_TORTUGA = 14, OT = 15, PONPOS = 16, PONXY = 17, PONRUMBO = 18, 
    PONX = 19, PONY = 20, BAJALAPIZ = 21, BL = 22, SUBELAPIZ = 23, SL = 24, 
    AZUL = 25, NEGRO = 26, ROJO = 27, PONCOLORLAPIZ = 28, PCL = 29, CENTRO = 30, 
    ESPERAR = 31, TRUE = 32, FALSE = 33, NUMBER = 34, CADENA_TEXTO = 35, 
    ID = 36, NEWLINE = 37, WS = 38, LINE_COMMENT = 39, PROGRAM = 40, VAR = 41, 
    PRINTLN = 42, PLUS = 43, MINUS = 44, MULT = 45, DIV = 46, IF = 47, ELSE = 48, 
    WHILE = 49, FOR = 50, AND = 51, OR = 52, NOT = 53, GT = 54, LT = 55, 
    GEQ = 56, LEQ = 57, EQ = 58, NEQ = 59, ASSIGN = 60, BRACKET_OPEN = 61, 
    BRACKET_CLOSE = 62, PAR_OPEN = 63, PAR_CLOSE = 64, SEMICOLON = 65
  };

  enum {
    RulePrograma = 0, RuleInstruccion = 1, RuleComentario_linea = 2, RuleComentario = 3, 
    RuleHaz_variable = 4, RuleInic_variable = 5, RuleInc_variable = 6, RuleAvanza_variable = 7, 
    RuleRetrocede_variable = 8, RuleGira_derecha_variable = 9, RuleGira_izquierda_variable = 10, 
    RuleOcultar_tortuga_variable = 11, RulePonpos_variable = 12, RulePonxy_variable = 13, 
    RulePonrumbo_variable = 14, RulePonx_variable = 15, RulePony_variable = 16, 
    RuleBajalapiz_variable = 17, RuleSubelapiz_variable = 18, RulePoncolorlapiz_variable = 19, 
    RuleCentro_variable = 20, RuleEsperar_variable = 21, RuleColores = 22, 
    RuleExpr = 23, RuleLogico = 24, RuleValor = 25, RuleOperador = 26
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
  class Avanza_variableContext;
  class Retrocede_variableContext;
  class Gira_derecha_variableContext;
  class Gira_izquierda_variableContext;
  class Ocultar_tortuga_variableContext;
  class Ponpos_variableContext;
  class Ponxy_variableContext;
  class Ponrumbo_variableContext;
  class Ponx_variableContext;
  class Pony_variableContext;
  class Bajalapiz_variableContext;
  class Subelapiz_variableContext;
  class Poncolorlapiz_variableContext;
  class Centro_variableContext;
  class Esperar_variableContext;
  class ColoresContext;
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
    Retrocede_variableContext *retrocede_variable();
    Gira_derecha_variableContext *gira_derecha_variable();
    Gira_izquierda_variableContext *gira_izquierda_variable();
    Ocultar_tortuga_variableContext *ocultar_tortuga_variable();
    Ponpos_variableContext *ponpos_variable();
    Ponxy_variableContext *ponxy_variable();
    Ponrumbo_variableContext *ponrumbo_variable();
    Ponx_variableContext *ponx_variable();
    Pony_variableContext *pony_variable();
    Bajalapiz_variableContext *bajalapiz_variable();
    Subelapiz_variableContext *subelapiz_variable();
    Poncolorlapiz_variableContext *poncolorlapiz_variable();
    Centro_variableContext *centro_variable();
    Esperar_variableContext *esperar_variable();
    ComentarioContext *comentario();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InstruccionContext* instruccion();

  class  Comentario_lineaContext : public antlr4::ParserRuleContext {
  public:
    Comentario_lineaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LINE_COMMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Comentario_lineaContext* comentario_linea();

  class  ComentarioContext : public antlr4::ParserRuleContext {
  public:
    ComentarioContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LINE_COMMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  Inc_variableContext* inc_variable();

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
   
  };

  Avanza_variableContext* avanza_variable();

  class  Retrocede_variableContext : public antlr4::ParserRuleContext {
  public:
    LogotecGramarParser::ExprContext *e = nullptr;
    Retrocede_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETROCEDE();
    antlr4::tree::TerminalNode *RE();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Retrocede_variableContext* retrocede_variable();

  class  Gira_derecha_variableContext : public antlr4::ParserRuleContext {
  public:
    LogotecGramarParser::ExprContext *e = nullptr;
    Gira_derecha_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GIRA_DERECHA();
    antlr4::tree::TerminalNode *GD();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Gira_derecha_variableContext* gira_derecha_variable();

  class  Gira_izquierda_variableContext : public antlr4::ParserRuleContext {
  public:
    LogotecGramarParser::ExprContext *e = nullptr;
    Gira_izquierda_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GIRA_IZQUIERDA();
    antlr4::tree::TerminalNode *GI();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Gira_izquierda_variableContext* gira_izquierda_variable();

  class  Ocultar_tortuga_variableContext : public antlr4::ParserRuleContext {
  public:
    Ocultar_tortuga_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OCULTAR_TORTUGA();
    antlr4::tree::TerminalNode *OT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ocultar_tortuga_variableContext* ocultar_tortuga_variable();

  class  Ponpos_variableContext : public antlr4::ParserRuleContext {
  public:
    Ponpos_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PONPOS();
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ponpos_variableContext* ponpos_variable();

  class  Ponxy_variableContext : public antlr4::ParserRuleContext {
  public:
    Ponxy_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PONXY();
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ponxy_variableContext* ponxy_variable();

  class  Ponrumbo_variableContext : public antlr4::ParserRuleContext {
  public:
    Ponrumbo_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PONRUMBO();
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ponrumbo_variableContext* ponrumbo_variable();

  class  Ponx_variableContext : public antlr4::ParserRuleContext {
  public:
    Ponx_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PONX();
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ponx_variableContext* ponx_variable();

  class  Pony_variableContext : public antlr4::ParserRuleContext {
  public:
    Pony_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PONY();
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pony_variableContext* pony_variable();

  class  Bajalapiz_variableContext : public antlr4::ParserRuleContext {
  public:
    Bajalapiz_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BAJALAPIZ();
    antlr4::tree::TerminalNode *BL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bajalapiz_variableContext* bajalapiz_variable();

  class  Subelapiz_variableContext : public antlr4::ParserRuleContext {
  public:
    Subelapiz_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBELAPIZ();
    antlr4::tree::TerminalNode *SL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Subelapiz_variableContext* subelapiz_variable();

  class  Poncolorlapiz_variableContext : public antlr4::ParserRuleContext {
  public:
    Poncolorlapiz_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColoresContext *colores();
    antlr4::tree::TerminalNode *PONCOLORLAPIZ();
    antlr4::tree::TerminalNode *PCL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Poncolorlapiz_variableContext* poncolorlapiz_variable();

  class  Centro_variableContext : public antlr4::ParserRuleContext {
  public:
    Centro_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CENTRO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Centro_variableContext* centro_variable();

  class  Esperar_variableContext : public antlr4::ParserRuleContext {
  public:
    Esperar_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ESPERAR();
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Esperar_variableContext* esperar_variable();

  class  ColoresContext : public antlr4::ParserRuleContext {
  public:
    ColoresContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AZUL();
    antlr4::tree::TerminalNode *NEGRO();
    antlr4::tree::TerminalNode *ROJO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ColoresContext* colores();

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

