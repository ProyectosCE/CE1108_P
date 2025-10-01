
// Generated from /home/jimmy/Documents/GitHub/CE1108_P/logotec/LogotecGramar.g4 by ANTLR 4.13.2


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
      "programa", "procedimiento", "parametros", "lista_parametros", "linea", 
      "instruccion", "comentario_linea", "comentario", "haz_variable", "inic_variable", 
      "inc_variable", "avanza_variable", "retrocede_variable", "gira_derecha_variable", 
      "gira_izquierda_variable", "ocultar_tortuga_variable", "ponpos_variable", 
      "ponxy_variable", "ponrumbo_variable", "ponx_variable", "pony_variable", 
      "bajalapiz_variable", "subelapiz_variable", "poncolorlapiz_variable", 
      "centro_variable", "esperar_variable", "ejecuta_variable", "repite_variable", 
      "si_variable", "si_sino_variable", "haz_hasta_variable", "hasta_variable", 
      "haz_mientras_variable", "mientras_variable", "iguales_variable", 
      "y_variable", "o_variable", "mayorque_variable", "menorque_variable", 
      "colores", "expr", "logico", "valor", "operador", "diferencia_expr", 
      "azar_expr", "producto_expr", "potencia_expr", "division_expr", "suma_expr"
    },
    std::vector<std::string>{
      "", "'['", "']'", "','", "'Haz'", "'INIC'", "'INC'", "'avanza'", "'av'", 
      "'retrocede'", "'re'", "'GiraDerecha'", "'GD'", "'GiraIzquierda'", 
      "'GI'", "'OcultarTortuga'", "'OT'", "'ponpos'", "'ponxy'", "'ponrumbo'", 
      "'ponx'", "'pony'", "'bajalapiz'", "'BL'", "'subelapiz'", "'SL'", 
      "'azul'", "'negro'", "'rojo'", "'poncolorlapiz'", "'poncl'", "'centro'", 
      "'espera'", "'True'", "'False'", "", "", "", "", "", "", "'program'", 
      "'var'", "'println'", "'+'", "'-'", "'*'", "'/'", "'if'", "'else'", 
      "'while'", "'for'", "'&&'", "'||'", "'!'", "'>'", "'<'", "'>='", "'<='", 
      "'=='", "'!='", "'='", "'{'", "'}'", "'('", "')'", "';'", "'repite'", 
      "'SI'", "'HAZ.HASTA'", "'HASTA'", "'HAZ.MIENTRAS'", "'MIENTRAS'", 
      "'Iguales\\u003F'", "'Y'", "'O'", "'MayorQue\\u003F'", "'MenorQue\\u003F'", 
      "'Diferencia'", "'Azar'", "'Producto'", "'Potencia'", "'Division'", 
      "'Suma'", "'Resta'", "'Para'", "'Fin'", "'Ejecuta'"
    },
    std::vector<std::string>{
      "", "", "", "", "HAZ", "INIC", "INC", "AVANZA", "AV", "RETROCEDE", 
      "RE", "GIRA_DERECHA", "GD", "GIRA_IZQUIERDA", "GI", "OCULTAR_TORTUGA", 
      "OT", "PONPOS", "PONXY", "PONRUMBO", "PONX", "PONY", "BAJALAPIZ", 
      "BL", "SUBELAPIZ", "SL", "AZUL", "NEGRO", "ROJO", "PONCOLORLAPIZ", 
      "PCL", "CENTRO", "ESPERAR", "TRUE", "FALSE", "NUMBER", "CADENA_TEXTO", 
      "ID", "NEWLINE", "WS", "LINE_COMMENT", "PROGRAM", "VAR", "PRINTLN", 
      "PLUS", "MINUS", "MULT", "DIV", "IF", "ELSE", "WHILE", "FOR", "AND", 
      "OR", "NOT", "GT", "LT", "GEQ", "LEQ", "EQ", "NEQ", "ASSIGN", "BRACKET_OPEN", 
      "BRACKET_CLOSE", "PAR_OPEN", "PAR_CLOSE", "SEMICOLON", "REPITE", "SI", 
      "HAZ_HASTA", "HASTA", "HAZ_MIENTRAS", "MIENTRAS", "IGUALESQ", "Y", 
      "O", "MAYORQUEQ", "MENORQUEQ", "DIFERENCIA", "AZAR", "PRODUCTO", "POTENCIA", 
      "DIVISION", "SUMA", "RESTA", "PARA", "FIN", "EJECUTA"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,87,553,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,1,0,5,0,102,8,0,10,0,12,0,105,9,0,1,0,1,0,1,0,5,0,110,8,0,10,0,12,
  	0,113,9,0,1,0,3,0,116,8,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,127,
  	8,1,10,1,12,1,130,9,1,1,1,3,1,133,8,1,1,1,1,1,1,2,1,2,3,2,139,8,2,1,2,
  	1,2,1,3,1,3,1,3,5,3,146,8,3,10,3,12,3,149,9,3,1,4,4,4,152,8,4,11,4,12,
  	4,153,1,5,1,5,3,5,158,8,5,1,5,1,5,3,5,162,8,5,1,5,1,5,3,5,166,8,5,1,5,
  	1,5,3,5,170,8,5,1,5,1,5,3,5,174,8,5,1,5,1,5,3,5,178,8,5,1,5,1,5,3,5,182,
  	8,5,1,5,1,5,3,5,186,8,5,1,5,1,5,3,5,190,8,5,1,5,1,5,3,5,194,8,5,1,5,1,
  	5,3,5,198,8,5,1,5,1,5,3,5,202,8,5,1,5,1,5,3,5,206,8,5,1,5,1,5,3,5,210,
  	8,5,1,5,1,5,3,5,214,8,5,1,5,1,5,3,5,218,8,5,1,5,1,5,3,5,222,8,5,1,5,1,
  	5,3,5,226,8,5,1,5,1,5,3,5,230,8,5,1,5,1,5,3,5,234,8,5,1,5,1,5,3,5,238,
  	8,5,1,5,1,5,3,5,242,8,5,1,5,1,5,3,5,246,8,5,1,5,1,5,3,5,250,8,5,1,5,1,
  	5,3,5,254,8,5,1,5,1,5,3,5,258,8,5,1,5,1,5,3,5,262,8,5,1,5,1,5,3,5,266,
  	8,5,1,5,1,5,3,5,270,8,5,1,5,1,5,3,5,274,8,5,1,5,1,5,3,5,278,8,5,1,5,3,
  	5,281,8,5,1,6,1,6,1,7,1,7,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,10,1,
  	10,1,10,1,10,3,10,300,8,10,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,12,1,
  	13,1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,
  	17,1,17,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,20,1,21,1,
  	21,1,22,1,22,1,23,1,23,1,23,1,24,1,24,1,25,1,25,1,25,1,26,1,26,1,26,5,
  	26,352,8,26,10,26,12,26,355,9,26,1,26,1,26,1,27,1,27,1,27,1,27,5,27,363,
  	8,27,10,27,12,27,366,9,27,1,27,1,27,1,28,1,28,1,28,1,28,1,28,1,28,5,28,
  	376,8,28,10,28,12,28,379,9,28,1,28,1,28,1,29,1,29,1,29,1,29,1,29,1,29,
  	5,29,389,8,29,10,29,12,29,392,9,29,1,29,1,29,1,29,5,29,397,8,29,10,29,
  	12,29,400,9,29,1,29,1,29,1,30,1,30,1,30,5,30,407,8,30,10,30,12,30,410,
  	9,30,1,30,1,30,1,30,1,30,1,30,1,31,1,31,1,31,1,31,1,31,1,31,5,31,423,
  	8,31,10,31,12,31,426,9,31,1,31,1,31,1,32,1,32,1,32,5,32,433,8,32,10,32,
  	12,32,436,9,32,1,32,1,32,1,32,4,32,441,8,32,11,32,12,32,442,1,32,1,32,
  	1,33,1,33,1,33,1,33,1,33,1,33,5,33,453,8,33,10,33,12,33,456,9,33,1,33,
  	1,33,1,34,1,34,1,34,1,34,1,35,1,35,1,35,1,35,1,35,1,35,1,35,1,35,1,36,
  	1,36,1,36,1,36,1,36,1,36,1,36,1,36,1,37,1,37,1,37,1,37,1,38,1,38,1,38,
  	1,38,1,39,1,39,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,
  	3,40,501,8,40,1,40,1,40,1,40,1,40,5,40,507,8,40,10,40,12,40,510,9,40,
  	1,41,1,41,1,42,1,42,1,42,3,42,517,8,42,1,43,1,43,1,44,1,44,1,44,4,44,
  	524,8,44,11,44,12,44,525,1,45,1,45,1,45,1,46,1,46,1,46,4,46,534,8,46,
  	11,46,12,46,535,1,47,1,47,1,47,1,47,1,48,1,48,1,48,1,48,1,49,1,49,1,49,
  	4,49,549,8,49,11,49,12,49,550,1,49,0,1,80,50,0,2,4,6,8,10,12,14,16,18,
  	20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,
  	66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,98,0,12,2,0,35,35,37,
  	37,1,0,7,8,1,0,9,10,1,0,11,12,1,0,13,14,1,0,15,16,1,0,22,23,1,0,24,25,
  	1,0,29,30,1,0,26,28,1,0,33,34,1,0,44,47,598,0,103,1,0,0,0,2,119,1,0,0,
  	0,4,136,1,0,0,0,6,142,1,0,0,0,8,151,1,0,0,0,10,280,1,0,0,0,12,282,1,0,
  	0,0,14,284,1,0,0,0,16,286,1,0,0,0,18,290,1,0,0,0,20,295,1,0,0,0,22,303,
  	1,0,0,0,24,306,1,0,0,0,26,309,1,0,0,0,28,312,1,0,0,0,30,315,1,0,0,0,32,
  	317,1,0,0,0,34,323,1,0,0,0,36,327,1,0,0,0,38,330,1,0,0,0,40,333,1,0,0,
  	0,42,336,1,0,0,0,44,338,1,0,0,0,46,340,1,0,0,0,48,343,1,0,0,0,50,345,
  	1,0,0,0,52,348,1,0,0,0,54,358,1,0,0,0,56,369,1,0,0,0,58,382,1,0,0,0,60,
  	403,1,0,0,0,62,416,1,0,0,0,64,429,1,0,0,0,66,446,1,0,0,0,68,459,1,0,0,
  	0,70,463,1,0,0,0,72,471,1,0,0,0,74,479,1,0,0,0,76,483,1,0,0,0,78,487,
  	1,0,0,0,80,500,1,0,0,0,82,511,1,0,0,0,84,516,1,0,0,0,86,518,1,0,0,0,88,
  	520,1,0,0,0,90,527,1,0,0,0,92,530,1,0,0,0,94,537,1,0,0,0,96,541,1,0,0,
  	0,98,545,1,0,0,0,100,102,3,2,1,0,101,100,1,0,0,0,102,105,1,0,0,0,103,
  	101,1,0,0,0,103,104,1,0,0,0,104,111,1,0,0,0,105,103,1,0,0,0,106,107,3,
  	8,4,0,107,108,5,38,0,0,108,110,1,0,0,0,109,106,1,0,0,0,110,113,1,0,0,
  	0,111,109,1,0,0,0,111,112,1,0,0,0,112,115,1,0,0,0,113,111,1,0,0,0,114,
  	116,3,8,4,0,115,114,1,0,0,0,115,116,1,0,0,0,116,117,1,0,0,0,117,118,5,
  	0,0,1,118,1,1,0,0,0,119,120,5,85,0,0,120,121,5,37,0,0,121,122,3,4,2,0,
  	122,128,5,38,0,0,123,124,3,8,4,0,124,125,5,38,0,0,125,127,1,0,0,0,126,
  	123,1,0,0,0,127,130,1,0,0,0,128,126,1,0,0,0,128,129,1,0,0,0,129,132,1,
  	0,0,0,130,128,1,0,0,0,131,133,3,8,4,0,132,131,1,0,0,0,132,133,1,0,0,0,
  	133,134,1,0,0,0,134,135,5,86,0,0,135,3,1,0,0,0,136,138,5,1,0,0,137,139,
  	3,6,3,0,138,137,1,0,0,0,138,139,1,0,0,0,139,140,1,0,0,0,140,141,5,2,0,
  	0,141,5,1,0,0,0,142,147,5,37,0,0,143,144,5,3,0,0,144,146,5,37,0,0,145,
  	143,1,0,0,0,146,149,1,0,0,0,147,145,1,0,0,0,147,148,1,0,0,0,148,7,1,0,
  	0,0,149,147,1,0,0,0,150,152,3,10,5,0,151,150,1,0,0,0,152,153,1,0,0,0,
  	153,151,1,0,0,0,153,154,1,0,0,0,154,9,1,0,0,0,155,157,3,16,8,0,156,158,
  	3,12,6,0,157,156,1,0,0,0,157,158,1,0,0,0,158,281,1,0,0,0,159,161,3,18,
  	9,0,160,162,3,12,6,0,161,160,1,0,0,0,161,162,1,0,0,0,162,281,1,0,0,0,
  	163,165,3,20,10,0,164,166,3,12,6,0,165,164,1,0,0,0,165,166,1,0,0,0,166,
  	281,1,0,0,0,167,169,3,22,11,0,168,170,3,12,6,0,169,168,1,0,0,0,169,170,
  	1,0,0,0,170,281,1,0,0,0,171,173,3,24,12,0,172,174,3,12,6,0,173,172,1,
  	0,0,0,173,174,1,0,0,0,174,281,1,0,0,0,175,177,3,26,13,0,176,178,3,12,
  	6,0,177,176,1,0,0,0,177,178,1,0,0,0,178,281,1,0,0,0,179,181,3,28,14,0,
  	180,182,3,12,6,0,181,180,1,0,0,0,181,182,1,0,0,0,182,281,1,0,0,0,183,
  	185,3,30,15,0,184,186,3,12,6,0,185,184,1,0,0,0,185,186,1,0,0,0,186,281,
  	1,0,0,0,187,189,3,32,16,0,188,190,3,12,6,0,189,188,1,0,0,0,189,190,1,
  	0,0,0,190,281,1,0,0,0,191,193,3,34,17,0,192,194,3,12,6,0,193,192,1,0,
  	0,0,193,194,1,0,0,0,194,281,1,0,0,0,195,197,3,36,18,0,196,198,3,12,6,
  	0,197,196,1,0,0,0,197,198,1,0,0,0,198,281,1,0,0,0,199,201,3,38,19,0,200,
  	202,3,12,6,0,201,200,1,0,0,0,201,202,1,0,0,0,202,281,1,0,0,0,203,205,
  	3,40,20,0,204,206,3,12,6,0,205,204,1,0,0,0,205,206,1,0,0,0,206,281,1,
  	0,0,0,207,209,3,42,21,0,208,210,3,12,6,0,209,208,1,0,0,0,209,210,1,0,
  	0,0,210,281,1,0,0,0,211,213,3,44,22,0,212,214,3,12,6,0,213,212,1,0,0,
  	0,213,214,1,0,0,0,214,281,1,0,0,0,215,217,3,46,23,0,216,218,3,12,6,0,
  	217,216,1,0,0,0,217,218,1,0,0,0,218,281,1,0,0,0,219,221,3,48,24,0,220,
  	222,3,12,6,0,221,220,1,0,0,0,221,222,1,0,0,0,222,281,1,0,0,0,223,225,
  	3,50,25,0,224,226,3,12,6,0,225,224,1,0,0,0,225,226,1,0,0,0,226,281,1,
  	0,0,0,227,229,3,52,26,0,228,230,3,12,6,0,229,228,1,0,0,0,229,230,1,0,
  	0,0,230,281,1,0,0,0,231,233,3,54,27,0,232,234,3,12,6,0,233,232,1,0,0,
  	0,233,234,1,0,0,0,234,281,1,0,0,0,235,237,3,58,29,0,236,238,3,12,6,0,
  	237,236,1,0,0,0,237,238,1,0,0,0,238,281,1,0,0,0,239,241,3,56,28,0,240,
  	242,3,12,6,0,241,240,1,0,0,0,241,242,1,0,0,0,242,281,1,0,0,0,243,245,
  	3,60,30,0,244,246,3,12,6,0,245,244,1,0,0,0,245,246,1,0,0,0,246,281,1,
  	0,0,0,247,249,3,62,31,0,248,250,3,12,6,0,249,248,1,0,0,0,249,250,1,0,
  	0,0,250,281,1,0,0,0,251,253,3,64,32,0,252,254,3,12,6,0,253,252,1,0,0,
  	0,253,254,1,0,0,0,254,281,1,0,0,0,255,257,3,66,33,0,256,258,3,12,6,0,
  	257,256,1,0,0,0,257,258,1,0,0,0,258,281,1,0,0,0,259,261,3,68,34,0,260,
  	262,3,12,6,0,261,260,1,0,0,0,261,262,1,0,0,0,262,281,1,0,0,0,263,265,
  	3,70,35,0,264,266,3,12,6,0,265,264,1,0,0,0,265,266,1,0,0,0,266,281,1,
  	0,0,0,267,269,3,72,36,0,268,270,3,12,6,0,269,268,1,0,0,0,269,270,1,0,
  	0,0,270,281,1,0,0,0,271,273,3,74,37,0,272,274,3,12,6,0,273,272,1,0,0,
  	0,273,274,1,0,0,0,274,281,1,0,0,0,275,277,3,76,38,0,276,278,3,12,6,0,
  	277,276,1,0,0,0,277,278,1,0,0,0,278,281,1,0,0,0,279,281,3,14,7,0,280,
  	155,1,0,0,0,280,159,1,0,0,0,280,163,1,0,0,0,280,167,1,0,0,0,280,171,1,
  	0,0,0,280,175,1,0,0,0,280,179,1,0,0,0,280,183,1,0,0,0,280,187,1,0,0,0,
  	280,191,1,0,0,0,280,195,1,0,0,0,280,199,1,0,0,0,280,203,1,0,0,0,280,207,
  	1,0,0,0,280,211,1,0,0,0,280,215,1,0,0,0,280,219,1,0,0,0,280,223,1,0,0,
  	0,280,227,1,0,0,0,280,231,1,0,0,0,280,235,1,0,0,0,280,239,1,0,0,0,280,
  	243,1,0,0,0,280,247,1,0,0,0,280,251,1,0,0,0,280,255,1,0,0,0,280,259,1,
  	0,0,0,280,263,1,0,0,0,280,267,1,0,0,0,280,271,1,0,0,0,280,275,1,0,0,0,
  	280,279,1,0,0,0,281,11,1,0,0,0,282,283,5,40,0,0,283,13,1,0,0,0,284,285,
  	5,40,0,0,285,15,1,0,0,0,286,287,5,4,0,0,287,288,5,37,0,0,288,289,3,84,
  	42,0,289,17,1,0,0,0,290,291,5,5,0,0,291,292,5,37,0,0,292,293,5,61,0,0,
  	293,294,3,80,40,0,294,19,1,0,0,0,295,296,5,6,0,0,296,297,5,1,0,0,297,
  	299,5,37,0,0,298,300,7,0,0,0,299,298,1,0,0,0,299,300,1,0,0,0,300,301,
  	1,0,0,0,301,302,5,2,0,0,302,21,1,0,0,0,303,304,7,1,0,0,304,305,3,80,40,
  	0,305,23,1,0,0,0,306,307,7,2,0,0,307,308,3,80,40,0,308,25,1,0,0,0,309,
  	310,7,3,0,0,310,311,3,80,40,0,311,27,1,0,0,0,312,313,7,4,0,0,313,314,
  	3,80,40,0,314,29,1,0,0,0,315,316,7,5,0,0,316,31,1,0,0,0,317,318,5,17,
  	0,0,318,319,5,1,0,0,319,320,5,35,0,0,320,321,5,35,0,0,321,322,5,2,0,0,
  	322,33,1,0,0,0,323,324,5,18,0,0,324,325,5,35,0,0,325,326,5,35,0,0,326,
  	35,1,0,0,0,327,328,5,19,0,0,328,329,5,35,0,0,329,37,1,0,0,0,330,331,5,
  	20,0,0,331,332,5,35,0,0,332,39,1,0,0,0,333,334,5,21,0,0,334,335,5,35,
  	0,0,335,41,1,0,0,0,336,337,7,6,0,0,337,43,1,0,0,0,338,339,7,7,0,0,339,
  	45,1,0,0,0,340,341,7,8,0,0,341,342,3,78,39,0,342,47,1,0,0,0,343,344,5,
  	31,0,0,344,49,1,0,0,0,345,346,5,32,0,0,346,347,5,35,0,0,347,51,1,0,0,
  	0,348,349,5,87,0,0,349,353,5,1,0,0,350,352,3,10,5,0,351,350,1,0,0,0,352,
  	355,1,0,0,0,353,351,1,0,0,0,353,354,1,0,0,0,354,356,1,0,0,0,355,353,1,
  	0,0,0,356,357,5,2,0,0,357,53,1,0,0,0,358,359,5,67,0,0,359,360,5,35,0,
  	0,360,364,5,1,0,0,361,363,3,10,5,0,362,361,1,0,0,0,363,366,1,0,0,0,364,
  	362,1,0,0,0,364,365,1,0,0,0,365,367,1,0,0,0,366,364,1,0,0,0,367,368,5,
  	2,0,0,368,55,1,0,0,0,369,370,5,68,0,0,370,371,5,64,0,0,371,372,3,80,40,
  	0,372,373,5,65,0,0,373,377,5,1,0,0,374,376,3,10,5,0,375,374,1,0,0,0,376,
  	379,1,0,0,0,377,375,1,0,0,0,377,378,1,0,0,0,378,380,1,0,0,0,379,377,1,
  	0,0,0,380,381,5,2,0,0,381,57,1,0,0,0,382,383,5,68,0,0,383,384,5,64,0,
  	0,384,385,3,80,40,0,385,386,5,65,0,0,386,390,5,1,0,0,387,389,3,10,5,0,
  	388,387,1,0,0,0,389,392,1,0,0,0,390,388,1,0,0,0,390,391,1,0,0,0,391,393,
  	1,0,0,0,392,390,1,0,0,0,393,394,5,2,0,0,394,398,5,1,0,0,395,397,3,10,
  	5,0,396,395,1,0,0,0,397,400,1,0,0,0,398,396,1,0,0,0,398,399,1,0,0,0,399,
  	401,1,0,0,0,400,398,1,0,0,0,401,402,5,2,0,0,402,59,1,0,0,0,403,404,5,
  	69,0,0,404,408,5,1,0,0,405,407,3,10,5,0,406,405,1,0,0,0,407,410,1,0,0,
  	0,408,406,1,0,0,0,408,409,1,0,0,0,409,411,1,0,0,0,410,408,1,0,0,0,411,
  	412,5,2,0,0,412,413,5,64,0,0,413,414,3,80,40,0,414,415,5,65,0,0,415,61,
  	1,0,0,0,416,417,5,70,0,0,417,418,5,64,0,0,418,419,3,80,40,0,419,420,5,
  	65,0,0,420,424,5,1,0,0,421,423,3,10,5,0,422,421,1,0,0,0,423,426,1,0,0,
  	0,424,422,1,0,0,0,424,425,1,0,0,0,425,427,1,0,0,0,426,424,1,0,0,0,427,
  	428,5,2,0,0,428,63,1,0,0,0,429,430,5,71,0,0,430,434,5,1,0,0,431,433,3,
  	10,5,0,432,431,1,0,0,0,433,436,1,0,0,0,434,432,1,0,0,0,434,435,1,0,0,
  	0,435,437,1,0,0,0,436,434,1,0,0,0,437,438,5,2,0,0,438,440,5,1,0,0,439,
  	441,3,80,40,0,440,439,1,0,0,0,441,442,1,0,0,0,442,440,1,0,0,0,442,443,
  	1,0,0,0,443,444,1,0,0,0,444,445,5,2,0,0,445,65,1,0,0,0,446,447,5,72,0,
  	0,447,448,5,64,0,0,448,449,3,80,40,0,449,450,5,65,0,0,450,454,5,1,0,0,
  	451,453,3,10,5,0,452,451,1,0,0,0,453,456,1,0,0,0,454,452,1,0,0,0,454,
  	455,1,0,0,0,455,457,1,0,0,0,456,454,1,0,0,0,457,458,5,2,0,0,458,67,1,
  	0,0,0,459,460,5,73,0,0,460,461,3,80,40,0,461,462,3,80,40,0,462,69,1,0,
  	0,0,463,464,5,74,0,0,464,465,5,64,0,0,465,466,3,80,40,0,466,467,5,65,
  	0,0,467,468,5,64,0,0,468,469,3,80,40,0,469,470,5,65,0,0,470,71,1,0,0,
  	0,471,472,5,75,0,0,472,473,5,64,0,0,473,474,3,80,40,0,474,475,5,65,0,
  	0,475,476,5,64,0,0,476,477,3,80,40,0,477,478,5,65,0,0,478,73,1,0,0,0,
  	479,480,5,76,0,0,480,481,3,80,40,0,481,482,3,80,40,0,482,75,1,0,0,0,483,
  	484,5,77,0,0,484,485,3,80,40,0,485,486,3,80,40,0,486,77,1,0,0,0,487,488,
  	7,9,0,0,488,79,1,0,0,0,489,490,6,40,-1,0,490,501,5,35,0,0,491,501,3,82,
  	41,0,492,501,5,36,0,0,493,501,5,37,0,0,494,501,3,88,44,0,495,501,3,90,
  	45,0,496,501,3,92,46,0,497,501,3,94,47,0,498,501,3,96,48,0,499,501,3,
  	98,49,0,500,489,1,0,0,0,500,491,1,0,0,0,500,492,1,0,0,0,500,493,1,0,0,
  	0,500,494,1,0,0,0,500,495,1,0,0,0,500,496,1,0,0,0,500,497,1,0,0,0,500,
  	498,1,0,0,0,500,499,1,0,0,0,501,508,1,0,0,0,502,503,10,11,0,0,503,504,
  	3,86,43,0,504,505,3,80,40,12,505,507,1,0,0,0,506,502,1,0,0,0,507,510,
  	1,0,0,0,508,506,1,0,0,0,508,509,1,0,0,0,509,81,1,0,0,0,510,508,1,0,0,
  	0,511,512,7,10,0,0,512,83,1,0,0,0,513,517,5,35,0,0,514,517,3,82,41,0,
  	515,517,5,36,0,0,516,513,1,0,0,0,516,514,1,0,0,0,516,515,1,0,0,0,517,
  	85,1,0,0,0,518,519,7,11,0,0,519,87,1,0,0,0,520,521,5,78,0,0,521,523,3,
  	80,40,0,522,524,3,80,40,0,523,522,1,0,0,0,524,525,1,0,0,0,525,523,1,0,
  	0,0,525,526,1,0,0,0,526,89,1,0,0,0,527,528,5,79,0,0,528,529,3,80,40,0,
  	529,91,1,0,0,0,530,531,5,80,0,0,531,533,3,80,40,0,532,534,3,80,40,0,533,
  	532,1,0,0,0,534,535,1,0,0,0,535,533,1,0,0,0,535,536,1,0,0,0,536,93,1,
  	0,0,0,537,538,5,81,0,0,538,539,3,80,40,0,539,540,3,80,40,0,540,95,1,0,
  	0,0,541,542,5,82,0,0,542,543,3,80,40,0,543,544,3,80,40,0,544,97,1,0,0,
  	0,545,546,5,83,0,0,546,548,3,80,40,0,547,549,3,80,40,0,548,547,1,0,0,
  	0,549,550,1,0,0,0,550,548,1,0,0,0,550,551,1,0,0,0,551,99,1,0,0,0,57,103,
  	111,115,128,132,138,147,153,157,161,165,169,173,177,181,185,189,193,197,
  	201,205,209,213,217,221,225,229,233,237,241,245,249,253,257,261,265,269,
  	273,277,280,299,353,364,377,390,398,408,424,434,442,454,500,508,516,525,
  	535,550
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

std::vector<LogotecGramarParser::ProcedimientoContext *> LogotecGramarParser::ProgramaContext::procedimiento() {
  return getRuleContexts<LogotecGramarParser::ProcedimientoContext>();
}

LogotecGramarParser::ProcedimientoContext* LogotecGramarParser::ProgramaContext::procedimiento(size_t i) {
  return getRuleContext<LogotecGramarParser::ProcedimientoContext>(i);
}

std::vector<LogotecGramarParser::LineaContext *> LogotecGramarParser::ProgramaContext::linea() {
  return getRuleContexts<LogotecGramarParser::LineaContext>();
}

LogotecGramarParser::LineaContext* LogotecGramarParser::ProgramaContext::linea(size_t i) {
  return getRuleContext<LogotecGramarParser::LineaContext>(i);
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
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(103);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogotecGramarParser::PARA) {
      setState(100);
      procedimiento();
      setState(105);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(111);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(106);
        linea();
        setState(107);
        match(LogotecGramarParser::NEWLINE); 
      }
      setState(113);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
    setState(115);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1107631800304) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 1050623) != 0)) {
      setState(114);
      linea();
    }
    setState(117);
    match(LogotecGramarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedimientoContext ------------------------------------------------------------------

LogotecGramarParser::ProcedimientoContext::ProcedimientoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::ProcedimientoContext::PARA() {
  return getToken(LogotecGramarParser::PARA, 0);
}

tree::TerminalNode* LogotecGramarParser::ProcedimientoContext::ID() {
  return getToken(LogotecGramarParser::ID, 0);
}

LogotecGramarParser::ParametrosContext* LogotecGramarParser::ProcedimientoContext::parametros() {
  return getRuleContext<LogotecGramarParser::ParametrosContext>(0);
}

std::vector<tree::TerminalNode *> LogotecGramarParser::ProcedimientoContext::NEWLINE() {
  return getTokens(LogotecGramarParser::NEWLINE);
}

tree::TerminalNode* LogotecGramarParser::ProcedimientoContext::NEWLINE(size_t i) {
  return getToken(LogotecGramarParser::NEWLINE, i);
}

tree::TerminalNode* LogotecGramarParser::ProcedimientoContext::FIN() {
  return getToken(LogotecGramarParser::FIN, 0);
}

std::vector<LogotecGramarParser::LineaContext *> LogotecGramarParser::ProcedimientoContext::linea() {
  return getRuleContexts<LogotecGramarParser::LineaContext>();
}

LogotecGramarParser::LineaContext* LogotecGramarParser::ProcedimientoContext::linea(size_t i) {
  return getRuleContext<LogotecGramarParser::LineaContext>(i);
}


size_t LogotecGramarParser::ProcedimientoContext::getRuleIndex() const {
  return LogotecGramarParser::RuleProcedimiento;
}

void LogotecGramarParser::ProcedimientoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcedimiento(this);
}

