
// Generated from C:/Users/amv22/Dev/repos/COMPILADORES/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.2


#include "LogotecGramarLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct LogotecGramarLexerStaticData final {
  LogotecGramarLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LogotecGramarLexerStaticData(const LogotecGramarLexerStaticData&) = delete;
  LogotecGramarLexerStaticData(LogotecGramarLexerStaticData&&) = delete;
  LogotecGramarLexerStaticData& operator=(const LogotecGramarLexerStaticData&) = delete;
  LogotecGramarLexerStaticData& operator=(LogotecGramarLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag logotecgramarlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<LogotecGramarLexerStaticData> logotecgramarlexerLexerStaticData = nullptr;

void logotecgramarlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (logotecgramarlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(logotecgramarlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<LogotecGramarLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "HAZ", "INIC", "INC", "TODO", "AVANZA", "AV", "TRUE", 
      "FALSE", "NUMBER", "CADENA_TEXTO", "ID", "NEWLINE", "WS", "LINE_COMMENT", 
      "PROGRAM", "VAR", "PRINTLN", "PLUS", "MINUS", "MULT", "DIV", "IF", 
      "ELSE", "WHILE", "FOR", "AND", "OR", "NOT", "GT", "LT", "GEQ", "LEQ", 
      "EQ", "NEQ", "ASSIGN", "BRACKET_OPEN", "BRACKET_CLOSE", "PAR_OPEN", 
      "PAR_CLOSE", "SEMICOLON"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'['", "']'", "'Haz'", "'INIC'", "'INC'", "'TODO'", "'AVANZA'", 
      "'AV'", "'True'", "'False'", "", "", "", "", "", "", "'program'", 
      "'var'", "'println'", "'+'", "'-'", "'*'", "'/'", "'if'", "'else'", 
      "'while'", "'for'", "'&&'", "'||'", "'!'", "'>'", "'<'", "'>='", "'<='", 
      "'=='", "'!='", "'='", "'{'", "'}'", "'('", "')'", "';'"
    },
    std::vector<std::string>{
      "", "", "", "HAZ", "INIC", "INC", "TODO", "AVANZA", "AV", "TRUE", 
      "FALSE", "NUMBER", "CADENA_TEXTO", "ID", "NEWLINE", "WS", "LINE_COMMENT", 
      "PROGRAM", "VAR", "PRINTLN", "PLUS", "MINUS", "MULT", "DIV", "IF", 
      "ELSE", "WHILE", "FOR", "AND", "OR", "NOT", "GT", "LT", "GEQ", "LEQ", 
      "EQ", "NEQ", "ASSIGN", "BRACKET_OPEN", "BRACKET_CLOSE", "PAR_OPEN", 
      "PAR_CLOSE", "SEMICOLON"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,42,252,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,1,0,
  	1,0,1,1,1,1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,
  	5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,8,1,8,1,8,1,8,
  	1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,10,4,10,130,8,10,11,10,12,10,131,1,11,1,
  	11,5,11,136,8,11,10,11,12,11,139,9,11,1,11,1,11,1,12,1,12,5,12,145,8,
  	12,10,12,12,12,148,9,12,1,13,4,13,151,8,13,11,13,12,13,152,1,14,4,14,
  	156,8,14,11,14,12,14,157,1,14,1,14,1,15,1,15,1,15,1,15,5,15,166,8,15,
  	10,15,12,15,169,9,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,
  	1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,20,1,20,
  	1,21,1,21,1,22,1,22,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,25,1,25,
  	1,25,1,25,1,25,1,25,1,26,1,26,1,26,1,26,1,27,1,27,1,27,1,28,1,28,1,28,
  	1,29,1,29,1,30,1,30,1,31,1,31,1,32,1,32,1,32,1,33,1,33,1,33,1,34,1,34,
  	1,34,1,35,1,35,1,35,1,36,1,36,1,37,1,37,1,38,1,38,1,39,1,39,1,40,1,40,
  	1,41,1,41,0,0,42,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,
  	23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,
  	23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,
  	69,35,71,36,73,37,75,38,77,39,79,40,81,41,83,42,1,0,6,1,0,48,57,3,0,10,
  	10,13,13,34,34,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,2,
  	0,10,10,13,13,2,0,9,9,32,32,257,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,
  	7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,
  	0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,
  	0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,
  	1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,
  	0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,
  	0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,
  	1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,
  	0,0,0,83,1,0,0,0,1,85,1,0,0,0,3,87,1,0,0,0,5,89,1,0,0,0,7,93,1,0,0,0,
  	9,98,1,0,0,0,11,102,1,0,0,0,13,107,1,0,0,0,15,114,1,0,0,0,17,117,1,0,
  	0,0,19,122,1,0,0,0,21,129,1,0,0,0,23,133,1,0,0,0,25,142,1,0,0,0,27,150,
  	1,0,0,0,29,155,1,0,0,0,31,161,1,0,0,0,33,170,1,0,0,0,35,178,1,0,0,0,37,
  	182,1,0,0,0,39,190,1,0,0,0,41,192,1,0,0,0,43,194,1,0,0,0,45,196,1,0,0,
  	0,47,198,1,0,0,0,49,201,1,0,0,0,51,206,1,0,0,0,53,212,1,0,0,0,55,216,
  	1,0,0,0,57,219,1,0,0,0,59,222,1,0,0,0,61,224,1,0,0,0,63,226,1,0,0,0,65,
  	228,1,0,0,0,67,231,1,0,0,0,69,234,1,0,0,0,71,237,1,0,0,0,73,240,1,0,0,
  	0,75,242,1,0,0,0,77,244,1,0,0,0,79,246,1,0,0,0,81,248,1,0,0,0,83,250,
  	1,0,0,0,85,86,5,91,0,0,86,2,1,0,0,0,87,88,5,93,0,0,88,4,1,0,0,0,89,90,
  	5,72,0,0,90,91,5,97,0,0,91,92,5,122,0,0,92,6,1,0,0,0,93,94,5,73,0,0,94,
  	95,5,78,0,0,95,96,5,73,0,0,96,97,5,67,0,0,97,8,1,0,0,0,98,99,5,73,0,0,
  	99,100,5,78,0,0,100,101,5,67,0,0,101,10,1,0,0,0,102,103,5,84,0,0,103,
  	104,5,79,0,0,104,105,5,68,0,0,105,106,5,79,0,0,106,12,1,0,0,0,107,108,
  	5,65,0,0,108,109,5,86,0,0,109,110,5,65,0,0,110,111,5,78,0,0,111,112,5,
  	90,0,0,112,113,5,65,0,0,113,14,1,0,0,0,114,115,5,65,0,0,115,116,5,86,
  	0,0,116,16,1,0,0,0,117,118,5,84,0,0,118,119,5,114,0,0,119,120,5,117,0,
  	0,120,121,5,101,0,0,121,18,1,0,0,0,122,123,5,70,0,0,123,124,5,97,0,0,
  	124,125,5,108,0,0,125,126,5,115,0,0,126,127,5,101,0,0,127,20,1,0,0,0,
  	128,130,7,0,0,0,129,128,1,0,0,0,130,131,1,0,0,0,131,129,1,0,0,0,131,132,
  	1,0,0,0,132,22,1,0,0,0,133,137,5,34,0,0,134,136,8,1,0,0,135,134,1,0,0,
  	0,136,139,1,0,0,0,137,135,1,0,0,0,137,138,1,0,0,0,138,140,1,0,0,0,139,
  	137,1,0,0,0,140,141,5,34,0,0,141,24,1,0,0,0,142,146,7,2,0,0,143,145,7,
  	3,0,0,144,143,1,0,0,0,145,148,1,0,0,0,146,144,1,0,0,0,146,147,1,0,0,0,
  	147,26,1,0,0,0,148,146,1,0,0,0,149,151,7,4,0,0,150,149,1,0,0,0,151,152,
  	1,0,0,0,152,150,1,0,0,0,152,153,1,0,0,0,153,28,1,0,0,0,154,156,7,5,0,
  	0,155,154,1,0,0,0,156,157,1,0,0,0,157,155,1,0,0,0,157,158,1,0,0,0,158,
  	159,1,0,0,0,159,160,6,14,0,0,160,30,1,0,0,0,161,162,5,47,0,0,162,163,
  	5,47,0,0,163,167,1,0,0,0,164,166,8,4,0,0,165,164,1,0,0,0,166,169,1,0,
  	0,0,167,165,1,0,0,0,167,168,1,0,0,0,168,32,1,0,0,0,169,167,1,0,0,0,170,
  	171,5,112,0,0,171,172,5,114,0,0,172,173,5,111,0,0,173,174,5,103,0,0,174,
  	175,5,114,0,0,175,176,5,97,0,0,176,177,5,109,0,0,177,34,1,0,0,0,178,179,
  	5,118,0,0,179,180,5,97,0,0,180,181,5,114,0,0,181,36,1,0,0,0,182,183,5,
  	112,0,0,183,184,5,114,0,0,184,185,5,105,0,0,185,186,5,110,0,0,186,187,
  	5,116,0,0,187,188,5,108,0,0,188,189,5,110,0,0,189,38,1,0,0,0,190,191,
  	5,43,0,0,191,40,1,0,0,0,192,193,5,45,0,0,193,42,1,0,0,0,194,195,5,42,
  	0,0,195,44,1,0,0,0,196,197,5,47,0,0,197,46,1,0,0,0,198,199,5,105,0,0,
  	199,200,5,102,0,0,200,48,1,0,0,0,201,202,5,101,0,0,202,203,5,108,0,0,
  	203,204,5,115,0,0,204,205,5,101,0,0,205,50,1,0,0,0,206,207,5,119,0,0,
  	207,208,5,104,0,0,208,209,5,105,0,0,209,210,5,108,0,0,210,211,5,101,0,
  	0,211,52,1,0,0,0,212,213,5,102,0,0,213,214,5,111,0,0,214,215,5,114,0,
  	0,215,54,1,0,0,0,216,217,5,38,0,0,217,218,5,38,0,0,218,56,1,0,0,0,219,
  	220,5,124,0,0,220,221,5,124,0,0,221,58,1,0,0,0,222,223,5,33,0,0,223,60,
  	1,0,0,0,224,225,5,62,0,0,225,62,1,0,0,0,226,227,5,60,0,0,227,64,1,0,0,
  	0,228,229,5,62,0,0,229,230,5,61,0,0,230,66,1,0,0,0,231,232,5,60,0,0,232,
  	233,5,61,0,0,233,68,1,0,0,0,234,235,5,61,0,0,235,236,5,61,0,0,236,70,
  	1,0,0,0,237,238,5,33,0,0,238,239,5,61,0,0,239,72,1,0,0,0,240,241,5,61,
  	0,0,241,74,1,0,0,0,242,243,5,123,0,0,243,76,1,0,0,0,244,245,5,125,0,0,
  	245,78,1,0,0,0,246,247,5,40,0,0,247,80,1,0,0,0,248,249,5,41,0,0,249,82,
  	1,0,0,0,250,251,5,59,0,0,251,84,1,0,0,0,7,0,131,137,146,152,157,167,1,
  	6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  logotecgramarlexerLexerStaticData = std::move(staticData);
}

}

LogotecGramarLexer::LogotecGramarLexer(CharStream *input) : Lexer(input) {
  LogotecGramarLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *logotecgramarlexerLexerStaticData->atn, logotecgramarlexerLexerStaticData->decisionToDFA, logotecgramarlexerLexerStaticData->sharedContextCache);
}

LogotecGramarLexer::~LogotecGramarLexer() {
  delete _interpreter;
}

std::string LogotecGramarLexer::getGrammarFileName() const {
  return "LogotecGramar.g4";
}

const std::vector<std::string>& LogotecGramarLexer::getRuleNames() const {
  return logotecgramarlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& LogotecGramarLexer::getChannelNames() const {
  return logotecgramarlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& LogotecGramarLexer::getModeNames() const {
  return logotecgramarlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& LogotecGramarLexer::getVocabulary() const {
  return logotecgramarlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LogotecGramarLexer::getSerializedATN() const {
  return logotecgramarlexerLexerStaticData->serializedATN;
}

const atn::ATN& LogotecGramarLexer::getATN() const {
  return *logotecgramarlexerLexerStaticData->atn;
}




void LogotecGramarLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  logotecgramarlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(logotecgramarlexerLexerOnceFlag, logotecgramarlexerLexerInitialize);
#endif
}
