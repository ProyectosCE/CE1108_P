
// Generated from C:/Users/amv22/Dev/repos/COMPILADORES/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.2


#include "LogotecGramarListener.h"
#include "LogotecGramarVisitor.h"

#include "LogotecGramarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct LogotecGramarParserStaticData final {
  LogotecGramarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LogotecGramarParserStaticData(const LogotecGramarParserStaticData&) = delete;
  LogotecGramarParserStaticData(LogotecGramarParserStaticData&&) = delete;
  LogotecGramarParserStaticData& operator=(const LogotecGramarParserStaticData&) = delete;
  LogotecGramarParserStaticData& operator=(LogotecGramarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag logotecgramarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<LogotecGramarParserStaticData> logotecgramarParserStaticData = nullptr;

void logotecgramarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (logotecgramarParserStaticData != nullptr) {
    return;
  }
#else
  assert(logotecgramarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<LogotecGramarParserStaticData>(
    std::vector<std::string>{
      "programa", "instruccion", "comentario_linea", "comentario", "haz_variable", 
      "inic_variable", "inc_variable", "avanza_variable", "retrocede_variable", 
      "gira_derecha_variable", "gira_izquierda_variable", "ocultar_tortuga_variable", 
      "ponpos_variable", "ponxy_variable", "ponrumbo_variable", "expr", 
      "logico", "valor", "operador"
    },
    std::vector<std::string>{
      "", "'['", "']'", "'Haz'", "'INIC'", "'INC'", "'avanza'", "'av'", 
      "'retrocede'", "'re'", "'GiraDerecha'", "'GD'", "'GiraIzquierda'", 
      "'GI'", "'OcultarTortuga'", "'OT'", "'ponpos'", "'ponxy'", "'ponrumbo'", 
      "'True'", "'False'", "", "", "", "", "", "", "'program'", "'var'", 
      "'println'", "'+'", "'-'", "'*'", "'/'", "'if'", "'else'", "'while'", 
      "'for'", "'&&'", "'||'", "'!'", "'>'", "'<'", "'>='", "'<='", "'=='", 
      "'!='", "'='", "'{'", "'}'", "'('", "')'", "';'"
    },
    std::vector<std::string>{
      "", "", "", "HAZ", "INIC", "INC", "AVANZA", "AV", "RETROCEDE", "RE", 
      "GIRA_DERECHA", "GD", "GIRA_IZQUIERDA", "GI", "OCULTAR_TORTUGA", "OT", 
      "PONPOS", "PONXY", "PONRUMBO", "TRUE", "FALSE", "NUMBER", "CADENA_TEXTO", 
      "ID", "NEWLINE", "WS", "LINE_COMMENT", "PROGRAM", "VAR", "PRINTLN", 
      "PLUS", "MINUS", "MULT", "DIV", "IF", "ELSE", "WHILE", "FOR", "AND", 
      "OR", "NOT", "GT", "LT", "GEQ", "LEQ", "EQ", "NEQ", "ASSIGN", "BRACKET_OPEN", 
      "BRACKET_CLOSE", "PAR_OPEN", "PAR_CLOSE", "SEMICOLON"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,52,169,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,1,0,1,0,5,0,42,8,0,10,
  	0,12,0,45,9,0,1,0,1,0,1,1,1,1,3,1,51,8,1,1,1,1,1,3,1,55,8,1,1,1,1,1,3,
  	1,59,8,1,1,1,1,1,3,1,63,8,1,1,1,1,1,3,1,67,8,1,1,1,1,1,3,1,71,8,1,1,1,
  	1,1,3,1,75,8,1,1,1,1,1,3,1,79,8,1,1,1,1,1,3,1,83,8,1,1,1,1,1,3,1,87,8,
  	1,1,1,1,1,3,1,91,8,1,1,1,3,1,94,8,1,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,4,1,
  	5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,3,6,113,8,6,1,6,1,6,1,7,1,7,1,7,1,8,
  	1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,3,15,
  	149,8,15,1,15,1,15,1,15,1,15,5,15,155,8,15,10,15,12,15,158,9,15,1,16,
  	1,16,1,17,1,17,1,17,3,17,165,8,17,1,18,1,18,1,18,0,1,30,19,0,2,4,6,8,
  	10,12,14,16,18,20,22,24,26,28,30,32,34,36,0,8,2,0,21,21,23,23,1,0,6,7,
  	1,0,8,9,1,0,10,11,1,0,12,13,1,0,14,15,1,0,19,20,1,0,30,33,179,0,43,1,
  	0,0,0,2,93,1,0,0,0,4,95,1,0,0,0,6,97,1,0,0,0,8,99,1,0,0,0,10,103,1,0,
  	0,0,12,108,1,0,0,0,14,116,1,0,0,0,16,119,1,0,0,0,18,122,1,0,0,0,20,125,
  	1,0,0,0,22,128,1,0,0,0,24,130,1,0,0,0,26,136,1,0,0,0,28,140,1,0,0,0,30,
  	148,1,0,0,0,32,159,1,0,0,0,34,164,1,0,0,0,36,166,1,0,0,0,38,39,3,2,1,
  	0,39,40,5,24,0,0,40,42,1,0,0,0,41,38,1,0,0,0,42,45,1,0,0,0,43,41,1,0,
  	0,0,43,44,1,0,0,0,44,46,1,0,0,0,45,43,1,0,0,0,46,47,5,0,0,1,47,1,1,0,
  	0,0,48,50,3,8,4,0,49,51,3,4,2,0,50,49,1,0,0,0,50,51,1,0,0,0,51,94,1,0,
  	0,0,52,54,3,10,5,0,53,55,3,4,2,0,54,53,1,0,0,0,54,55,1,0,0,0,55,94,1,
  	0,0,0,56,58,3,12,6,0,57,59,3,4,2,0,58,57,1,0,0,0,58,59,1,0,0,0,59,94,
  	1,0,0,0,60,62,3,14,7,0,61,63,3,4,2,0,62,61,1,0,0,0,62,63,1,0,0,0,63,94,
  	1,0,0,0,64,66,3,16,8,0,65,67,3,4,2,0,66,65,1,0,0,0,66,67,1,0,0,0,67,94,
  	1,0,0,0,68,70,3,18,9,0,69,71,3,4,2,0,70,69,1,0,0,0,70,71,1,0,0,0,71,94,
  	1,0,0,0,72,74,3,20,10,0,73,75,3,4,2,0,74,73,1,0,0,0,74,75,1,0,0,0,75,
  	94,1,0,0,0,76,78,3,22,11,0,77,79,3,4,2,0,78,77,1,0,0,0,78,79,1,0,0,0,
  	79,94,1,0,0,0,80,82,3,24,12,0,81,83,3,4,2,0,82,81,1,0,0,0,82,83,1,0,0,
  	0,83,94,1,0,0,0,84,86,3,26,13,0,85,87,3,4,2,0,86,85,1,0,0,0,86,87,1,0,
  	0,0,87,94,1,0,0,0,88,90,3,28,14,0,89,91,3,4,2,0,90,89,1,0,0,0,90,91,1,
  	0,0,0,91,94,1,0,0,0,92,94,3,6,3,0,93,48,1,0,0,0,93,52,1,0,0,0,93,56,1,
  	0,0,0,93,60,1,0,0,0,93,64,1,0,0,0,93,68,1,0,0,0,93,72,1,0,0,0,93,76,1,
  	0,0,0,93,80,1,0,0,0,93,84,1,0,0,0,93,88,1,0,0,0,93,92,1,0,0,0,94,3,1,
  	0,0,0,95,96,5,26,0,0,96,5,1,0,0,0,97,98,5,26,0,0,98,7,1,0,0,0,99,100,
  	5,3,0,0,100,101,5,23,0,0,101,102,3,34,17,0,102,9,1,0,0,0,103,104,5,4,
  	0,0,104,105,5,23,0,0,105,106,5,47,0,0,106,107,3,30,15,0,107,11,1,0,0,
  	0,108,109,5,5,0,0,109,110,5,1,0,0,110,112,5,23,0,0,111,113,7,0,0,0,112,
  	111,1,0,0,0,112,113,1,0,0,0,113,114,1,0,0,0,114,115,5,2,0,0,115,13,1,
  	0,0,0,116,117,7,1,0,0,117,118,3,30,15,0,118,15,1,0,0,0,119,120,7,2,0,
  	0,120,121,3,30,15,0,121,17,1,0,0,0,122,123,7,3,0,0,123,124,3,30,15,0,
  	124,19,1,0,0,0,125,126,7,4,0,0,126,127,3,30,15,0,127,21,1,0,0,0,128,129,
  	7,5,0,0,129,23,1,0,0,0,130,131,5,16,0,0,131,132,5,1,0,0,132,133,5,21,
  	0,0,133,134,5,21,0,0,134,135,5,2,0,0,135,25,1,0,0,0,136,137,5,17,0,0,
  	137,138,5,21,0,0,138,139,5,21,0,0,139,27,1,0,0,0,140,141,5,18,0,0,141,
  	142,5,21,0,0,142,29,1,0,0,0,143,144,6,15,-1,0,144,149,5,21,0,0,145,149,
  	3,32,16,0,146,149,5,22,0,0,147,149,5,23,0,0,148,143,1,0,0,0,148,145,1,
  	0,0,0,148,146,1,0,0,0,148,147,1,0,0,0,149,156,1,0,0,0,150,151,10,5,0,
  	0,151,152,3,36,18,0,152,153,3,30,15,6,153,155,1,0,0,0,154,150,1,0,0,0,
  	155,158,1,0,0,0,156,154,1,0,0,0,156,157,1,0,0,0,157,31,1,0,0,0,158,156,
  	1,0,0,0,159,160,7,6,0,0,160,33,1,0,0,0,161,165,5,21,0,0,162,165,3,32,
  	16,0,163,165,5,22,0,0,164,161,1,0,0,0,164,162,1,0,0,0,164,163,1,0,0,0,
  	165,35,1,0,0,0,166,167,7,7,0,0,167,37,1,0,0,0,17,43,50,54,58,62,66,70,
  	74,78,82,86,90,93,112,148,156,164
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  logotecgramarParserStaticData = std::move(staticData);
}

}

LogotecGramarParser::LogotecGramarParser(TokenStream *input) : LogotecGramarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

LogotecGramarParser::LogotecGramarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  LogotecGramarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *logotecgramarParserStaticData->atn, logotecgramarParserStaticData->decisionToDFA, logotecgramarParserStaticData->sharedContextCache, options);
}