void LogotecGramarParser::ProcedimientoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcedimiento(this);
}


std::any LogotecGramarParser::ProcedimientoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitProcedimiento(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::ProcedimientoContext* LogotecGramarParser::procedimiento() {
  ProcedimientoContext *_localctx = _tracker.createInstance<ProcedimientoContext>(_ctx, getState());
  enterRule(_localctx, 2, LogotecGramarParser::RuleProcedimiento);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(LogotecGramarParser::PARA);
    setState(120);
    match(LogotecGramarParser::ID);
    setState(121);
    parametros();
    setState(122);
    match(LogotecGramarParser::NEWLINE);
    setState(128);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(123);
        linea();
        setState(124);
        match(LogotecGramarParser::NEWLINE); 
      }
      setState(130);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
    setState(132);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1107631800304) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 1050623) != 0)) {
      setState(131);
      linea();
    }
    setState(134);
    match(LogotecGramarParser::FIN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametrosContext ------------------------------------------------------------------

LogotecGramarParser::ParametrosContext::ParametrosContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LogotecGramarParser::Lista_parametrosContext* LogotecGramarParser::ParametrosContext::lista_parametros() {
  return getRuleContext<LogotecGramarParser::Lista_parametrosContext>(0);
}


size_t LogotecGramarParser::ParametrosContext::getRuleIndex() const {
  return LogotecGramarParser::RuleParametros;
}

void LogotecGramarParser::ParametrosContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParametros(this);
}

