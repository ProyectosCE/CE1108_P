
// Generated from C:/Users/amv22/Dev/repos/COMPILADORES/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LogotecGramarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, HAZ = 4, INIC = 5, INC = 6, AVANZA = 7, 
    RETROCEDE = 8, GIRA_DERECHA = 9, GIRA_IZQUIERDA = 10, OCULTAR_TORTUGA = 11, 
    PONPOS = 12, PONXY = 13, PONRUMBO = 14, RUMBO = 15, MUESTRA = 16, PONX = 17, 
    PONY = 18, BAJALAPIZ = 19, SUBELAPIZ = 20, AZUL = 21, NEGRO = 22, ROJO = 23, 
    PONCOLORLAPIZ = 24, PCL = 25, CENTRO = 26, ESPERAR = 27, TRUE = 28, 
    FALSE = 29, NUMBER = 30, CADENA_TEXTO = 31, PLUS = 32, MINUS = 33, MULT = 34, 
    DIV = 35, IF = 36, ELSE = 37, WHILE = 38, FOR = 39, AND = 40, OR = 41, 
    NOT = 42, GT = 43, LT = 44, GEQ = 45, LEQ = 46, EQ = 47, NEQ = 48, ASSIGN = 49, 
    BRACKET_OPEN = 50, BRACKET_CLOSE = 51, PAR_OPEN = 52, PAR_CLOSE = 53, 
    SEMICOLON = 54, REPITE = 55, SI = 56, HAZ_HASTA = 57, HASTA = 58, HAZ_MIENTRAS = 59, 
    MIENTRAS = 60, IGUALESQ = 61, Y = 62, O = 63, MAYORQUEQ = 64, MENORQUEQ = 65, 
    DIFERENCIA = 66, AZAR = 67, PRODUCTO = 68, POTENCIA = 69, DIVISION = 70, 
    SUMA = 71, RESTA = 72, PARA = 73, FIN = 74, SALIDA = 75, EJECUTA = 76, 
    ID = 77, NEWLINE = 78, WS = 79, LINE_COMMENT = 80
  };

  enum {
    RulePrograma = 0, RuleProcedimiento = 1, RuleParametros = 2, RuleLinea_instrucciones = 3, 
    RuleLista_parametros = 4, RuleInstruccion = 5, RuleSalida = 6, RuleMuestra = 7, 
    RuleRumbo_get = 8, RuleComentario_linea = 9, RuleComentario = 10, RuleProcedimiento_llamado = 11, 
    RuleParametros_llamado = 12, RuleLista_parametros_llamado = 13, RuleHaz_variable = 14, 
    RuleInic_variable = 15, RuleInc_variable = 16, RuleAvanza_variable = 17, 
    RuleRetrocede_variable = 18, RuleGira_derecha_variable = 19, RuleGira_izquierda_variable = 20, 
    RuleOcultar_tortuga_variable = 21, RulePonpos_variable = 22, RulePonxy_variable = 23, 
    RulePonrumbo_variable = 24, RulePonx_variable = 25, RulePony_variable = 26, 
    RuleBajalapiz_variable = 27, RuleSubelapiz_variable = 28, RulePoncolorlapiz_variable = 29, 
    RuleCentro_variable = 30, RuleEsperar_variable = 31, RuleEjecuta_variable = 32, 
    RuleRepite_variable = 33, RuleExp_logica = 34, RuleExp_logica_operaciones = 35, 
    RuleExp_logicas_expr = 36, RuleAndor = 37, RuleSi_variable = 38, RuleSi_sino_variable = 39, 
    RuleHaz_hasta_variable = 40, RuleHasta_variable = 41, RuleHaz_mientras_variable = 42, 
    RuleMientras_variable = 43, RuleIguales_variable = 44, RuleY_variable = 45, 
    RuleO_variable = 46, RuleMayorque_variable = 47, RuleMenorque_variable = 48, 
    RuleColores_variable = 49, RuleColores = 50, RuleExpr = 51, RuleExp_integer = 52, 
    RuleExp_aritmetica = 53, RuleExp_matematica = 54, RuleExpr_mat_aritm = 55, 
    RuleLogico = 56, RuleValor = 57, RuleOperador_logico = 58, RuleOperador = 59, 
    RuleDiferencia_expr = 60, RuleAzar_expr = 61, RuleProducto_expr = 62, 
    RulePotencia_expr = 63, RuleDivision_expr = 64, RuleSuma_expr = 65
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
  class SalidaContext;
  class MuestraContext;
  class Rumbo_getContext;
  class Comentario_lineaContext;
  class ComentarioContext;
  class Procedimiento_llamadoContext;
  class Parametros_llamadoContext;
  class Lista_parametros_llamadoContext;
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
  class Exp_logicaContext;
  class Exp_logica_operacionesContext;
  class Exp_logicas_exprContext;
  class AndorContext;
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
  class Colores_variableContext;
  class ColoresContext;
  class ExprContext;
  class Exp_integerContext;
  class Exp_aritmeticaContext;
  class Exp_matematicaContext;
  class Expr_mat_aritmContext;
  class LogicoContext;
  class ValorContext;
  class Operador_logicoContext;
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
    ComentarioContext *comentario();
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
    antlr4::tree::TerminalNode *FIN();
    antlr4::tree::TerminalNode *SEMICOLON();
    ParametrosContext *parametros();
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
    std::vector<Comentario_lineaContext *> comentario_linea();
    Comentario_lineaContext* comentario_linea(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);

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
    Procedimiento_llamadoContext *procedimiento_llamado();
    Rumbo_getContext *rumbo_get();
    MuestraContext *muestra();
    SalidaContext *salida();
    Comentario_lineaContext *comentario_linea();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstruccionContext* instruccion();

  class  SalidaContext : public antlr4::ParserRuleContext {
  public:
    SalidaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SALIDA();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SalidaContext* salida();

  class  MuestraContext : public antlr4::ParserRuleContext {
  public:
    MuestraContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUESTRA();
    ExprContext *expr();
    Rumbo_getContext *rumbo_get();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MuestraContext* muestra();

  class  Rumbo_getContext : public antlr4::ParserRuleContext {
  public:
    Rumbo_getContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RUMBO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rumbo_getContext* rumbo_get();

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

  class  Procedimiento_llamadoContext : public antlr4::ParserRuleContext {
  public:
    Procedimiento_llamadoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Parametros_llamadoContext *parametros_llamado();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedimiento_llamadoContext* procedimiento_llamado();

  class  Parametros_llamadoContext : public antlr4::ParserRuleContext {
  public:
    Parametros_llamadoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Lista_parametros_llamadoContext *lista_parametros_llamado();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parametros_llamadoContext* parametros_llamado();

  class  Lista_parametros_llamadoContext : public antlr4::ParserRuleContext {
  public:
    Lista_parametros_llamadoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lista_parametros_llamadoContext* lista_parametros_llamado();

  class  Haz_variableContext : public antlr4::ParserRuleContext {
  public:
    LogotecGramarParser::ExprContext *e = nullptr;
    Haz_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAZ();
    antlr4::tree::TerminalNode *ID();
    ExprContext *expr();

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
    antlr4::tree::TerminalNode *ID();
    Expr_mat_aritmContext *expr_mat_aritm();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inc_variableContext* inc_variable();

  class  Avanza_variableContext : public antlr4::ParserRuleContext {
  public:
    LogotecGramarParser::Expr_mat_aritmContext *e = nullptr;
    Avanza_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr_mat_aritmContext *expr_mat_aritm();
    antlr4::tree::TerminalNode *AVANZA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Avanza_variableContext* avanza_variable();

  class  Retrocede_variableContext : public antlr4::ParserRuleContext {
  public:
    LogotecGramarParser::Expr_mat_aritmContext *e = nullptr;
    Retrocede_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr_mat_aritmContext *expr_mat_aritm();
    antlr4::tree::TerminalNode *RETROCEDE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Retrocede_variableContext* retrocede_variable();

  class  Gira_derecha_variableContext : public antlr4::ParserRuleContext {
  public:
    LogotecGramarParser::Expr_mat_aritmContext *e = nullptr;
    Gira_derecha_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr_mat_aritmContext *expr_mat_aritm();
    antlr4::tree::TerminalNode *GIRA_DERECHA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Gira_derecha_variableContext* gira_derecha_variable();

  class  Gira_izquierda_variableContext : public antlr4::ParserRuleContext {
  public:
    LogotecGramarParser::Expr_mat_aritmContext *e = nullptr;
    Gira_izquierda_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr_mat_aritmContext *expr_mat_aritm();
    antlr4::tree::TerminalNode *GIRA_IZQUIERDA();

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
    std::vector<Expr_mat_aritmContext *> expr_mat_aritm();
    Expr_mat_aritmContext* expr_mat_aritm(size_t i);

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
    std::vector<Expr_mat_aritmContext *> expr_mat_aritm();
    Expr_mat_aritmContext* expr_mat_aritm(size_t i);

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
    Expr_mat_aritmContext *expr_mat_aritm();

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
    Expr_mat_aritmContext *expr_mat_aritm();

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
    Expr_mat_aritmContext *expr_mat_aritm();

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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subelapiz_variableContext* subelapiz_variable();

  class  Poncolorlapiz_variableContext : public antlr4::ParserRuleContext {
  public:
    Poncolorlapiz_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PONCOLORLAPIZ();
    antlr4::tree::TerminalNode *PCL();
    Colores_variableContext *colores_variable();

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
    Exp_integerContext *exp_integer();

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
    LogotecGramarParser::Expr_mat_aritmContext *e = nullptr;
    Repite_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPITE();
    Expr_mat_aritmContext *expr_mat_aritm();
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Repite_variableContext* repite_variable();

  class  Exp_logicaContext : public antlr4::ParserRuleContext {
  public:
    Exp_logicaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Exp_logica_operacionesContext *exp_logica_operaciones();
    Exp_logicas_exprContext *exp_logicas_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exp_logicaContext* exp_logica();

  class  Exp_logica_operacionesContext : public antlr4::ParserRuleContext {
  public:
    Exp_logica_operacionesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Iguales_variableContext *iguales_variable();
    Y_variableContext *y_variable();
    O_variableContext *o_variable();
    Mayorque_variableContext *mayorque_variable();
    LogicoContext *logico();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *NUMBER();
    Exp_integerContext *exp_integer();
    antlr4::tree::TerminalNode *CADENA_TEXTO();
    Menorque_variableContext *menorque_variable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exp_logica_operacionesContext* exp_logica_operaciones();

  class  Exp_logicas_exprContext : public antlr4::ParserRuleContext {
  public:
    Exp_logicas_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Exp_logicas_exprContext() = default;
    void copyFrom(Exp_logicas_exprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OperacionLogicaSimpleContext : public Exp_logicas_exprContext {
  public:
    OperacionLogicaSimpleContext(Exp_logicas_exprContext *ctx);

    std::vector<Exp_logicas_exprContext *> exp_logicas_expr();
    Exp_logicas_exprContext* exp_logicas_expr(size_t i);
    Operador_logicoContext *operador_logico();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OperacionLogicaComplejaContext : public Exp_logicas_exprContext {
  public:
    OperacionLogicaComplejaContext(Exp_logicas_exprContext *ctx);

    std::vector<Exp_logicas_exprContext *> exp_logicas_expr();
    Exp_logicas_exprContext* exp_logicas_expr(size_t i);
    std::vector<AndorContext *> andor();
    AndorContext* andor(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExpLogicaParentesisContext : public Exp_logicas_exprContext {
  public:
    ExpLogicaParentesisContext(Exp_logicas_exprContext *ctx);

    antlr4::tree::TerminalNode *PAR_OPEN();
    Exp_logicas_exprContext *exp_logicas_expr();
    antlr4::tree::TerminalNode *PAR_CLOSE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExpLogicaSimpleContext : public Exp_logicas_exprContext {
  public:
    ExpLogicaSimpleContext(Exp_logicas_exprContext *ctx);

    Exp_logica_operacionesContext *exp_logica_operaciones();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NegacionContext : public Exp_logicas_exprContext {
  public:
    NegacionContext(Exp_logicas_exprContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    Exp_logicas_exprContext *exp_logicas_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Exp_logicas_exprContext* exp_logicas_expr();
  Exp_logicas_exprContext* exp_logicas_expr(int precedence);
  class  AndorContext : public antlr4::ParserRuleContext {
  public:
    AndorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AndorContext* andor();

  class  Si_variableContext : public antlr4::ParserRuleContext {
  public:
    Si_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SI();
    antlr4::tree::TerminalNode *PAR_OPEN();
    Exp_logicaContext *exp_logica();
    antlr4::tree::TerminalNode *PAR_CLOSE();
    antlr4::tree::TerminalNode *NEWLINE();
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
    Si_variableContext *si_variable();
    antlr4::tree::TerminalNode *NEWLINE();
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
    Exp_logicaContext *exp_logica();
    antlr4::tree::TerminalNode *PAR_CLOSE();
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);
    antlr4::tree::TerminalNode *NEWLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Haz_hasta_variableContext* haz_hasta_variable();

  class  Hasta_variableContext : public antlr4::ParserRuleContext {
  public:
    Hasta_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PAR_OPEN();
    Exp_logicaContext *exp_logica();
    antlr4::tree::TerminalNode *PAR_CLOSE();
    antlr4::tree::TerminalNode *HASTA();
    antlr4::tree::TerminalNode *HAZ_HASTA();
    antlr4::tree::TerminalNode *NEWLINE();
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
    antlr4::tree::TerminalNode *PAR_OPEN();
    Exp_logicaContext *exp_logica();
    antlr4::tree::TerminalNode *PAR_CLOSE();
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);
    antlr4::tree::TerminalNode *NEWLINE();

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
    Exp_logicaContext *exp_logica();
    antlr4::tree::TerminalNode *PAR_CLOSE();
    antlr4::tree::TerminalNode *NEWLINE();
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
    std::vector<Exp_logicaContext *> exp_logica();
    Exp_logicaContext* exp_logica(size_t i);

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
    std::vector<Exp_logicaContext *> exp_logica();
    Exp_logicaContext* exp_logica(size_t i);

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
    std::vector<Exp_logicaContext *> exp_logica();
    Exp_logicaContext* exp_logica(size_t i);

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
    std::vector<Expr_mat_aritmContext *> expr_mat_aritm();
    Expr_mat_aritmContext* expr_mat_aritm(size_t i);

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
    std::vector<Expr_mat_aritmContext *> expr_mat_aritm();
    Expr_mat_aritmContext* expr_mat_aritm(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Menorque_variableContext* menorque_variable();

  class  Colores_variableContext : public antlr4::ParserRuleContext {
  public:
    Colores_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColoresContext *colores();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Colores_variableContext* colores_variable();

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
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CADENA_TEXTO();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *NUMBER();
    Exp_integerContext *exp_integer();
    Exp_logicaContext *exp_logica();
    ColoresContext *colores();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  Exp_integerContext : public antlr4::ParserRuleContext {
  public:
    Exp_integerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Exp_matematicaContext *exp_matematica();
    Exp_aritmeticaContext *exp_aritmetica();
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exp_integerContext* exp_integer();

  class  Exp_aritmeticaContext : public antlr4::ParserRuleContext {
  public:
    Exp_aritmeticaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PAR_OPEN();
    std::vector<Exp_matematicaContext *> exp_matematica();
    Exp_matematicaContext* exp_matematica(size_t i);
    std::vector<OperadorContext *> operador();
    OperadorContext* operador(size_t i);
    antlr4::tree::TerminalNode *PAR_CLOSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exp_aritmeticaContext* exp_aritmetica();

  class  Exp_matematicaContext : public antlr4::ParserRuleContext {
  public:
    Exp_matematicaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Diferencia_exprContext *diferencia_expr();
    Azar_exprContext *azar_expr();
    Producto_exprContext *producto_expr();
    Potencia_exprContext *potencia_expr();
    Division_exprContext *division_expr();
    Suma_exprContext *suma_expr();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exp_matematicaContext* exp_matematica();

  class  Expr_mat_aritmContext : public antlr4::ParserRuleContext {
  public:
    Expr_mat_aritmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Exp_aritmeticaContext *exp_aritmetica();
    Exp_matematicaContext *exp_matematica();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_mat_aritmContext* expr_mat_aritm();

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

  class  Operador_logicoContext : public antlr4::ParserRuleContext {
  public:
    Operador_logicoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GEQ();
    antlr4::tree::TerminalNode *LEQ();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *NEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Operador_logicoContext* operador_logico();

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
    std::vector<Expr_mat_aritmContext *> expr_mat_aritm();
    Expr_mat_aritmContext* expr_mat_aritm(size_t i);

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
    Expr_mat_aritmContext *expr_mat_aritm();

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
    std::vector<Expr_mat_aritmContext *> expr_mat_aritm();
    Expr_mat_aritmContext* expr_mat_aritm(size_t i);

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
    std::vector<Expr_mat_aritmContext *> expr_mat_aritm();
    Expr_mat_aritmContext* expr_mat_aritm(size_t i);

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
    std::vector<Expr_mat_aritmContext *> expr_mat_aritm();
    Expr_mat_aritmContext* expr_mat_aritm(size_t i);

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
    std::vector<Expr_mat_aritmContext *> expr_mat_aritm();
    Expr_mat_aritmContext* expr_mat_aritm(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Suma_exprContext* suma_expr();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exp_logicas_exprSempred(Exp_logicas_exprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