LogotecGramarParser::~LogotecGramarParser() {
  delete _interpreter;
}

const atn::ATN& LogotecGramarParser::getATN() const {
  return *logotecgramarParserStaticData->atn;
}

std::string LogotecGramarParser::getGrammarFileName() const {
  return "LogotecGramar.g4";
}

const std::vector<std::string>& LogotecGramarParser::getRuleNames() const {
  return logotecgramarParserStaticData->ruleNames;
}

const dfa::Vocabulary& LogotecGramarParser::getVocabulary() const {
  return logotecgramarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LogotecGramarParser::getSerializedATN() const {
  return logotecgramarParserStaticData->serializedATN;
}


//----------------- ProgramaContext ------------------------------------------------------------------

LogotecGramarParser::ProgramaContext::ProgramaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::ProgramaContext::EOF() {
  return getToken(LogotecGramarParser::EOF, 0);
}

std::vector<LogotecGramarParser::InstruccionContext *> LogotecGramarParser::ProgramaContext::instruccion() {
  return getRuleContexts<LogotecGramarParser::InstruccionContext>();
}

LogotecGramarParser::InstruccionContext* LogotecGramarParser::ProgramaContext::instruccion(size_t i) {
  return getRuleContext<LogotecGramarParser::InstruccionContext>(i);
}

std::vector<tree::TerminalNode *> LogotecGramarParser::ProgramaContext::NEWLINE() {
  return getTokens(LogotecGramarParser::NEWLINE);
}

tree::TerminalNode* LogotecGramarParser::ProgramaContext::NEWLINE(size_t i) {
  return getToken(LogotecGramarParser::NEWLINE, i);
}


size_t LogotecGramarParser::ProgramaContext::getRuleIndex() const {
  return LogotecGramarParser::RulePrograma;
}

void LogotecGramarParser::ProgramaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrograma(this);
}