void LogotecGramarParser::ParametrosContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParametros(this);
}


std::any LogotecGramarParser::ParametrosContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitParametros(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::ParametrosContext* LogotecGramarParser::parametros() {
  ParametrosContext *_localctx = _tracker.createInstance<ParametrosContext>(_ctx, getState());
  enterRule(_localctx, 4, LogotecGramarParser::RuleParametros);
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
    setState(136);
    match(LogotecGramarParser::T__0);
    setState(138);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::ID) {
      setState(137);
      lista_parametros();
    }
    setState(140);
    match(LogotecGramarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Lista_parametrosContext ------------------------------------------------------------------

LogotecGramarParser::Lista_parametrosContext::Lista_parametrosContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LogotecGramarParser::Lista_parametrosContext::ID() {
  return getTokens(LogotecGramarParser::ID);
}

tree::TerminalNode* LogotecGramarParser::Lista_parametrosContext::ID(size_t i) {
  return getToken(LogotecGramarParser::ID, i);
}


size_t LogotecGramarParser::Lista_parametrosContext::getRuleIndex() const {
  return LogotecGramarParser::RuleLista_parametros;
}

void LogotecGramarParser::Lista_parametrosContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLista_parametros(this);
}

void LogotecGramarParser::Lista_parametrosContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLista_parametros(this);
}


