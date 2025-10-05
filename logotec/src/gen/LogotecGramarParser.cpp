
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
      "programa", "procedimiento", "parametros", "linea_instrucciones", 
      "lista_parametros", "instruccion", "comentario_linea", "comentario", 
      "procedimiento_llamado", "parametros_llamado", "lista_parametros_llamado", 
      "haz_variable", "inic_variable", "inc_variable", "avanza_variable", 
      "retrocede_variable", "gira_derecha_variable", "gira_izquierda_variable", 
      "ocultar_tortuga_variable", "ponpos_variable", "ponxy_variable", "ponrumbo_variable", 
      "ponx_variable", "pony_variable", "bajalapiz_variable", "subelapiz_variable", 
      "poncolorlapiz_variable", "centro_variable", "esperar_variable", "ejecuta_variable", 
      "repite_variable", "exp_logica", "exp_logica_operaciones", "exp_logicas_expr", 
      "si_variable", "si_sino_variable", "haz_hasta_variable", "hasta_variable", 
      "haz_mientras_variable", "mientras_variable", "iguales_variable", 
      "y_variable", "o_variable", "mayorque_variable", "menorque_variable", 
      "colores_variable", "colores", "expr", "exp_integer", "exp_aritmetica", 
      "exp_matematica", "expr_mat_aritm", "logico", "valor", "operador_logico", 
      "operador", "diferencia_expr", "azar_expr", "producto_expr", "potencia_expr", 
      "division_expr", "suma_expr"
    },
    std::vector<std::string>{
      "", "'['", "']'", "','", "'Haz'", "'INIC'", "'INC'", "'avanza'", "'av'", 
      "'retrocede'", "'re'", "'GiraDerecha'", "'GD'", "'GiraIzquierda'", 
      "'GI'", "'OcultarTortuga'", "'OT'", "'ponpos'", "'ponxy'", "'ponrumbo'", 
      "'ponx'", "'pony'", "'bajalapiz'", "'BL'", "'subelapiz'", "'SL'", 
      "'azul'", "'negro'", "'rojo'", "'poncolorlapiz'", "'poncl'", "'centro'", 
      "'espera'", "'True'", "'False'", "", "", "'program'", "'var'", "'println'", 
      "'+'", "'-'", "'*'", "'/'", "'if'", "'else'", "'while'", "'for'", 
      "'&&'", "'||'", "'!'", "'>'", "'<'", "'>='", "'<='", "'=='", "'!='", 
      "'='", "'{'", "'}'", "'('", "')'", "';'", "'repite'", "'SI'", "'HAZ.HASTA'", 
      "'HASTA'", "'HAZ.MIENTRAS'", "'MIENTRAS'", "'Iguales\\u003F'", "'Y'", 
      "'O'", "'MayorQue\\u003F'", "'MenorQue\\u003F'", "'Diferencia'", "'Azar'", 
      "'Producto'", "'Potencia'", "'Division'", "'Suma'", "'Resta'", "'Para'", 
      "'Fin'", "'Ejecuta'"
    },
    std::vector<std::string>{
      "", "", "", "", "HAZ", "INIC", "INC", "AVANZA", "AV", "RETROCEDE", 
      "RE", "GIRA_DERECHA", "GD", "GIRA_IZQUIERDA", "GI", "OCULTAR_TORTUGA", 
      "OT", "PONPOS", "PONXY", "PONRUMBO", "PONX", "PONY", "BAJALAPIZ", 
      "BL", "SUBELAPIZ", "SL", "AZUL", "NEGRO", "ROJO", "PONCOLORLAPIZ", 
      "PCL", "CENTRO", "ESPERAR", "TRUE", "FALSE", "NUMBER", "CADENA_TEXTO", 
      "PROGRAM", "VAR", "PRINTLN", "PLUS", "MINUS", "MULT", "DIV", "IF", 
      "ELSE", "WHILE", "FOR", "AND", "OR", "NOT", "GT", "LT", "GEQ", "LEQ", 
      "EQ", "NEQ", "ASSIGN", "BRACKET_OPEN", "BRACKET_CLOSE", "PAR_OPEN", 
      "PAR_CLOSE", "SEMICOLON", "REPITE", "SI", "HAZ_HASTA", "HASTA", "HAZ_MIENTRAS", 
      "MIENTRAS", "IGUALESQ", "Y", "O", "MAYORQUEQ", "MENORQUEQ", "DIFERENCIA", 
      "AZAR", "PRODUCTO", "POTENCIA", "DIVISION", "SUMA", "RESTA", "PARA", 
      "FIN", "EJECUTA", "ID", "NEWLINE", "WS", "LINE_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,87,681,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,1,0,1,0,1,0,5,0,
  	128,8,0,10,0,12,0,131,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,142,
  	8,1,10,1,12,1,145,9,1,1,1,3,1,148,8,1,1,1,1,1,1,2,1,2,3,2,154,8,2,1,2,
  	1,2,1,3,4,3,159,8,3,11,3,12,3,160,1,4,1,4,1,4,5,4,166,8,4,10,4,12,4,169,
  	9,4,1,5,1,5,3,5,173,8,5,1,5,1,5,3,5,177,8,5,1,5,1,5,3,5,181,8,5,1,5,1,
  	5,3,5,185,8,5,1,5,1,5,3,5,189,8,5,1,5,1,5,3,5,193,8,5,1,5,1,5,3,5,197,
  	8,5,1,5,1,5,3,5,201,8,5,1,5,1,5,3,5,205,8,5,1,5,1,5,3,5,209,8,5,1,5,1,
  	5,3,5,213,8,5,1,5,1,5,3,5,217,8,5,1,5,1,5,3,5,221,8,5,1,5,1,5,3,5,225,
  	8,5,1,5,1,5,3,5,229,8,5,1,5,1,5,3,5,233,8,5,1,5,1,5,3,5,237,8,5,1,5,1,
  	5,3,5,241,8,5,1,5,1,5,3,5,245,8,5,1,5,1,5,3,5,249,8,5,1,5,1,5,3,5,253,
  	8,5,1,5,1,5,3,5,257,8,5,1,5,1,5,3,5,261,8,5,1,5,1,5,3,5,265,8,5,1,5,1,
  	5,3,5,269,8,5,1,5,1,5,3,5,273,8,5,1,5,1,5,3,5,277,8,5,1,5,1,5,3,5,281,
  	8,5,1,5,1,5,3,5,285,8,5,1,5,1,5,3,5,289,8,5,1,5,1,5,3,5,293,8,5,1,5,1,
  	5,3,5,297,8,5,1,5,1,5,3,5,301,8,5,1,6,1,6,1,7,1,7,1,8,1,8,1,8,1,9,1,9,
  	3,9,312,8,9,1,9,1,9,1,10,1,10,1,10,5,10,319,8,10,10,10,12,10,322,9,10,
  	1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,3,13,
  	337,8,13,1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,16,1,17,
  	1,17,1,17,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,
  	1,21,1,21,1,21,1,22,1,22,1,22,1,23,1,23,1,23,1,24,1,24,1,25,1,25,1,26,
  	1,26,1,26,1,27,1,27,1,28,1,28,1,28,1,29,1,29,1,29,5,29,389,8,29,10,29,
  	12,29,392,9,29,1,29,1,29,1,30,1,30,1,30,1,30,5,30,400,8,30,10,30,12,30,
  	403,9,30,1,30,1,30,1,31,1,31,3,31,409,8,31,1,32,1,32,1,32,1,32,1,32,1,
  	32,1,32,1,32,3,32,419,8,32,1,33,1,33,1,33,1,33,5,33,425,8,33,10,33,12,
  	33,428,9,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,5,33,438,8,33,10,
  	33,12,33,441,9,33,1,33,1,33,1,33,1,33,3,33,447,8,33,1,34,1,34,1,34,1,
  	34,1,34,1,34,5,34,455,8,34,10,34,12,34,458,9,34,1,34,1,34,1,35,1,35,1,
  	35,1,35,1,35,1,35,5,35,468,8,35,10,35,12,35,471,9,35,1,35,1,35,1,35,5,
  	35,476,8,35,10,35,12,35,479,9,35,1,35,1,35,1,36,1,36,1,36,5,36,486,8,
  	36,10,36,12,36,489,9,36,1,36,1,36,1,36,1,36,1,36,1,37,1,37,1,37,1,37,
  	1,37,1,37,5,37,502,8,37,10,37,12,37,505,9,37,1,37,1,37,1,38,1,38,1,38,
  	5,38,512,8,38,10,38,12,38,515,9,38,1,38,1,38,1,38,4,38,520,8,38,11,38,
  	12,38,521,1,38,1,38,1,39,1,39,1,39,1,39,1,39,1,39,5,39,532,8,39,10,39,
  	12,39,535,9,39,1,39,1,39,1,40,1,40,1,40,1,40,1,41,1,41,1,41,1,41,1,41,
  	1,41,1,41,1,41,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,43,1,43,1,43,
  	1,43,1,44,1,44,1,44,1,44,1,45,1,45,3,45,569,8,45,1,46,1,46,1,47,1,47,
  	1,47,1,47,1,47,1,47,3,47,579,8,47,1,48,1,48,1,48,3,48,584,8,48,1,49,1,
  	49,1,49,1,49,1,49,5,49,591,8,49,10,49,12,49,594,9,49,1,49,1,49,1,49,1,
  	49,1,49,1,49,1,49,1,49,5,49,604,8,49,10,49,12,49,607,9,49,1,49,1,49,1,
  	49,3,49,612,8,49,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,3,50,622,8,50,
  	1,51,1,51,3,51,626,8,51,1,52,1,52,1,53,1,53,1,53,3,53,633,8,53,1,54,1,
  	54,1,54,1,54,1,54,1,54,1,54,1,54,1,54,1,54,3,54,645,8,54,1,55,1,55,1,
  	56,1,56,1,56,4,56,652,8,56,11,56,12,56,653,1,57,1,57,1,57,1,58,1,58,1,
  	58,4,58,662,8,58,11,58,12,58,663,1,59,1,59,1,59,1,59,1,60,1,60,1,60,1,
  	60,1,61,1,61,1,61,4,61,677,8,61,11,61,12,61,678,1,61,0,0,62,0,2,4,6,8,
  	10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,
  	56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,98,100,
  	102,104,106,108,110,112,114,116,118,120,122,0,12,1,0,7,8,1,0,9,10,1,0,
  	11,12,1,0,13,14,1,0,15,16,1,0,22,23,1,0,24,25,1,0,29,30,1,0,48,49,1,0,
  	26,28,1,0,33,34,1,0,40,43,751,0,129,1,0,0,0,2,134,1,0,0,0,4,151,1,0,0,
  	0,6,158,1,0,0,0,8,162,1,0,0,0,10,300,1,0,0,0,12,302,1,0,0,0,14,304,1,
  	0,0,0,16,306,1,0,0,0,18,309,1,0,0,0,20,315,1,0,0,0,22,323,1,0,0,0,24,
  	327,1,0,0,0,26,332,1,0,0,0,28,340,1,0,0,0,30,343,1,0,0,0,32,346,1,0,0,
  	0,34,349,1,0,0,0,36,352,1,0,0,0,38,354,1,0,0,0,40,360,1,0,0,0,42,364,
  	1,0,0,0,44,367,1,0,0,0,46,370,1,0,0,0,48,373,1,0,0,0,50,375,1,0,0,0,52,
  	377,1,0,0,0,54,380,1,0,0,0,56,382,1,0,0,0,58,385,1,0,0,0,60,395,1,0,0,
  	0,62,408,1,0,0,0,64,418,1,0,0,0,66,446,1,0,0,0,68,448,1,0,0,0,70,461,
  	1,0,0,0,72,482,1,0,0,0,74,495,1,0,0,0,76,508,1,0,0,0,78,525,1,0,0,0,80,
  	538,1,0,0,0,82,542,1,0,0,0,84,550,1,0,0,0,86,558,1,0,0,0,88,562,1,0,0,
  	0,90,568,1,0,0,0,92,570,1,0,0,0,94,578,1,0,0,0,96,583,1,0,0,0,98,611,
  	1,0,0,0,100,621,1,0,0,0,102,625,1,0,0,0,104,627,1,0,0,0,106,632,1,0,0,
  	0,108,644,1,0,0,0,110,646,1,0,0,0,112,648,1,0,0,0,114,655,1,0,0,0,116,
  	658,1,0,0,0,118,665,1,0,0,0,120,669,1,0,0,0,122,673,1,0,0,0,124,128,5,
  	85,0,0,125,128,3,6,3,0,126,128,3,2,1,0,127,124,1,0,0,0,127,125,1,0,0,
  	0,127,126,1,0,0,0,128,131,1,0,0,0,129,127,1,0,0,0,129,130,1,0,0,0,130,
  	132,1,0,0,0,131,129,1,0,0,0,132,133,5,0,0,1,133,1,1,0,0,0,134,135,5,81,
  	0,0,135,136,5,84,0,0,136,137,3,4,2,0,137,143,5,85,0,0,138,139,3,6,3,0,
  	139,140,5,85,0,0,140,142,1,0,0,0,141,138,1,0,0,0,142,145,1,0,0,0,143,
  	141,1,0,0,0,143,144,1,0,0,0,144,147,1,0,0,0,145,143,1,0,0,0,146,148,3,
  	6,3,0,147,146,1,0,0,0,147,148,1,0,0,0,148,149,1,0,0,0,149,150,5,82,0,
  	0,150,3,1,0,0,0,151,153,5,1,0,0,152,154,3,8,4,0,153,152,1,0,0,0,153,154,
  	1,0,0,0,154,155,1,0,0,0,155,156,5,2,0,0,156,5,1,0,0,0,157,159,3,10,5,
  	0,158,157,1,0,0,0,159,160,1,0,0,0,160,158,1,0,0,0,160,161,1,0,0,0,161,
  	7,1,0,0,0,162,167,5,84,0,0,163,164,5,3,0,0,164,166,5,84,0,0,165,163,1,
  	0,0,0,166,169,1,0,0,0,167,165,1,0,0,0,167,168,1,0,0,0,168,9,1,0,0,0,169,
  	167,1,0,0,0,170,172,3,22,11,0,171,173,3,12,6,0,172,171,1,0,0,0,172,173,
  	1,0,0,0,173,301,1,0,0,0,174,176,3,24,12,0,175,177,3,12,6,0,176,175,1,
  	0,0,0,176,177,1,0,0,0,177,301,1,0,0,0,178,180,3,26,13,0,179,181,3,12,
  	6,0,180,179,1,0,0,0,180,181,1,0,0,0,181,301,1,0,0,0,182,184,3,28,14,0,
  	183,185,3,12,6,0,184,183,1,0,0,0,184,185,1,0,0,0,185,301,1,0,0,0,186,
  	188,3,30,15,0,187,189,3,12,6,0,188,187,1,0,0,0,188,189,1,0,0,0,189,301,
  	1,0,0,0,190,192,3,32,16,0,191,193,3,12,6,0,192,191,1,0,0,0,192,193,1,
  	0,0,0,193,301,1,0,0,0,194,196,3,34,17,0,195,197,3,12,6,0,196,195,1,0,
  	0,0,196,197,1,0,0,0,197,301,1,0,0,0,198,200,3,36,18,0,199,201,3,12,6,
  	0,200,199,1,0,0,0,200,201,1,0,0,0,201,301,1,0,0,0,202,204,3,38,19,0,203,
  	205,3,12,6,0,204,203,1,0,0,0,204,205,1,0,0,0,205,301,1,0,0,0,206,208,
  	3,40,20,0,207,209,3,12,6,0,208,207,1,0,0,0,208,209,1,0,0,0,209,301,1,
  	0,0,0,210,212,3,42,21,0,211,213,3,12,6,0,212,211,1,0,0,0,212,213,1,0,
  	0,0,213,301,1,0,0,0,214,216,3,44,22,0,215,217,3,12,6,0,216,215,1,0,0,
  	0,216,217,1,0,0,0,217,301,1,0,0,0,218,220,3,46,23,0,219,221,3,12,6,0,
  	220,219,1,0,0,0,220,221,1,0,0,0,221,301,1,0,0,0,222,224,3,48,24,0,223,
  	225,3,12,6,0,224,223,1,0,0,0,224,225,1,0,0,0,225,301,1,0,0,0,226,228,
  	3,50,25,0,227,229,3,12,6,0,228,227,1,0,0,0,228,229,1,0,0,0,229,301,1,
  	0,0,0,230,232,3,52,26,0,231,233,3,12,6,0,232,231,1,0,0,0,232,233,1,0,
  	0,0,233,301,1,0,0,0,234,236,3,54,27,0,235,237,3,12,6,0,236,235,1,0,0,
  	0,236,237,1,0,0,0,237,301,1,0,0,0,238,240,3,56,28,0,239,241,3,12,6,0,
  	240,239,1,0,0,0,240,241,1,0,0,0,241,301,1,0,0,0,242,244,3,58,29,0,243,
  	245,3,12,6,0,244,243,1,0,0,0,244,245,1,0,0,0,245,301,1,0,0,0,246,248,
  	3,60,30,0,247,249,3,12,6,0,248,247,1,0,0,0,248,249,1,0,0,0,249,301,1,
  	0,0,0,250,252,3,70,35,0,251,253,3,12,6,0,252,251,1,0,0,0,252,253,1,0,
  	0,0,253,301,1,0,0,0,254,256,3,68,34,0,255,257,3,12,6,0,256,255,1,0,0,
  	0,256,257,1,0,0,0,257,301,1,0,0,0,258,260,3,72,36,0,259,261,3,12,6,0,
  	260,259,1,0,0,0,260,261,1,0,0,0,261,301,1,0,0,0,262,264,3,74,37,0,263,
  	265,3,12,6,0,264,263,1,0,0,0,264,265,1,0,0,0,265,301,1,0,0,0,266,268,
  	3,76,38,0,267,269,3,12,6,0,268,267,1,0,0,0,268,269,1,0,0,0,269,301,1,
  	0,0,0,270,272,3,78,39,0,271,273,3,12,6,0,272,271,1,0,0,0,272,273,1,0,
  	0,0,273,301,1,0,0,0,274,276,3,80,40,0,275,277,3,12,6,0,276,275,1,0,0,
  	0,276,277,1,0,0,0,277,301,1,0,0,0,278,280,3,82,41,0,279,281,3,12,6,0,
  	280,279,1,0,0,0,280,281,1,0,0,0,281,301,1,0,0,0,282,284,3,84,42,0,283,
  	285,3,12,6,0,284,283,1,0,0,0,284,285,1,0,0,0,285,301,1,0,0,0,286,288,
  	3,86,43,0,287,289,3,12,6,0,288,287,1,0,0,0,288,289,1,0,0,0,289,301,1,
  	0,0,0,290,292,3,88,44,0,291,293,3,12,6,0,292,291,1,0,0,0,292,293,1,0,
  	0,0,293,301,1,0,0,0,294,296,3,16,8,0,295,297,3,12,6,0,296,295,1,0,0,0,
  	296,297,1,0,0,0,297,301,1,0,0,0,298,301,3,14,7,0,299,301,5,85,0,0,300,
  	170,1,0,0,0,300,174,1,0,0,0,300,178,1,0,0,0,300,182,1,0,0,0,300,186,1,
  	0,0,0,300,190,1,0,0,0,300,194,1,0,0,0,300,198,1,0,0,0,300,202,1,0,0,0,
  	300,206,1,0,0,0,300,210,1,0,0,0,300,214,1,0,0,0,300,218,1,0,0,0,300,222,
  	1,0,0,0,300,226,1,0,0,0,300,230,1,0,0,0,300,234,1,0,0,0,300,238,1,0,0,
  	0,300,242,1,0,0,0,300,246,1,0,0,0,300,250,1,0,0,0,300,254,1,0,0,0,300,
  	258,1,0,0,0,300,262,1,0,0,0,300,266,1,0,0,0,300,270,1,0,0,0,300,274,1,
  	0,0,0,300,278,1,0,0,0,300,282,1,0,0,0,300,286,1,0,0,0,300,290,1,0,0,0,
  	300,294,1,0,0,0,300,298,1,0,0,0,300,299,1,0,0,0,301,11,1,0,0,0,302,303,
  	5,87,0,0,303,13,1,0,0,0,304,305,5,87,0,0,305,15,1,0,0,0,306,307,5,84,
  	0,0,307,308,3,18,9,0,308,17,1,0,0,0,309,311,5,1,0,0,310,312,3,20,10,0,
  	311,310,1,0,0,0,311,312,1,0,0,0,312,313,1,0,0,0,313,314,5,2,0,0,314,19,
  	1,0,0,0,315,320,3,94,47,0,316,317,5,3,0,0,317,319,3,94,47,0,318,316,1,
  	0,0,0,319,322,1,0,0,0,320,318,1,0,0,0,320,321,1,0,0,0,321,21,1,0,0,0,
  	322,320,1,0,0,0,323,324,5,4,0,0,324,325,5,84,0,0,325,326,3,94,47,0,326,
  	23,1,0,0,0,327,328,5,5,0,0,328,329,5,84,0,0,329,330,5,57,0,0,330,331,
  	3,94,47,0,331,25,1,0,0,0,332,333,5,6,0,0,333,334,5,1,0,0,334,336,5,84,
  	0,0,335,337,3,102,51,0,336,335,1,0,0,0,336,337,1,0,0,0,337,338,1,0,0,
  	0,338,339,5,2,0,0,339,27,1,0,0,0,340,341,7,0,0,0,341,342,3,102,51,0,342,
  	29,1,0,0,0,343,344,7,1,0,0,344,345,3,102,51,0,345,31,1,0,0,0,346,347,
  	7,2,0,0,347,348,3,102,51,0,348,33,1,0,0,0,349,350,7,3,0,0,350,351,3,102,
  	51,0,351,35,1,0,0,0,352,353,7,4,0,0,353,37,1,0,0,0,354,355,5,17,0,0,355,
  	356,5,1,0,0,356,357,3,102,51,0,357,358,3,102,51,0,358,359,5,2,0,0,359,
  	39,1,0,0,0,360,361,5,18,0,0,361,362,3,102,51,0,362,363,3,102,51,0,363,
  	41,1,0,0,0,364,365,5,19,0,0,365,366,3,102,51,0,366,43,1,0,0,0,367,368,
  	5,20,0,0,368,369,3,102,51,0,369,45,1,0,0,0,370,371,5,21,0,0,371,372,3,
  	102,51,0,372,47,1,0,0,0,373,374,7,5,0,0,374,49,1,0,0,0,375,376,7,6,0,
  	0,376,51,1,0,0,0,377,378,7,7,0,0,378,379,3,90,45,0,379,53,1,0,0,0,380,
  	381,5,31,0,0,381,55,1,0,0,0,382,383,5,32,0,0,383,384,3,96,48,0,384,57,
  	1,0,0,0,385,386,5,83,0,0,386,390,5,1,0,0,387,389,3,10,5,0,388,387,1,0,
  	0,0,389,392,1,0,0,0,390,388,1,0,0,0,390,391,1,0,0,0,391,393,1,0,0,0,392,
  	390,1,0,0,0,393,394,5,2,0,0,394,59,1,0,0,0,395,396,5,63,0,0,396,397,3,
  	102,51,0,397,401,5,1,0,0,398,400,3,10,5,0,399,398,1,0,0,0,400,403,1,0,
  	0,0,401,399,1,0,0,0,401,402,1,0,0,0,402,404,1,0,0,0,403,401,1,0,0,0,404,
  	405,5,2,0,0,405,61,1,0,0,0,406,409,3,64,32,0,407,409,3,66,33,0,408,406,
  	1,0,0,0,408,407,1,0,0,0,409,63,1,0,0,0,410,419,3,80,40,0,411,419,3,82,
  	41,0,412,419,3,84,42,0,413,419,3,86,43,0,414,419,3,104,52,0,415,419,5,
  	84,0,0,416,419,5,35,0,0,417,419,3,88,44,0,418,410,1,0,0,0,418,411,1,0,
  	0,0,418,412,1,0,0,0,418,413,1,0,0,0,418,414,1,0,0,0,418,415,1,0,0,0,418,
  	416,1,0,0,0,418,417,1,0,0,0,419,65,1,0,0,0,420,421,5,50,0,0,421,447,3,
  	66,33,0,422,426,5,60,0,0,423,425,3,66,33,0,424,423,1,0,0,0,425,428,1,
  	0,0,0,426,424,1,0,0,0,426,427,1,0,0,0,427,429,1,0,0,0,428,426,1,0,0,0,
  	429,447,5,61,0,0,430,431,3,64,32,0,431,432,3,108,54,0,432,433,3,66,33,
  	0,433,447,1,0,0,0,434,439,3,64,32,0,435,436,7,8,0,0,436,438,3,66,33,0,
  	437,435,1,0,0,0,438,441,1,0,0,0,439,437,1,0,0,0,439,440,1,0,0,0,440,442,
  	1,0,0,0,441,439,1,0,0,0,442,443,7,8,0,0,443,444,3,66,33,0,444,447,1,0,
  	0,0,445,447,3,64,32,0,446,420,1,0,0,0,446,422,1,0,0,0,446,430,1,0,0,0,
  	446,434,1,0,0,0,446,445,1,0,0,0,447,67,1,0,0,0,448,449,5,64,0,0,449,450,
  	5,60,0,0,450,451,3,62,31,0,451,452,5,61,0,0,452,456,5,1,0,0,453,455,3,
  	10,5,0,454,453,1,0,0,0,455,458,1,0,0,0,456,454,1,0,0,0,456,457,1,0,0,
  	0,457,459,1,0,0,0,458,456,1,0,0,0,459,460,5,2,0,0,460,69,1,0,0,0,461,
  	462,5,64,0,0,462,463,5,60,0,0,463,464,3,94,47,0,464,465,5,61,0,0,465,
  	469,5,1,0,0,466,468,3,10,5,0,467,466,1,0,0,0,468,471,1,0,0,0,469,467,
  	1,0,0,0,469,470,1,0,0,0,470,472,1,0,0,0,471,469,1,0,0,0,472,473,5,2,0,
  	0,473,477,5,1,0,0,474,476,3,10,5,0,475,474,1,0,0,0,476,479,1,0,0,0,477,
  	475,1,0,0,0,477,478,1,0,0,0,478,480,1,0,0,0,479,477,1,0,0,0,480,481,5,
  	2,0,0,481,71,1,0,0,0,482,483,5,65,0,0,483,487,5,1,0,0,484,486,3,10,5,
  	0,485,484,1,0,0,0,486,489,1,0,0,0,487,485,1,0,0,0,487,488,1,0,0,0,488,
  	490,1,0,0,0,489,487,1,0,0,0,490,491,5,2,0,0,491,492,5,60,0,0,492,493,
  	3,94,47,0,493,494,5,61,0,0,494,73,1,0,0,0,495,496,5,66,0,0,496,497,5,
  	60,0,0,497,498,3,94,47,0,498,499,5,61,0,0,499,503,5,1,0,0,500,502,3,10,
  	5,0,501,500,1,0,0,0,502,505,1,0,0,0,503,501,1,0,0,0,503,504,1,0,0,0,504,
  	506,1,0,0,0,505,503,1,0,0,0,506,507,5,2,0,0,507,75,1,0,0,0,508,509,5,
  	67,0,0,509,513,5,1,0,0,510,512,3,10,5,0,511,510,1,0,0,0,512,515,1,0,0,
  	0,513,511,1,0,0,0,513,514,1,0,0,0,514,516,1,0,0,0,515,513,1,0,0,0,516,
  	517,5,2,0,0,517,519,5,1,0,0,518,520,3,94,47,0,519,518,1,0,0,0,520,521,
  	1,0,0,0,521,519,1,0,0,0,521,522,1,0,0,0,522,523,1,0,0,0,523,524,5,2,0,
  	0,524,77,1,0,0,0,525,526,5,68,0,0,526,527,5,60,0,0,527,528,3,94,47,0,
  	528,529,5,61,0,0,529,533,5,1,0,0,530,532,3,10,5,0,531,530,1,0,0,0,532,
  	535,1,0,0,0,533,531,1,0,0,0,533,534,1,0,0,0,534,536,1,0,0,0,535,533,1,
  	0,0,0,536,537,5,2,0,0,537,79,1,0,0,0,538,539,5,69,0,0,539,540,3,94,47,
  	0,540,541,3,94,47,0,541,81,1,0,0,0,542,543,5,70,0,0,543,544,5,60,0,0,
  	544,545,3,94,47,0,545,546,5,61,0,0,546,547,5,60,0,0,547,548,3,94,47,0,
  	548,549,5,61,0,0,549,83,1,0,0,0,550,551,5,71,0,0,551,552,5,60,0,0,552,
  	553,3,94,47,0,553,554,5,61,0,0,554,555,5,60,0,0,555,556,3,94,47,0,556,
  	557,5,61,0,0,557,85,1,0,0,0,558,559,5,72,0,0,559,560,3,94,47,0,560,561,
  	3,94,47,0,561,87,1,0,0,0,562,563,5,73,0,0,563,564,3,94,47,0,564,565,3,
  	94,47,0,565,89,1,0,0,0,566,569,3,92,46,0,567,569,5,84,0,0,568,566,1,0,
  	0,0,568,567,1,0,0,0,569,91,1,0,0,0,570,571,7,9,0,0,571,93,1,0,0,0,572,
  	579,5,36,0,0,573,579,5,84,0,0,574,579,5,35,0,0,575,579,3,96,48,0,576,
  	579,3,62,31,0,577,579,3,92,46,0,578,572,1,0,0,0,578,573,1,0,0,0,578,574,
  	1,0,0,0,578,575,1,0,0,0,578,576,1,0,0,0,578,577,1,0,0,0,579,95,1,0,0,
  	0,580,584,3,100,50,0,581,584,3,98,49,0,582,584,5,35,0,0,583,580,1,0,0,
  	0,583,581,1,0,0,0,583,582,1,0,0,0,584,97,1,0,0,0,585,586,5,60,0,0,586,
  	592,3,100,50,0,587,588,3,110,55,0,588,589,3,100,50,0,589,591,1,0,0,0,
  	590,587,1,0,0,0,591,594,1,0,0,0,592,590,1,0,0,0,592,593,1,0,0,0,593,595,
  	1,0,0,0,594,592,1,0,0,0,595,596,3,110,55,0,596,597,3,100,50,0,597,598,
  	5,61,0,0,598,612,1,0,0,0,599,605,3,100,50,0,600,601,3,110,55,0,601,602,
  	3,100,50,0,602,604,1,0,0,0,603,600,1,0,0,0,604,607,1,0,0,0,605,603,1,
  	0,0,0,605,606,1,0,0,0,606,608,1,0,0,0,607,605,1,0,0,0,608,609,3,110,55,
  	0,609,610,3,100,50,0,610,612,1,0,0,0,611,585,1,0,0,0,611,599,1,0,0,0,
  	612,99,1,0,0,0,613,622,3,112,56,0,614,622,3,114,57,0,615,622,3,116,58,
  	0,616,622,3,118,59,0,617,622,3,120,60,0,618,622,3,122,61,0,619,622,5,
  	84,0,0,620,622,5,35,0,0,621,613,1,0,0,0,621,614,1,0,0,0,621,615,1,0,0,
  	0,621,616,1,0,0,0,621,617,1,0,0,0,621,618,1,0,0,0,621,619,1,0,0,0,621,
  	620,1,0,0,0,622,101,1,0,0,0,623,626,3,98,49,0,624,626,3,100,50,0,625,
  	623,1,0,0,0,625,624,1,0,0,0,626,103,1,0,0,0,627,628,7,10,0,0,628,105,
  	1,0,0,0,629,633,5,35,0,0,630,633,3,104,52,0,631,633,5,36,0,0,632,629,
  	1,0,0,0,632,630,1,0,0,0,632,631,1,0,0,0,633,107,1,0,0,0,634,645,1,0,0,
  	0,635,645,5,48,0,0,636,645,5,49,0,0,637,645,5,50,0,0,638,645,5,51,0,0,
  	639,645,5,52,0,0,640,645,5,53,0,0,641,645,5,54,0,0,642,645,5,55,0,0,643,
  	645,5,56,0,0,644,634,1,0,0,0,644,635,1,0,0,0,644,636,1,0,0,0,644,637,
  	1,0,0,0,644,638,1,0,0,0,644,639,1,0,0,0,644,640,1,0,0,0,644,641,1,0,0,
  	0,644,642,1,0,0,0,644,643,1,0,0,0,645,109,1,0,0,0,646,647,7,11,0,0,647,
  	111,1,0,0,0,648,649,5,74,0,0,649,651,3,102,51,0,650,652,3,102,51,0,651,
  	650,1,0,0,0,652,653,1,0,0,0,653,651,1,0,0,0,653,654,1,0,0,0,654,113,1,
  	0,0,0,655,656,5,75,0,0,656,657,3,102,51,0,657,115,1,0,0,0,658,659,5,76,
  	0,0,659,661,3,102,51,0,660,662,3,102,51,0,661,660,1,0,0,0,662,663,1,0,
  	0,0,663,661,1,0,0,0,663,664,1,0,0,0,664,117,1,0,0,0,665,666,5,77,0,0,
  	666,667,3,102,51,0,667,668,3,102,51,0,668,119,1,0,0,0,669,670,5,78,0,
  	0,670,671,3,102,51,0,671,672,3,102,51,0,672,121,1,0,0,0,673,674,5,79,
  	0,0,674,676,3,102,51,0,675,677,3,102,51,0,676,675,1,0,0,0,677,678,1,0,
  	0,0,678,676,1,0,0,0,678,679,1,0,0,0,679,123,1,0,0,0,71,127,129,143,147,
  	153,160,167,172,176,180,184,188,192,196,200,204,208,212,216,220,224,228,
  	232,236,240,244,248,252,256,260,264,268,272,276,280,284,288,292,296,300,
  	311,320,336,390,401,408,418,426,439,446,456,469,477,487,503,513,521,533,
  	568,578,583,592,605,611,621,625,632,644,653,663,678
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

std::vector<tree::TerminalNode *> LogotecGramarParser::ProgramaContext::NEWLINE() {
  return getTokens(LogotecGramarParser::NEWLINE);
}

tree::TerminalNode* LogotecGramarParser::ProgramaContext::NEWLINE(size_t i) {
  return getToken(LogotecGramarParser::NEWLINE, i);
}

std::vector<LogotecGramarParser::Linea_instruccionesContext *> LogotecGramarParser::ProgramaContext::linea_instrucciones() {
  return getRuleContexts<LogotecGramarParser::Linea_instruccionesContext>();
}

LogotecGramarParser::Linea_instruccionesContext* LogotecGramarParser::ProgramaContext::linea_instrucciones(size_t i) {
  return getRuleContext<LogotecGramarParser::Linea_instruccionesContext>(i);
}

std::vector<LogotecGramarParser::ProcedimientoContext *> LogotecGramarParser::ProgramaContext::procedimiento() {
  return getRuleContexts<LogotecGramarParser::ProcedimientoContext>();
}

LogotecGramarParser::ProcedimientoContext* LogotecGramarParser::ProgramaContext::procedimiento(size_t i) {
  return getRuleContext<LogotecGramarParser::ProcedimientoContext>(i);
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
    setState(129);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 12190719) != 0)) {
      setState(127);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(124);
        match(LogotecGramarParser::NEWLINE);
        break;
      }

      case 2: {
        setState(125);
        linea_instrucciones();
        break;
      }

      case 3: {
        setState(126);
        procedimiento();
        break;
      }

      default:
        break;
      }
      setState(131);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(132);
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