void LogotecGramarParser::ProgramaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrograma(this);
}


std::any LogotecGramarParser::ProgramaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitPrograma(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::ProgramaContext* LogotecGramarParser::programa() {
  ProgramaContext *_localctx = _tracker.createInstance<ProgramaContext>(_ctx, getState());
  enterRule(_localctx, 0, LogotecGramarParser::RulePrograma);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(43);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 67633144) != 0)) {
      setState(38);
      instruccion();
      setState(39);
      match(LogotecGramarParser::NEWLINE);
      setState(45);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(46);
    match(LogotecGramarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstruccionContext ------------------------------------------------------------------

LogotecGramarParser::InstruccionContext::InstruccionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LogotecGramarParser::Haz_variableContext* LogotecGramarParser::InstruccionContext::haz_variable() {
  return getRuleContext<LogotecGramarParser::Haz_variableContext>(0);
}

LogotecGramarParser::Comentario_lineaContext* LogotecGramarParser::InstruccionContext::comentario_linea() {
  return getRuleContext<LogotecGramarParser::Comentario_lineaContext>(0);
}

LogotecGramarParser::Inic_variableContext* LogotecGramarParser::InstruccionContext::inic_variable() {
  return getRuleContext<LogotecGramarParser::Inic_variableContext>(0);
}

LogotecGramarParser::Inc_variableContext* LogotecGramarParser::InstruccionContext::inc_variable() {
  return getRuleContext<LogotecGramarParser::Inc_variableContext>(0);
}

LogotecGramarParser::Avanza_variableContext* LogotecGramarParser::InstruccionContext::avanza_variable() {
  return getRuleContext<LogotecGramarParser::Avanza_variableContext>(0);
}

LogotecGramarParser::Retrocede_variableContext* LogotecGramarParser::InstruccionContext::retrocede_variable() {
  return getRuleContext<LogotecGramarParser::Retrocede_variableContext>(0);
}

LogotecGramarParser::Gira_derecha_variableContext* LogotecGramarParser::InstruccionContext::gira_derecha_variable() {
  return getRuleContext<LogotecGramarParser::Gira_derecha_variableContext>(0);
}

LogotecGramarParser::Gira_izquierda_variableContext* LogotecGramarParser::InstruccionContext::gira_izquierda_variable() {
  return getRuleContext<LogotecGramarParser::Gira_izquierda_variableContext>(0);
}

LogotecGramarParser::Ocultar_tortuga_variableContext* LogotecGramarParser::InstruccionContext::ocultar_tortuga_variable() {
  return getRuleContext<LogotecGramarParser::Ocultar_tortuga_variableContext>(0);
}

LogotecGramarParser::Ponpos_variableContext* LogotecGramarParser::InstruccionContext::ponpos_variable() {
  return getRuleContext<LogotecGramarParser::Ponpos_variableContext>(0);
}

LogotecGramarParser::Ponxy_variableContext* LogotecGramarParser::InstruccionContext::ponxy_variable() {
  return getRuleContext<LogotecGramarParser::Ponxy_variableContext>(0);
}

LogotecGramarParser::Ponrumbo_variableContext* LogotecGramarParser::InstruccionContext::ponrumbo_variable() {
  return getRuleContext<LogotecGramarParser::Ponrumbo_variableContext>(0);
}

LogotecGramarParser::ComentarioContext* LogotecGramarParser::InstruccionContext::comentario() {
  return getRuleContext<LogotecGramarParser::ComentarioContext>(0);
}


size_t LogotecGramarParser::InstruccionContext::getRuleIndex() const {
  return LogotecGramarParser::RuleInstruccion;
}

void LogotecGramarParser::InstruccionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstruccion(this);
}

void LogotecGramarParser::InstruccionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstruccion(this);
}


