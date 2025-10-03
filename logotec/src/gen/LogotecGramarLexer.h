
// Generated from C:/Users/amv22/Dev/repos/COMPILADORES/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.2

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

