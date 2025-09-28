
// Generated from C:/Users/amv22/Dev/repos/COMPILADORES/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LogotecGramarLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, HAZ = 3, INIC = 4, INC = 5, AVANZA = 6, AV = 7, 
    RETROCEDE = 8, RE = 9, GIRA_DERECHA = 10, GD = 11, GIRA_IZQUIERDA = 12, 
    GI = 13, OCULTAR_TORTUGA = 14, OT = 15, PONPOS = 16, PONXY = 17, PONRUMBO = 18, 
    TRUE = 19, FALSE = 20, NUMBER = 21, CADENA_TEXTO = 22, ID = 23, NEWLINE = 24, 
    WS = 25, LINE_COMMENT = 26, PROGRAM = 27, VAR = 28, PRINTLN = 29, PLUS = 30, 
    MINUS = 31, MULT = 32, DIV = 33, IF = 34, ELSE = 35, WHILE = 36, FOR = 37, 
    AND = 38, OR = 39, NOT = 40, GT = 41, LT = 42, GEQ = 43, LEQ = 44, EQ = 45, 
    NEQ = 46, ASSIGN = 47, BRACKET_OPEN = 48, BRACKET_CLOSE = 49, PAR_OPEN = 50, 
    PAR_CLOSE = 51, SEMICOLON = 52
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