std::any LogotecGramarParser::InstruccionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitInstruccion(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::InstruccionContext* LogotecGramarParser::instruccion() {
  InstruccionContext *_localctx = _tracker.createInstance<InstruccionContext>(_ctx, getState());
  enterRule(_localctx, 2, LogotecGramarParser::RuleInstruccion);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(93);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::HAZ: {
        enterOuterAlt(_localctx, 1);
        setState(48);
        haz_variable();
        setState(50);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LogotecGramarParser::LINE_COMMENT) {
          setState(49);
          comentario_linea();
        }
        break;
      }

      case LogotecGramarParser::INIC: {
        enterOuterAlt(_localctx, 2);
        setState(52);
        inic_variable();
        setState(54);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LogotecGramarParser::LINE_COMMENT) {
          setState(53);
          comentario_linea();
        }
        break;
      }

      case LogotecGramarParser::INC: {
        enterOuterAlt(_localctx, 3);
        setState(56);
        inc_variable();
        setState(58);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LogotecGramarParser::LINE_COMMENT) {
          setState(57);
          comentario_linea();
        }
        break;
      }

      case LogotecGramarParser::AVANZA:
      case LogotecGramarParser::AV: {
        enterOuterAlt(_localctx, 4);
        setState(60);
        avanza_variable();
        setState(62);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LogotecGramarParser::LINE_COMMENT) {
          setState(61);
          comentario_linea();
        }
        break;
      }

      case LogotecGramarParser::RETROCEDE:
      case LogotecGramarParser::RE: {
        enterOuterAlt(_localctx, 5);
        setState(64);
        retrocede_variable();
        setState(66);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LogotecGramarParser::LINE_COMMENT) {
          setState(65);
          comentario_linea();
        }
        break;
      }

      case LogotecGramarParser::GIRA_DERECHA:
      case LogotecGramarParser::GD: {
        enterOuterAlt(_localctx, 6);
        setState(68);
        gira_derecha_variable();
        setState(70);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LogotecGramarParser::LINE_COMMENT) {
          setState(69);
          comentario_linea();
        }
        break;
      }

      case LogotecGramarParser::GIRA_IZQUIERDA:
      case LogotecGramarParser::GI: {
        enterOuterAlt(_localctx, 7);
        setState(72);
        gira_izquierda_variable();
        setState(74);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LogotecGramarParser::LINE_COMMENT) {
          setState(73);
          comentario_linea();
        }
        break;
      }

      case LogotecGramarParser::OCULTAR_TORTUGA:
      case LogotecGramarParser::OT: {
        enterOuterAlt(_localctx, 8);
        setState(76);
        ocultar_tortuga_variable();
        setState(78);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LogotecGramarParser::LINE_COMMENT) {
          setState(77);
          comentario_linea();
        }
        break;
      }

      case LogotecGramarParser::PONPOS: {
        enterOuterAlt(_localctx, 9);
        setState(80);
        ponpos_variable();
        setState(82);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LogotecGramarParser::LINE_COMMENT) {
          setState(81);
          comentario_linea();
        }
        break;
      }

      case LogotecGramarParser::PONXY: {
        enterOuterAlt(_localctx, 10);
        setState(84);
        ponxy_variable();
        setState(86);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LogotecGramarParser::LINE_COMMENT) {
          setState(85);
          comentario_linea();
        }
        break;
      }

      case LogotecGramarParser::PONRUMBO: {
        enterOuterAlt(_localctx, 11);
        setState(88);
        ponrumbo_variable();
        setState(90);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LogotecGramarParser::LINE_COMMENT) {
          setState(89);
          comentario_linea();
        }
        break;
      }

      case LogotecGramarParser::LINE_COMMENT: {
        enterOuterAlt(_localctx, 12);
        setState(92);
        comentario();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Comentario_lineaContext ------------------------------------------------------------------

LogotecGramarParser::Comentario_lineaContext::Comentario_lineaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Comentario_lineaContext::LINE_COMMENT() {
  return getToken(LogotecGramarParser::LINE_COMMENT, 0);
}


size_t LogotecGramarParser::Comentario_lineaContext::getRuleIndex() const {
  return LogotecGramarParser::RuleComentario_linea;
}

void LogotecGramarParser::Comentario_lineaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComentario_linea(this);
}

void LogotecGramarParser::Comentario_lineaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComentario_linea(this);
}