std::any LogotecGramarParser::Lista_parametrosContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitLista_parametros(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Lista_parametrosContext* LogotecGramarParser::lista_parametros() {
  Lista_parametrosContext *_localctx = _tracker.createInstance<Lista_parametrosContext>(_ctx, getState());
  enterRule(_localctx, 6, LogotecGramarParser::RuleLista_parametros);
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
    setState(142);
    match(LogotecGramarParser::ID);
    setState(147);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogotecGramarParser::T__2) {
      setState(143);
      match(LogotecGramarParser::T__2);
      setState(144);
      match(LogotecGramarParser::ID);
      setState(149);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LineaContext ------------------------------------------------------------------

LogotecGramarParser::LineaContext::LineaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LogotecGramarParser::InstruccionContext *> LogotecGramarParser::LineaContext::instruccion() {
  return getRuleContexts<LogotecGramarParser::InstruccionContext>();
}

LogotecGramarParser::InstruccionContext* LogotecGramarParser::LineaContext::instruccion(size_t i) {
  return getRuleContext<LogotecGramarParser::InstruccionContext>(i);
}


size_t LogotecGramarParser::LineaContext::getRuleIndex() const {
  return LogotecGramarParser::RuleLinea;
}

void LogotecGramarParser::LineaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLinea(this);
}

void LogotecGramarParser::LineaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLinea(this);
}


std::any LogotecGramarParser::LineaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitLinea(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::LineaContext* LogotecGramarParser::linea() {
  LineaContext *_localctx = _tracker.createInstance<LineaContext>(_ctx, getState());
  enterRule(_localctx, 8, LogotecGramarParser::RuleLinea);
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
    setState(151); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(150);
      instruccion();
      setState(153); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1107631800304) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 1050623) != 0));
   
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

LogotecGramarParser::Ponx_variableContext* LogotecGramarParser::InstruccionContext::ponx_variable() {
  return getRuleContext<LogotecGramarParser::Ponx_variableContext>(0);
}

LogotecGramarParser::Pony_variableContext* LogotecGramarParser::InstruccionContext::pony_variable() {
  return getRuleContext<LogotecGramarParser::Pony_variableContext>(0);
}

LogotecGramarParser::Bajalapiz_variableContext* LogotecGramarParser::InstruccionContext::bajalapiz_variable() {
  return getRuleContext<LogotecGramarParser::Bajalapiz_variableContext>(0);
}

LogotecGramarParser::Subelapiz_variableContext* LogotecGramarParser::InstruccionContext::subelapiz_variable() {
  return getRuleContext<LogotecGramarParser::Subelapiz_variableContext>(0);
}

LogotecGramarParser::Poncolorlapiz_variableContext* LogotecGramarParser::InstruccionContext::poncolorlapiz_variable() {
  return getRuleContext<LogotecGramarParser::Poncolorlapiz_variableContext>(0);
}

LogotecGramarParser::Centro_variableContext* LogotecGramarParser::InstruccionContext::centro_variable() {
  return getRuleContext<LogotecGramarParser::Centro_variableContext>(0);
}

LogotecGramarParser::Esperar_variableContext* LogotecGramarParser::InstruccionContext::esperar_variable() {
  return getRuleContext<LogotecGramarParser::Esperar_variableContext>(0);
}

LogotecGramarParser::Ejecuta_variableContext* LogotecGramarParser::InstruccionContext::ejecuta_variable() {
  return getRuleContext<LogotecGramarParser::Ejecuta_variableContext>(0);
}

LogotecGramarParser::Repite_variableContext* LogotecGramarParser::InstruccionContext::repite_variable() {
  return getRuleContext<LogotecGramarParser::Repite_variableContext>(0);
}

LogotecGramarParser::Si_sino_variableContext* LogotecGramarParser::InstruccionContext::si_sino_variable() {
  return getRuleContext<LogotecGramarParser::Si_sino_variableContext>(0);
}

LogotecGramarParser::Si_variableContext* LogotecGramarParser::InstruccionContext::si_variable() {
  return getRuleContext<LogotecGramarParser::Si_variableContext>(0);
}

LogotecGramarParser::Haz_hasta_variableContext* LogotecGramarParser::InstruccionContext::haz_hasta_variable() {
  return getRuleContext<LogotecGramarParser::Haz_hasta_variableContext>(0);
}

LogotecGramarParser::Hasta_variableContext* LogotecGramarParser::InstruccionContext::hasta_variable() {
  return getRuleContext<LogotecGramarParser::Hasta_variableContext>(0);
}

LogotecGramarParser::Haz_mientras_variableContext* LogotecGramarParser::InstruccionContext::haz_mientras_variable() {
  return getRuleContext<LogotecGramarParser::Haz_mientras_variableContext>(0);
}

LogotecGramarParser::Mientras_variableContext* LogotecGramarParser::InstruccionContext::mientras_variable() {
  return getRuleContext<LogotecGramarParser::Mientras_variableContext>(0);
}

LogotecGramarParser::Iguales_variableContext* LogotecGramarParser::InstruccionContext::iguales_variable() {
  return getRuleContext<LogotecGramarParser::Iguales_variableContext>(0);
}

LogotecGramarParser::Y_variableContext* LogotecGramarParser::InstruccionContext::y_variable() {
  return getRuleContext<LogotecGramarParser::Y_variableContext>(0);
}

LogotecGramarParser::O_variableContext* LogotecGramarParser::InstruccionContext::o_variable() {
  return getRuleContext<LogotecGramarParser::O_variableContext>(0);
}

LogotecGramarParser::Mayorque_variableContext* LogotecGramarParser::InstruccionContext::mayorque_variable() {
  return getRuleContext<LogotecGramarParser::Mayorque_variableContext>(0);
}

