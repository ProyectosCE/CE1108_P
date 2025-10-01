
// Generated from /home/jimmy/Documents/GitHub/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LogotecGramarLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, HAZ = 4, INIC = 5, INC = 6, AVANZA = 7, 
    AV = 8, RETROCEDE = 9, RE = 10, GIRA_DERECHA = 11, GD = 12, GIRA_IZQUIERDA = 13, 
    GI = 14, OCULTAR_TORTUGA = 15, OT = 16, PONPOS = 17, PONXY = 18, PONRUMBO = 19, 
    PONX = 20, PONY = 21, BAJALAPIZ = 22, BL = 23, SUBELAPIZ = 24, SL = 25, 
    AZUL = 26, NEGRO = 27, ROJO = 28, PONCOLORLAPIZ = 29, PCL = 30, CENTRO = 31, 
    ESPERAR = 32, TRUE = 33, FALSE = 34, NUMBER = 35, CADENA_TEXTO = 36, 
    ID = 37, NEWLINE = 38, WS = 39, LINE_COMMENT = 40, PROGRAM = 41, VAR = 42, 
    PRINTLN = 43, PLUS = 44, MINUS = 45, MULT = 46, DIV = 47, IF = 48, ELSE = 49, 
    WHILE = 50, FOR = 51, AND = 52, OR = 53, NOT = 54, GT = 55, LT = 56, 
    GEQ = 57, LEQ = 58, EQ = 59, NEQ = 60, ASSIGN = 61, BRACKET_OPEN = 62, 
    BRACKET_CLOSE = 63, PAR_OPEN = 64, PAR_CLOSE = 65, SEMICOLON = 66, REPITE = 67, 
    SI = 68, HAZ_HASTA = 69, HASTA = 70, HAZ_MIENTRAS = 71, MIENTRAS = 72, 
    IGUALESQ = 73, Y = 74, O = 75, MAYORQUEQ = 76, MENORQUEQ = 77, DIFERENCIA = 78, 
    AZAR = 79, PRODUCTO = 80, POTENCIA = 81, DIVISION = 82, SUMA = 83, RESTA = 84, 
    PARA = 85, FIN = 86, EJECUTA = 87
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