std::any LogotecGramarParser::Comentario_lineaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitComentario_linea(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Comentario_lineaContext* LogotecGramarParser::comentario_linea() {
  Comentario_lineaContext *_localctx = _tracker.createInstance<Comentario_lineaContext>(_ctx, getState());
  enterRule(_localctx, 4, LogotecGramarParser::RuleComentario_linea);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(LogotecGramarParser::LINE_COMMENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComentarioContext ------------------------------------------------------------------

LogotecGramarParser::ComentarioContext::ComentarioContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::ComentarioContext::LINE_COMMENT() {
  return getToken(LogotecGramarParser::LINE_COMMENT, 0);
}


size_t LogotecGramarParser::ComentarioContext::getRuleIndex() const {
  return LogotecGramarParser::RuleComentario;
}

void LogotecGramarParser::ComentarioContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComentario(this);
}

void LogotecGramarParser::ComentarioContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComentario(this);
}


std::any LogotecGramarParser::ComentarioContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitComentario(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::ComentarioContext* LogotecGramarParser::comentario() {
  ComentarioContext *_localctx = _tracker.createInstance<ComentarioContext>(_ctx, getState());
  enterRule(_localctx, 6, LogotecGramarParser::RuleComentario);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    match(LogotecGramarParser::LINE_COMMENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Haz_variableContext ------------------------------------------------------------------

LogotecGramarParser::Haz_variableContext::Haz_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Haz_variableContext::HAZ() {
  return getToken(LogotecGramarParser::HAZ, 0);
}

tree::TerminalNode* LogotecGramarParser::Haz_variableContext::ID() {
  return getToken(LogotecGramarParser::ID, 0);
}

LogotecGramarParser::ValorContext* LogotecGramarParser::Haz_variableContext::valor() {
  return getRuleContext<LogotecGramarParser::ValorContext>(0);
}


size_t LogotecGramarParser::Haz_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleHaz_variable;
}

void LogotecGramarParser::Haz_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHaz_variable(this);
}

void LogotecGramarParser::Haz_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHaz_variable(this);
}


std::any LogotecGramarParser::Haz_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitHaz_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Haz_variableContext* LogotecGramarParser::haz_variable() {
  Haz_variableContext *_localctx = _tracker.createInstance<Haz_variableContext>(_ctx, getState());
  enterRule(_localctx, 8, LogotecGramarParser::RuleHaz_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(LogotecGramarParser::HAZ);
    setState(100);
    match(LogotecGramarParser::ID);
    setState(101);
    antlrcpp::downCast<Haz_variableContext *>(_localctx)->v = valor();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Inic_variableContext ------------------------------------------------------------------

LogotecGramarParser::Inic_variableContext::Inic_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Inic_variableContext::INIC() {
  return getToken(LogotecGramarParser::INIC, 0);
}

tree::TerminalNode* LogotecGramarParser::Inic_variableContext::ID() {
  return getToken(LogotecGramarParser::ID, 0);
}

tree::TerminalNode* LogotecGramarParser::Inic_variableContext::ASSIGN() {
  return getToken(LogotecGramarParser::ASSIGN, 0);
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Inic_variableContext::expr() {
  return getRuleContext<LogotecGramarParser::ExprContext>(0);
}


size_t LogotecGramarParser::Inic_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleInic_variable;
}

void LogotecGramarParser::Inic_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInic_variable(this);
}

void LogotecGramarParser::Inic_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInic_variable(this);
}


std::any LogotecGramarParser::Inic_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitInic_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Inic_variableContext* LogotecGramarParser::inic_variable() {
  Inic_variableContext *_localctx = _tracker.createInstance<Inic_variableContext>(_ctx, getState());
  enterRule(_localctx, 10, LogotecGramarParser::RuleInic_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(LogotecGramarParser::INIC);
    setState(104);
    match(LogotecGramarParser::ID);
    setState(105);
    match(LogotecGramarParser::ASSIGN);
    setState(106);
    antlrcpp::downCast<Inic_variableContext *>(_localctx)->e = expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Inc_variableContext ------------------------------------------------------------------

LogotecGramarParser::Inc_variableContext::Inc_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Inc_variableContext::INC() {
  return getToken(LogotecGramarParser::INC, 0);
}

std::vector<tree::TerminalNode *> LogotecGramarParser::Inc_variableContext::ID() {
  return getTokens(LogotecGramarParser::ID);
}

tree::TerminalNode* LogotecGramarParser::Inc_variableContext::ID(size_t i) {
  return getToken(LogotecGramarParser::ID, i);
}

tree::TerminalNode* LogotecGramarParser::Inc_variableContext::NUMBER() {
  return getToken(LogotecGramarParser::NUMBER, 0);
}


size_t LogotecGramarParser::Inc_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleInc_variable;
}

void LogotecGramarParser::Inc_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInc_variable(this);
}

void LogotecGramarParser::Inc_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInc_variable(this);
}