LogotecGramarParser::Menorque_variableContext* LogotecGramarParser::InstruccionContext::menorque_variable() {
  return getRuleContext<LogotecGramarParser::Menorque_variableContext>(0);
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
  enterRule(_localctx, 10, LogotecGramarParser::RuleInstruccion);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(280);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(155);
      haz_variable();
      setState(157);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
      case 1: {
        setState(156);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(159);
      inic_variable();
      setState(161);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
      case 1: {
        setState(160);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(163);
      inc_variable();
      setState(165);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
      case 1: {
        setState(164);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(167);
      avanza_variable();
      setState(169);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
      case 1: {
        setState(168);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(171);
      retrocede_variable();
      setState(173);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
      case 1: {
        setState(172);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(175);
      gira_derecha_variable();
      setState(177);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        setState(176);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(179);
      gira_izquierda_variable();
      setState(181);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
      case 1: {
        setState(180);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(183);
      ocultar_tortuga_variable();
      setState(185);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
      case 1: {
        setState(184);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(187);
      ponpos_variable();
      setState(189);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
      case 1: {
        setState(188);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(191);
      ponxy_variable();
      setState(193);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
      case 1: {
        setState(192);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(195);
      ponrumbo_variable();
      setState(197);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
      case 1: {
        setState(196);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(199);
      ponx_variable();
      setState(201);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(200);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(203);
      pony_variable();
      setState(205);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
      case 1: {
        setState(204);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(207);
      bajalapiz_variable();
      setState(209);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
      case 1: {
        setState(208);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(211);
      subelapiz_variable();
      setState(213);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
      case 1: {
        setState(212);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(215);
      poncolorlapiz_variable();
      setState(217);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
      case 1: {
        setState(216);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(219);
      centro_variable();
      setState(221);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
      case 1: {
        setState(220);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(223);
      esperar_variable();
      setState(225);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
      case 1: {
        setState(224);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(227);
      ejecuta_variable();
      setState(229);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
      case 1: {
        setState(228);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(231);
      repite_variable();
      setState(233);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
      case 1: {
        setState(232);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(235);
      si_sino_variable();
      setState(237);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
      case 1: {
        setState(236);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(239);
      si_variable();
      setState(241);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
      case 1: {
        setState(240);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(243);
      haz_hasta_variable();
      setState(245);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
      case 1: {
        setState(244);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(247);
      hasta_variable();
      setState(249);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
      case 1: {
        setState(248);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(251);
      haz_mientras_variable();
      setState(253);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
      case 1: {
        setState(252);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(255);
      mientras_variable();
      setState(257);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
      case 1: {
        setState(256);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(259);
      iguales_variable();
      setState(261);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
      case 1: {
        setState(260);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(263);
      y_variable();
      setState(265);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
      case 1: {
        setState(264);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(267);
      o_variable();
      setState(269);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
      case 1: {
        setState(268);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(271);
      mayorque_variable();
      setState(273);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
      case 1: {
        setState(272);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(275);
      menorque_variable();
      setState(277);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
      case 1: {
        setState(276);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(279);
      comentario();
      break;
    }

    default:
      break;
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
  enterRule(_localctx, 12, LogotecGramarParser::RuleComentario_linea);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
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
  enterRule(_localctx, 14, LogotecGramarParser::RuleComentario);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
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
  enterRule(_localctx, 16, LogotecGramarParser::RuleHaz_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(286);
    match(LogotecGramarParser::HAZ);
    setState(287);
    match(LogotecGramarParser::ID);
    setState(288);
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
  enterRule(_localctx, 18, LogotecGramarParser::RuleInic_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    match(LogotecGramarParser::INIC);
    setState(291);
    match(LogotecGramarParser::ID);
    setState(292);
    match(LogotecGramarParser::ASSIGN);
    setState(293);
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
  enterRule(_localctx, 20, LogotecGramarParser::RuleInc_variable);
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
    setState(295);
    match(LogotecGramarParser::INC);
    setState(296);
    match(LogotecGramarParser::T__0);
    setState(297);
    match(LogotecGramarParser::ID);
    setState(299);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::NUMBER

    || _la == LogotecGramarParser::ID) {
      setState(298);
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
    setState(301);
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
  enterRule(_localctx, 22, LogotecGramarParser::RuleAvanza_variable);
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
    setState(303);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::AVANZA

    || _la == LogotecGramarParser::AV)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(304);
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
  enterRule(_localctx, 24, LogotecGramarParser::RuleRetrocede_variable);
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
    setState(306);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::RETROCEDE

    || _la == LogotecGramarParser::RE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(307);
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
  enterRule(_localctx, 26, LogotecGramarParser::RuleGira_derecha_variable);
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
    setState(309);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::GIRA_DERECHA

    || _la == LogotecGramarParser::GD)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(310);
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
  enterRule(_localctx, 28, LogotecGramarParser::RuleGira_izquierda_variable);
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
    setState(312);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::GIRA_IZQUIERDA

    || _la == LogotecGramarParser::GI)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(313);
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
  enterRule(_localctx, 30, LogotecGramarParser::RuleOcultar_tortuga_variable);
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
    setState(315);
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
  enterRule(_localctx, 32, LogotecGramarParser::RulePonpos_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(317);
    match(LogotecGramarParser::PONPOS);
    setState(318);
    match(LogotecGramarParser::T__0);
    setState(319);
    match(LogotecGramarParser::NUMBER);
    setState(320);
    match(LogotecGramarParser::NUMBER);
    setState(321);
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
  enterRule(_localctx, 34, LogotecGramarParser::RulePonxy_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(323);
    match(LogotecGramarParser::PONXY);
    setState(324);
    match(LogotecGramarParser::NUMBER);
    setState(325);
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
  enterRule(_localctx, 36, LogotecGramarParser::RulePonrumbo_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    match(LogotecGramarParser::PONRUMBO);
    setState(328);
    match(LogotecGramarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ponx_variableContext ------------------------------------------------------------------

LogotecGramarParser::Ponx_variableContext::Ponx_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Ponx_variableContext::PONX() {
  return getToken(LogotecGramarParser::PONX, 0);
}

tree::TerminalNode* LogotecGramarParser::Ponx_variableContext::NUMBER() {
  return getToken(LogotecGramarParser::NUMBER, 0);
}


size_t LogotecGramarParser::Ponx_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RulePonx_variable;
}

void LogotecGramarParser::Ponx_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPonx_variable(this);
}

void LogotecGramarParser::Ponx_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPonx_variable(this);
}


std::any LogotecGramarParser::Ponx_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitPonx_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Ponx_variableContext* LogotecGramarParser::ponx_variable() {
  Ponx_variableContext *_localctx = _tracker.createInstance<Ponx_variableContext>(_ctx, getState());
  enterRule(_localctx, 38, LogotecGramarParser::RulePonx_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(330);
    match(LogotecGramarParser::PONX);
    setState(331);
    match(LogotecGramarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pony_variableContext ------------------------------------------------------------------

LogotecGramarParser::Pony_variableContext::Pony_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Pony_variableContext::PONY() {
  return getToken(LogotecGramarParser::PONY, 0);
}

tree::TerminalNode* LogotecGramarParser::Pony_variableContext::NUMBER() {
  return getToken(LogotecGramarParser::NUMBER, 0);
}


size_t LogotecGramarParser::Pony_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RulePony_variable;
}

void LogotecGramarParser::Pony_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPony_variable(this);
}

void LogotecGramarParser::Pony_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPony_variable(this);
}


std::any LogotecGramarParser::Pony_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitPony_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Pony_variableContext* LogotecGramarParser::pony_variable() {
  Pony_variableContext *_localctx = _tracker.createInstance<Pony_variableContext>(_ctx, getState());
  enterRule(_localctx, 40, LogotecGramarParser::RulePony_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(333);
    match(LogotecGramarParser::PONY);
    setState(334);
    match(LogotecGramarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bajalapiz_variableContext ------------------------------------------------------------------

LogotecGramarParser::Bajalapiz_variableContext::Bajalapiz_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Bajalapiz_variableContext::BAJALAPIZ() {
  return getToken(LogotecGramarParser::BAJALAPIZ, 0);
}

tree::TerminalNode* LogotecGramarParser::Bajalapiz_variableContext::BL() {
  return getToken(LogotecGramarParser::BL, 0);
}


size_t LogotecGramarParser::Bajalapiz_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleBajalapiz_variable;
}

void LogotecGramarParser::Bajalapiz_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBajalapiz_variable(this);
}

void LogotecGramarParser::Bajalapiz_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBajalapiz_variable(this);
}


std::any LogotecGramarParser::Bajalapiz_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitBajalapiz_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Bajalapiz_variableContext* LogotecGramarParser::bajalapiz_variable() {
  Bajalapiz_variableContext *_localctx = _tracker.createInstance<Bajalapiz_variableContext>(_ctx, getState());
  enterRule(_localctx, 42, LogotecGramarParser::RuleBajalapiz_variable);
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
    setState(336);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::BAJALAPIZ

    || _la == LogotecGramarParser::BL)) {
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

//----------------- Subelapiz_variableContext ------------------------------------------------------------------

LogotecGramarParser::Subelapiz_variableContext::Subelapiz_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Subelapiz_variableContext::SUBELAPIZ() {
  return getToken(LogotecGramarParser::SUBELAPIZ, 0);
}

tree::TerminalNode* LogotecGramarParser::Subelapiz_variableContext::SL() {
  return getToken(LogotecGramarParser::SL, 0);
}


size_t LogotecGramarParser::Subelapiz_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleSubelapiz_variable;
}

void LogotecGramarParser::Subelapiz_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubelapiz_variable(this);
}

void LogotecGramarParser::Subelapiz_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubelapiz_variable(this);
}


std::any LogotecGramarParser::Subelapiz_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitSubelapiz_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Subelapiz_variableContext* LogotecGramarParser::subelapiz_variable() {
  Subelapiz_variableContext *_localctx = _tracker.createInstance<Subelapiz_variableContext>(_ctx, getState());
  enterRule(_localctx, 44, LogotecGramarParser::RuleSubelapiz_variable);
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
    setState(338);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::SUBELAPIZ

    || _la == LogotecGramarParser::SL)) {
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

//----------------- Poncolorlapiz_variableContext ------------------------------------------------------------------

LogotecGramarParser::Poncolorlapiz_variableContext::Poncolorlapiz_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LogotecGramarParser::ColoresContext* LogotecGramarParser::Poncolorlapiz_variableContext::colores() {
  return getRuleContext<LogotecGramarParser::ColoresContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Poncolorlapiz_variableContext::PONCOLORLAPIZ() {
  return getToken(LogotecGramarParser::PONCOLORLAPIZ, 0);
}

tree::TerminalNode* LogotecGramarParser::Poncolorlapiz_variableContext::PCL() {
  return getToken(LogotecGramarParser::PCL, 0);
}


size_t LogotecGramarParser::Poncolorlapiz_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RulePoncolorlapiz_variable;
}

void LogotecGramarParser::Poncolorlapiz_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPoncolorlapiz_variable(this);
}

void LogotecGramarParser::Poncolorlapiz_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPoncolorlapiz_variable(this);
}


std::any LogotecGramarParser::Poncolorlapiz_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitPoncolorlapiz_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Poncolorlapiz_variableContext* LogotecGramarParser::poncolorlapiz_variable() {
  Poncolorlapiz_variableContext *_localctx = _tracker.createInstance<Poncolorlapiz_variableContext>(_ctx, getState());
  enterRule(_localctx, 46, LogotecGramarParser::RulePoncolorlapiz_variable);
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
    setState(340);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::PONCOLORLAPIZ

    || _la == LogotecGramarParser::PCL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(341);
    colores();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Centro_variableContext ------------------------------------------------------------------

LogotecGramarParser::Centro_variableContext::Centro_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Centro_variableContext::CENTRO() {
  return getToken(LogotecGramarParser::CENTRO, 0);
}


size_t LogotecGramarParser::Centro_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleCentro_variable;
}

void LogotecGramarParser::Centro_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCentro_variable(this);
}

void LogotecGramarParser::Centro_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCentro_variable(this);
}


std::any LogotecGramarParser::Centro_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitCentro_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Centro_variableContext* LogotecGramarParser::centro_variable() {
  Centro_variableContext *_localctx = _tracker.createInstance<Centro_variableContext>(_ctx, getState());
  enterRule(_localctx, 48, LogotecGramarParser::RuleCentro_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    match(LogotecGramarParser::CENTRO);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Esperar_variableContext ------------------------------------------------------------------

LogotecGramarParser::Esperar_variableContext::Esperar_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Esperar_variableContext::ESPERAR() {
  return getToken(LogotecGramarParser::ESPERAR, 0);
}

tree::TerminalNode* LogotecGramarParser::Esperar_variableContext::NUMBER() {
  return getToken(LogotecGramarParser::NUMBER, 0);
}


size_t LogotecGramarParser::Esperar_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleEsperar_variable;
}

void LogotecGramarParser::Esperar_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEsperar_variable(this);
}

void LogotecGramarParser::Esperar_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEsperar_variable(this);
}


std::any LogotecGramarParser::Esperar_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitEsperar_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Esperar_variableContext* LogotecGramarParser::esperar_variable() {
  Esperar_variableContext *_localctx = _tracker.createInstance<Esperar_variableContext>(_ctx, getState());
  enterRule(_localctx, 50, LogotecGramarParser::RuleEsperar_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(345);
    match(LogotecGramarParser::ESPERAR);
    setState(346);
    match(LogotecGramarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ejecuta_variableContext ------------------------------------------------------------------

LogotecGramarParser::Ejecuta_variableContext::Ejecuta_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Ejecuta_variableContext::EJECUTA() {
  return getToken(LogotecGramarParser::EJECUTA, 0);
}

std::vector<LogotecGramarParser::InstruccionContext *> LogotecGramarParser::Ejecuta_variableContext::instruccion() {
  return getRuleContexts<LogotecGramarParser::InstruccionContext>();
}

LogotecGramarParser::InstruccionContext* LogotecGramarParser::Ejecuta_variableContext::instruccion(size_t i) {
  return getRuleContext<LogotecGramarParser::InstruccionContext>(i);
}


size_t LogotecGramarParser::Ejecuta_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleEjecuta_variable;
}

void LogotecGramarParser::Ejecuta_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEjecuta_variable(this);
}

void LogotecGramarParser::Ejecuta_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEjecuta_variable(this);
}


std::any LogotecGramarParser::Ejecuta_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitEjecuta_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Ejecuta_variableContext* LogotecGramarParser::ejecuta_variable() {
  Ejecuta_variableContext *_localctx = _tracker.createInstance<Ejecuta_variableContext>(_ctx, getState());
  enterRule(_localctx, 52, LogotecGramarParser::RuleEjecuta_variable);
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
    setState(348);
    match(LogotecGramarParser::EJECUTA);
    setState(349);
    match(LogotecGramarParser::T__0);
    setState(353);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1107631800304) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 1050623) != 0)) {
      setState(350);
      instruccion();
      setState(355);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(356);
    match(LogotecGramarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Repite_variableContext ------------------------------------------------------------------

LogotecGramarParser::Repite_variableContext::Repite_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Repite_variableContext::REPITE() {
  return getToken(LogotecGramarParser::REPITE, 0);
}

tree::TerminalNode* LogotecGramarParser::Repite_variableContext::NUMBER() {
  return getToken(LogotecGramarParser::NUMBER, 0);
}

std::vector<LogotecGramarParser::InstruccionContext *> LogotecGramarParser::Repite_variableContext::instruccion() {
  return getRuleContexts<LogotecGramarParser::InstruccionContext>();
}

LogotecGramarParser::InstruccionContext* LogotecGramarParser::Repite_variableContext::instruccion(size_t i) {
  return getRuleContext<LogotecGramarParser::InstruccionContext>(i);
}


size_t LogotecGramarParser::Repite_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleRepite_variable;
}

void LogotecGramarParser::Repite_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepite_variable(this);
}

void LogotecGramarParser::Repite_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepite_variable(this);
}


std::any LogotecGramarParser::Repite_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitRepite_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Repite_variableContext* LogotecGramarParser::repite_variable() {
  Repite_variableContext *_localctx = _tracker.createInstance<Repite_variableContext>(_ctx, getState());
  enterRule(_localctx, 54, LogotecGramarParser::RuleRepite_variable);
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
    setState(358);
    match(LogotecGramarParser::REPITE);
    setState(359);
    match(LogotecGramarParser::NUMBER);
    setState(360);
    match(LogotecGramarParser::T__0);
    setState(364);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1107631800304) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 1050623) != 0)) {
      setState(361);
      instruccion();
      setState(366);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(367);
    match(LogotecGramarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Si_variableContext ------------------------------------------------------------------

LogotecGramarParser::Si_variableContext::Si_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Si_variableContext::SI() {
  return getToken(LogotecGramarParser::SI, 0);
}

tree::TerminalNode* LogotecGramarParser::Si_variableContext::PAR_OPEN() {
  return getToken(LogotecGramarParser::PAR_OPEN, 0);
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Si_variableContext::expr() {
  return getRuleContext<LogotecGramarParser::ExprContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Si_variableContext::PAR_CLOSE() {
  return getToken(LogotecGramarParser::PAR_CLOSE, 0);
}

std::vector<LogotecGramarParser::InstruccionContext *> LogotecGramarParser::Si_variableContext::instruccion() {
  return getRuleContexts<LogotecGramarParser::InstruccionContext>();
}

LogotecGramarParser::InstruccionContext* LogotecGramarParser::Si_variableContext::instruccion(size_t i) {
  return getRuleContext<LogotecGramarParser::InstruccionContext>(i);
}


size_t LogotecGramarParser::Si_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleSi_variable;
}

void LogotecGramarParser::Si_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSi_variable(this);
}

void LogotecGramarParser::Si_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSi_variable(this);
}


std::any LogotecGramarParser::Si_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitSi_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Si_variableContext* LogotecGramarParser::si_variable() {
  Si_variableContext *_localctx = _tracker.createInstance<Si_variableContext>(_ctx, getState());
  enterRule(_localctx, 56, LogotecGramarParser::RuleSi_variable);
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
    setState(369);
    match(LogotecGramarParser::SI);
    setState(370);
    match(LogotecGramarParser::PAR_OPEN);
    setState(371);
    expr(0);
    setState(372);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(373);
    match(LogotecGramarParser::T__0);
    setState(377);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1107631800304) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 1050623) != 0)) {
      setState(374);
      instruccion();
      setState(379);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(380);
    match(LogotecGramarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Si_sino_variableContext ------------------------------------------------------------------

LogotecGramarParser::Si_sino_variableContext::Si_sino_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Si_sino_variableContext::SI() {
  return getToken(LogotecGramarParser::SI, 0);
}

tree::TerminalNode* LogotecGramarParser::Si_sino_variableContext::PAR_OPEN() {
  return getToken(LogotecGramarParser::PAR_OPEN, 0);
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Si_sino_variableContext::expr() {
  return getRuleContext<LogotecGramarParser::ExprContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Si_sino_variableContext::PAR_CLOSE() {
  return getToken(LogotecGramarParser::PAR_CLOSE, 0);
}

std::vector<LogotecGramarParser::InstruccionContext *> LogotecGramarParser::Si_sino_variableContext::instruccion() {
  return getRuleContexts<LogotecGramarParser::InstruccionContext>();
}

LogotecGramarParser::InstruccionContext* LogotecGramarParser::Si_sino_variableContext::instruccion(size_t i) {
  return getRuleContext<LogotecGramarParser::InstruccionContext>(i);
}


size_t LogotecGramarParser::Si_sino_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleSi_sino_variable;
}

void LogotecGramarParser::Si_sino_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSi_sino_variable(this);
}

void LogotecGramarParser::Si_sino_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSi_sino_variable(this);
}


std::any LogotecGramarParser::Si_sino_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitSi_sino_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Si_sino_variableContext* LogotecGramarParser::si_sino_variable() {
  Si_sino_variableContext *_localctx = _tracker.createInstance<Si_sino_variableContext>(_ctx, getState());
  enterRule(_localctx, 58, LogotecGramarParser::RuleSi_sino_variable);
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
    setState(382);
    match(LogotecGramarParser::SI);
    setState(383);
    match(LogotecGramarParser::PAR_OPEN);
    setState(384);
    expr(0);
    setState(385);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(386);
    match(LogotecGramarParser::T__0);
    setState(390);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1107631800304) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 1050623) != 0)) {
      setState(387);
      instruccion();
      setState(392);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(393);
    match(LogotecGramarParser::T__1);
    setState(394);
    match(LogotecGramarParser::T__0);
    setState(398);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1107631800304) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 1050623) != 0)) {
      setState(395);
      instruccion();
      setState(400);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(401);
    match(LogotecGramarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Haz_hasta_variableContext ------------------------------------------------------------------

LogotecGramarParser::Haz_hasta_variableContext::Haz_hasta_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Haz_hasta_variableContext::HAZ_HASTA() {
  return getToken(LogotecGramarParser::HAZ_HASTA, 0);
}

tree::TerminalNode* LogotecGramarParser::Haz_hasta_variableContext::PAR_OPEN() {
  return getToken(LogotecGramarParser::PAR_OPEN, 0);
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Haz_hasta_variableContext::expr() {
  return getRuleContext<LogotecGramarParser::ExprContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Haz_hasta_variableContext::PAR_CLOSE() {
  return getToken(LogotecGramarParser::PAR_CLOSE, 0);
}

std::vector<LogotecGramarParser::InstruccionContext *> LogotecGramarParser::Haz_hasta_variableContext::instruccion() {
  return getRuleContexts<LogotecGramarParser::InstruccionContext>();
}

LogotecGramarParser::InstruccionContext* LogotecGramarParser::Haz_hasta_variableContext::instruccion(size_t i) {
  return getRuleContext<LogotecGramarParser::InstruccionContext>(i);
}


size_t LogotecGramarParser::Haz_hasta_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleHaz_hasta_variable;
}

void LogotecGramarParser::Haz_hasta_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHaz_hasta_variable(this);
}

void LogotecGramarParser::Haz_hasta_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHaz_hasta_variable(this);
}


std::any LogotecGramarParser::Haz_hasta_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitHaz_hasta_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Haz_hasta_variableContext* LogotecGramarParser::haz_hasta_variable() {
  Haz_hasta_variableContext *_localctx = _tracker.createInstance<Haz_hasta_variableContext>(_ctx, getState());
  enterRule(_localctx, 60, LogotecGramarParser::RuleHaz_hasta_variable);
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
    setState(403);
    match(LogotecGramarParser::HAZ_HASTA);
    setState(404);
    match(LogotecGramarParser::T__0);
    setState(408);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1107631800304) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 1050623) != 0)) {
      setState(405);
      instruccion();
      setState(410);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(411);
    match(LogotecGramarParser::T__1);
    setState(412);
    match(LogotecGramarParser::PAR_OPEN);
    setState(413);
    expr(0);
    setState(414);
    match(LogotecGramarParser::PAR_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Hasta_variableContext ------------------------------------------------------------------

LogotecGramarParser::Hasta_variableContext::Hasta_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Hasta_variableContext::HASTA() {
  return getToken(LogotecGramarParser::HASTA, 0);
}

tree::TerminalNode* LogotecGramarParser::Hasta_variableContext::PAR_OPEN() {
  return getToken(LogotecGramarParser::PAR_OPEN, 0);
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Hasta_variableContext::expr() {
  return getRuleContext<LogotecGramarParser::ExprContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Hasta_variableContext::PAR_CLOSE() {
  return getToken(LogotecGramarParser::PAR_CLOSE, 0);
}

std::vector<LogotecGramarParser::InstruccionContext *> LogotecGramarParser::Hasta_variableContext::instruccion() {
  return getRuleContexts<LogotecGramarParser::InstruccionContext>();
}

LogotecGramarParser::InstruccionContext* LogotecGramarParser::Hasta_variableContext::instruccion(size_t i) {
  return getRuleContext<LogotecGramarParser::InstruccionContext>(i);
}


size_t LogotecGramarParser::Hasta_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleHasta_variable;
}

void LogotecGramarParser::Hasta_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHasta_variable(this);
}

void LogotecGramarParser::Hasta_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHasta_variable(this);
}


std::any LogotecGramarParser::Hasta_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitHasta_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Hasta_variableContext* LogotecGramarParser::hasta_variable() {
  Hasta_variableContext *_localctx = _tracker.createInstance<Hasta_variableContext>(_ctx, getState());
  enterRule(_localctx, 62, LogotecGramarParser::RuleHasta_variable);
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
    setState(416);
    match(LogotecGramarParser::HASTA);
    setState(417);
    match(LogotecGramarParser::PAR_OPEN);
    setState(418);
    expr(0);
    setState(419);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(420);
    match(LogotecGramarParser::T__0);
    setState(424);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1107631800304) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 1050623) != 0)) {
      setState(421);
      instruccion();
      setState(426);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(427);
    match(LogotecGramarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Haz_mientras_variableContext ------------------------------------------------------------------

LogotecGramarParser::Haz_mientras_variableContext::Haz_mientras_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Haz_mientras_variableContext::HAZ_MIENTRAS() {
  return getToken(LogotecGramarParser::HAZ_MIENTRAS, 0);
}

std::vector<LogotecGramarParser::InstruccionContext *> LogotecGramarParser::Haz_mientras_variableContext::instruccion() {
  return getRuleContexts<LogotecGramarParser::InstruccionContext>();
}

LogotecGramarParser::InstruccionContext* LogotecGramarParser::Haz_mientras_variableContext::instruccion(size_t i) {
  return getRuleContext<LogotecGramarParser::InstruccionContext>(i);
}

std::vector<LogotecGramarParser::ExprContext *> LogotecGramarParser::Haz_mientras_variableContext::expr() {
  return getRuleContexts<LogotecGramarParser::ExprContext>();
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Haz_mientras_variableContext::expr(size_t i) {
  return getRuleContext<LogotecGramarParser::ExprContext>(i);
}


size_t LogotecGramarParser::Haz_mientras_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleHaz_mientras_variable;
}

void LogotecGramarParser::Haz_mientras_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHaz_mientras_variable(this);
}

void LogotecGramarParser::Haz_mientras_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHaz_mientras_variable(this);
}


std::any LogotecGramarParser::Haz_mientras_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitHaz_mientras_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Haz_mientras_variableContext* LogotecGramarParser::haz_mientras_variable() {
  Haz_mientras_variableContext *_localctx = _tracker.createInstance<Haz_mientras_variableContext>(_ctx, getState());
  enterRule(_localctx, 64, LogotecGramarParser::RuleHaz_mientras_variable);
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
    setState(429);
    match(LogotecGramarParser::HAZ_MIENTRAS);
    setState(430);
    match(LogotecGramarParser::T__0);
    setState(434);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1107631800304) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 1050623) != 0)) {
      setState(431);
      instruccion();
      setState(436);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(437);
    match(LogotecGramarParser::T__1);
    setState(438);
    match(LogotecGramarParser::T__0);
    setState(440); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(439);
      expr(0);
      setState(442); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 33) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 33)) & 2216615441596447) != 0));
    setState(444);
    match(LogotecGramarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mientras_variableContext ------------------------------------------------------------------

LogotecGramarParser::Mientras_variableContext::Mientras_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Mientras_variableContext::MIENTRAS() {
  return getToken(LogotecGramarParser::MIENTRAS, 0);
}

tree::TerminalNode* LogotecGramarParser::Mientras_variableContext::PAR_OPEN() {
  return getToken(LogotecGramarParser::PAR_OPEN, 0);
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Mientras_variableContext::expr() {
  return getRuleContext<LogotecGramarParser::ExprContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Mientras_variableContext::PAR_CLOSE() {
  return getToken(LogotecGramarParser::PAR_CLOSE, 0);
}

std::vector<LogotecGramarParser::InstruccionContext *> LogotecGramarParser::Mientras_variableContext::instruccion() {
  return getRuleContexts<LogotecGramarParser::InstruccionContext>();
}

LogotecGramarParser::InstruccionContext* LogotecGramarParser::Mientras_variableContext::instruccion(size_t i) {
  return getRuleContext<LogotecGramarParser::InstruccionContext>(i);
}


size_t LogotecGramarParser::Mientras_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleMientras_variable;
}

void LogotecGramarParser::Mientras_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMientras_variable(this);
}

void LogotecGramarParser::Mientras_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMientras_variable(this);
}