std::vector<LogotecGramarParser::Linea_instruccionesContext *> LogotecGramarParser::ProcedimientoContext::linea_instrucciones() {
  return getRuleContexts<LogotecGramarParser::Linea_instruccionesContext>();
}

LogotecGramarParser::Linea_instruccionesContext* LogotecGramarParser::ProcedimientoContext::linea_instrucciones(size_t i) {
  return getRuleContext<LogotecGramarParser::Linea_instruccionesContext>(i);
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
    setState(134);
    match(LogotecGramarParser::PARA);
    setState(135);
    match(LogotecGramarParser::ID);
    setState(136);
    parametros();
    setState(137);
    match(LogotecGramarParser::NEWLINE);
    setState(143);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(138);
        linea_instrucciones();
        setState(139);
        match(LogotecGramarParser::NEWLINE); 
      }
      setState(145);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(147);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 12059647) != 0)) {
      setState(146);
      linea_instrucciones();
    }
    setState(149);
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
    setState(151);
    match(LogotecGramarParser::T__0);
    setState(153);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::ID) {
      setState(152);
      lista_parametros();
    }
    setState(155);
    match(LogotecGramarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Linea_instruccionesContext ------------------------------------------------------------------

LogotecGramarParser::Linea_instruccionesContext::Linea_instruccionesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LogotecGramarParser::InstruccionContext *> LogotecGramarParser::Linea_instruccionesContext::instruccion() {
  return getRuleContexts<LogotecGramarParser::InstruccionContext>();
}

LogotecGramarParser::InstruccionContext* LogotecGramarParser::Linea_instruccionesContext::instruccion(size_t i) {
  return getRuleContext<LogotecGramarParser::InstruccionContext>(i);
}


size_t LogotecGramarParser::Linea_instruccionesContext::getRuleIndex() const {
  return LogotecGramarParser::RuleLinea_instrucciones;
}

void LogotecGramarParser::Linea_instruccionesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLinea_instrucciones(this);
}