std::any LogotecGramarParser::Inc_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitInc_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Inc_variableContext* LogotecGramarParser::inc_variable() {
  Inc_variableContext *_localctx = _tracker.createInstance<Inc_variableContext>(_ctx, getState());
  enterRule(_localctx, 12, LogotecGramarParser::RuleInc_variable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(108);
    match(LogotecGramarParser::INC);
    setState(109);
    match(LogotecGramarParser::T__0);
    setState(110);
    match(LogotecGramarParser::ID);
    setState(112);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::NUMBER

    || _la == LogotecGramarParser::ID) {
      setState(111);
      _la = _input->LA(1);
      if (!(_la == LogotecGramarParser::NUMBER

      || _la == LogotecGramarParser::ID)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(114);
    match(LogotecGramarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Avanza_variableContext ------------------------------------------------------------------

LogotecGramarParser::Avanza_variableContext::Avanza_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Avanza_variableContext::AVANZA() {
  return getToken(LogotecGramarParser::AVANZA, 0);
}

tree::TerminalNode* LogotecGramarParser::Avanza_variableContext::AV() {
  return getToken(LogotecGramarParser::AV, 0);
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Avanza_variableContext::expr() {
  return getRuleContext<LogotecGramarParser::ExprContext>(0);
}


size_t LogotecGramarParser::Avanza_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleAvanza_variable;
}

void LogotecGramarParser::Avanza_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAvanza_variable(this);
}

void LogotecGramarParser::Avanza_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAvanza_variable(this);
}


std::any LogotecGramarParser::Avanza_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitAvanza_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Avanza_variableContext* LogotecGramarParser::avanza_variable() {
  Avanza_variableContext *_localctx = _tracker.createInstance<Avanza_variableContext>(_ctx, getState());
  enterRule(_localctx, 14, LogotecGramarParser::RuleAvanza_variable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::AVANZA

    || _la == LogotecGramarParser::AV)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(117);
    antlrcpp::downCast<Avanza_variableContext *>(_localctx)->e = expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Retrocede_variableContext ------------------------------------------------------------------

LogotecGramarParser::Retrocede_variableContext::Retrocede_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Retrocede_variableContext::RETROCEDE() {
  return getToken(LogotecGramarParser::RETROCEDE, 0);
}

tree::TerminalNode* LogotecGramarParser::Retrocede_variableContext::RE() {
  return getToken(LogotecGramarParser::RE, 0);
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Retrocede_variableContext::expr() {
  return getRuleContext<LogotecGramarParser::ExprContext>(0);
}


size_t LogotecGramarParser::Retrocede_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleRetrocede_variable;
}

void LogotecGramarParser::Retrocede_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRetrocede_variable(this);
}

void LogotecGramarParser::Retrocede_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRetrocede_variable(this);
}


std::any LogotecGramarParser::Retrocede_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitRetrocede_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Retrocede_variableContext* LogotecGramarParser::retrocede_variable() {
  Retrocede_variableContext *_localctx = _tracker.createInstance<Retrocede_variableContext>(_ctx, getState());
  enterRule(_localctx, 16, LogotecGramarParser::RuleRetrocede_variable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::RETROCEDE

    || _la == LogotecGramarParser::RE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(120);
    antlrcpp::downCast<Retrocede_variableContext *>(_localctx)->e = expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Gira_derecha_variableContext ------------------------------------------------------------------

LogotecGramarParser::Gira_derecha_variableContext::Gira_derecha_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Gira_derecha_variableContext::GIRA_DERECHA() {
  return getToken(LogotecGramarParser::GIRA_DERECHA, 0);
}

tree::TerminalNode* LogotecGramarParser::Gira_derecha_variableContext::GD() {
  return getToken(LogotecGramarParser::GD, 0);
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Gira_derecha_variableContext::expr() {
  return getRuleContext<LogotecGramarParser::ExprContext>(0);
}


size_t LogotecGramarParser::Gira_derecha_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleGira_derecha_variable;
}

void LogotecGramarParser::Gira_derecha_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGira_derecha_variable(this);
}

void LogotecGramarParser::Gira_derecha_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGira_derecha_variable(this);
}


std::any LogotecGramarParser::Gira_derecha_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitGira_derecha_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Gira_derecha_variableContext* LogotecGramarParser::gira_derecha_variable() {
  Gira_derecha_variableContext *_localctx = _tracker.createInstance<Gira_derecha_variableContext>(_ctx, getState());
  enterRule(_localctx, 18, LogotecGramarParser::RuleGira_derecha_variable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::GIRA_DERECHA

    || _la == LogotecGramarParser::GD)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(123);
    antlrcpp::downCast<Gira_derecha_variableContext *>(_localctx)->e = expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Gira_izquierda_variableContext ------------------------------------------------------------------

LogotecGramarParser::Gira_izquierda_variableContext::Gira_izquierda_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Gira_izquierda_variableContext::GIRA_IZQUIERDA() {
  return getToken(LogotecGramarParser::GIRA_IZQUIERDA, 0);
}

tree::TerminalNode* LogotecGramarParser::Gira_izquierda_variableContext::GI() {
  return getToken(LogotecGramarParser::GI, 0);
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Gira_izquierda_variableContext::expr() {
  return getRuleContext<LogotecGramarParser::ExprContext>(0);
}


size_t LogotecGramarParser::Gira_izquierda_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleGira_izquierda_variable;
}

void LogotecGramarParser::Gira_izquierda_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGira_izquierda_variable(this);
}

void LogotecGramarParser::Gira_izquierda_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGira_izquierda_variable(this);
}


std::any LogotecGramarParser::Gira_izquierda_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitGira_izquierda_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Gira_izquierda_variableContext* LogotecGramarParser::gira_izquierda_variable() {
  Gira_izquierda_variableContext *_localctx = _tracker.createInstance<Gira_izquierda_variableContext>(_ctx, getState());
  enterRule(_localctx, 20, LogotecGramarParser::RuleGira_izquierda_variable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::GIRA_IZQUIERDA

    || _la == LogotecGramarParser::GI)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(126);
    antlrcpp::downCast<Gira_izquierda_variableContext *>(_localctx)->e = expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ocultar_tortuga_variableContext ------------------------------------------------------------------

LogotecGramarParser::Ocultar_tortuga_variableContext::Ocultar_tortuga_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Ocultar_tortuga_variableContext::OCULTAR_TORTUGA() {
  return getToken(LogotecGramarParser::OCULTAR_TORTUGA, 0);
}

tree::TerminalNode* LogotecGramarParser::Ocultar_tortuga_variableContext::OT() {
  return getToken(LogotecGramarParser::OT, 0);
}


size_t LogotecGramarParser::Ocultar_tortuga_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleOcultar_tortuga_variable;
}

void LogotecGramarParser::Ocultar_tortuga_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOcultar_tortuga_variable(this);
}

void LogotecGramarParser::Ocultar_tortuga_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOcultar_tortuga_variable(this);
}


