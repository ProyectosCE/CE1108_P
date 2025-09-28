
// Generated from C:/Users/amv22/Dev/repos/COMPILADORES/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LogotecGramarLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, HAZ = 3, INIC = 4, INC = 5, TODO = 6, AVANZA = 7, 
    AV = 8, TRUE = 9, FALSE = 10, NUMBER = 11, CADENA_TEXTO = 12, ID = 13, 
    NEWLINE = 14, WS = 15, LINE_COMMENT = 16, PROGRAM = 17, VAR = 18, PRINTLN = 19, 
    PLUS = 20, MINUS = 21, MULT = 22, DIV = 23, IF = 24, ELSE = 25, WHILE = 26, 
    FOR = 27, AND = 28, OR = 29, NOT = 30, GT = 31, LT = 32, GEQ = 33, LEQ = 34, 
    EQ = 35, NEQ = 36, ASSIGN = 37, BRACKET_OPEN = 38, BRACKET_CLOSE = 39, 
    PAR_OPEN = 40, PAR_CLOSE = 41, SEMICOLON = 42
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