std::any LogotecGramarParser::Mientras_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitMientras_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Mientras_variableContext* LogotecGramarParser::mientras_variable() {
  Mientras_variableContext *_localctx = _tracker.createInstance<Mientras_variableContext>(_ctx, getState());
  enterRule(_localctx, 66, LogotecGramarParser::RuleMientras_variable);
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
    setState(446);
    match(LogotecGramarParser::MIENTRAS);
    setState(447);
    match(LogotecGramarParser::PAR_OPEN);
    setState(448);
    expr(0);
    setState(449);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(450);
    match(LogotecGramarParser::T__0);
    setState(454);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1107631800304) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 1050623) != 0)) {
      setState(451);
      instruccion();
      setState(456);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(457);
    match(LogotecGramarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Iguales_variableContext ------------------------------------------------------------------

LogotecGramarParser::Iguales_variableContext::Iguales_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Iguales_variableContext::IGUALESQ() {
  return getToken(LogotecGramarParser::IGUALESQ, 0);
}

std::vector<LogotecGramarParser::ExprContext *> LogotecGramarParser::Iguales_variableContext::expr() {
  return getRuleContexts<LogotecGramarParser::ExprContext>();
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Iguales_variableContext::expr(size_t i) {
  return getRuleContext<LogotecGramarParser::ExprContext>(i);
}


size_t LogotecGramarParser::Iguales_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleIguales_variable;
}

void LogotecGramarParser::Iguales_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIguales_variable(this);
}

void LogotecGramarParser::Iguales_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIguales_variable(this);
}