std::any LogotecGramarParser::Ocultar_tortuga_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitOcultar_tortuga_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Ocultar_tortuga_variableContext* LogotecGramarParser::ocultar_tortuga_variable() {
  Ocultar_tortuga_variableContext *_localctx = _tracker.createInstance<Ocultar_tortuga_variableContext>(_ctx, getState());
  enterRule(_localctx, 22, LogotecGramarParser::RuleOcultar_tortuga_variable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::OCULTAR_TORTUGA

    || _la == LogotecGramarParser::OT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ponpos_variableContext ------------------------------------------------------------------

LogotecGramarParser::Ponpos_variableContext::Ponpos_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Ponpos_variableContext::PONPOS() {
  return getToken(LogotecGramarParser::PONPOS, 0);
}

std::vector<tree::TerminalNode *> LogotecGramarParser::Ponpos_variableContext::NUMBER() {
  return getTokens(LogotecGramarParser::NUMBER);
}

tree::TerminalNode* LogotecGramarParser::Ponpos_variableContext::NUMBER(size_t i) {
  return getToken(LogotecGramarParser::NUMBER, i);
}


size_t LogotecGramarParser::Ponpos_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RulePonpos_variable;
}

void LogotecGramarParser::Ponpos_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPonpos_variable(this);
}

void LogotecGramarParser::Ponpos_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPonpos_variable(this);
}


std::any LogotecGramarParser::Ponpos_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitPonpos_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Ponpos_variableContext* LogotecGramarParser::ponpos_variable() {
  Ponpos_variableContext *_localctx = _tracker.createInstance<Ponpos_variableContext>(_ctx, getState());
  enterRule(_localctx, 24, LogotecGramarParser::RulePonpos_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(LogotecGramarParser::PONPOS);
    setState(131);
    match(LogotecGramarParser::T__0);
    setState(132);
    antlrcpp::downCast<Ponpos_variableContext *>(_localctx)->n1 = match(LogotecGramarParser::NUMBER);
    setState(133);
    antlrcpp::downCast<Ponpos_variableContext *>(_localctx)->n2 = match(LogotecGramarParser::NUMBER);
    setState(134);
    match(LogotecGramarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ponxy_variableContext ------------------------------------------------------------------

LogotecGramarParser::Ponxy_variableContext::Ponxy_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Ponxy_variableContext::PONXY() {
  return getToken(LogotecGramarParser::PONXY, 0);
}

std::vector<tree::TerminalNode *> LogotecGramarParser::Ponxy_variableContext::NUMBER() {
  return getTokens(LogotecGramarParser::NUMBER);
}

tree::TerminalNode* LogotecGramarParser::Ponxy_variableContext::NUMBER(size_t i) {
  return getToken(LogotecGramarParser::NUMBER, i);
}


size_t LogotecGramarParser::Ponxy_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RulePonxy_variable;
}

void LogotecGramarParser::Ponxy_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPonxy_variable(this);
}

void LogotecGramarParser::Ponxy_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPonxy_variable(this);
}


std::any LogotecGramarParser::Ponxy_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitPonxy_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Ponxy_variableContext* LogotecGramarParser::ponxy_variable() {
  Ponxy_variableContext *_localctx = _tracker.createInstance<Ponxy_variableContext>(_ctx, getState());
  enterRule(_localctx, 26, LogotecGramarParser::RulePonxy_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
    match(LogotecGramarParser::PONXY);
    setState(137);
    match(LogotecGramarParser::NUMBER);
    setState(138);
    match(LogotecGramarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ponrumbo_variableContext ------------------------------------------------------------------

LogotecGramarParser::Ponrumbo_variableContext::Ponrumbo_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Ponrumbo_variableContext::PONRUMBO() {
  return getToken(LogotecGramarParser::PONRUMBO, 0);
}

tree::TerminalNode* LogotecGramarParser::Ponrumbo_variableContext::NUMBER() {
  return getToken(LogotecGramarParser::NUMBER, 0);
}


size_t LogotecGramarParser::Ponrumbo_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RulePonrumbo_variable;
}

void LogotecGramarParser::Ponrumbo_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPonrumbo_variable(this);
}

void LogotecGramarParser::Ponrumbo_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPonrumbo_variable(this);
}