void LogotecGramarParser::Linea_instruccionesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLinea_instrucciones(this);
}


std::any LogotecGramarParser::Linea_instruccionesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitLinea_instrucciones(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Linea_instruccionesContext* LogotecGramarParser::linea_instrucciones() {
  Linea_instruccionesContext *_localctx = _tracker.createInstance<Linea_instruccionesContext>(_ctx, getState());
  enterRule(_localctx, 6, LogotecGramarParser::RuleLinea_instrucciones);

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
    setState(158); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(157);
              instruccion();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(160); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
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
  enterRule(_localctx, 8, LogotecGramarParser::RuleLista_parametros);
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
    setState(162);
    match(LogotecGramarParser::ID);
    setState(167);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogotecGramarParser::T__2) {
      setState(163);
      match(LogotecGramarParser::T__2);
      setState(164);
      match(LogotecGramarParser::ID);
      setState(169);
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

LogotecGramarParser::Procedimiento_llamadoContext* LogotecGramarParser::InstruccionContext::procedimiento_llamado() {
  return getRuleContext<LogotecGramarParser::Procedimiento_llamadoContext>(0);
}

LogotecGramarParser::ComentarioContext* LogotecGramarParser::InstruccionContext::comentario() {
  return getRuleContext<LogotecGramarParser::ComentarioContext>(0);
}

tree::TerminalNode* LogotecGramarParser::InstruccionContext::NEWLINE() {
  return getToken(LogotecGramarParser::NEWLINE, 0);
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
    setState(300);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(170);
      haz_variable();
      setState(172);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
      case 1: {
        setState(171);
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
      setState(174);
      inic_variable();
      setState(176);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
      case 1: {
        setState(175);
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
      setState(178);
      inc_variable();
      setState(180);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
      case 1: {
        setState(179);
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
      setState(182);
      avanza_variable();
      setState(184);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
      case 1: {
        setState(183);
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
      setState(186);
      retrocede_variable();
      setState(188);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
      case 1: {
        setState(187);
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
      setState(190);
      gira_derecha_variable();
      setState(192);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
      case 1: {
        setState(191);
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
      setState(194);
      gira_izquierda_variable();
      setState(196);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        setState(195);
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
      setState(198);
      ocultar_tortuga_variable();
      setState(200);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
      case 1: {
        setState(199);
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
      setState(202);
      ponpos_variable();
      setState(204);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
      case 1: {
        setState(203);
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
      setState(206);
      ponxy_variable();
      setState(208);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
      case 1: {
        setState(207);
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
      setState(210);
      ponrumbo_variable();
      setState(212);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
      case 1: {
        setState(211);
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
      setState(214);
      ponx_variable();
      setState(216);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
      case 1: {
        setState(215);
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
      setState(218);
      pony_variable();
      setState(220);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(219);
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
      setState(222);
      bajalapiz_variable();
      setState(224);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
      case 1: {
        setState(223);
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
      setState(226);
      subelapiz_variable();
      setState(228);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
      case 1: {
        setState(227);
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
      setState(230);
      poncolorlapiz_variable();
      setState(232);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
      case 1: {
        setState(231);
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
      setState(234);
      centro_variable();
      setState(236);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
      case 1: {
        setState(235);
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
      setState(238);
      esperar_variable();
      setState(240);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
      case 1: {
        setState(239);
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
      setState(242);
      ejecuta_variable();
      setState(244);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
      case 1: {
        setState(243);
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
      setState(246);
      repite_variable();
      setState(248);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
      case 1: {
        setState(247);
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
      setState(250);
      si_sino_variable();
      setState(252);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
      case 1: {
        setState(251);
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
      setState(254);
      si_variable();
      setState(256);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
      case 1: {
        setState(255);
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
      setState(258);
      haz_hasta_variable();
      setState(260);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
      case 1: {
        setState(259);
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
      setState(262);
      hasta_variable();
      setState(264);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
      case 1: {
        setState(263);
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
      setState(266);
      haz_mientras_variable();
      setState(268);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
      case 1: {
        setState(267);
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
      setState(270);
      mientras_variable();
      setState(272);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
      case 1: {
        setState(271);
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
      setState(274);
      iguales_variable();
      setState(276);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
      case 1: {
        setState(275);
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
      setState(278);
      y_variable();
      setState(280);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
      case 1: {
        setState(279);
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
      setState(282);
      o_variable();
      setState(284);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
      case 1: {
        setState(283);
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
      setState(286);
      mayorque_variable();
      setState(288);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
      case 1: {
        setState(287);
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
      setState(290);
      menorque_variable();
      setState(292);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
      case 1: {
        setState(291);
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
      setState(294);
      procedimiento_llamado();
      setState(296);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
      case 1: {
        setState(295);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(298);
      comentario();
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(299);
      match(LogotecGramarParser::NEWLINE);
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
    setState(302);
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
    setState(304);
    match(LogotecGramarParser::LINE_COMMENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Procedimiento_llamadoContext ------------------------------------------------------------------

LogotecGramarParser::Procedimiento_llamadoContext::Procedimiento_llamadoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Procedimiento_llamadoContext::ID() {
  return getToken(LogotecGramarParser::ID, 0);
}

LogotecGramarParser::Parametros_llamadoContext* LogotecGramarParser::Procedimiento_llamadoContext::parametros_llamado() {
  return getRuleContext<LogotecGramarParser::Parametros_llamadoContext>(0);
}


size_t LogotecGramarParser::Procedimiento_llamadoContext::getRuleIndex() const {
  return LogotecGramarParser::RuleProcedimiento_llamado;
}

void LogotecGramarParser::Procedimiento_llamadoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcedimiento_llamado(this);
}

void LogotecGramarParser::Procedimiento_llamadoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcedimiento_llamado(this);
}


std::any LogotecGramarParser::Procedimiento_llamadoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitProcedimiento_llamado(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Procedimiento_llamadoContext* LogotecGramarParser::procedimiento_llamado() {
  Procedimiento_llamadoContext *_localctx = _tracker.createInstance<Procedimiento_llamadoContext>(_ctx, getState());
  enterRule(_localctx, 16, LogotecGramarParser::RuleProcedimiento_llamado);

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
    match(LogotecGramarParser::ID);
    setState(307);
    parametros_llamado();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parametros_llamadoContext ------------------------------------------------------------------

LogotecGramarParser::Parametros_llamadoContext::Parametros_llamadoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LogotecGramarParser::Lista_parametros_llamadoContext* LogotecGramarParser::Parametros_llamadoContext::lista_parametros_llamado() {
  return getRuleContext<LogotecGramarParser::Lista_parametros_llamadoContext>(0);
}


size_t LogotecGramarParser::Parametros_llamadoContext::getRuleIndex() const {
  return LogotecGramarParser::RuleParametros_llamado;
}

void LogotecGramarParser::Parametros_llamadoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParametros_llamado(this);
}

void LogotecGramarParser::Parametros_llamadoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParametros_llamado(this);
}


std::any LogotecGramarParser::Parametros_llamadoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitParametros_llamado(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Parametros_llamadoContext* LogotecGramarParser::parametros_llamado() {
  Parametros_llamadoContext *_localctx = _tracker.createInstance<Parametros_llamadoContext>(_ctx, getState());
  enterRule(_localctx, 18, LogotecGramarParser::RuleParametros_llamado);
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
    match(LogotecGramarParser::T__0);
    setState(311);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 26) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 26)) & 306235995764819847) != 0)) {
      setState(310);
      lista_parametros_llamado();
    }
    setState(313);
    match(LogotecGramarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Lista_parametros_llamadoContext ------------------------------------------------------------------

LogotecGramarParser::Lista_parametros_llamadoContext::Lista_parametros_llamadoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LogotecGramarParser::ExprContext *> LogotecGramarParser::Lista_parametros_llamadoContext::expr() {
  return getRuleContexts<LogotecGramarParser::ExprContext>();
}

LogotecGramarParser::ExprContext* LogotecGramarParser::Lista_parametros_llamadoContext::expr(size_t i) {
  return getRuleContext<LogotecGramarParser::ExprContext>(i);
}


size_t LogotecGramarParser::Lista_parametros_llamadoContext::getRuleIndex() const {
  return LogotecGramarParser::RuleLista_parametros_llamado;
}

void LogotecGramarParser::Lista_parametros_llamadoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLista_parametros_llamado(this);
}

void LogotecGramarParser::Lista_parametros_llamadoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLista_parametros_llamado(this);
}


std::any LogotecGramarParser::Lista_parametros_llamadoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitLista_parametros_llamado(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Lista_parametros_llamadoContext* LogotecGramarParser::lista_parametros_llamado() {
  Lista_parametros_llamadoContext *_localctx = _tracker.createInstance<Lista_parametros_llamadoContext>(_ctx, getState());
  enterRule(_localctx, 20, LogotecGramarParser::RuleLista_parametros_llamado);
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
    expr();
    setState(320);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogotecGramarParser::T__2) {
      setState(316);
      match(LogotecGramarParser::T__2);
      setState(317);
      expr();
      setState(322);
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

LogotecGramarParser::ExprContext* LogotecGramarParser::Haz_variableContext::expr() {
  return getRuleContext<LogotecGramarParser::ExprContext>(0);
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
  enterRule(_localctx, 22, LogotecGramarParser::RuleHaz_variable);

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
    match(LogotecGramarParser::HAZ);
    setState(324);
    match(LogotecGramarParser::ID);
    setState(325);
    antlrcpp::downCast<Haz_variableContext *>(_localctx)->e = expr();
   
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
  enterRule(_localctx, 24, LogotecGramarParser::RuleInic_variable);

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
    match(LogotecGramarParser::INIC);
    setState(328);
    match(LogotecGramarParser::ID);
    setState(329);
    match(LogotecGramarParser::ASSIGN);
    setState(330);
    antlrcpp::downCast<Inic_variableContext *>(_localctx)->e = expr();
   
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

tree::TerminalNode* LogotecGramarParser::Inc_variableContext::ID() {
  return getToken(LogotecGramarParser::ID, 0);
}

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Inc_variableContext::expr_mat_aritm() {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(0);
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
  enterRule(_localctx, 26, LogotecGramarParser::RuleInc_variable);
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
    setState(332);
    match(LogotecGramarParser::INC);
    setState(333);
    match(LogotecGramarParser::T__0);
    setState(334);
    match(LogotecGramarParser::ID);
    setState(336);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 35) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 35)) & 597584603250689) != 0)) {
      setState(335);
      expr_mat_aritm();
    }
    setState(338);
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

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Avanza_variableContext::expr_mat_aritm() {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(0);
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
  enterRule(_localctx, 28, LogotecGramarParser::RuleAvanza_variable);
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
    if (!(_la == LogotecGramarParser::AVANZA

    || _la == LogotecGramarParser::AV)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(341);
    antlrcpp::downCast<Avanza_variableContext *>(_localctx)->e = expr_mat_aritm();
   
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

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Retrocede_variableContext::expr_mat_aritm() {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(0);
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
  enterRule(_localctx, 30, LogotecGramarParser::RuleRetrocede_variable);
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
    setState(343);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::RETROCEDE

    || _la == LogotecGramarParser::RE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(344);
    antlrcpp::downCast<Retrocede_variableContext *>(_localctx)->e = expr_mat_aritm();
   
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

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Gira_derecha_variableContext::expr_mat_aritm() {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(0);
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
  enterRule(_localctx, 32, LogotecGramarParser::RuleGira_derecha_variable);
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
    setState(346);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::GIRA_DERECHA

    || _la == LogotecGramarParser::GD)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(347);
    antlrcpp::downCast<Gira_derecha_variableContext *>(_localctx)->e = expr_mat_aritm();
   
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

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Gira_izquierda_variableContext::expr_mat_aritm() {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(0);
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
  enterRule(_localctx, 34, LogotecGramarParser::RuleGira_izquierda_variable);
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
    setState(349);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::GIRA_IZQUIERDA

    || _la == LogotecGramarParser::GI)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(350);
    antlrcpp::downCast<Gira_izquierda_variableContext *>(_localctx)->e = expr_mat_aritm();
   
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
  enterRule(_localctx, 36, LogotecGramarParser::RuleOcultar_tortuga_variable);
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
    setState(352);
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

std::vector<LogotecGramarParser::Expr_mat_aritmContext *> LogotecGramarParser::Ponpos_variableContext::expr_mat_aritm() {
  return getRuleContexts<LogotecGramarParser::Expr_mat_aritmContext>();
}

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Ponpos_variableContext::expr_mat_aritm(size_t i) {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(i);
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
  enterRule(_localctx, 38, LogotecGramarParser::RulePonpos_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(354);
    match(LogotecGramarParser::PONPOS);
    setState(355);
    match(LogotecGramarParser::T__0);
    setState(356);
    expr_mat_aritm();
    setState(357);
    expr_mat_aritm();
    setState(358);
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

std::vector<LogotecGramarParser::Expr_mat_aritmContext *> LogotecGramarParser::Ponxy_variableContext::expr_mat_aritm() {
  return getRuleContexts<LogotecGramarParser::Expr_mat_aritmContext>();
}

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Ponxy_variableContext::expr_mat_aritm(size_t i) {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(i);
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
  enterRule(_localctx, 40, LogotecGramarParser::RulePonxy_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
    match(LogotecGramarParser::PONXY);
    setState(361);
    expr_mat_aritm();
    setState(362);
    expr_mat_aritm();
   
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

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Ponrumbo_variableContext::expr_mat_aritm() {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(0);
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
  enterRule(_localctx, 42, LogotecGramarParser::RulePonrumbo_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(364);
    match(LogotecGramarParser::PONRUMBO);
    setState(365);
    expr_mat_aritm();
   
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

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Ponx_variableContext::expr_mat_aritm() {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(0);
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
  enterRule(_localctx, 44, LogotecGramarParser::RulePonx_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(367);
    match(LogotecGramarParser::PONX);
    setState(368);
    expr_mat_aritm();
   
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

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Pony_variableContext::expr_mat_aritm() {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(0);
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
  enterRule(_localctx, 46, LogotecGramarParser::RulePony_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(370);
    match(LogotecGramarParser::PONY);
    setState(371);
    expr_mat_aritm();
   
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
  enterRule(_localctx, 48, LogotecGramarParser::RuleBajalapiz_variable);
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
    setState(373);
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
  enterRule(_localctx, 50, LogotecGramarParser::RuleSubelapiz_variable);
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
    setState(375);
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

tree::TerminalNode* LogotecGramarParser::Poncolorlapiz_variableContext::PONCOLORLAPIZ() {
  return getToken(LogotecGramarParser::PONCOLORLAPIZ, 0);
}

tree::TerminalNode* LogotecGramarParser::Poncolorlapiz_variableContext::PCL() {
  return getToken(LogotecGramarParser::PCL, 0);
}

LogotecGramarParser::Colores_variableContext* LogotecGramarParser::Poncolorlapiz_variableContext::colores_variable() {
  return getRuleContext<LogotecGramarParser::Colores_variableContext>(0);
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
  enterRule(_localctx, 52, LogotecGramarParser::RulePoncolorlapiz_variable);
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
    setState(377);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::PONCOLORLAPIZ

    || _la == LogotecGramarParser::PCL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }

    setState(378);
    colores_variable();
   
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
  enterRule(_localctx, 54, LogotecGramarParser::RuleCentro_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(380);
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

LogotecGramarParser::Exp_integerContext* LogotecGramarParser::Esperar_variableContext::exp_integer() {
  return getRuleContext<LogotecGramarParser::Exp_integerContext>(0);
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
  enterRule(_localctx, 56, LogotecGramarParser::RuleEsperar_variable);

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
    match(LogotecGramarParser::ESPERAR);
    setState(383);
    exp_integer();
   
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
  enterRule(_localctx, 58, LogotecGramarParser::RuleEjecuta_variable);
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
    setState(385);
    match(LogotecGramarParser::EJECUTA);
    setState(386);
    match(LogotecGramarParser::T__0);
    setState(390);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 12059647) != 0)) {
      setState(387);
      instruccion();
      setState(392);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(393);
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

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Repite_variableContext::expr_mat_aritm() {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(0);
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
  enterRule(_localctx, 60, LogotecGramarParser::RuleRepite_variable);
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
    setState(395);
    match(LogotecGramarParser::REPITE);
    setState(396);
    antlrcpp::downCast<Repite_variableContext *>(_localctx)->e = expr_mat_aritm();
    setState(397);
    match(LogotecGramarParser::T__0);
    setState(401);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 12059647) != 0)) {
      setState(398);
      instruccion();
      setState(403);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(404);
    match(LogotecGramarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Exp_logicaContext ------------------------------------------------------------------

LogotecGramarParser::Exp_logicaContext::Exp_logicaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LogotecGramarParser::Exp_logica_operacionesContext* LogotecGramarParser::Exp_logicaContext::exp_logica_operaciones() {
  return getRuleContext<LogotecGramarParser::Exp_logica_operacionesContext>(0);
}

LogotecGramarParser::Exp_logicas_exprContext* LogotecGramarParser::Exp_logicaContext::exp_logicas_expr() {
  return getRuleContext<LogotecGramarParser::Exp_logicas_exprContext>(0);
}


size_t LogotecGramarParser::Exp_logicaContext::getRuleIndex() const {
  return LogotecGramarParser::RuleExp_logica;
}

void LogotecGramarParser::Exp_logicaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp_logica(this);
}

void LogotecGramarParser::Exp_logicaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp_logica(this);
}


std::any LogotecGramarParser::Exp_logicaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitExp_logica(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Exp_logicaContext* LogotecGramarParser::exp_logica() {
  Exp_logicaContext *_localctx = _tracker.createInstance<Exp_logicaContext>(_ctx, getState());
  enterRule(_localctx, 62, LogotecGramarParser::RuleExp_logica);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(408);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(406);
      exp_logica_operaciones();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(407);
      exp_logicas_expr();
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

//----------------- Exp_logica_operacionesContext ------------------------------------------------------------------

LogotecGramarParser::Exp_logica_operacionesContext::Exp_logica_operacionesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LogotecGramarParser::Iguales_variableContext* LogotecGramarParser::Exp_logica_operacionesContext::iguales_variable() {
  return getRuleContext<LogotecGramarParser::Iguales_variableContext>(0);
}

LogotecGramarParser::Y_variableContext* LogotecGramarParser::Exp_logica_operacionesContext::y_variable() {
  return getRuleContext<LogotecGramarParser::Y_variableContext>(0);
}

LogotecGramarParser::O_variableContext* LogotecGramarParser::Exp_logica_operacionesContext::o_variable() {
  return getRuleContext<LogotecGramarParser::O_variableContext>(0);
}

LogotecGramarParser::Mayorque_variableContext* LogotecGramarParser::Exp_logica_operacionesContext::mayorque_variable() {
  return getRuleContext<LogotecGramarParser::Mayorque_variableContext>(0);
}

LogotecGramarParser::LogicoContext* LogotecGramarParser::Exp_logica_operacionesContext::logico() {
  return getRuleContext<LogotecGramarParser::LogicoContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Exp_logica_operacionesContext::ID() {
  return getToken(LogotecGramarParser::ID, 0);
}

tree::TerminalNode* LogotecGramarParser::Exp_logica_operacionesContext::NUMBER() {
  return getToken(LogotecGramarParser::NUMBER, 0);
}

LogotecGramarParser::Menorque_variableContext* LogotecGramarParser::Exp_logica_operacionesContext::menorque_variable() {
  return getRuleContext<LogotecGramarParser::Menorque_variableContext>(0);
}


size_t LogotecGramarParser::Exp_logica_operacionesContext::getRuleIndex() const {
  return LogotecGramarParser::RuleExp_logica_operaciones;
}

void LogotecGramarParser::Exp_logica_operacionesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp_logica_operaciones(this);
}

void LogotecGramarParser::Exp_logica_operacionesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp_logica_operaciones(this);
}


std::any LogotecGramarParser::Exp_logica_operacionesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitExp_logica_operaciones(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Exp_logica_operacionesContext* LogotecGramarParser::exp_logica_operaciones() {
  Exp_logica_operacionesContext *_localctx = _tracker.createInstance<Exp_logica_operacionesContext>(_ctx, getState());
  enterRule(_localctx, 64, LogotecGramarParser::RuleExp_logica_operaciones);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(418);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::IGUALESQ: {
        enterOuterAlt(_localctx, 1);
        setState(410);
        iguales_variable();
        break;
      }

      case LogotecGramarParser::Y: {
        enterOuterAlt(_localctx, 2);
        setState(411);
        y_variable();
        break;
      }

      case LogotecGramarParser::O: {
        enterOuterAlt(_localctx, 3);
        setState(412);
        o_variable();
        break;
      }

      case LogotecGramarParser::MAYORQUEQ: {
        enterOuterAlt(_localctx, 4);
        setState(413);
        mayorque_variable();
        break;
      }

      case LogotecGramarParser::TRUE:
      case LogotecGramarParser::FALSE: {
        enterOuterAlt(_localctx, 5);
        setState(414);
        logico();
        break;
      }

      case LogotecGramarParser::ID: {
        enterOuterAlt(_localctx, 6);
        setState(415);
        match(LogotecGramarParser::ID);
        break;
      }

      case LogotecGramarParser::NUMBER: {
        enterOuterAlt(_localctx, 7);
        setState(416);
        match(LogotecGramarParser::NUMBER);
        break;
      }

      case LogotecGramarParser::MENORQUEQ: {
        enterOuterAlt(_localctx, 8);
        setState(417);
        menorque_variable();
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

//----------------- Exp_logicas_exprContext ------------------------------------------------------------------

LogotecGramarParser::Exp_logicas_exprContext::Exp_logicas_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Exp_logicas_exprContext::NOT() {
  return getToken(LogotecGramarParser::NOT, 0);
}

std::vector<LogotecGramarParser::Exp_logicas_exprContext *> LogotecGramarParser::Exp_logicas_exprContext::exp_logicas_expr() {
  return getRuleContexts<LogotecGramarParser::Exp_logicas_exprContext>();
}

LogotecGramarParser::Exp_logicas_exprContext* LogotecGramarParser::Exp_logicas_exprContext::exp_logicas_expr(size_t i) {
  return getRuleContext<LogotecGramarParser::Exp_logicas_exprContext>(i);
}

tree::TerminalNode* LogotecGramarParser::Exp_logicas_exprContext::PAR_OPEN() {
  return getToken(LogotecGramarParser::PAR_OPEN, 0);
}

tree::TerminalNode* LogotecGramarParser::Exp_logicas_exprContext::PAR_CLOSE() {
  return getToken(LogotecGramarParser::PAR_CLOSE, 0);
}

LogotecGramarParser::Exp_logica_operacionesContext* LogotecGramarParser::Exp_logicas_exprContext::exp_logica_operaciones() {
  return getRuleContext<LogotecGramarParser::Exp_logica_operacionesContext>(0);
}

LogotecGramarParser::Operador_logicoContext* LogotecGramarParser::Exp_logicas_exprContext::operador_logico() {
  return getRuleContext<LogotecGramarParser::Operador_logicoContext>(0);
}

std::vector<tree::TerminalNode *> LogotecGramarParser::Exp_logicas_exprContext::AND() {
  return getTokens(LogotecGramarParser::AND);
}

tree::TerminalNode* LogotecGramarParser::Exp_logicas_exprContext::AND(size_t i) {
  return getToken(LogotecGramarParser::AND, i);
}

std::vector<tree::TerminalNode *> LogotecGramarParser::Exp_logicas_exprContext::OR() {
  return getTokens(LogotecGramarParser::OR);
}

tree::TerminalNode* LogotecGramarParser::Exp_logicas_exprContext::OR(size_t i) {
  return getToken(LogotecGramarParser::OR, i);
}


size_t LogotecGramarParser::Exp_logicas_exprContext::getRuleIndex() const {
  return LogotecGramarParser::RuleExp_logicas_expr;
}

void LogotecGramarParser::Exp_logicas_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp_logicas_expr(this);
}

void LogotecGramarParser::Exp_logicas_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp_logicas_expr(this);
}


std::any LogotecGramarParser::Exp_logicas_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitExp_logicas_expr(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Exp_logicas_exprContext* LogotecGramarParser::exp_logicas_expr() {
  Exp_logicas_exprContext *_localctx = _tracker.createInstance<Exp_logicas_exprContext>(_ctx, getState());
  enterRule(_localctx, 66, LogotecGramarParser::RuleExp_logicas_expr);
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
    setState(446);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(420);
      match(LogotecGramarParser::NOT);
      setState(421);
      exp_logicas_expr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(422);
      match(LogotecGramarParser::PAR_OPEN);
      setState(426);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((((_la - 33) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 33)) & 2253930251812871) != 0)) {
        setState(423);
        exp_logicas_expr();
        setState(428);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(429);
      match(LogotecGramarParser::PAR_CLOSE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(430);
      exp_logica_operaciones();
      setState(431);
      operador_logico();
      setState(432);
      exp_logicas_expr();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(434);
      exp_logica_operaciones();
      setState(439);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(435);
          _la = _input->LA(1);
          if (!(_la == LogotecGramarParser::AND

          || _la == LogotecGramarParser::OR)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(436);
          exp_logicas_expr(); 
        }
        setState(441);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
      }

      setState(442);
      _la = _input->LA(1);
      if (!(_la == LogotecGramarParser::AND

      || _la == LogotecGramarParser::OR)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(443);
      exp_logicas_expr();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(445);
      exp_logica_operaciones();
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

LogotecGramarParser::Exp_logicaContext* LogotecGramarParser::Si_variableContext::exp_logica() {
  return getRuleContext<LogotecGramarParser::Exp_logicaContext>(0);
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
  enterRule(_localctx, 68, LogotecGramarParser::RuleSi_variable);
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
    setState(448);
    match(LogotecGramarParser::SI);
    setState(449);
    match(LogotecGramarParser::PAR_OPEN);
    setState(450);
    exp_logica();
    setState(451);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(452);
    match(LogotecGramarParser::T__0);
    setState(456);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 12059647) != 0)) {
      setState(453);
      instruccion();
      setState(458);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(459);
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
  enterRule(_localctx, 70, LogotecGramarParser::RuleSi_sino_variable);
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
    setState(461);
    match(LogotecGramarParser::SI);
    setState(462);
    match(LogotecGramarParser::PAR_OPEN);
    setState(463);
    expr();
    setState(464);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(465);
    match(LogotecGramarParser::T__0);
    setState(469);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 12059647) != 0)) {
      setState(466);
      instruccion();
      setState(471);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(472);
    match(LogotecGramarParser::T__1);
    setState(473);
    match(LogotecGramarParser::T__0);
    setState(477);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 12059647) != 0)) {
      setState(474);
      instruccion();
      setState(479);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(480);
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
  enterRule(_localctx, 72, LogotecGramarParser::RuleHaz_hasta_variable);
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
    setState(482);
    match(LogotecGramarParser::HAZ_HASTA);
    setState(483);
    match(LogotecGramarParser::T__0);
    setState(487);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 12059647) != 0)) {
      setState(484);
      instruccion();
      setState(489);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(490);
    match(LogotecGramarParser::T__1);
    setState(491);
    match(LogotecGramarParser::PAR_OPEN);
    setState(492);
    expr();
    setState(493);
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
  enterRule(_localctx, 74, LogotecGramarParser::RuleHasta_variable);
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
    setState(495);
    match(LogotecGramarParser::HASTA);
    setState(496);
    match(LogotecGramarParser::PAR_OPEN);
    setState(497);
    expr();
    setState(498);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(499);
    match(LogotecGramarParser::T__0);
    setState(503);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 12059647) != 0)) {
      setState(500);
      instruccion();
      setState(505);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(506);
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
  enterRule(_localctx, 76, LogotecGramarParser::RuleHaz_mientras_variable);
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
    setState(508);
    match(LogotecGramarParser::HAZ_MIENTRAS);
    setState(509);
    match(LogotecGramarParser::T__0);
    setState(513);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 12059647) != 0)) {
      setState(510);
      instruccion();
      setState(515);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(516);
    match(LogotecGramarParser::T__1);
    setState(517);
    match(LogotecGramarParser::T__0);
    setState(519); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(518);
      expr();
      setState(521); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 26) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 26)) & 306235995764819847) != 0));
    setState(523);
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
  enterRule(_localctx, 78, LogotecGramarParser::RuleMientras_variable);
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
    setState(525);
    match(LogotecGramarParser::MIENTRAS);
    setState(526);
    match(LogotecGramarParser::PAR_OPEN);
    setState(527);
    expr();
    setState(528);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(529);
    match(LogotecGramarParser::T__0);
    setState(533);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 12059647) != 0)) {
      setState(530);
      instruccion();
      setState(535);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(536);
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
  enterRule(_localctx, 80, LogotecGramarParser::RuleIguales_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(538);
    match(LogotecGramarParser::IGUALESQ);
    setState(539);
    expr();
    setState(540);
    expr();
   
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
  enterRule(_localctx, 82, LogotecGramarParser::RuleY_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(542);
    match(LogotecGramarParser::Y);
    setState(543);
    match(LogotecGramarParser::PAR_OPEN);
    setState(544);
    expr();
    setState(545);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(546);
    match(LogotecGramarParser::PAR_OPEN);
    setState(547);
    expr();
    setState(548);
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
  enterRule(_localctx, 84, LogotecGramarParser::RuleO_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(550);
    match(LogotecGramarParser::O);
    setState(551);
    match(LogotecGramarParser::PAR_OPEN);
    setState(552);
    expr();
    setState(553);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(554);
    match(LogotecGramarParser::PAR_OPEN);
    setState(555);
    expr();
    setState(556);
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
  enterRule(_localctx, 86, LogotecGramarParser::RuleMayorque_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(558);
    match(LogotecGramarParser::MAYORQUEQ);
    setState(559);
    expr();
    setState(560);
    expr();
   
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
  enterRule(_localctx, 88, LogotecGramarParser::RuleMenorque_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(562);
    match(LogotecGramarParser::MENORQUEQ);
    setState(563);
    expr();
    setState(564);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Colores_variableContext ------------------------------------------------------------------

LogotecGramarParser::Colores_variableContext::Colores_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LogotecGramarParser::ColoresContext* LogotecGramarParser::Colores_variableContext::colores() {
  return getRuleContext<LogotecGramarParser::ColoresContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Colores_variableContext::ID() {
  return getToken(LogotecGramarParser::ID, 0);
}


size_t LogotecGramarParser::Colores_variableContext::getRuleIndex() const {
  return LogotecGramarParser::RuleColores_variable;
}

void LogotecGramarParser::Colores_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColores_variable(this);
}

void LogotecGramarParser::Colores_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColores_variable(this);
}


std::any LogotecGramarParser::Colores_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitColores_variable(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Colores_variableContext* LogotecGramarParser::colores_variable() {
  Colores_variableContext *_localctx = _tracker.createInstance<Colores_variableContext>(_ctx, getState());
  enterRule(_localctx, 90, LogotecGramarParser::RuleColores_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(568);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::AZUL:
      case LogotecGramarParser::NEGRO:
      case LogotecGramarParser::ROJO: {
        enterOuterAlt(_localctx, 1);
        setState(566);
        colores();
        break;
      }

      case LogotecGramarParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(567);
        match(LogotecGramarParser::ID);
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
  enterRule(_localctx, 92, LogotecGramarParser::RuleColores);
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
    setState(570);
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

tree::TerminalNode* LogotecGramarParser::ExprContext::CADENA_TEXTO() {
  return getToken(LogotecGramarParser::CADENA_TEXTO, 0);
}

tree::TerminalNode* LogotecGramarParser::ExprContext::ID() {
  return getToken(LogotecGramarParser::ID, 0);
}

tree::TerminalNode* LogotecGramarParser::ExprContext::NUMBER() {
  return getToken(LogotecGramarParser::NUMBER, 0);
}

LogotecGramarParser::Exp_integerContext* LogotecGramarParser::ExprContext::exp_integer() {
  return getRuleContext<LogotecGramarParser::Exp_integerContext>(0);
}

LogotecGramarParser::Exp_logicaContext* LogotecGramarParser::ExprContext::exp_logica() {
  return getRuleContext<LogotecGramarParser::Exp_logicaContext>(0);
}

LogotecGramarParser::ColoresContext* LogotecGramarParser::ExprContext::colores() {
  return getRuleContext<LogotecGramarParser::ColoresContext>(0);
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
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 94, LogotecGramarParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(578);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(572);
      match(LogotecGramarParser::CADENA_TEXTO);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(573);
      match(LogotecGramarParser::ID);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(574);
      match(LogotecGramarParser::NUMBER);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(575);
      exp_integer();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(576);
      exp_logica();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(577);
      colores();
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

//----------------- Exp_integerContext ------------------------------------------------------------------

LogotecGramarParser::Exp_integerContext::Exp_integerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LogotecGramarParser::Exp_matematicaContext* LogotecGramarParser::Exp_integerContext::exp_matematica() {
  return getRuleContext<LogotecGramarParser::Exp_matematicaContext>(0);
}

LogotecGramarParser::Exp_aritmeticaContext* LogotecGramarParser::Exp_integerContext::exp_aritmetica() {
  return getRuleContext<LogotecGramarParser::Exp_aritmeticaContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Exp_integerContext::NUMBER() {
  return getToken(LogotecGramarParser::NUMBER, 0);
}


size_t LogotecGramarParser::Exp_integerContext::getRuleIndex() const {
  return LogotecGramarParser::RuleExp_integer;
}

void LogotecGramarParser::Exp_integerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp_integer(this);
}

void LogotecGramarParser::Exp_integerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp_integer(this);
}


std::any LogotecGramarParser::Exp_integerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitExp_integer(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Exp_integerContext* LogotecGramarParser::exp_integer() {
  Exp_integerContext *_localctx = _tracker.createInstance<Exp_integerContext>(_ctx, getState());
  enterRule(_localctx, 96, LogotecGramarParser::RuleExp_integer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(583);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(580);
      exp_matematica();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(581);
      exp_aritmetica();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(582);
      match(LogotecGramarParser::NUMBER);
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

//----------------- Exp_aritmeticaContext ------------------------------------------------------------------

LogotecGramarParser::Exp_aritmeticaContext::Exp_aritmeticaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Exp_aritmeticaContext::PAR_OPEN() {
  return getToken(LogotecGramarParser::PAR_OPEN, 0);
}

std::vector<LogotecGramarParser::Exp_matematicaContext *> LogotecGramarParser::Exp_aritmeticaContext::exp_matematica() {
  return getRuleContexts<LogotecGramarParser::Exp_matematicaContext>();
}

LogotecGramarParser::Exp_matematicaContext* LogotecGramarParser::Exp_aritmeticaContext::exp_matematica(size_t i) {
  return getRuleContext<LogotecGramarParser::Exp_matematicaContext>(i);
}

std::vector<LogotecGramarParser::OperadorContext *> LogotecGramarParser::Exp_aritmeticaContext::operador() {
  return getRuleContexts<LogotecGramarParser::OperadorContext>();
}

LogotecGramarParser::OperadorContext* LogotecGramarParser::Exp_aritmeticaContext::operador(size_t i) {
  return getRuleContext<LogotecGramarParser::OperadorContext>(i);
}

tree::TerminalNode* LogotecGramarParser::Exp_aritmeticaContext::PAR_CLOSE() {
  return getToken(LogotecGramarParser::PAR_CLOSE, 0);
}


size_t LogotecGramarParser::Exp_aritmeticaContext::getRuleIndex() const {
  return LogotecGramarParser::RuleExp_aritmetica;
}

void LogotecGramarParser::Exp_aritmeticaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp_aritmetica(this);
}

void LogotecGramarParser::Exp_aritmeticaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp_aritmetica(this);
}


std::any LogotecGramarParser::Exp_aritmeticaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitExp_aritmetica(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Exp_aritmeticaContext* LogotecGramarParser::exp_aritmetica() {
  Exp_aritmeticaContext *_localctx = _tracker.createInstance<Exp_aritmeticaContext>(_ctx, getState());
  enterRule(_localctx, 98, LogotecGramarParser::RuleExp_aritmetica);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(611);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::PAR_OPEN: {
        enterOuterAlt(_localctx, 1);
        setState(585);
        match(LogotecGramarParser::PAR_OPEN);
        setState(586);
        exp_matematica();
        setState(592);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(587);
            operador();
            setState(588);
            exp_matematica(); 
          }
          setState(594);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
        }
        setState(595);
        operador();
        setState(596);
        exp_matematica();
        setState(597);
        match(LogotecGramarParser::PAR_CLOSE);
        break;
      }

      case LogotecGramarParser::NUMBER:
      case LogotecGramarParser::DIFERENCIA:
      case LogotecGramarParser::AZAR:
      case LogotecGramarParser::PRODUCTO:
      case LogotecGramarParser::POTENCIA:
      case LogotecGramarParser::DIVISION:
      case LogotecGramarParser::SUMA:
      case LogotecGramarParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(599);
        exp_matematica();
        setState(605);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(600);
            operador();
            setState(601);
            exp_matematica(); 
          }
          setState(607);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
        }
        setState(608);
        operador();
        setState(609);
        exp_matematica();
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

//----------------- Exp_matematicaContext ------------------------------------------------------------------

LogotecGramarParser::Exp_matematicaContext::Exp_matematicaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LogotecGramarParser::Diferencia_exprContext* LogotecGramarParser::Exp_matematicaContext::diferencia_expr() {
  return getRuleContext<LogotecGramarParser::Diferencia_exprContext>(0);
}

LogotecGramarParser::Azar_exprContext* LogotecGramarParser::Exp_matematicaContext::azar_expr() {
  return getRuleContext<LogotecGramarParser::Azar_exprContext>(0);
}

LogotecGramarParser::Producto_exprContext* LogotecGramarParser::Exp_matematicaContext::producto_expr() {
  return getRuleContext<LogotecGramarParser::Producto_exprContext>(0);
}

LogotecGramarParser::Potencia_exprContext* LogotecGramarParser::Exp_matematicaContext::potencia_expr() {
  return getRuleContext<LogotecGramarParser::Potencia_exprContext>(0);
}

LogotecGramarParser::Division_exprContext* LogotecGramarParser::Exp_matematicaContext::division_expr() {
  return getRuleContext<LogotecGramarParser::Division_exprContext>(0);
}

LogotecGramarParser::Suma_exprContext* LogotecGramarParser::Exp_matematicaContext::suma_expr() {
  return getRuleContext<LogotecGramarParser::Suma_exprContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Exp_matematicaContext::ID() {
  return getToken(LogotecGramarParser::ID, 0);
}

tree::TerminalNode* LogotecGramarParser::Exp_matematicaContext::NUMBER() {
  return getToken(LogotecGramarParser::NUMBER, 0);
}


size_t LogotecGramarParser::Exp_matematicaContext::getRuleIndex() const {
  return LogotecGramarParser::RuleExp_matematica;
}

void LogotecGramarParser::Exp_matematicaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp_matematica(this);
}

void LogotecGramarParser::Exp_matematicaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp_matematica(this);
}


std::any LogotecGramarParser::Exp_matematicaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitExp_matematica(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Exp_matematicaContext* LogotecGramarParser::exp_matematica() {
  Exp_matematicaContext *_localctx = _tracker.createInstance<Exp_matematicaContext>(_ctx, getState());
  enterRule(_localctx, 100, LogotecGramarParser::RuleExp_matematica);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(621);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::DIFERENCIA: {
        enterOuterAlt(_localctx, 1);
        setState(613);
        diferencia_expr();
        break;
      }

      case LogotecGramarParser::AZAR: {
        enterOuterAlt(_localctx, 2);
        setState(614);
        azar_expr();
        break;
      }

      case LogotecGramarParser::PRODUCTO: {
        enterOuterAlt(_localctx, 3);
        setState(615);
        producto_expr();
        break;
      }

      case LogotecGramarParser::POTENCIA: {
        enterOuterAlt(_localctx, 4);
        setState(616);
        potencia_expr();
        break;
      }

      case LogotecGramarParser::DIVISION: {
        enterOuterAlt(_localctx, 5);
        setState(617);
        division_expr();
        break;
      }

      case LogotecGramarParser::SUMA: {
        enterOuterAlt(_localctx, 6);
        setState(618);
        suma_expr();
        break;
      }

      case LogotecGramarParser::ID: {
        enterOuterAlt(_localctx, 7);
        setState(619);
        match(LogotecGramarParser::ID);
        break;
      }

      case LogotecGramarParser::NUMBER: {
        enterOuterAlt(_localctx, 8);
        setState(620);
        match(LogotecGramarParser::NUMBER);
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

//----------------- Expr_mat_aritmContext ------------------------------------------------------------------

LogotecGramarParser::Expr_mat_aritmContext::Expr_mat_aritmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LogotecGramarParser::Exp_aritmeticaContext* LogotecGramarParser::Expr_mat_aritmContext::exp_aritmetica() {
  return getRuleContext<LogotecGramarParser::Exp_aritmeticaContext>(0);
}

LogotecGramarParser::Exp_matematicaContext* LogotecGramarParser::Expr_mat_aritmContext::exp_matematica() {
  return getRuleContext<LogotecGramarParser::Exp_matematicaContext>(0);
}


size_t LogotecGramarParser::Expr_mat_aritmContext::getRuleIndex() const {
  return LogotecGramarParser::RuleExpr_mat_aritm;
}

void LogotecGramarParser::Expr_mat_aritmContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_mat_aritm(this);
}

void LogotecGramarParser::Expr_mat_aritmContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_mat_aritm(this);
}


std::any LogotecGramarParser::Expr_mat_aritmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitExpr_mat_aritm(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::expr_mat_aritm() {
  Expr_mat_aritmContext *_localctx = _tracker.createInstance<Expr_mat_aritmContext>(_ctx, getState());
  enterRule(_localctx, 102, LogotecGramarParser::RuleExpr_mat_aritm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(625);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(623);
      exp_aritmetica();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(624);
      exp_matematica();
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
  enterRule(_localctx, 104, LogotecGramarParser::RuleLogico);
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
    setState(627);
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
  enterRule(_localctx, 106, LogotecGramarParser::RuleValor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(632);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(629);
        match(LogotecGramarParser::NUMBER);
        break;
      }

      case LogotecGramarParser::TRUE:
      case LogotecGramarParser::FALSE: {
        enterOuterAlt(_localctx, 2);
        setState(630);
        logico();
        break;
      }

      case LogotecGramarParser::CADENA_TEXTO: {
        enterOuterAlt(_localctx, 3);
        setState(631);
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

//----------------- Operador_logicoContext ------------------------------------------------------------------

LogotecGramarParser::Operador_logicoContext::Operador_logicoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Operador_logicoContext::AND() {
  return getToken(LogotecGramarParser::AND, 0);
}

tree::TerminalNode* LogotecGramarParser::Operador_logicoContext::OR() {
  return getToken(LogotecGramarParser::OR, 0);
}

tree::TerminalNode* LogotecGramarParser::Operador_logicoContext::NOT() {
  return getToken(LogotecGramarParser::NOT, 0);
}

tree::TerminalNode* LogotecGramarParser::Operador_logicoContext::GT() {
  return getToken(LogotecGramarParser::GT, 0);
}

tree::TerminalNode* LogotecGramarParser::Operador_logicoContext::LT() {
  return getToken(LogotecGramarParser::LT, 0);
}

tree::TerminalNode* LogotecGramarParser::Operador_logicoContext::GEQ() {
  return getToken(LogotecGramarParser::GEQ, 0);
}

tree::TerminalNode* LogotecGramarParser::Operador_logicoContext::LEQ() {
  return getToken(LogotecGramarParser::LEQ, 0);
}

tree::TerminalNode* LogotecGramarParser::Operador_logicoContext::EQ() {
  return getToken(LogotecGramarParser::EQ, 0);
}

tree::TerminalNode* LogotecGramarParser::Operador_logicoContext::NEQ() {
  return getToken(LogotecGramarParser::NEQ, 0);
}


size_t LogotecGramarParser::Operador_logicoContext::getRuleIndex() const {
  return LogotecGramarParser::RuleOperador_logico;
}

void LogotecGramarParser::Operador_logicoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperador_logico(this);
}

void LogotecGramarParser::Operador_logicoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperador_logico(this);
}


std::any LogotecGramarParser::Operador_logicoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitOperador_logico(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Operador_logicoContext* LogotecGramarParser::operador_logico() {
  Operador_logicoContext *_localctx = _tracker.createInstance<Operador_logicoContext>(_ctx, getState());
  enterRule(_localctx, 108, LogotecGramarParser::RuleOperador_logico);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(644);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);

      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(635);
      match(LogotecGramarParser::AND);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(636);
      match(LogotecGramarParser::OR);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(637);
      match(LogotecGramarParser::NOT);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(638);
      match(LogotecGramarParser::GT);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(639);
      match(LogotecGramarParser::LT);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(640);
      match(LogotecGramarParser::GEQ);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(641);
      match(LogotecGramarParser::LEQ);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(642);
      match(LogotecGramarParser::EQ);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(643);
      match(LogotecGramarParser::NEQ);
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
  enterRule(_localctx, 110, LogotecGramarParser::RuleOperador);
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
    setState(646);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16492674416640) != 0))) {
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

std::vector<LogotecGramarParser::Expr_mat_aritmContext *> LogotecGramarParser::Diferencia_exprContext::expr_mat_aritm() {
  return getRuleContexts<LogotecGramarParser::Expr_mat_aritmContext>();
}

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Diferencia_exprContext::expr_mat_aritm(size_t i) {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(i);
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
  enterRule(_localctx, 112, LogotecGramarParser::RuleDiferencia_expr);

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
    setState(648);
    match(LogotecGramarParser::DIFERENCIA);

    setState(649);
    expr_mat_aritm();
    setState(651); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(650);
              expr_mat_aritm();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(653); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
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

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Azar_exprContext::expr_mat_aritm() {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(0);
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
  enterRule(_localctx, 114, LogotecGramarParser::RuleAzar_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(655);
    match(LogotecGramarParser::AZAR);

    setState(656);
    expr_mat_aritm();
   
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

std::vector<LogotecGramarParser::Expr_mat_aritmContext *> LogotecGramarParser::Producto_exprContext::expr_mat_aritm() {
  return getRuleContexts<LogotecGramarParser::Expr_mat_aritmContext>();
}

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Producto_exprContext::expr_mat_aritm(size_t i) {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(i);
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
  enterRule(_localctx, 116, LogotecGramarParser::RuleProducto_expr);

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
    setState(658);
    match(LogotecGramarParser::PRODUCTO);

    setState(659);
    expr_mat_aritm();
    setState(661); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(660);
              expr_mat_aritm();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(663); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
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

std::vector<LogotecGramarParser::Expr_mat_aritmContext *> LogotecGramarParser::Potencia_exprContext::expr_mat_aritm() {
  return getRuleContexts<LogotecGramarParser::Expr_mat_aritmContext>();
}

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Potencia_exprContext::expr_mat_aritm(size_t i) {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(i);
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
  enterRule(_localctx, 118, LogotecGramarParser::RulePotencia_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(665);
    match(LogotecGramarParser::POTENCIA);

    setState(666);
    expr_mat_aritm();

    setState(667);
    expr_mat_aritm();
   
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

std::vector<LogotecGramarParser::Expr_mat_aritmContext *> LogotecGramarParser::Division_exprContext::expr_mat_aritm() {
  return getRuleContexts<LogotecGramarParser::Expr_mat_aritmContext>();
}

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Division_exprContext::expr_mat_aritm(size_t i) {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(i);
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
  enterRule(_localctx, 120, LogotecGramarParser::RuleDivision_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(669);
    match(LogotecGramarParser::DIVISION);

    setState(670);
    expr_mat_aritm();

    setState(671);
    expr_mat_aritm();
   
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

std::vector<LogotecGramarParser::Expr_mat_aritmContext *> LogotecGramarParser::Suma_exprContext::expr_mat_aritm() {
  return getRuleContexts<LogotecGramarParser::Expr_mat_aritmContext>();
}

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Suma_exprContext::expr_mat_aritm(size_t i) {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(i);
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
  enterRule(_localctx, 122, LogotecGramarParser::RuleSuma_expr);

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
    setState(673);
    match(LogotecGramarParser::SUMA);

    setState(674);
    expr_mat_aritm();
    setState(676); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(675);
              expr_mat_aritm();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(678); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void LogotecGramarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  logotecgramarParserInitialize();
#else
  ::antlr4::internal::call_once(logotecgramarParserOnceFlag, logotecgramarParserInitialize);
#endif
}
