
// Generated from C:/Users/amv22/Dev/repos/COMPILADORES/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LogotecGramarLexer : public antlr4::Lexer {
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