std::any LogotecGramarParser::Iguales_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitIguales_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Iguales_variableContext* LogotecGramarParser::iguales_variable() {
  Iguales_variableContext *_localctx = _tracker.createInstance<Iguales_variableContext>(_ctx, getState());
  enterRule(_localctx, 68, LogotecGramarParser::RuleIguales_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(459);
    match(LogotecGramarParser::IGUALESQ);
    setState(460);
    expr(0);
    setState(461);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Y_variableContext ------------------------------------------------------------------

LogotecGramarParser::Y_variableContext::Y_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Y_variableContext::Y() {
  return getToken(LogotecGramarParser::Y, 0);
}

std::vector<tree::TerminalNode *> LogotecGramarParser::Y_variableContext::PAR_OPEN() {
  return getTokens(LogotecGramarParser::PAR_OPEN);
}

tree::TerminalNode* LogotecGramarParser::Y_variableContext::PAR_OPEN(size_t i) {
  return getToken(LogotecGramarParser::PAR_OPEN, i);
}

std::vector<LogotecGramarParser::ExprContext *> LogotecGramarParser::Y_variableContext::expr() {
  return getRuleContexts<LogotecGramarParser::ExprContext>();
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Y_variableContext::expr(size_t i) {
  return getRuleContext<LogotecGramarParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> LogotecGramarParser::Y_variableContext::PAR_CLOSE() {
  return getTokens(LogotecGramarParser::PAR_CLOSE);
}

tree::TerminalNode* LogotecGramarParser::Y_variableContext::PAR_CLOSE(size_t i) {
  return getToken(LogotecGramarParser::PAR_CLOSE, i);
}


size_t LogotecGramarParser::Y_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleY_variable;
}

void LogotecGramarParser::Y_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterY_variable(this);
}

void LogotecGramarParser::Y_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitY_variable(this);
}


std::any LogotecGramarParser::Y_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitY_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Y_variableContext* LogotecGramarParser::y_variable() {
  Y_variableContext *_localctx = _tracker.createInstance<Y_variableContext>(_ctx, getState());
  enterRule(_localctx, 70, LogotecGramarParser::RuleY_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(463);
    match(LogotecGramarParser::Y);
    setState(464);
    match(LogotecGramarParser::PAR_OPEN);
    setState(465);
    expr(0);
    setState(466);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(467);
    match(LogotecGramarParser::PAR_OPEN);
    setState(468);
    expr(0);
    setState(469);
    match(LogotecGramarParser::PAR_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- O_variableContext ------------------------------------------------------------------

LogotecGramarParser::O_variableContext::O_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::O_variableContext::O() {
  return getToken(LogotecGramarParser::O, 0);
}

std::vector<tree::TerminalNode *> LogotecGramarParser::O_variableContext::PAR_OPEN() {
  return getTokens(LogotecGramarParser::PAR_OPEN);
}

tree::TerminalNode* LogotecGramarParser::O_variableContext::PAR_OPEN(size_t i) {
  return getToken(LogotecGramarParser::PAR_OPEN, i);
}

std::vector<LogotecGramarParser::ExprContext *> LogotecGramarParser::O_variableContext::expr() {
  return getRuleContexts<LogotecGramarParser::ExprContext>();
}

LogotecGramarParser::ExprContext* LogotecGramarParser::O_variableContext::expr(size_t i) {
  return getRuleContext<LogotecGramarParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> LogotecGramarParser::O_variableContext::PAR_CLOSE() {
  return getTokens(LogotecGramarParser::PAR_CLOSE);
}

tree::TerminalNode* LogotecGramarParser::O_variableContext::PAR_CLOSE(size_t i) {
  return getToken(LogotecGramarParser::PAR_CLOSE, i);
}


size_t LogotecGramarParser::O_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleO_variable;
}

void LogotecGramarParser::O_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterO_variable(this);
}

void LogotecGramarParser::O_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitO_variable(this);
}


std::any LogotecGramarParser::O_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitO_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::O_variableContext* LogotecGramarParser::o_variable() {
  O_variableContext *_localctx = _tracker.createInstance<O_variableContext>(_ctx, getState());
  enterRule(_localctx, 72, LogotecGramarParser::RuleO_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(471);
    match(LogotecGramarParser::O);
    setState(472);
    match(LogotecGramarParser::PAR_OPEN);
    setState(473);
    expr(0);
    setState(474);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(475);
    match(LogotecGramarParser::PAR_OPEN);
    setState(476);
    expr(0);
    setState(477);
    match(LogotecGramarParser::PAR_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mayorque_variableContext ------------------------------------------------------------------

LogotecGramarParser::Mayorque_variableContext::Mayorque_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Mayorque_variableContext::MAYORQUEQ() {
  return getToken(LogotecGramarParser::MAYORQUEQ, 0);
}

std::vector<LogotecGramarParser::ExprContext *> LogotecGramarParser::Mayorque_variableContext::expr() {
  return getRuleContexts<LogotecGramarParser::ExprContext>();
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Mayorque_variableContext::expr(size_t i) {
  return getRuleContext<LogotecGramarParser::ExprContext>(i);
}


size_t LogotecGramarParser::Mayorque_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleMayorque_variable;
}

void LogotecGramarParser::Mayorque_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMayorque_variable(this);
}

void LogotecGramarParser::Mayorque_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMayorque_variable(this);
}


std::any LogotecGramarParser::Mayorque_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitMayorque_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Mayorque_variableContext* LogotecGramarParser::mayorque_variable() {
  Mayorque_variableContext *_localctx = _tracker.createInstance<Mayorque_variableContext>(_ctx, getState());
  enterRule(_localctx, 74, LogotecGramarParser::RuleMayorque_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(479);
    match(LogotecGramarParser::MAYORQUEQ);
    setState(480);
    expr(0);
    setState(481);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Menorque_variableContext ------------------------------------------------------------------

LogotecGramarParser::Menorque_variableContext::Menorque_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Menorque_variableContext::MENORQUEQ() {
  return getToken(LogotecGramarParser::MENORQUEQ, 0);
}

std::vector<LogotecGramarParser::ExprContext *> LogotecGramarParser::Menorque_variableContext::expr() {
  return getRuleContexts<LogotecGramarParser::ExprContext>();
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Menorque_variableContext::expr(size_t i) {
  return getRuleContext<LogotecGramarParser::ExprContext>(i);
}


size_t LogotecGramarParser::Menorque_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleMenorque_variable;
}

void LogotecGramarParser::Menorque_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMenorque_variable(this);
}

void LogotecGramarParser::Menorque_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMenorque_variable(this);
}


std::any LogotecGramarParser::Menorque_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitMenorque_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Menorque_variableContext* LogotecGramarParser::menorque_variable() {
  Menorque_variableContext *_localctx = _tracker.createInstance<Menorque_variableContext>(_ctx, getState());
  enterRule(_localctx, 76, LogotecGramarParser::RuleMenorque_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(483);
    match(LogotecGramarParser::MENORQUEQ);
    setState(484);
    expr(0);
    setState(485);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ColoresContext ------------------------------------------------------------------

LogotecGramarParser::ColoresContext::ColoresContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::ColoresContext::AZUL() {
  return getToken(LogotecGramarParser::AZUL, 0);
}

tree::TerminalNode* LogotecGramarParser::ColoresContext::NEGRO() {
  return getToken(LogotecGramarParser::NEGRO, 0);
}

tree::TerminalNode* LogotecGramarParser::ColoresContext::ROJO() {
  return getToken(LogotecGramarParser::ROJO, 0);
}


size_t LogotecGramarParser::ColoresContext::getRuleIndex() const {
  return LogotecGramarParser::RuleColores;
}

void LogotecGramarParser::ColoresContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColores(this);
}

void LogotecGramarParser::ColoresContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColores(this);
}


std::any LogotecGramarParser::ColoresContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitColores(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::ColoresContext* LogotecGramarParser::colores() {
  ColoresContext *_localctx = _tracker.createInstance<ColoresContext>(_ctx, getState());
  enterRule(_localctx, 78, LogotecGramarParser::RuleColores);
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
    setState(487);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 469762048) != 0))) {
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

LogotecGramarParser::Diferencia_exprContext* LogotecGramarParser::ExprContext::diferencia_expr() {
  return getRuleContext<LogotecGramarParser::Diferencia_exprContext>(0);
}

LogotecGramarParser::Azar_exprContext* LogotecGramarParser::ExprContext::azar_expr() {
  return getRuleContext<LogotecGramarParser::Azar_exprContext>(0);
}

LogotecGramarParser::Producto_exprContext* LogotecGramarParser::ExprContext::producto_expr() {
  return getRuleContext<LogotecGramarParser::Producto_exprContext>(0);
}

LogotecGramarParser::Potencia_exprContext* LogotecGramarParser::ExprContext::potencia_expr() {
  return getRuleContext<LogotecGramarParser::Potencia_exprContext>(0);
}

LogotecGramarParser::Division_exprContext* LogotecGramarParser::ExprContext::division_expr() {
  return getRuleContext<LogotecGramarParser::Division_exprContext>(0);
}

LogotecGramarParser::Suma_exprContext* LogotecGramarParser::ExprContext::suma_expr() {
  return getRuleContext<LogotecGramarParser::Suma_exprContext>(0);
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
  size_t startState = 80;
  enterRecursionRule(_localctx, 80, LogotecGramarParser::RuleExpr, precedence);

    

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
    setState(500);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::NUMBER: {
        setState(490);
        match(LogotecGramarParser::NUMBER);
        break;
      }

      case LogotecGramarParser::TRUE:
      case LogotecGramarParser::FALSE: {
        setState(491);
        logico();
        break;
      }

      case LogotecGramarParser::CADENA_TEXTO: {
        setState(492);
        match(LogotecGramarParser::CADENA_TEXTO);
        break;
      }

      case LogotecGramarParser::ID: {
        setState(493);
        match(LogotecGramarParser::ID);
        break;
      }

      case LogotecGramarParser::DIFERENCIA: {
        setState(494);
        diferencia_expr();
        break;
      }

      case LogotecGramarParser::AZAR: {
        setState(495);
        azar_expr();
        break;
      }

      case LogotecGramarParser::PRODUCTO: {
        setState(496);
        producto_expr();
        break;
      }

      case LogotecGramarParser::POTENCIA: {
        setState(497);
        potencia_expr();
        break;
      }

      case LogotecGramarParser::DIVISION: {
        setState(498);
        division_expr();
        break;
      }

      case LogotecGramarParser::SUMA: {
        setState(499);
        suma_expr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(508);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
        _localctx->e1 = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleExpr);
        setState(502);

        if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
        setState(503);
        operador();
        setState(504);
        antlrcpp::downCast<ExprContext *>(_localctx)->e2 = expr(12); 
      }
      setState(510);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
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
  enterRule(_localctx, 82, LogotecGramarParser::RuleLogico);
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
    setState(511);
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
  enterRule(_localctx, 84, LogotecGramarParser::RuleValor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(516);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(513);
        match(LogotecGramarParser::NUMBER);
        break;
      }

      case LogotecGramarParser::TRUE:
      case LogotecGramarParser::FALSE: {
        enterOuterAlt(_localctx, 2);
        setState(514);
        logico();
        break;
      }

      case LogotecGramarParser::CADENA_TEXTO: {
        enterOuterAlt(_localctx, 3);
        setState(515);
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
  enterRule(_localctx, 86, LogotecGramarParser::RuleOperador);
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
    setState(518);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 263882790666240) != 0))) {
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

//----------------- Diferencia_exprContext ------------------------------------------------------------------

LogotecGramarParser::Diferencia_exprContext::Diferencia_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Diferencia_exprContext::DIFERENCIA() {
  return getToken(LogotecGramarParser::DIFERENCIA, 0);
}

std::vector<LogotecGramarParser::ExprContext *> LogotecGramarParser::Diferencia_exprContext::expr() {
  return getRuleContexts<LogotecGramarParser::ExprContext>();
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Diferencia_exprContext::expr(size_t i) {
  return getRuleContext<LogotecGramarParser::ExprContext>(i);
}


size_t LogotecGramarParser::Diferencia_exprContext::getRuleIndex() const {
  return LogotecGramarParser::RuleDiferencia_expr;
}

void LogotecGramarParser::Diferencia_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiferencia_expr(this);
}

void LogotecGramarParser::Diferencia_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiferencia_expr(this);
}


