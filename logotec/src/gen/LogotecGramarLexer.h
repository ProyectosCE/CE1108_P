
// Generated from C:/Users/amv22/Dev/repos/COMPILADORES/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LogotecGramarLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, HAZ = 3, INIC = 4, INC = 5, TRUE = 6, FALSE = 7, 
    NUMBER = 8, CADENA_TEXTO = 9, ID = 10, NEWLINE = 11, WS = 12, LINE_COMMENT = 13, 
    PROGRAM = 14, VAR = 15, PRINTLN = 16, PLUS = 17, MINUS = 18, MULT = 19, 
    DIV = 20, IF = 21, ELSE = 22, WHILE = 23, FOR = 24, AND = 25, OR = 26, 
    NOT = 27, GT = 28, LT = 29, GEQ = 30, LEQ = 31, EQ = 32, NEQ = 33, ASSIGN = 34, 
    BRACKET_OPEN = 35, BRACKET_CLOSE = 36, PAR_OPEN = 37, PAR_CLOSE = 38, 
    SEMICOLON = 39
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

