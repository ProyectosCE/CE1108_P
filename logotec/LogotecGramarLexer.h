
// Generated from LogotecGramar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LogotecGramarLexer : public antlr4::Lexer {
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

  explicit LogotecGramarLexer(antlr4::CharStream *input);

  ~LogotecGramarLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