std::any LogotecGramarParser::Ponrumbo_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitPonrumbo_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Ponrumbo_variableContext* LogotecGramarParser::ponrumbo_variable() {
  Ponrumbo_variableContext *_localctx = _tracker.createInstance<Ponrumbo_variableContext>(_ctx, getState());
  enterRule(_localctx, 28, LogotecGramarParser::RulePonrumbo_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    match(LogotecGramarParser::PONRUMBO);
    setState(141);
    match(LogotecGramarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

LogotecGramarParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::ExprContext::NUMBER() {
  return getToken(LogotecGramarParser::NUMBER, 0);
}

LogotecGramarParser::LogicoContext* LogotecGramarParser::ExprContext::logico() {
  return getRuleContext<LogotecGramarParser::LogicoContext>(0);
}

tree::TerminalNode* LogotecGramarParser::ExprContext::CADENA_TEXTO() {
  return getToken(LogotecGramarParser::CADENA_TEXTO, 0);
}

tree::TerminalNode* LogotecGramarParser::ExprContext::ID() {
  return getToken(LogotecGramarParser::ID, 0);
}

LogotecGramarParser::OperadorContext* LogotecGramarParser::ExprContext::operador() {
  return getRuleContext<LogotecGramarParser::OperadorContext>(0);
}

std::vector<LogotecGramarParser::ExprContext *> LogotecGramarParser::ExprContext::expr() {
  return getRuleContexts<LogotecGramarParser::ExprContext>();
}

LogotecGramarParser::ExprContext* LogotecGramarParser::ExprContext::expr(size_t i) {
  return getRuleContext<LogotecGramarParser::ExprContext>(i);
}


size_t LogotecGramarParser::ExprContext::getRuleIndex() const {
  return LogotecGramarParser::RuleExpr;
}

void LogotecGramarParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void LogotecGramarParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


std::any LogotecGramarParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


LogotecGramarParser::ExprContext* LogotecGramarParser::expr() {
   return expr(0);
}

LogotecGramarParser::ExprContext* LogotecGramarParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  LogotecGramarParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  LogotecGramarParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, LogotecGramarParser::RuleExpr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(148);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::NUMBER: {
        setState(144);
        match(LogotecGramarParser::NUMBER);
        break;
      }

      case LogotecGramarParser::TRUE:
      case LogotecGramarParser::FALSE: {
        setState(145);
        logico();
        break;
      }

      case LogotecGramarParser::CADENA_TEXTO: {
        setState(146);
        match(LogotecGramarParser::CADENA_TEXTO);
        break;
      }

      case LogotecGramarParser::ID: {
        setState(147);
        match(LogotecGramarParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(156);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
        _localctx->e1 = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleExpr);
        setState(150);

        if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
        setState(151);
        operador();
        setState(152);
        antlrcpp::downCast<ExprContext *>(_localctx)->e2 = expr(6); 
      }
      setState(158);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicoContext ------------------------------------------------------------------

LogotecGramarParser::LogicoContext::LogicoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::LogicoContext::TRUE() {
  return getToken(LogotecGramarParser::TRUE, 0);
}

tree::TerminalNode* LogotecGramarParser::LogicoContext::FALSE() {
  return getToken(LogotecGramarParser::FALSE, 0);
}


size_t LogotecGramarParser::LogicoContext::getRuleIndex() const {
  return LogotecGramarParser::RuleLogico;
}

void LogotecGramarParser::LogicoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogico(this);
}

void LogotecGramarParser::LogicoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogico(this);
}


std::any LogotecGramarParser::LogicoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitLogico(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::LogicoContext* LogotecGramarParser::logico() {
  LogicoContext *_localctx = _tracker.createInstance<LogicoContext>(_ctx, getState());
  enterRule(_localctx, 32, LogotecGramarParser::RuleLogico);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::TRUE

    || _la == LogotecGramarParser::FALSE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValorContext ------------------------------------------------------------------

LogotecGramarParser::ValorContext::ValorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::ValorContext::NUMBER() {
  return getToken(LogotecGramarParser::NUMBER, 0);
}

LogotecGramarParser::LogicoContext* LogotecGramarParser::ValorContext::logico() {
  return getRuleContext<LogotecGramarParser::LogicoContext>(0);
}

tree::TerminalNode* LogotecGramarParser::ValorContext::CADENA_TEXTO() {
  return getToken(LogotecGramarParser::CADENA_TEXTO, 0);
}


size_t LogotecGramarParser::ValorContext::getRuleIndex() const {
  return LogotecGramarParser::RuleValor;
}

void LogotecGramarParser::ValorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValor(this);
}

void LogotecGramarParser::ValorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValor(this);
}


std::any LogotecGramarParser::ValorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitValor(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::ValorContext* LogotecGramarParser::valor() {
  ValorContext *_localctx = _tracker.createInstance<ValorContext>(_ctx, getState());
  enterRule(_localctx, 34, LogotecGramarParser::RuleValor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(164);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(161);
        match(LogotecGramarParser::NUMBER);
        break;
      }

      case LogotecGramarParser::TRUE:
      case LogotecGramarParser::FALSE: {
        enterOuterAlt(_localctx, 2);
        setState(162);
        logico();
        break;
      }

      case LogotecGramarParser::CADENA_TEXTO: {
        enterOuterAlt(_localctx, 3);
        setState(163);
        match(LogotecGramarParser::CADENA_TEXTO);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperadorContext ------------------------------------------------------------------

LogotecGramarParser::OperadorContext::OperadorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::OperadorContext::PLUS() {
  return getToken(LogotecGramarParser::PLUS, 0);
}

tree::TerminalNode* LogotecGramarParser::OperadorContext::MINUS() {
  return getToken(LogotecGramarParser::MINUS, 0);
}

tree::TerminalNode* LogotecGramarParser::OperadorContext::MULT() {
  return getToken(LogotecGramarParser::MULT, 0);
}

tree::TerminalNode* LogotecGramarParser::OperadorContext::DIV() {
  return getToken(LogotecGramarParser::DIV, 0);
}


size_t LogotecGramarParser::OperadorContext::getRuleIndex() const {
  return LogotecGramarParser::RuleOperador;
}

void LogotecGramarParser::OperadorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperador(this);
}

void LogotecGramarParser::OperadorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperador(this);
}


std::any LogotecGramarParser::OperadorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitOperador(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::OperadorContext* LogotecGramarParser::operador() {
  OperadorContext *_localctx = _tracker.createInstance<OperadorContext>(_ctx, getState());
  enterRule(_localctx, 36, LogotecGramarParser::RuleOperador);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16106127360) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool LogotecGramarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 15: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LogotecGramarParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

void LogotecGramarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  logotecgramarParserInitialize();
#else
  ::antlr4::internal::call_once(logotecgramarParserOnceFlag, logotecgramarParserInitialize);
#endif
}
