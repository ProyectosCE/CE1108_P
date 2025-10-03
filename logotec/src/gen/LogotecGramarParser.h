
// Generated from C:/Users/amv22/Dev/repos/COMPILADORES/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LogotecGramarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, HAZ = 4, INIC = 5, INC = 6, AVANZA = 7, 
    AV = 8, RETROCEDE = 9, RE = 10, GIRA_DERECHA = 11, GD = 12, GIRA_IZQUIERDA = 13, 
    GI = 14, OCULTAR_TORTUGA = 15, OT = 16, PONPOS = 17, PONXY = 18, PONRUMBO = 19, 
    PONX = 20, PONY = 21, BAJALAPIZ = 22, BL = 23, SUBELAPIZ = 24, SL = 25, 
    AZUL = 26, NEGRO = 27, ROJO = 28, PONCOLORLAPIZ = 29, PCL = 30, CENTRO = 31, 
    ESPERAR = 32, TRUE = 33, FALSE = 34, NUMBER = 35, CADENA_TEXTO = 36, 
    PROGRAM = 37, VAR = 38, PRINTLN = 39, PLUS = 40, MINUS = 41, MULT = 42, 
    DIV = 43, IF = 44, ELSE = 45, WHILE = 46, FOR = 47, AND = 48, OR = 49, 
    NOT = 50, GT = 51, LT = 52, GEQ = 53, LEQ = 54, EQ = 55, NEQ = 56, ASSIGN = 57, 
    BRACKET_OPEN = 58, BRACKET_CLOSE = 59, PAR_OPEN = 60, PAR_CLOSE = 61, 
    SEMICOLON = 62, REPITE = 63, SI = 64, HAZ_HASTA = 65, HASTA = 66, HAZ_MIENTRAS = 67, 
    MIENTRAS = 68, IGUALESQ = 69, Y = 70, O = 71, MAYORQUEQ = 72, MENORQUEQ = 73, 
    DIFERENCIA = 74, AZAR = 75, PRODUCTO = 76, POTENCIA = 77, DIVISION = 78, 
    SUMA = 79, RESTA = 80, PARA = 81, FIN = 82, EJECUTA = 83, ID = 84, NEWLINE = 85, 
    WS = 86, LINE_COMMENT = 87
  };

  enum {
    RulePrograma = 0, RuleProcedimiento = 1, RuleParametros = 2, RuleLinea_instrucciones = 3, 
    RuleLista_parametros = 4, RuleInstruccion = 5, RuleComentario_linea = 6, 
    RuleComentario = 7, RuleHaz_variable = 8, RuleInic_variable = 9, RuleInc_variable = 10, 
    RuleAvanza_variable = 11, RuleRetrocede_variable = 12, RuleGira_derecha_variable = 13, 
    RuleGira_izquierda_variable = 14, RuleOcultar_tortuga_variable = 15, 
    RulePonpos_variable = 16, RulePonxy_variable = 17, RulePonrumbo_variable = 18, 
    RulePonx_variable = 19, RulePony_variable = 20, RuleBajalapiz_variable = 21, 
    RuleSubelapiz_variable = 22, RulePoncolorlapiz_variable = 23, RuleCentro_variable = 24, 
    RuleEsperar_variable = 25, RuleEjecuta_variable = 26, RuleRepite_variable = 27, 
    RuleSi_variable = 28, RuleSi_sino_variable = 29, RuleHaz_hasta_variable = 30, 
    RuleHasta_variable = 31, RuleHaz_mientras_variable = 32, RuleMientras_variable = 33, 
    RuleIguales_variable = 34, RuleY_variable = 35, RuleO_variable = 36, 
    RuleMayorque_variable = 37, RuleMenorque_variable = 38, RuleColores = 39, 
    RuleExpr = 40, RuleLogico = 41, RuleValor = 42, RuleOperador = 43, RuleDiferencia_expr = 44, 
    RuleAzar_expr = 45, RuleProducto_expr = 46, RulePotencia_expr = 47, 
    RuleDivision_expr = 48, RuleSuma_expr = 49
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
  class ProcedimientoContext;
  class ParametrosContext;
  class Linea_instruccionesContext;
  class Lista_parametrosContext;
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
  class Ejecuta_variableContext;
  class Repite_variableContext;
  class Si_variableContext;
  class Si_sino_variableContext;
  class Haz_hasta_variableContext;
  class Hasta_variableContext;
  class Haz_mientras_variableContext;
  class Mientras_variableContext;
  class Iguales_variableContext;
  class Y_variableContext;
  class O_variableContext;
  class Mayorque_variableContext;
  class Menorque_variableContext;
  class ColoresContext;
  class ExprContext;
  class LogicoContext;
  class ValorContext;
  class OperadorContext;
  class Diferencia_exprContext;
  class Azar_exprContext;
  class Producto_exprContext;
  class Potencia_exprContext;
  class Division_exprContext;
  class Suma_exprContext; 

  class  ProgramaContext : public antlr4::ParserRuleContext {
  public:
    ProgramaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<Linea_instruccionesContext *> linea_instrucciones();
    Linea_instruccionesContext* linea_instrucciones(size_t i);
    std::vector<ProcedimientoContext *> procedimiento();
    ProcedimientoContext* procedimiento(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramaContext* programa();

  class  ProcedimientoContext : public antlr4::ParserRuleContext {
  public:
    ProcedimientoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARA();
    antlr4::tree::TerminalNode *ID();
    ParametrosContext *parametros();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    antlr4::tree::TerminalNode *FIN();
    std::vector<Linea_instruccionesContext *> linea_instrucciones();
    Linea_instruccionesContext* linea_instrucciones(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedimientoContext* procedimiento();

  class  ParametrosContext : public antlr4::ParserRuleContext {
  public:
    ParametrosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Lista_parametrosContext *lista_parametros();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametrosContext* parametros();

  class  Linea_instruccionesContext : public antlr4::ParserRuleContext {
  public:
    Linea_instruccionesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Linea_instruccionesContext* linea_instrucciones();

  class  Lista_parametrosContext : public antlr4::ParserRuleContext {
  public:
    Lista_parametrosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lista_parametrosContext* lista_parametros();

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
    Ejecuta_variableContext *ejecuta_variable();
    Repite_variableContext *repite_variable();
    Si_sino_variableContext *si_sino_variable();
    Si_variableContext *si_variable();
    Haz_hasta_variableContext *haz_hasta_variable();
    Hasta_variableContext *hasta_variable();
    Haz_mientras_variableContext *haz_mientras_variable();
    Mientras_variableContext *mientras_variable();
    Iguales_variableContext *iguales_variable();
    Y_variableContext *y_variable();
    O_variableContext *o_variable();
    Mayorque_variableContext *mayorque_variable();
    Menorque_variableContext *menorque_variable();
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

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Poncolorlapiz_variableContext* poncolorlapiz_variable();

  class  Centro_variableContext : public antlr4::ParserRuleContext {
  public:
    Centro_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CENTRO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Esperar_variableContext* esperar_variable();

  class  Ejecuta_variableContext : public antlr4::ParserRuleContext {
  public:
    Ejecuta_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EJECUTA();
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ejecuta_variableContext* ejecuta_variable();

  class  Repite_variableContext : public antlr4::ParserRuleContext {
  public:
    Repite_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPITE();
    antlr4::tree::TerminalNode *NUMBER();
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Repite_variableContext* repite_variable();

  class  Si_variableContext : public antlr4::ParserRuleContext {
  public:
    Si_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SI();
    antlr4::tree::TerminalNode *PAR_OPEN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *PAR_CLOSE();
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Si_variableContext* si_variable();

  class  Si_sino_variableContext : public antlr4::ParserRuleContext {
  public:
    Si_sino_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SI();
    antlr4::tree::TerminalNode *PAR_OPEN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *PAR_CLOSE();
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Si_sino_variableContext* si_sino_variable();

  class  Haz_hasta_variableContext : public antlr4::ParserRuleContext {
  public:
    Haz_hasta_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAZ_HASTA();
    antlr4::tree::TerminalNode *PAR_OPEN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *PAR_CLOSE();
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Haz_hasta_variableContext* haz_hasta_variable();

  class  Hasta_variableContext : public antlr4::ParserRuleContext {
  public:
    Hasta_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASTA();
    antlr4::tree::TerminalNode *PAR_OPEN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *PAR_CLOSE();
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hasta_variableContext* hasta_variable();

  class  Haz_mientras_variableContext : public antlr4::ParserRuleContext {
  public:
    Haz_mientras_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAZ_MIENTRAS();
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Haz_mientras_variableContext* haz_mientras_variable();

  class  Mientras_variableContext : public antlr4::ParserRuleContext {
  public:
    Mientras_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MIENTRAS();
    antlr4::tree::TerminalNode *PAR_OPEN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *PAR_CLOSE();
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mientras_variableContext* mientras_variable();

  class  Iguales_variableContext : public antlr4::ParserRuleContext {
  public:
    Iguales_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IGUALESQ();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Iguales_variableContext* iguales_variable();

  class  Y_variableContext : public antlr4::ParserRuleContext {
  public:
    Y_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Y();
    std::vector<antlr4::tree::TerminalNode *> PAR_OPEN();
    antlr4::tree::TerminalNode* PAR_OPEN(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PAR_CLOSE();
    antlr4::tree::TerminalNode* PAR_CLOSE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Y_variableContext* y_variable();

  class  O_variableContext : public antlr4::ParserRuleContext {
  public:
    O_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *O();
    std::vector<antlr4::tree::TerminalNode *> PAR_OPEN();
    antlr4::tree::TerminalNode* PAR_OPEN(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PAR_CLOSE();
    antlr4::tree::TerminalNode* PAR_CLOSE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  O_variableContext* o_variable();

  class  Mayorque_variableContext : public antlr4::ParserRuleContext {
  public:
    Mayorque_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAYORQUEQ();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mayorque_variableContext* mayorque_variable();

  class  Menorque_variableContext : public antlr4::ParserRuleContext {
  public:
    Menorque_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MENORQUEQ();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Menorque_variableContext* menorque_variable();

  class  ColoresContext : public antlr4::ParserRuleContext {
  public:
    ColoresContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AZUL();
    antlr4::tree::TerminalNode *NEGRO();
    antlr4::tree::TerminalNode *ROJO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    Diferencia_exprContext *diferencia_expr();
    Azar_exprContext *azar_expr();
    Producto_exprContext *producto_expr();
    Potencia_exprContext *potencia_expr();
    Division_exprContext *division_expr();
    Suma_exprContext *suma_expr();
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

  class  Diferencia_exprContext : public antlr4::ParserRuleContext {
  public:
    Diferencia_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIFERENCIA();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Diferencia_exprContext* diferencia_expr();

  class  Azar_exprContext : public antlr4::ParserRuleContext {
  public:
    Azar_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AZAR();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Azar_exprContext* azar_expr();

  class  Producto_exprContext : public antlr4::ParserRuleContext {
  public:
    Producto_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRODUCTO();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Producto_exprContext* producto_expr();

  class  Potencia_exprContext : public antlr4::ParserRuleContext {
  public:
    Potencia_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POTENCIA();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Potencia_exprContext* potencia_expr();

  class  Division_exprContext : public antlr4::ParserRuleContext {
  public:
    Division_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIVISION();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Division_exprContext* division_expr();

  class  Suma_exprContext : public antlr4::ParserRuleContext {
  public:
    Suma_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUMA();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Suma_exprContext* suma_expr();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