std::any LogotecGramarParser::Diferencia_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitDiferencia_expr(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Diferencia_exprContext* LogotecGramarParser::diferencia_expr() {
  Diferencia_exprContext *_localctx = _tracker.createInstance<Diferencia_exprContext>(_ctx, getState());
  enterRule(_localctx, 88, LogotecGramarParser::RuleDiferencia_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(520);
    match(LogotecGramarParser::DIFERENCIA);
    setState(521);
    expr(0);
    setState(523); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(522);
              expr(0);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(525); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Azar_exprContext ------------------------------------------------------------------

LogotecGramarParser::Azar_exprContext::Azar_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Azar_exprContext::AZAR() {
  return getToken(LogotecGramarParser::AZAR, 0);
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Azar_exprContext::expr() {
  return getRuleContext<LogotecGramarParser::ExprContext>(0);
}


size_t LogotecGramarParser::Azar_exprContext::getRuleIndex() const {
  return LogotecGramarParser::RuleAzar_expr;
}

void LogotecGramarParser::Azar_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAzar_expr(this);
}

void LogotecGramarParser::Azar_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAzar_expr(this);
}


std::any LogotecGramarParser::Azar_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitAzar_expr(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Azar_exprContext* LogotecGramarParser::azar_expr() {
  Azar_exprContext *_localctx = _tracker.createInstance<Azar_exprContext>(_ctx, getState());
  enterRule(_localctx, 90, LogotecGramarParser::RuleAzar_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(527);
    match(LogotecGramarParser::AZAR);
    setState(528);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Producto_exprContext ------------------------------------------------------------------

LogotecGramarParser::Producto_exprContext::Producto_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Producto_exprContext::PRODUCTO() {
  return getToken(LogotecGramarParser::PRODUCTO, 0);
}

std::vector<LogotecGramarParser::ExprContext *> LogotecGramarParser::Producto_exprContext::expr() {
  return getRuleContexts<LogotecGramarParser::ExprContext>();
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Producto_exprContext::expr(size_t i) {
  return getRuleContext<LogotecGramarParser::ExprContext>(i);
}


size_t LogotecGramarParser::Producto_exprContext::getRuleIndex() const {
  return LogotecGramarParser::RuleProducto_expr;
}

void LogotecGramarParser::Producto_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProducto_expr(this);
}

void LogotecGramarParser::Producto_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProducto_expr(this);
}


std::any LogotecGramarParser::Producto_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitProducto_expr(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Producto_exprContext* LogotecGramarParser::producto_expr() {
  Producto_exprContext *_localctx = _tracker.createInstance<Producto_exprContext>(_ctx, getState());
  enterRule(_localctx, 92, LogotecGramarParser::RuleProducto_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(530);
    match(LogotecGramarParser::PRODUCTO);
    setState(531);
    expr(0);
    setState(533); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(532);
              expr(0);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(535); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Potencia_exprContext ------------------------------------------------------------------

LogotecGramarParser::Potencia_exprContext::Potencia_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Potencia_exprContext::POTENCIA() {
  return getToken(LogotecGramarParser::POTENCIA, 0);
}

std::vector<LogotecGramarParser::ExprContext *> LogotecGramarParser::Potencia_exprContext::expr() {
  return getRuleContexts<LogotecGramarParser::ExprContext>();
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Potencia_exprContext::expr(size_t i) {
  return getRuleContext<LogotecGramarParser::ExprContext>(i);
}


size_t LogotecGramarParser::Potencia_exprContext::getRuleIndex() const {
  return LogotecGramarParser::RulePotencia_expr;
}

void LogotecGramarParser::Potencia_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPotencia_expr(this);
}

void LogotecGramarParser::Potencia_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPotencia_expr(this);
}


std::any LogotecGramarParser::Potencia_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitPotencia_expr(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Potencia_exprContext* LogotecGramarParser::potencia_expr() {
  Potencia_exprContext *_localctx = _tracker.createInstance<Potencia_exprContext>(_ctx, getState());
  enterRule(_localctx, 94, LogotecGramarParser::RulePotencia_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(537);
    match(LogotecGramarParser::POTENCIA);
    setState(538);
    expr(0);
    setState(539);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Division_exprContext ------------------------------------------------------------------

LogotecGramarParser::Division_exprContext::Division_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Division_exprContext::DIVISION() {
  return getToken(LogotecGramarParser::DIVISION, 0);
}

std::vector<LogotecGramarParser::ExprContext *> LogotecGramarParser::Division_exprContext::expr() {
  return getRuleContexts<LogotecGramarParser::ExprContext>();
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Division_exprContext::expr(size_t i) {
  return getRuleContext<LogotecGramarParser::ExprContext>(i);
}


size_t LogotecGramarParser::Division_exprContext::getRuleIndex() const {
  return LogotecGramarParser::RuleDivision_expr;
}

void LogotecGramarParser::Division_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDivision_expr(this);
}

void LogotecGramarParser::Division_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDivision_expr(this);
}


std::any LogotecGramarParser::Division_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitDivision_expr(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Division_exprContext* LogotecGramarParser::division_expr() {
  Division_exprContext *_localctx = _tracker.createInstance<Division_exprContext>(_ctx, getState());
  enterRule(_localctx, 96, LogotecGramarParser::RuleDivision_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(541);
    match(LogotecGramarParser::DIVISION);
    setState(542);
    expr(0);
    setState(543);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Suma_exprContext ------------------------------------------------------------------

LogotecGramarParser::Suma_exprContext::Suma_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Suma_exprContext::SUMA() {
  return getToken(LogotecGramarParser::SUMA, 0);
}

std::vector<LogotecGramarParser::ExprContext *> LogotecGramarParser::Suma_exprContext::expr() {
  return getRuleContexts<LogotecGramarParser::ExprContext>();
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Suma_exprContext::expr(size_t i) {
  return getRuleContext<LogotecGramarParser::ExprContext>(i);
}


size_t LogotecGramarParser::Suma_exprContext::getRuleIndex() const {
  return LogotecGramarParser::RuleSuma_expr;
}

void LogotecGramarParser::Suma_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSuma_expr(this);
}

void LogotecGramarParser::Suma_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSuma_expr(this);
}


std::any LogotecGramarParser::Suma_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitSuma_expr(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Suma_exprContext* LogotecGramarParser::suma_expr() {
  Suma_exprContext *_localctx = _tracker.createInstance<Suma_exprContext>(_ctx, getState());
  enterRule(_localctx, 98, LogotecGramarParser::RuleSuma_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(545);
    match(LogotecGramarParser::SUMA);
    setState(546);
    expr(0);
    setState(548); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(547);
              expr(0);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(550); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
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
    case 40: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LogotecGramarParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 11);

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
