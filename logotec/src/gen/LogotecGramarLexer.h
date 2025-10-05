
// Generated from /home/alexmv/Documents/dev/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LogotecGramarLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, HAZ = 4, INIC = 5, INC = 6, AVANZA = 7, 
    AV = 8, RETROCEDE = 9, RE = 10, GIRA_DERECHA = 11, GD = 12, GIRA_IZQUIERDA = 13, 
    GI = 14, OCULTAR_TORTUGA = 15, OT = 16, PONPOS = 17, PONXY = 18, PONRUMBO = 19, 
    RUMBO = 20, MUESTRA = 21, PONX = 22, PONY = 23, BAJALAPIZ = 24, BL = 25, 
    SUBELAPIZ = 26, SL = 27, AZUL = 28, NEGRO = 29, ROJO = 30, PONCOLORLAPIZ = 31, 
    PCL = 32, CENTRO = 33, ESPERAR = 34, TRUE = 35, FALSE = 36, NUMBER = 37, 
    CADENA_TEXTO = 38, PROGRAM = 39, VAR = 40, PRINTLN = 41, PLUS = 42, 
    MINUS = 43, MULT = 44, DIV = 45, IF = 46, ELSE = 47, WHILE = 48, FOR = 49, 
    AND = 50, OR = 51, NOT = 52, GT = 53, LT = 54, GEQ = 55, LEQ = 56, EQ = 57, 
    NEQ = 58, ASSIGN = 59, BRACKET_OPEN = 60, BRACKET_CLOSE = 61, PAR_OPEN = 62, 
    PAR_CLOSE = 63, SEMICOLON = 64, REPITE = 65, SI = 66, HAZ_HASTA = 67, 
    HASTA = 68, HAZ_MIENTRAS = 69, MIENTRAS = 70, IGUALESQ = 71, Y = 72, 
    O = 73, MAYORQUEQ = 74, MENORQUEQ = 75, DIFERENCIA = 76, AZAR = 77, 
    PRODUCTO = 78, POTENCIA = 79, DIVISION = 80, SUMA = 81, RESTA = 82, 
    PARA = 83, FIN = 84, EJECUTA = 85, ID = 86, NEWLINE = 87, WS = 88, LINE_COMMENT = 89
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

