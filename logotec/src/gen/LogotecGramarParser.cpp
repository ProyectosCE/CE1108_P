
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
      "lista_parametros", "variable_nombre", "instruccion", "salida", "muestra", 
      "rumbo_get", "comentario_linea", "comentario", "procedimiento_llamado", 
      "parametros_llamado", "lista_parametros_llamado", "haz_variable", 
      "inic_variable", "inc_variable", "avanza_variable", "retrocede_variable", 
      "gira_derecha_variable", "gira_izquierda_variable", "ocultar_tortuga_variable", 
      "ponpos_variable", "ponxy_variable", "ponrumbo_variable", "ponx_variable", 
      "pony_variable", "bajalapiz_variable", "subelapiz_variable", "poncolorlapiz_variable", 
      "centro_variable", "esperar_variable", "ejecuta_variable", "repite_variable", 
      "exp_logica", "exp_logica_operaciones", "exp_logicas_expr", "andor", 
      "si_variable", "si_sino_variable", "haz_hasta_variable", "hasta_variable", 
      "haz_mientras_variable", "mientras_variable", "iguales_variable", 
      "y_variable", "o_variable", "mayorque_variable", "menorque_variable", 
      "colores_variable", "colores", "expr", "exp_integer", "exp_aritmetica", 
      "exp_matematica", "expr_mat_aritm", "logico", "valor", "operador_logico", 
      "operador", "diferencia_expr", "azar_expr", "producto_expr", "potencia_expr", 
      "division_expr", "suma_expr"
    },
    std::vector<std::string>{
      "", "'['", "']'", "','", "'Haz'", "'INIC'", "'INC'", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "'azul'", "'negro'", "'rojo'", 
      "", "", "", "", "", "", "", "", "'+'", "'-'", "'*'", "'/'", "'if'", 
      "'else'", "'while'", "'for'", "'&&'", "'||'", "'!'", "'>'", "'<'", 
      "'>='", "'<='", "'=='", "'!='", "'='", "'{'", "'}'", "'('", "')'", 
      "';'", "'REPITE'", "'SI'", "'HAZ.HASTA'", "'HASTA'", "'HAZ.MIENTRAS'", 
      "'MIENTRAS'", "'Iguales\\u003F'", "'Y'", "'O'", "'MayorQue\\u003F'", 
      "'MenorQue\\u003F'", "'Diferencia'", "'Azar'"
    },
    std::vector<std::string>{
      "", "", "", "", "HAZ", "INIC", "INC", "AVANZA", "RETROCEDE", "GIRA_DERECHA", 
      "GIRA_IZQUIERDA", "OCULTAR_TORTUGA", "PONPOS", "PONXY", "PONRUMBO", 
      "RUMBO", "MUESTRA", "PONX", "PONY", "BAJALAPIZ", "SUBELAPIZ", "AZUL", 
      "NEGRO", "ROJO", "PONCOLORLAPIZ", "PCL", "CENTRO", "ESPERAR", "TRUE", 
      "FALSE", "NUMBER", "CADENA_TEXTO", "PLUS", "MINUS", "MULT", "DIV", 
      "IF", "ELSE", "WHILE", "FOR", "AND", "OR", "NOT", "GT", "LT", "GEQ", 
      "LEQ", "EQ", "NEQ", "ASSIGN", "BRACKET_OPEN", "BRACKET_CLOSE", "PAR_OPEN", 
      "PAR_CLOSE", "SEMICOLON", "REPITE", "SI", "HAZ_HASTA", "HASTA", "HAZ_MIENTRAS", 
      "MIENTRAS", "IGUALESQ", "Y", "O", "MAYORQUEQ", "MENORQUEQ", "DIFERENCIA", 
      "AZAR", "PRODUCTO", "POTENCIA", "DIVISION", "SUMA", "RESTA", "PARA", 
      "FIN", "SALIDA", "EJECUTA", "MINUSCULA", "ID", "NEWLINE", "WS", "LINE_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,81,732,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,7,
  	63,2,64,7,64,2,65,7,65,2,66,7,66,1,0,1,0,1,0,1,0,5,0,139,8,0,10,0,12,
  	0,142,9,0,1,0,1,0,1,1,1,1,1,1,3,1,149,8,1,1,1,5,1,152,8,1,10,1,12,1,155,
  	9,1,1,1,3,1,158,8,1,1,1,1,1,1,1,1,2,1,2,3,2,165,8,2,1,2,1,2,1,3,1,3,1,
  	3,1,3,1,3,4,3,174,8,3,11,3,12,3,175,1,4,1,4,1,4,5,4,181,8,4,10,4,12,4,
  	184,9,4,1,5,1,5,1,6,1,6,3,6,190,8,6,1,6,1,6,3,6,194,8,6,1,6,1,6,3,6,198,
  	8,6,1,6,1,6,3,6,202,8,6,1,6,1,6,3,6,206,8,6,1,6,1,6,3,6,210,8,6,1,6,1,
  	6,3,6,214,8,6,1,6,1,6,3,6,218,8,6,1,6,1,6,3,6,222,8,6,1,6,1,6,3,6,226,
  	8,6,1,6,1,6,3,6,230,8,6,1,6,1,6,3,6,234,8,6,1,6,1,6,3,6,238,8,6,1,6,1,
  	6,3,6,242,8,6,1,6,1,6,3,6,246,8,6,1,6,1,6,3,6,250,8,6,1,6,1,6,3,6,254,
  	8,6,1,6,1,6,3,6,258,8,6,1,6,1,6,3,6,262,8,6,1,6,1,6,3,6,266,8,6,1,6,1,
  	6,3,6,270,8,6,1,6,1,6,3,6,274,8,6,1,6,1,6,3,6,278,8,6,1,6,1,6,3,6,282,
  	8,6,1,6,1,6,3,6,286,8,6,1,6,1,6,3,6,290,8,6,1,6,1,6,3,6,294,8,6,1,6,1,
  	6,3,6,298,8,6,1,6,1,6,3,6,302,8,6,1,6,1,6,3,6,306,8,6,1,6,1,6,3,6,310,
  	8,6,1,6,1,6,3,6,314,8,6,1,6,1,6,3,6,318,8,6,1,6,1,6,3,6,322,8,6,1,6,1,
  	6,3,6,326,8,6,3,6,328,8,6,1,6,3,6,331,8,6,1,7,1,7,1,7,1,8,1,8,1,8,3,8,
  	339,8,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,3,12,349,8,12,1,13,1,13,
  	3,13,353,8,13,1,13,1,13,1,14,1,14,1,14,5,14,360,8,14,10,14,12,14,363,
  	9,14,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,
  	3,17,378,8,17,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,20,
  	1,21,1,21,1,21,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,
  	1,24,1,25,1,25,1,25,1,26,1,26,1,26,1,27,1,27,1,27,1,28,1,28,1,29,1,29,
  	1,30,1,30,1,30,1,31,1,31,1,32,1,32,1,32,1,33,1,33,1,33,5,33,430,8,33,
  	10,33,12,33,433,9,33,1,33,1,33,1,34,1,34,1,34,1,34,5,34,441,8,34,10,34,
  	12,34,444,9,34,1,34,1,34,1,35,1,35,3,35,450,8,35,1,36,1,36,1,36,1,36,
  	1,36,1,36,1,36,1,36,1,36,1,36,3,36,462,8,36,1,37,1,37,1,37,1,37,1,37,
  	1,37,1,37,1,37,3,37,472,8,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,
  	5,37,482,8,37,10,37,12,37,485,9,37,1,37,1,37,1,37,5,37,490,8,37,10,37,
  	12,37,493,9,37,1,38,1,38,1,39,1,39,1,39,1,39,1,39,3,39,502,8,39,1,39,
  	1,39,5,39,506,8,39,10,39,12,39,509,9,39,1,39,1,39,1,39,1,39,1,39,1,39,
  	1,39,3,39,518,8,39,1,39,1,39,5,39,522,8,39,10,39,12,39,525,9,39,1,39,
  	1,39,3,39,529,8,39,1,40,1,40,3,40,533,8,40,1,40,1,40,5,40,537,8,40,10,
  	40,12,40,540,9,40,1,40,1,40,1,41,1,41,1,41,5,41,547,8,41,10,41,12,41,
  	550,9,41,1,41,1,41,3,41,554,8,41,1,41,1,41,1,41,1,41,1,42,1,42,1,42,1,
  	42,1,42,3,42,565,8,42,1,42,1,42,5,42,569,8,42,10,42,12,42,572,9,42,1,
  	42,1,42,1,43,1,43,1,43,5,43,579,8,43,10,43,12,43,582,9,43,1,43,1,43,3,
  	43,586,8,43,1,43,1,43,1,43,1,43,1,44,1,44,1,44,1,44,1,44,3,44,597,8,44,
  	1,44,1,44,5,44,601,8,44,10,44,12,44,604,9,44,1,44,1,44,1,45,1,45,1,45,
  	1,45,1,46,1,46,1,46,1,46,1,47,1,47,1,47,1,47,1,48,1,48,1,48,1,48,1,49,
  	1,49,1,49,1,49,1,50,1,50,3,50,630,8,50,1,51,1,51,1,52,1,52,1,52,1,52,
  	1,52,1,52,3,52,640,8,52,1,53,1,53,1,53,3,53,645,8,53,1,54,1,54,1,54,1,
  	54,1,54,5,54,652,8,54,10,54,12,54,655,9,54,1,54,1,54,1,54,1,54,1,54,1,
  	54,1,54,1,54,5,54,665,8,54,10,54,12,54,668,9,54,1,54,1,54,1,54,3,54,673,
  	8,54,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,3,55,683,8,55,1,56,1,56,
  	3,56,687,8,56,1,57,1,57,1,58,1,58,1,58,3,58,694,8,58,1,59,1,59,1,60,1,
  	60,1,61,1,61,1,61,4,61,703,8,61,11,61,12,61,704,1,62,1,62,1,62,1,63,1,
  	63,1,63,4,63,713,8,63,11,63,12,63,714,1,64,1,64,1,64,1,64,1,65,1,65,1,
  	65,1,65,1,66,1,66,1,66,4,66,728,8,66,11,66,12,66,729,1,66,0,1,74,67,0,
  	2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,
  	52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,
  	98,100,102,104,106,108,110,112,114,116,118,120,122,124,126,128,130,132,
  	0,7,1,0,24,25,1,0,40,41,1,0,57,58,1,0,21,23,1,0,28,29,2,0,40,41,43,49,
  	1,0,32,35,806,0,134,1,0,0,0,2,145,1,0,0,0,4,162,1,0,0,0,6,173,1,0,0,0,
  	8,177,1,0,0,0,10,185,1,0,0,0,12,330,1,0,0,0,14,332,1,0,0,0,16,335,1,0,
  	0,0,18,340,1,0,0,0,20,342,1,0,0,0,22,344,1,0,0,0,24,346,1,0,0,0,26,350,
  	1,0,0,0,28,356,1,0,0,0,30,364,1,0,0,0,32,368,1,0,0,0,34,373,1,0,0,0,36,
  	381,1,0,0,0,38,384,1,0,0,0,40,387,1,0,0,0,42,390,1,0,0,0,44,393,1,0,0,
  	0,46,395,1,0,0,0,48,401,1,0,0,0,50,405,1,0,0,0,52,408,1,0,0,0,54,411,
  	1,0,0,0,56,414,1,0,0,0,58,416,1,0,0,0,60,418,1,0,0,0,62,421,1,0,0,0,64,
  	423,1,0,0,0,66,426,1,0,0,0,68,436,1,0,0,0,70,449,1,0,0,0,72,461,1,0,0,
  	0,74,471,1,0,0,0,76,494,1,0,0,0,78,528,1,0,0,0,80,530,1,0,0,0,82,543,
  	1,0,0,0,84,559,1,0,0,0,86,575,1,0,0,0,88,591,1,0,0,0,90,607,1,0,0,0,92,
  	611,1,0,0,0,94,615,1,0,0,0,96,619,1,0,0,0,98,623,1,0,0,0,100,629,1,0,
  	0,0,102,631,1,0,0,0,104,639,1,0,0,0,106,644,1,0,0,0,108,672,1,0,0,0,110,
  	682,1,0,0,0,112,686,1,0,0,0,114,688,1,0,0,0,116,693,1,0,0,0,118,695,1,
  	0,0,0,120,697,1,0,0,0,122,699,1,0,0,0,124,706,1,0,0,0,126,709,1,0,0,0,
  	128,716,1,0,0,0,130,720,1,0,0,0,132,724,1,0,0,0,134,140,3,22,11,0,135,
  	139,5,79,0,0,136,139,3,6,3,0,137,139,3,2,1,0,138,135,1,0,0,0,138,136,
  	1,0,0,0,138,137,1,0,0,0,139,142,1,0,0,0,140,138,1,0,0,0,140,141,1,0,0,
  	0,141,143,1,0,0,0,142,140,1,0,0,0,143,144,5,0,0,1,144,1,1,0,0,0,145,146,
  	5,73,0,0,146,148,5,78,0,0,147,149,3,4,2,0,148,147,1,0,0,0,148,149,1,0,
  	0,0,149,153,1,0,0,0,150,152,3,6,3,0,151,150,1,0,0,0,152,155,1,0,0,0,153,
  	151,1,0,0,0,153,154,1,0,0,0,154,157,1,0,0,0,155,153,1,0,0,0,156,158,3,
  	6,3,0,157,156,1,0,0,0,157,158,1,0,0,0,158,159,1,0,0,0,159,160,5,74,0,
  	0,160,161,5,54,0,0,161,3,1,0,0,0,162,164,5,1,0,0,163,165,3,8,4,0,164,
  	163,1,0,0,0,164,165,1,0,0,0,165,166,1,0,0,0,166,167,5,2,0,0,167,5,1,0,
  	0,0,168,169,3,12,6,0,169,170,5,54,0,0,170,174,1,0,0,0,171,174,3,20,10,
  	0,172,174,5,79,0,0,173,168,1,0,0,0,173,171,1,0,0,0,173,172,1,0,0,0,174,
  	175,1,0,0,0,175,173,1,0,0,0,175,176,1,0,0,0,176,7,1,0,0,0,177,182,3,10,
  	5,0,178,179,5,3,0,0,179,181,3,10,5,0,180,178,1,0,0,0,181,184,1,0,0,0,
  	182,180,1,0,0,0,182,183,1,0,0,0,183,9,1,0,0,0,184,182,1,0,0,0,185,186,
  	5,78,0,0,186,11,1,0,0,0,187,189,3,30,15,0,188,190,3,20,10,0,189,188,1,
  	0,0,0,189,190,1,0,0,0,190,328,1,0,0,0,191,193,3,32,16,0,192,194,3,20,
  	10,0,193,192,1,0,0,0,193,194,1,0,0,0,194,328,1,0,0,0,195,197,3,34,17,
  	0,196,198,3,20,10,0,197,196,1,0,0,0,197,198,1,0,0,0,198,328,1,0,0,0,199,
  	201,3,36,18,0,200,202,3,20,10,0,201,200,1,0,0,0,201,202,1,0,0,0,202,328,
  	1,0,0,0,203,205,3,38,19,0,204,206,3,20,10,0,205,204,1,0,0,0,205,206,1,
  	0,0,0,206,328,1,0,0,0,207,209,3,40,20,0,208,210,3,20,10,0,209,208,1,0,
  	0,0,209,210,1,0,0,0,210,328,1,0,0,0,211,213,3,42,21,0,212,214,3,20,10,
  	0,213,212,1,0,0,0,213,214,1,0,0,0,214,328,1,0,0,0,215,217,3,44,22,0,216,
  	218,3,20,10,0,217,216,1,0,0,0,217,218,1,0,0,0,218,328,1,0,0,0,219,221,
  	3,46,23,0,220,222,3,20,10,0,221,220,1,0,0,0,221,222,1,0,0,0,222,328,1,
  	0,0,0,223,225,3,48,24,0,224,226,3,20,10,0,225,224,1,0,0,0,225,226,1,0,
  	0,0,226,328,1,0,0,0,227,229,3,50,25,0,228,230,3,20,10,0,229,228,1,0,0,
  	0,229,230,1,0,0,0,230,328,1,0,0,0,231,233,3,52,26,0,232,234,3,20,10,0,
  	233,232,1,0,0,0,233,234,1,0,0,0,234,328,1,0,0,0,235,237,3,54,27,0,236,
  	238,3,20,10,0,237,236,1,0,0,0,237,238,1,0,0,0,238,328,1,0,0,0,239,241,
  	3,56,28,0,240,242,3,20,10,0,241,240,1,0,0,0,241,242,1,0,0,0,242,328,1,
  	0,0,0,243,245,3,58,29,0,244,246,3,20,10,0,245,244,1,0,0,0,245,246,1,0,
  	0,0,246,328,1,0,0,0,247,249,3,60,30,0,248,250,3,20,10,0,249,248,1,0,0,
  	0,249,250,1,0,0,0,250,328,1,0,0,0,251,253,3,62,31,0,252,254,3,20,10,0,
  	253,252,1,0,0,0,253,254,1,0,0,0,254,328,1,0,0,0,255,257,3,64,32,0,256,
  	258,3,20,10,0,257,256,1,0,0,0,257,258,1,0,0,0,258,328,1,0,0,0,259,261,
  	3,66,33,0,260,262,3,20,10,0,261,260,1,0,0,0,261,262,1,0,0,0,262,328,1,
  	0,0,0,263,265,3,68,34,0,264,266,3,20,10,0,265,264,1,0,0,0,265,266,1,0,
  	0,0,266,328,1,0,0,0,267,269,3,80,40,0,268,270,3,20,10,0,269,268,1,0,0,
  	0,269,270,1,0,0,0,270,328,1,0,0,0,271,273,3,78,39,0,272,274,3,20,10,0,
  	273,272,1,0,0,0,273,274,1,0,0,0,274,328,1,0,0,0,275,277,3,82,41,0,276,
  	278,3,20,10,0,277,276,1,0,0,0,277,278,1,0,0,0,278,328,1,0,0,0,279,281,
  	3,84,42,0,280,282,3,20,10,0,281,280,1,0,0,0,281,282,1,0,0,0,282,328,1,
  	0,0,0,283,285,3,86,43,0,284,286,3,20,10,0,285,284,1,0,0,0,285,286,1,0,
  	0,0,286,328,1,0,0,0,287,289,3,88,44,0,288,290,3,20,10,0,289,288,1,0,0,
  	0,289,290,1,0,0,0,290,328,1,0,0,0,291,293,3,90,45,0,292,294,3,20,10,0,
  	293,292,1,0,0,0,293,294,1,0,0,0,294,328,1,0,0,0,295,297,3,92,46,0,296,
  	298,3,20,10,0,297,296,1,0,0,0,297,298,1,0,0,0,298,328,1,0,0,0,299,301,
  	3,94,47,0,300,302,3,20,10,0,301,300,1,0,0,0,301,302,1,0,0,0,302,328,1,
  	0,0,0,303,305,3,96,48,0,304,306,3,20,10,0,305,304,1,0,0,0,305,306,1,0,
  	0,0,306,328,1,0,0,0,307,309,3,98,49,0,308,310,3,20,10,0,309,308,1,0,0,
  	0,309,310,1,0,0,0,310,328,1,0,0,0,311,313,3,24,12,0,312,314,3,20,10,0,
  	313,312,1,0,0,0,313,314,1,0,0,0,314,328,1,0,0,0,315,317,3,18,9,0,316,
  	318,3,20,10,0,317,316,1,0,0,0,317,318,1,0,0,0,318,328,1,0,0,0,319,321,
  	3,16,8,0,320,322,3,20,10,0,321,320,1,0,0,0,321,322,1,0,0,0,322,328,1,
  	0,0,0,323,325,3,14,7,0,324,326,3,20,10,0,325,324,1,0,0,0,325,326,1,0,
  	0,0,326,328,1,0,0,0,327,187,1,0,0,0,327,191,1,0,0,0,327,195,1,0,0,0,327,
  	199,1,0,0,0,327,203,1,0,0,0,327,207,1,0,0,0,327,211,1,0,0,0,327,215,1,
  	0,0,0,327,219,1,0,0,0,327,223,1,0,0,0,327,227,1,0,0,0,327,231,1,0,0,0,
  	327,235,1,0,0,0,327,239,1,0,0,0,327,243,1,0,0,0,327,247,1,0,0,0,327,251,
  	1,0,0,0,327,255,1,0,0,0,327,259,1,0,0,0,327,263,1,0,0,0,327,267,1,0,0,
  	0,327,271,1,0,0,0,327,275,1,0,0,0,327,279,1,0,0,0,327,283,1,0,0,0,327,
  	287,1,0,0,0,327,291,1,0,0,0,327,295,1,0,0,0,327,299,1,0,0,0,327,303,1,
  	0,0,0,327,307,1,0,0,0,327,311,1,0,0,0,327,315,1,0,0,0,327,319,1,0,0,0,
  	327,323,1,0,0,0,328,331,1,0,0,0,329,331,5,79,0,0,330,327,1,0,0,0,330,
  	329,1,0,0,0,331,13,1,0,0,0,332,333,5,75,0,0,333,334,3,104,52,0,334,15,
  	1,0,0,0,335,338,5,16,0,0,336,339,3,104,52,0,337,339,3,18,9,0,338,336,
  	1,0,0,0,338,337,1,0,0,0,339,17,1,0,0,0,340,341,5,15,0,0,341,19,1,0,0,
  	0,342,343,5,81,0,0,343,21,1,0,0,0,344,345,5,81,0,0,345,23,1,0,0,0,346,
  	348,5,78,0,0,347,349,3,26,13,0,348,347,1,0,0,0,348,349,1,0,0,0,349,25,
  	1,0,0,0,350,352,5,1,0,0,351,353,3,28,14,0,352,351,1,0,0,0,352,353,1,0,
  	0,0,353,354,1,0,0,0,354,355,5,2,0,0,355,27,1,0,0,0,356,361,3,104,52,0,
  	357,358,5,3,0,0,358,360,3,104,52,0,359,357,1,0,0,0,360,363,1,0,0,0,361,
  	359,1,0,0,0,361,362,1,0,0,0,362,29,1,0,0,0,363,361,1,0,0,0,364,365,5,
  	4,0,0,365,366,3,10,5,0,366,367,3,104,52,0,367,31,1,0,0,0,368,369,5,5,
  	0,0,369,370,3,10,5,0,370,371,5,49,0,0,371,372,3,104,52,0,372,33,1,0,0,
  	0,373,374,5,6,0,0,374,375,5,1,0,0,375,377,3,10,5,0,376,378,3,112,56,0,
  	377,376,1,0,0,0,377,378,1,0,0,0,378,379,1,0,0,0,379,380,5,2,0,0,380,35,
  	1,0,0,0,381,382,5,7,0,0,382,383,3,112,56,0,383,37,1,0,0,0,384,385,5,8,
  	0,0,385,386,3,112,56,0,386,39,1,0,0,0,387,388,5,9,0,0,388,389,3,112,56,
  	0,389,41,1,0,0,0,390,391,5,10,0,0,391,392,3,112,56,0,392,43,1,0,0,0,393,
  	394,5,11,0,0,394,45,1,0,0,0,395,396,5,12,0,0,396,397,5,1,0,0,397,398,
  	3,112,56,0,398,399,3,112,56,0,399,400,5,2,0,0,400,47,1,0,0,0,401,402,
  	5,13,0,0,402,403,3,112,56,0,403,404,3,112,56,0,404,49,1,0,0,0,405,406,
  	5,14,0,0,406,407,3,112,56,0,407,51,1,0,0,0,408,409,5,17,0,0,409,410,3,
  	112,56,0,410,53,1,0,0,0,411,412,5,18,0,0,412,413,3,112,56,0,413,55,1,
  	0,0,0,414,415,5,19,0,0,415,57,1,0,0,0,416,417,5,20,0,0,417,59,1,0,0,0,
  	418,419,7,0,0,0,419,420,3,100,50,0,420,61,1,0,0,0,421,422,5,26,0,0,422,
  	63,1,0,0,0,423,424,5,27,0,0,424,425,3,106,53,0,425,65,1,0,0,0,426,427,
  	5,76,0,0,427,431,5,1,0,0,428,430,3,12,6,0,429,428,1,0,0,0,430,433,1,0,
  	0,0,431,429,1,0,0,0,431,432,1,0,0,0,432,434,1,0,0,0,433,431,1,0,0,0,434,
  	435,5,2,0,0,435,67,1,0,0,0,436,437,5,55,0,0,437,438,3,112,56,0,438,442,
  	5,1,0,0,439,441,3,12,6,0,440,439,1,0,0,0,441,444,1,0,0,0,442,440,1,0,
  	0,0,442,443,1,0,0,0,443,445,1,0,0,0,444,442,1,0,0,0,445,446,5,2,0,0,446,
  	69,1,0,0,0,447,450,3,72,36,0,448,450,3,74,37,0,449,447,1,0,0,0,449,448,
  	1,0,0,0,450,71,1,0,0,0,451,462,3,90,45,0,452,462,3,92,46,0,453,462,3,
  	94,47,0,454,462,3,96,48,0,455,462,3,114,57,0,456,462,3,10,5,0,457,462,
  	5,30,0,0,458,462,3,106,53,0,459,462,5,31,0,0,460,462,3,98,49,0,461,451,
  	1,0,0,0,461,452,1,0,0,0,461,453,1,0,0,0,461,454,1,0,0,0,461,455,1,0,0,
  	0,461,456,1,0,0,0,461,457,1,0,0,0,461,458,1,0,0,0,461,459,1,0,0,0,461,
  	460,1,0,0,0,462,73,1,0,0,0,463,464,6,37,-1,0,464,465,5,42,0,0,465,472,
  	3,74,37,5,466,467,5,52,0,0,467,468,3,74,37,0,468,469,5,53,0,0,469,472,
  	1,0,0,0,470,472,3,72,36,0,471,463,1,0,0,0,471,466,1,0,0,0,471,470,1,0,
  	0,0,472,491,1,0,0,0,473,474,10,3,0,0,474,475,3,118,59,0,475,476,3,74,
  	37,4,476,490,1,0,0,0,477,483,10,2,0,0,478,479,3,76,38,0,479,480,3,74,
  	37,0,480,482,1,0,0,0,481,478,1,0,0,0,482,485,1,0,0,0,483,481,1,0,0,0,
  	483,484,1,0,0,0,484,486,1,0,0,0,485,483,1,0,0,0,486,487,3,76,38,0,487,
  	488,3,74,37,0,488,490,1,0,0,0,489,473,1,0,0,0,489,477,1,0,0,0,490,493,
  	1,0,0,0,491,489,1,0,0,0,491,492,1,0,0,0,492,75,1,0,0,0,493,491,1,0,0,
  	0,494,495,7,1,0,0,495,77,1,0,0,0,496,497,5,56,0,0,497,498,5,52,0,0,498,
  	499,3,70,35,0,499,501,5,53,0,0,500,502,5,79,0,0,501,500,1,0,0,0,501,502,
  	1,0,0,0,502,503,1,0,0,0,503,507,5,1,0,0,504,506,3,12,6,0,505,504,1,0,
  	0,0,506,509,1,0,0,0,507,505,1,0,0,0,507,508,1,0,0,0,508,510,1,0,0,0,509,
  	507,1,0,0,0,510,511,5,2,0,0,511,529,1,0,0,0,512,513,5,56,0,0,513,514,
  	5,1,0,0,514,515,3,70,35,0,515,517,5,2,0,0,516,518,5,79,0,0,517,516,1,
  	0,0,0,517,518,1,0,0,0,518,519,1,0,0,0,519,523,5,1,0,0,520,522,3,12,6,
  	0,521,520,1,0,0,0,522,525,1,0,0,0,523,521,1,0,0,0,523,524,1,0,0,0,524,
  	526,1,0,0,0,525,523,1,0,0,0,526,527,5,2,0,0,527,529,1,0,0,0,528,496,1,
  	0,0,0,528,512,1,0,0,0,529,79,1,0,0,0,530,532,3,78,39,0,531,533,5,79,0,
  	0,532,531,1,0,0,0,532,533,1,0,0,0,533,534,1,0,0,0,534,538,5,1,0,0,535,
  	537,3,12,6,0,536,535,1,0,0,0,537,540,1,0,0,0,538,536,1,0,0,0,538,539,
  	1,0,0,0,539,541,1,0,0,0,540,538,1,0,0,0,541,542,5,2,0,0,542,81,1,0,0,
  	0,543,544,5,57,0,0,544,548,5,1,0,0,545,547,3,12,6,0,546,545,1,0,0,0,547,
  	550,1,0,0,0,548,546,1,0,0,0,548,549,1,0,0,0,549,551,1,0,0,0,550,548,1,
  	0,0,0,551,553,5,2,0,0,552,554,5,79,0,0,553,552,1,0,0,0,553,554,1,0,0,
  	0,554,555,1,0,0,0,555,556,5,52,0,0,556,557,3,70,35,0,557,558,5,53,0,0,
  	558,83,1,0,0,0,559,560,7,2,0,0,560,561,5,52,0,0,561,562,3,70,35,0,562,
  	564,5,53,0,0,563,565,5,79,0,0,564,563,1,0,0,0,564,565,1,0,0,0,565,566,
  	1,0,0,0,566,570,5,1,0,0,567,569,3,12,6,0,568,567,1,0,0,0,569,572,1,0,
  	0,0,570,568,1,0,0,0,570,571,1,0,0,0,571,573,1,0,0,0,572,570,1,0,0,0,573,
  	574,5,2,0,0,574,85,1,0,0,0,575,576,5,59,0,0,576,580,5,1,0,0,577,579,3,
  	12,6,0,578,577,1,0,0,0,579,582,1,0,0,0,580,578,1,0,0,0,580,581,1,0,0,
  	0,581,583,1,0,0,0,582,580,1,0,0,0,583,585,5,2,0,0,584,586,5,79,0,0,585,
  	584,1,0,0,0,585,586,1,0,0,0,586,587,1,0,0,0,587,588,5,52,0,0,588,589,
  	3,70,35,0,589,590,5,53,0,0,590,87,1,0,0,0,591,592,5,60,0,0,592,593,5,
  	52,0,0,593,594,3,70,35,0,594,596,5,53,0,0,595,597,5,79,0,0,596,595,1,
  	0,0,0,596,597,1,0,0,0,597,598,1,0,0,0,598,602,5,1,0,0,599,601,3,12,6,
  	0,600,599,1,0,0,0,601,604,1,0,0,0,602,600,1,0,0,0,602,603,1,0,0,0,603,
  	605,1,0,0,0,604,602,1,0,0,0,605,606,5,2,0,0,606,89,1,0,0,0,607,608,5,
  	61,0,0,608,609,3,70,35,0,609,610,3,70,35,0,610,91,1,0,0,0,611,612,5,62,
  	0,0,612,613,3,70,35,0,613,614,3,70,35,0,614,93,1,0,0,0,615,616,5,63,0,
  	0,616,617,3,70,35,0,617,618,3,70,35,0,618,95,1,0,0,0,619,620,5,64,0,0,
  	620,621,3,112,56,0,621,622,3,112,56,0,622,97,1,0,0,0,623,624,5,65,0,0,
  	624,625,3,112,56,0,625,626,3,112,56,0,626,99,1,0,0,0,627,630,3,102,51,
  	0,628,630,3,10,5,0,629,627,1,0,0,0,629,628,1,0,0,0,630,101,1,0,0,0,631,
  	632,7,3,0,0,632,103,1,0,0,0,633,640,5,31,0,0,634,640,3,10,5,0,635,640,
  	5,30,0,0,636,640,3,106,53,0,637,640,3,70,35,0,638,640,3,102,51,0,639,
  	633,1,0,0,0,639,634,1,0,0,0,639,635,1,0,0,0,639,636,1,0,0,0,639,637,1,
  	0,0,0,639,638,1,0,0,0,640,105,1,0,0,0,641,645,3,110,55,0,642,645,3,108,
  	54,0,643,645,5,30,0,0,644,641,1,0,0,0,644,642,1,0,0,0,644,643,1,0,0,0,
  	645,107,1,0,0,0,646,647,5,52,0,0,647,653,3,110,55,0,648,649,3,120,60,
  	0,649,650,3,110,55,0,650,652,1,0,0,0,651,648,1,0,0,0,652,655,1,0,0,0,
  	653,651,1,0,0,0,653,654,1,0,0,0,654,656,1,0,0,0,655,653,1,0,0,0,656,657,
  	3,120,60,0,657,658,3,110,55,0,658,659,5,53,0,0,659,673,1,0,0,0,660,666,
  	3,110,55,0,661,662,3,120,60,0,662,663,3,110,55,0,663,665,1,0,0,0,664,
  	661,1,0,0,0,665,668,1,0,0,0,666,664,1,0,0,0,666,667,1,0,0,0,667,669,1,
  	0,0,0,668,666,1,0,0,0,669,670,3,120,60,0,670,671,3,110,55,0,671,673,1,
  	0,0,0,672,646,1,0,0,0,672,660,1,0,0,0,673,109,1,0,0,0,674,683,3,122,61,
  	0,675,683,3,124,62,0,676,683,3,126,63,0,677,683,3,128,64,0,678,683,3,
  	130,65,0,679,683,3,132,66,0,680,683,3,10,5,0,681,683,5,30,0,0,682,674,
  	1,0,0,0,682,675,1,0,0,0,682,676,1,0,0,0,682,677,1,0,0,0,682,678,1,0,0,
  	0,682,679,1,0,0,0,682,680,1,0,0,0,682,681,1,0,0,0,683,111,1,0,0,0,684,
  	687,3,108,54,0,685,687,3,110,55,0,686,684,1,0,0,0,686,685,1,0,0,0,687,
  	113,1,0,0,0,688,689,7,4,0,0,689,115,1,0,0,0,690,694,5,30,0,0,691,694,
  	3,114,57,0,692,694,5,31,0,0,693,690,1,0,0,0,693,691,1,0,0,0,693,692,1,
  	0,0,0,694,117,1,0,0,0,695,696,7,5,0,0,696,119,1,0,0,0,697,698,7,6,0,0,
  	698,121,1,0,0,0,699,700,5,66,0,0,700,702,3,112,56,0,701,703,3,112,56,
  	0,702,701,1,0,0,0,703,704,1,0,0,0,704,702,1,0,0,0,704,705,1,0,0,0,705,
  	123,1,0,0,0,706,707,5,67,0,0,707,708,3,112,56,0,708,125,1,0,0,0,709,710,
  	5,68,0,0,710,712,3,112,56,0,711,713,3,112,56,0,712,711,1,0,0,0,713,714,
  	1,0,0,0,714,712,1,0,0,0,714,715,1,0,0,0,715,127,1,0,0,0,716,717,5,69,
  	0,0,717,718,3,112,56,0,718,719,3,112,56,0,719,129,1,0,0,0,720,721,5,70,
  	0,0,721,722,3,112,56,0,722,723,3,112,56,0,723,131,1,0,0,0,724,725,5,71,
  	0,0,725,727,3,112,56,0,726,728,3,112,56,0,727,726,1,0,0,0,728,729,1,0,
  	0,0,729,727,1,0,0,0,729,730,1,0,0,0,730,133,1,0,0,0,86,138,140,148,153,
  	157,164,173,175,182,189,193,197,201,205,209,213,217,221,225,229,233,237,
  	241,245,249,253,257,261,265,269,273,277,281,285,289,293,297,301,305,309,
  	313,317,321,325,327,330,338,348,352,361,377,431,442,449,461,471,483,489,
  	491,501,507,517,523,528,532,538,548,553,564,570,580,585,596,602,629,639,
  	644,653,666,672,682,686,693,704,714,729
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

LogotecGramarParser::ComentarioContext* LogotecGramarParser::ProgramaContext::comentario() {
  return getRuleContext<LogotecGramarParser::ComentarioContext>(0);
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
    setState(134);
    comentario();
    setState(140);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 186883) != 0)) {
      setState(138);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(135);
        match(LogotecGramarParser::NEWLINE);
        break;
      }

      case 2: {
        setState(136);
        linea_instrucciones();
        break;
      }

      case 3: {
        setState(137);
        procedimiento();
        break;
      }

      default:
        break;
      }
      setState(142);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(143);
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

tree::TerminalNode* LogotecGramarParser::ProcedimientoContext::FIN() {
  return getToken(LogotecGramarParser::FIN, 0);
}

tree::TerminalNode* LogotecGramarParser::ProcedimientoContext::SEMICOLON() {
  return getToken(LogotecGramarParser::SEMICOLON, 0);
}

LogotecGramarParser::ParametrosContext* LogotecGramarParser::ProcedimientoContext::parametros() {
  return getRuleContext<LogotecGramarParser::ParametrosContext>(0);
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
    setState(145);
    match(LogotecGramarParser::PARA);
    setState(146);
    match(LogotecGramarParser::ID);
    setState(148);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::T__0) {
      setState(147);
      parametros();
    }
    setState(153);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(150);
        linea_instrucciones(); 
      }
      setState(155);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 186371) != 0)) {
      setState(156);
      linea_instrucciones();
    }
    setState(159);
    match(LogotecGramarParser::FIN);
    setState(160);
    match(LogotecGramarParser::SEMICOLON);
   
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
    setState(162);
    match(LogotecGramarParser::T__0);
    setState(164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::ID) {
      setState(163);
      lista_parametros();
    }
    setState(166);
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

std::vector<LogotecGramarParser::Comentario_lineaContext *> LogotecGramarParser::Linea_instruccionesContext::comentario_linea() {
  return getRuleContexts<LogotecGramarParser::Comentario_lineaContext>();
}

LogotecGramarParser::Comentario_lineaContext* LogotecGramarParser::Linea_instruccionesContext::comentario_linea(size_t i) {
  return getRuleContext<LogotecGramarParser::Comentario_lineaContext>(i);
}

std::vector<tree::TerminalNode *> LogotecGramarParser::Linea_instruccionesContext::NEWLINE() {
  return getTokens(LogotecGramarParser::NEWLINE);
}

tree::TerminalNode* LogotecGramarParser::Linea_instruccionesContext::NEWLINE(size_t i) {
  return getToken(LogotecGramarParser::NEWLINE, i);
}

std::vector<LogotecGramarParser::InstruccionContext *> LogotecGramarParser::Linea_instruccionesContext::instruccion() {
  return getRuleContexts<LogotecGramarParser::InstruccionContext>();
}

LogotecGramarParser::InstruccionContext* LogotecGramarParser::Linea_instruccionesContext::instruccion(size_t i) {
  return getRuleContext<LogotecGramarParser::InstruccionContext>(i);
}

std::vector<tree::TerminalNode *> LogotecGramarParser::Linea_instruccionesContext::SEMICOLON() {
  return getTokens(LogotecGramarParser::SEMICOLON);
}

tree::TerminalNode* LogotecGramarParser::Linea_instruccionesContext::SEMICOLON(size_t i) {
  return getToken(LogotecGramarParser::SEMICOLON, i);
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
    setState(173); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(173);
              _errHandler->sync(this);
              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
              case 1: {
                setState(168);
                instruccion();
                setState(169);
                match(LogotecGramarParser::SEMICOLON);
                break;
              }

              case 2: {
                setState(171);
                comentario_linea();
                break;
              }

              case 3: {
                setState(172);
                match(LogotecGramarParser::NEWLINE);
                break;
              }

              default:
                break;
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(175); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
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

std::vector<LogotecGramarParser::Variable_nombreContext *> LogotecGramarParser::Lista_parametrosContext::variable_nombre() {
  return getRuleContexts<LogotecGramarParser::Variable_nombreContext>();
}

LogotecGramarParser::Variable_nombreContext* LogotecGramarParser::Lista_parametrosContext::variable_nombre(size_t i) {
  return getRuleContext<LogotecGramarParser::Variable_nombreContext>(i);
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
    setState(177);
    variable_nombre();
    setState(182);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogotecGramarParser::T__2) {
      setState(178);
      match(LogotecGramarParser::T__2);
      setState(179);
      variable_nombre();
      setState(184);
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

//----------------- Variable_nombreContext ------------------------------------------------------------------

LogotecGramarParser::Variable_nombreContext::Variable_nombreContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Variable_nombreContext::ID() {
  return getToken(LogotecGramarParser::ID, 0);
}


size_t LogotecGramarParser::Variable_nombreContext::getRuleIndex() const {
  return LogotecGramarParser::RuleVariable_nombre;
}

void LogotecGramarParser::Variable_nombreContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_nombre(this);
}

void LogotecGramarParser::Variable_nombreContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_nombre(this);
}


std::any LogotecGramarParser::Variable_nombreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitVariable_nombre(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Variable_nombreContext* LogotecGramarParser::variable_nombre() {
  Variable_nombreContext *_localctx = _tracker.createInstance<Variable_nombreContext>(_ctx, getState());
  enterRule(_localctx, 10, LogotecGramarParser::RuleVariable_nombre);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(LogotecGramarParser::ID);
   
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

LogotecGramarParser::Rumbo_getContext* LogotecGramarParser::InstruccionContext::rumbo_get() {
  return getRuleContext<LogotecGramarParser::Rumbo_getContext>(0);
}

LogotecGramarParser::MuestraContext* LogotecGramarParser::InstruccionContext::muestra() {
  return getRuleContext<LogotecGramarParser::MuestraContext>(0);
}

LogotecGramarParser::SalidaContext* LogotecGramarParser::InstruccionContext::salida() {
  return getRuleContext<LogotecGramarParser::SalidaContext>(0);
}

LogotecGramarParser::Comentario_lineaContext* LogotecGramarParser::InstruccionContext::comentario_linea() {
  return getRuleContext<LogotecGramarParser::Comentario_lineaContext>(0);
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
  enterRule(_localctx, 12, LogotecGramarParser::RuleInstruccion);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(330);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::HAZ:
      case LogotecGramarParser::INIC:
      case LogotecGramarParser::INC:
      case LogotecGramarParser::AVANZA:
      case LogotecGramarParser::RETROCEDE:
      case LogotecGramarParser::GIRA_DERECHA:
      case LogotecGramarParser::GIRA_IZQUIERDA:
      case LogotecGramarParser::OCULTAR_TORTUGA:
      case LogotecGramarParser::PONPOS:
      case LogotecGramarParser::PONXY:
      case LogotecGramarParser::PONRUMBO:
      case LogotecGramarParser::RUMBO:
      case LogotecGramarParser::MUESTRA:
      case LogotecGramarParser::PONX:
      case LogotecGramarParser::PONY:
      case LogotecGramarParser::BAJALAPIZ:
      case LogotecGramarParser::SUBELAPIZ:
      case LogotecGramarParser::PONCOLORLAPIZ:
      case LogotecGramarParser::PCL:
      case LogotecGramarParser::CENTRO:
      case LogotecGramarParser::ESPERAR:
      case LogotecGramarParser::REPITE:
      case LogotecGramarParser::SI:
      case LogotecGramarParser::HAZ_HASTA:
      case LogotecGramarParser::HASTA:
      case LogotecGramarParser::HAZ_MIENTRAS:
      case LogotecGramarParser::MIENTRAS:
      case LogotecGramarParser::IGUALESQ:
      case LogotecGramarParser::Y:
      case LogotecGramarParser::O:
      case LogotecGramarParser::MAYORQUEQ:
      case LogotecGramarParser::MENORQUEQ:
      case LogotecGramarParser::SALIDA:
      case LogotecGramarParser::EJECUTA:
      case LogotecGramarParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(327);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
        case 1: {
          setState(187);
          haz_variable();
          setState(189);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(188);
            comentario_linea();
          }
          break;
        }

        case 2: {
          setState(191);
          inic_variable();
          setState(193);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(192);
            comentario_linea();
          }
          break;
        }

        case 3: {
          setState(195);
          inc_variable();
          setState(197);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(196);
            comentario_linea();
          }
          break;
        }

        case 4: {
          setState(199);
          avanza_variable();
          setState(201);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(200);
            comentario_linea();
          }
          break;
        }

        case 5: {
          setState(203);
          retrocede_variable();
          setState(205);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(204);
            comentario_linea();
          }
          break;
        }

        case 6: {
          setState(207);
          gira_derecha_variable();
          setState(209);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(208);
            comentario_linea();
          }
          break;
        }

        case 7: {
          setState(211);
          gira_izquierda_variable();
          setState(213);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(212);
            comentario_linea();
          }
          break;
        }

        case 8: {
          setState(215);
          ocultar_tortuga_variable();
          setState(217);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(216);
            comentario_linea();
          }
          break;
        }

        case 9: {
          setState(219);
          ponpos_variable();
          setState(221);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(220);
            comentario_linea();
          }
          break;
        }

        case 10: {
          setState(223);
          ponxy_variable();
          setState(225);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(224);
            comentario_linea();
          }
          break;
        }

        case 11: {
          setState(227);
          ponrumbo_variable();
          setState(229);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(228);
            comentario_linea();
          }
          break;
        }

        case 12: {
          setState(231);
          ponx_variable();
          setState(233);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(232);
            comentario_linea();
          }
          break;
        }

        case 13: {
          setState(235);
          pony_variable();
          setState(237);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(236);
            comentario_linea();
          }
          break;
        }

        case 14: {
          setState(239);
          bajalapiz_variable();
          setState(241);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(240);
            comentario_linea();
          }
          break;
        }

        case 15: {
          setState(243);
          subelapiz_variable();
          setState(245);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(244);
            comentario_linea();
          }
          break;
        }

        case 16: {
          setState(247);
          poncolorlapiz_variable();
          setState(249);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(248);
            comentario_linea();
          }
          break;
        }

        case 17: {
          setState(251);
          centro_variable();
          setState(253);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(252);
            comentario_linea();
          }
          break;
        }

        case 18: {
          setState(255);
          esperar_variable();
          setState(257);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(256);
            comentario_linea();
          }
          break;
        }

        case 19: {
          setState(259);
          ejecuta_variable();
          setState(261);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(260);
            comentario_linea();
          }
          break;
        }

        case 20: {
          setState(263);
          repite_variable();
          setState(265);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(264);
            comentario_linea();
          }
          break;
        }

        case 21: {
          setState(267);
          si_sino_variable();
          setState(269);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(268);
            comentario_linea();
          }
          break;
        }

        case 22: {
          setState(271);
          si_variable();
          setState(273);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(272);
            comentario_linea();
          }
          break;
        }

        case 23: {
          setState(275);
          haz_hasta_variable();
          setState(277);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(276);
            comentario_linea();
          }
          break;
        }

        case 24: {
          setState(279);
          hasta_variable();
          setState(281);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(280);
            comentario_linea();
          }
          break;
        }

        case 25: {
          setState(283);
          haz_mientras_variable();
          setState(285);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(284);
            comentario_linea();
          }
          break;
        }

        case 26: {
          setState(287);
          mientras_variable();
          setState(289);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(288);
            comentario_linea();
          }
          break;
        }

        case 27: {
          setState(291);
          iguales_variable();
          setState(293);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(292);
            comentario_linea();
          }
          break;
        }

        case 28: {
          setState(295);
          y_variable();
          setState(297);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(296);
            comentario_linea();
          }
          break;
        }

        case 29: {
          setState(299);
          o_variable();
          setState(301);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(300);
            comentario_linea();
          }
          break;
        }

        case 30: {
          setState(303);
          mayorque_variable();
          setState(305);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(304);
            comentario_linea();
          }
          break;
        }

        case 31: {
          setState(307);
          menorque_variable();
          setState(309);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(308);
            comentario_linea();
          }
          break;
        }

        case 32: {
          setState(311);
          procedimiento_llamado();
          setState(313);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(312);
            comentario_linea();
          }
          break;
        }

        case 33: {
          setState(315);
          rumbo_get();
          setState(317);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(316);
            comentario_linea();
          }
          break;
        }

        case 34: {
          setState(319);
          muestra();
          setState(321);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(320);
            comentario_linea();
          }
          break;
        }

        case 35: {
          setState(323);
          salida();
          setState(325);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(324);
            comentario_linea();
          }
          break;
        }

        default:
          break;
        }
        break;
      }

      case LogotecGramarParser::NEWLINE: {
        enterOuterAlt(_localctx, 2);
        setState(329);
        match(LogotecGramarParser::NEWLINE);
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

//----------------- SalidaContext ------------------------------------------------------------------

LogotecGramarParser::SalidaContext::SalidaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::SalidaContext::SALIDA() {
  return getToken(LogotecGramarParser::SALIDA, 0);
}

LogotecGramarParser::ExprContext* LogotecGramarParser::SalidaContext::expr() {
  return getRuleContext<LogotecGramarParser::ExprContext>(0);
}


size_t LogotecGramarParser::SalidaContext::getRuleIndex() const {
  return LogotecGramarParser::RuleSalida;
}

void LogotecGramarParser::SalidaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSalida(this);
}

void LogotecGramarParser::SalidaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSalida(this);
}


std::any LogotecGramarParser::SalidaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitSalida(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::SalidaContext* LogotecGramarParser::salida() {
  SalidaContext *_localctx = _tracker.createInstance<SalidaContext>(_ctx, getState());
  enterRule(_localctx, 14, LogotecGramarParser::RuleSalida);

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
    match(LogotecGramarParser::SALIDA);
    setState(333);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MuestraContext ------------------------------------------------------------------

LogotecGramarParser::MuestraContext::MuestraContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::MuestraContext::MUESTRA() {
  return getToken(LogotecGramarParser::MUESTRA, 0);
}

LogotecGramarParser::ExprContext* LogotecGramarParser::MuestraContext::expr() {
  return getRuleContext<LogotecGramarParser::ExprContext>(0);
}

LogotecGramarParser::Rumbo_getContext* LogotecGramarParser::MuestraContext::rumbo_get() {
  return getRuleContext<LogotecGramarParser::Rumbo_getContext>(0);
}


size_t LogotecGramarParser::MuestraContext::getRuleIndex() const {
  return LogotecGramarParser::RuleMuestra;
}

void LogotecGramarParser::MuestraContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMuestra(this);
}

void LogotecGramarParser::MuestraContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMuestra(this);
}


std::any LogotecGramarParser::MuestraContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitMuestra(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::MuestraContext* LogotecGramarParser::muestra() {
  MuestraContext *_localctx = _tracker.createInstance<MuestraContext>(_ctx, getState());
  enterRule(_localctx, 16, LogotecGramarParser::RuleMuestra);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335);
    match(LogotecGramarParser::MUESTRA);
    setState(338);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::AZUL:
      case LogotecGramarParser::NEGRO:
      case LogotecGramarParser::ROJO:
      case LogotecGramarParser::TRUE:
      case LogotecGramarParser::FALSE:
      case LogotecGramarParser::NUMBER:
      case LogotecGramarParser::CADENA_TEXTO:
      case LogotecGramarParser::NOT:
      case LogotecGramarParser::PAR_OPEN:
      case LogotecGramarParser::IGUALESQ:
      case LogotecGramarParser::Y:
      case LogotecGramarParser::O:
      case LogotecGramarParser::MAYORQUEQ:
      case LogotecGramarParser::MENORQUEQ:
      case LogotecGramarParser::DIFERENCIA:
      case LogotecGramarParser::AZAR:
      case LogotecGramarParser::PRODUCTO:
      case LogotecGramarParser::POTENCIA:
      case LogotecGramarParser::DIVISION:
      case LogotecGramarParser::SUMA:
      case LogotecGramarParser::ID: {
        setState(336);
        expr();
        break;
      }

      case LogotecGramarParser::RUMBO: {
        setState(337);
        rumbo_get();
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

//----------------- Rumbo_getContext ------------------------------------------------------------------

LogotecGramarParser::Rumbo_getContext::Rumbo_getContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::Rumbo_getContext::RUMBO() {
  return getToken(LogotecGramarParser::RUMBO, 0);
}


size_t LogotecGramarParser::Rumbo_getContext::getRuleIndex() const {
  return LogotecGramarParser::RuleRumbo_get;
}

void LogotecGramarParser::Rumbo_getContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRumbo_get(this);
}

void LogotecGramarParser::Rumbo_getContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRumbo_get(this);
}


std::any LogotecGramarParser::Rumbo_getContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitRumbo_get(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Rumbo_getContext* LogotecGramarParser::rumbo_get() {
  Rumbo_getContext *_localctx = _tracker.createInstance<Rumbo_getContext>(_ctx, getState());
  enterRule(_localctx, 18, LogotecGramarParser::RuleRumbo_get);

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
    match(LogotecGramarParser::RUMBO);
   
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
  enterRule(_localctx, 20, LogotecGramarParser::RuleComentario_linea);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(342);
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
  enterRule(_localctx, 22, LogotecGramarParser::RuleComentario);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(344);
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
  enterRule(_localctx, 24, LogotecGramarParser::RuleProcedimiento_llamado);
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
    match(LogotecGramarParser::ID);
    setState(348);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::T__0) {
      setState(347);
      parametros_llamado();
    }
   
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
  enterRule(_localctx, 26, LogotecGramarParser::RuleParametros_llamado);
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
    setState(350);
    match(LogotecGramarParser::T__0);
    setState(352);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 21) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 21)) & 146365890527496071) != 0)) {
      setState(351);
      lista_parametros_llamado();
    }
    setState(354);
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
  enterRule(_localctx, 28, LogotecGramarParser::RuleLista_parametros_llamado);
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
    setState(356);
    expr();
    setState(361);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogotecGramarParser::T__2) {
      setState(357);
      match(LogotecGramarParser::T__2);
      setState(358);
      expr();
      setState(363);
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

LogotecGramarParser::Variable_nombreContext* LogotecGramarParser::Haz_variableContext::variable_nombre() {
  return getRuleContext<LogotecGramarParser::Variable_nombreContext>(0);
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
  enterRule(_localctx, 30, LogotecGramarParser::RuleHaz_variable);

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
    match(LogotecGramarParser::HAZ);
    setState(365);
    variable_nombre();
    setState(366);
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

LogotecGramarParser::Variable_nombreContext* LogotecGramarParser::Inic_variableContext::variable_nombre() {
  return getRuleContext<LogotecGramarParser::Variable_nombreContext>(0);
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
  enterRule(_localctx, 32, LogotecGramarParser::RuleInic_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(368);
    match(LogotecGramarParser::INIC);
    setState(369);
    variable_nombre();
    setState(370);
    match(LogotecGramarParser::ASSIGN);
    setState(371);
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

LogotecGramarParser::Variable_nombreContext* LogotecGramarParser::Inc_variableContext::variable_nombre() {
  return getRuleContext<LogotecGramarParser::Variable_nombreContext>(0);
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
  enterRule(_localctx, 34, LogotecGramarParser::RuleInc_variable);
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
    match(LogotecGramarParser::INC);
    setState(374);
    match(LogotecGramarParser::T__0);
    setState(375);
    variable_nombre();
    setState(377);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 30) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 30)) & 285804307939329) != 0)) {
      setState(376);
      expr_mat_aritm();
    }
    setState(379);
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

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Avanza_variableContext::expr_mat_aritm() {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Avanza_variableContext::AVANZA() {
  return getToken(LogotecGramarParser::AVANZA, 0);
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
  enterRule(_localctx, 36, LogotecGramarParser::RuleAvanza_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(381);
    match(LogotecGramarParser::AVANZA);
    setState(382);
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

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Retrocede_variableContext::expr_mat_aritm() {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Retrocede_variableContext::RETROCEDE() {
  return getToken(LogotecGramarParser::RETROCEDE, 0);
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
  enterRule(_localctx, 38, LogotecGramarParser::RuleRetrocede_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(384);
    match(LogotecGramarParser::RETROCEDE);
    setState(385);
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

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Gira_derecha_variableContext::expr_mat_aritm() {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Gira_derecha_variableContext::GIRA_DERECHA() {
  return getToken(LogotecGramarParser::GIRA_DERECHA, 0);
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
  enterRule(_localctx, 40, LogotecGramarParser::RuleGira_derecha_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(387);
    match(LogotecGramarParser::GIRA_DERECHA);
    setState(388);
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

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Gira_izquierda_variableContext::expr_mat_aritm() {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Gira_izquierda_variableContext::GIRA_IZQUIERDA() {
  return getToken(LogotecGramarParser::GIRA_IZQUIERDA, 0);
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
  enterRule(_localctx, 42, LogotecGramarParser::RuleGira_izquierda_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(390);
    match(LogotecGramarParser::GIRA_IZQUIERDA);
    setState(391);
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
  enterRule(_localctx, 44, LogotecGramarParser::RuleOcultar_tortuga_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(393);
    match(LogotecGramarParser::OCULTAR_TORTUGA);
   
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
  enterRule(_localctx, 46, LogotecGramarParser::RulePonpos_variable);

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
    match(LogotecGramarParser::PONPOS);
    setState(396);
    match(LogotecGramarParser::T__0);
    setState(397);
    expr_mat_aritm();
    setState(398);
    expr_mat_aritm();
    setState(399);
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
  enterRule(_localctx, 48, LogotecGramarParser::RulePonxy_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(401);
    match(LogotecGramarParser::PONXY);
    setState(402);
    expr_mat_aritm();
    setState(403);
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
  enterRule(_localctx, 50, LogotecGramarParser::RulePonrumbo_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(405);
    match(LogotecGramarParser::PONRUMBO);
    setState(406);
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
  enterRule(_localctx, 52, LogotecGramarParser::RulePonx_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(408);
    match(LogotecGramarParser::PONX);
    setState(409);
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
  enterRule(_localctx, 54, LogotecGramarParser::RulePony_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(411);
    match(LogotecGramarParser::PONY);
    setState(412);
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
  enterRule(_localctx, 56, LogotecGramarParser::RuleBajalapiz_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(414);
    match(LogotecGramarParser::BAJALAPIZ);
   
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
  enterRule(_localctx, 58, LogotecGramarParser::RuleSubelapiz_variable);

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
    match(LogotecGramarParser::SUBELAPIZ);
   
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
  enterRule(_localctx, 60, LogotecGramarParser::RulePoncolorlapiz_variable);
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
    setState(418);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::PONCOLORLAPIZ

    || _la == LogotecGramarParser::PCL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }

    setState(419);
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
  enterRule(_localctx, 62, LogotecGramarParser::RuleCentro_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(421);
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
  enterRule(_localctx, 64, LogotecGramarParser::RuleEsperar_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(423);
    match(LogotecGramarParser::ESPERAR);
    setState(424);
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
  enterRule(_localctx, 66, LogotecGramarParser::RuleEjecuta_variable);
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
    setState(426);
    match(LogotecGramarParser::EJECUTA);
    setState(427);
    match(LogotecGramarParser::T__0);
    setState(431);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 55299) != 0)) {
      setState(428);
      instruccion();
      setState(433);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(434);
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
  enterRule(_localctx, 68, LogotecGramarParser::RuleRepite_variable);
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
    setState(436);
    match(LogotecGramarParser::REPITE);
    setState(437);
    antlrcpp::downCast<Repite_variableContext *>(_localctx)->e = expr_mat_aritm();
    setState(438);
    match(LogotecGramarParser::T__0);
    setState(442);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 55299) != 0)) {
      setState(439);
      instruccion();
      setState(444);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(445);
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
  enterRule(_localctx, 70, LogotecGramarParser::RuleExp_logica);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(449);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(447);
      exp_logica_operaciones();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(448);
      exp_logicas_expr(0);
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

LogotecGramarParser::Variable_nombreContext* LogotecGramarParser::Exp_logica_operacionesContext::variable_nombre() {
  return getRuleContext<LogotecGramarParser::Variable_nombreContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Exp_logica_operacionesContext::NUMBER() {
  return getToken(LogotecGramarParser::NUMBER, 0);
}

LogotecGramarParser::Exp_integerContext* LogotecGramarParser::Exp_logica_operacionesContext::exp_integer() {
  return getRuleContext<LogotecGramarParser::Exp_integerContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Exp_logica_operacionesContext::CADENA_TEXTO() {
  return getToken(LogotecGramarParser::CADENA_TEXTO, 0);
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
  enterRule(_localctx, 72, LogotecGramarParser::RuleExp_logica_operaciones);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(461);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(451);
      iguales_variable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(452);
      y_variable();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(453);
      o_variable();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(454);
      mayorque_variable();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(455);
      logico();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(456);
      variable_nombre();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(457);
      match(LogotecGramarParser::NUMBER);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(458);
      exp_integer();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(459);
      match(LogotecGramarParser::CADENA_TEXTO);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(460);
      menorque_variable();
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

//----------------- Exp_logicas_exprContext ------------------------------------------------------------------

LogotecGramarParser::Exp_logicas_exprContext::Exp_logicas_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LogotecGramarParser::Exp_logicas_exprContext::getRuleIndex() const {
  return LogotecGramarParser::RuleExp_logicas_expr;
}

void LogotecGramarParser::Exp_logicas_exprContext::copyFrom(Exp_logicas_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OperacionLogicaSimpleContext ------------------------------------------------------------------

std::vector<LogotecGramarParser::Exp_logicas_exprContext *> LogotecGramarParser::OperacionLogicaSimpleContext::exp_logicas_expr() {
  return getRuleContexts<LogotecGramarParser::Exp_logicas_exprContext>();
}

LogotecGramarParser::Exp_logicas_exprContext* LogotecGramarParser::OperacionLogicaSimpleContext::exp_logicas_expr(size_t i) {
  return getRuleContext<LogotecGramarParser::Exp_logicas_exprContext>(i);
}

LogotecGramarParser::Operador_logicoContext* LogotecGramarParser::OperacionLogicaSimpleContext::operador_logico() {
  return getRuleContext<LogotecGramarParser::Operador_logicoContext>(0);
}

LogotecGramarParser::OperacionLogicaSimpleContext::OperacionLogicaSimpleContext(Exp_logicas_exprContext *ctx) { copyFrom(ctx); }

void LogotecGramarParser::OperacionLogicaSimpleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperacionLogicaSimple(this);
}
void LogotecGramarParser::OperacionLogicaSimpleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperacionLogicaSimple(this);
}

std::any LogotecGramarParser::OperacionLogicaSimpleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitOperacionLogicaSimple(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperacionLogicaComplejaContext ------------------------------------------------------------------

std::vector<LogotecGramarParser::Exp_logicas_exprContext *> LogotecGramarParser::OperacionLogicaComplejaContext::exp_logicas_expr() {
  return getRuleContexts<LogotecGramarParser::Exp_logicas_exprContext>();
}

LogotecGramarParser::Exp_logicas_exprContext* LogotecGramarParser::OperacionLogicaComplejaContext::exp_logicas_expr(size_t i) {
  return getRuleContext<LogotecGramarParser::Exp_logicas_exprContext>(i);
}

std::vector<LogotecGramarParser::AndorContext *> LogotecGramarParser::OperacionLogicaComplejaContext::andor() {
  return getRuleContexts<LogotecGramarParser::AndorContext>();
}

LogotecGramarParser::AndorContext* LogotecGramarParser::OperacionLogicaComplejaContext::andor(size_t i) {
  return getRuleContext<LogotecGramarParser::AndorContext>(i);
}

LogotecGramarParser::OperacionLogicaComplejaContext::OperacionLogicaComplejaContext(Exp_logicas_exprContext *ctx) { copyFrom(ctx); }

void LogotecGramarParser::OperacionLogicaComplejaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperacionLogicaCompleja(this);
}
void LogotecGramarParser::OperacionLogicaComplejaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperacionLogicaCompleja(this);
}

std::any LogotecGramarParser::OperacionLogicaComplejaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitOperacionLogicaCompleja(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpLogicaParentesisContext ------------------------------------------------------------------

tree::TerminalNode* LogotecGramarParser::ExpLogicaParentesisContext::PAR_OPEN() {
  return getToken(LogotecGramarParser::PAR_OPEN, 0);
}

LogotecGramarParser::Exp_logicas_exprContext* LogotecGramarParser::ExpLogicaParentesisContext::exp_logicas_expr() {
  return getRuleContext<LogotecGramarParser::Exp_logicas_exprContext>(0);
}

tree::TerminalNode* LogotecGramarParser::ExpLogicaParentesisContext::PAR_CLOSE() {
  return getToken(LogotecGramarParser::PAR_CLOSE, 0);
}

LogotecGramarParser::ExpLogicaParentesisContext::ExpLogicaParentesisContext(Exp_logicas_exprContext *ctx) { copyFrom(ctx); }

void LogotecGramarParser::ExpLogicaParentesisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpLogicaParentesis(this);
}
void LogotecGramarParser::ExpLogicaParentesisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpLogicaParentesis(this);
}

std::any LogotecGramarParser::ExpLogicaParentesisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitExpLogicaParentesis(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpLogicaSimpleContext ------------------------------------------------------------------

LogotecGramarParser::Exp_logica_operacionesContext* LogotecGramarParser::ExpLogicaSimpleContext::exp_logica_operaciones() {
  return getRuleContext<LogotecGramarParser::Exp_logica_operacionesContext>(0);
}

LogotecGramarParser::ExpLogicaSimpleContext::ExpLogicaSimpleContext(Exp_logicas_exprContext *ctx) { copyFrom(ctx); }

void LogotecGramarParser::ExpLogicaSimpleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpLogicaSimple(this);
}
void LogotecGramarParser::ExpLogicaSimpleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpLogicaSimple(this);
}

std::any LogotecGramarParser::ExpLogicaSimpleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitExpLogicaSimple(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegacionContext ------------------------------------------------------------------

tree::TerminalNode* LogotecGramarParser::NegacionContext::NOT() {
  return getToken(LogotecGramarParser::NOT, 0);
}

LogotecGramarParser::Exp_logicas_exprContext* LogotecGramarParser::NegacionContext::exp_logicas_expr() {
  return getRuleContext<LogotecGramarParser::Exp_logicas_exprContext>(0);
}

LogotecGramarParser::NegacionContext::NegacionContext(Exp_logicas_exprContext *ctx) { copyFrom(ctx); }

void LogotecGramarParser::NegacionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegacion(this);
}
void LogotecGramarParser::NegacionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegacion(this);
}

std::any LogotecGramarParser::NegacionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitNegacion(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::Exp_logicas_exprContext* LogotecGramarParser::exp_logicas_expr() {
   return exp_logicas_expr(0);
}

LogotecGramarParser::Exp_logicas_exprContext* LogotecGramarParser::exp_logicas_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  LogotecGramarParser::Exp_logicas_exprContext *_localctx = _tracker.createInstance<Exp_logicas_exprContext>(_ctx, parentState);
  LogotecGramarParser::Exp_logicas_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 74;
  enterRecursionRule(_localctx, 74, LogotecGramarParser::RuleExp_logicas_expr, precedence);

    

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
    setState(471);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NegacionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(464);
      match(LogotecGramarParser::NOT);
      setState(465);
      exp_logicas_expr(5);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ExpLogicaParentesisContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(466);
      match(LogotecGramarParser::PAR_OPEN);
      setState(467);
      exp_logicas_expr(0);
      setState(468);
      match(LogotecGramarParser::PAR_CLOSE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ExpLogicaSimpleContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(470);
      exp_logica_operaciones();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(491);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(489);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<OperacionLogicaSimpleContext>(_tracker.createInstance<Exp_logicas_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp_logicas_expr);
          setState(473);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(474);
          operador_logico();
          setState(475);
          exp_logicas_expr(4);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<OperacionLogicaComplejaContext>(_tracker.createInstance<Exp_logicas_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp_logicas_expr);
          setState(477);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(483);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(478);
              andor();
              setState(479);
              exp_logicas_expr(0); 
            }
            setState(485);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
          }

          setState(486);
          andor();
          setState(487);
          exp_logicas_expr(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(493);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AndorContext ------------------------------------------------------------------

LogotecGramarParser::AndorContext::AndorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogotecGramarParser::AndorContext::AND() {
  return getToken(LogotecGramarParser::AND, 0);
}

tree::TerminalNode* LogotecGramarParser::AndorContext::OR() {
  return getToken(LogotecGramarParser::OR, 0);
}


size_t LogotecGramarParser::AndorContext::getRuleIndex() const {
  return LogotecGramarParser::RuleAndor;
}

void LogotecGramarParser::AndorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndor(this);
}

void LogotecGramarParser::AndorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LogotecGramarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndor(this);
}


std::any LogotecGramarParser::AndorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogotecGramarVisitor*>(visitor))
    return parserVisitor->visitAndor(this);
  else
    return visitor->visitChildren(this);
}

LogotecGramarParser::AndorContext* LogotecGramarParser::andor() {
  AndorContext *_localctx = _tracker.createInstance<AndorContext>(_ctx, getState());
  enterRule(_localctx, 76, LogotecGramarParser::RuleAndor);
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
    setState(494);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::AND

    || _la == LogotecGramarParser::OR)) {
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

tree::TerminalNode* LogotecGramarParser::Si_variableContext::NEWLINE() {
  return getToken(LogotecGramarParser::NEWLINE, 0);
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
  enterRule(_localctx, 78, LogotecGramarParser::RuleSi_variable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(528);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(496);
      match(LogotecGramarParser::SI);
      setState(497);
      match(LogotecGramarParser::PAR_OPEN);
      setState(498);
      exp_logica();
      setState(499);
      match(LogotecGramarParser::PAR_CLOSE);
      setState(501);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LogotecGramarParser::NEWLINE) {
        setState(500);
        match(LogotecGramarParser::NEWLINE);
      }
      setState(503);
      match(LogotecGramarParser::T__0);
      setState(507);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 55299) != 0)) {
        setState(504);
        instruccion();
        setState(509);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(510);
      match(LogotecGramarParser::T__1);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(512);
      match(LogotecGramarParser::SI);
      setState(513);
      match(LogotecGramarParser::T__0);
      setState(514);
      exp_logica();
      setState(515);
      match(LogotecGramarParser::T__1);
      setState(517);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LogotecGramarParser::NEWLINE) {
        setState(516);
        match(LogotecGramarParser::NEWLINE);
      }
      setState(519);
      match(LogotecGramarParser::T__0);
      setState(523);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 55299) != 0)) {
        setState(520);
        instruccion();
        setState(525);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(526);
      match(LogotecGramarParser::T__1);
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

//----------------- Si_sino_variableContext ------------------------------------------------------------------

LogotecGramarParser::Si_sino_variableContext::Si_sino_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LogotecGramarParser::Si_variableContext* LogotecGramarParser::Si_sino_variableContext::si_variable() {
  return getRuleContext<LogotecGramarParser::Si_variableContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Si_sino_variableContext::NEWLINE() {
  return getToken(LogotecGramarParser::NEWLINE, 0);
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
  enterRule(_localctx, 80, LogotecGramarParser::RuleSi_sino_variable);
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
    setState(530);
    si_variable();
    setState(532);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::NEWLINE) {
      setState(531);
      match(LogotecGramarParser::NEWLINE);
    }
    setState(534);
    match(LogotecGramarParser::T__0);
    setState(538);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 55299) != 0)) {
      setState(535);
      instruccion();
      setState(540);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(541);
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

LogotecGramarParser::Exp_logicaContext* LogotecGramarParser::Haz_hasta_variableContext::exp_logica() {
  return getRuleContext<LogotecGramarParser::Exp_logicaContext>(0);
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

tree::TerminalNode* LogotecGramarParser::Haz_hasta_variableContext::NEWLINE() {
  return getToken(LogotecGramarParser::NEWLINE, 0);
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
  enterRule(_localctx, 82, LogotecGramarParser::RuleHaz_hasta_variable);
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
    setState(543);
    match(LogotecGramarParser::HAZ_HASTA);
    setState(544);
    match(LogotecGramarParser::T__0);
    setState(548);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 55299) != 0)) {
      setState(545);
      instruccion();
      setState(550);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(551);
    match(LogotecGramarParser::T__1);
    setState(553);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::NEWLINE) {
      setState(552);
      match(LogotecGramarParser::NEWLINE);
    }
    setState(555);
    match(LogotecGramarParser::PAR_OPEN);
    setState(556);
    exp_logica();
    setState(557);
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

tree::TerminalNode* LogotecGramarParser::Hasta_variableContext::PAR_OPEN() {
  return getToken(LogotecGramarParser::PAR_OPEN, 0);
}

LogotecGramarParser::Exp_logicaContext* LogotecGramarParser::Hasta_variableContext::exp_logica() {
  return getRuleContext<LogotecGramarParser::Exp_logicaContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Hasta_variableContext::PAR_CLOSE() {
  return getToken(LogotecGramarParser::PAR_CLOSE, 0);
}

tree::TerminalNode* LogotecGramarParser::Hasta_variableContext::HASTA() {
  return getToken(LogotecGramarParser::HASTA, 0);
}

tree::TerminalNode* LogotecGramarParser::Hasta_variableContext::HAZ_HASTA() {
  return getToken(LogotecGramarParser::HAZ_HASTA, 0);
}

tree::TerminalNode* LogotecGramarParser::Hasta_variableContext::NEWLINE() {
  return getToken(LogotecGramarParser::NEWLINE, 0);
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
  enterRule(_localctx, 84, LogotecGramarParser::RuleHasta_variable);
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
    setState(559);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::HAZ_HASTA

    || _la == LogotecGramarParser::HASTA)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(560);
    match(LogotecGramarParser::PAR_OPEN);
    setState(561);
    exp_logica();
    setState(562);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(564);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::NEWLINE) {
      setState(563);
      match(LogotecGramarParser::NEWLINE);
    }
    setState(566);
    match(LogotecGramarParser::T__0);
    setState(570);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 55299) != 0)) {
      setState(567);
      instruccion();
      setState(572);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(573);
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

tree::TerminalNode* LogotecGramarParser::Haz_mientras_variableContext::PAR_OPEN() {
  return getToken(LogotecGramarParser::PAR_OPEN, 0);
}

LogotecGramarParser::Exp_logicaContext* LogotecGramarParser::Haz_mientras_variableContext::exp_logica() {
  return getRuleContext<LogotecGramarParser::Exp_logicaContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Haz_mientras_variableContext::PAR_CLOSE() {
  return getToken(LogotecGramarParser::PAR_CLOSE, 0);
}

std::vector<LogotecGramarParser::InstruccionContext *> LogotecGramarParser::Haz_mientras_variableContext::instruccion() {
  return getRuleContexts<LogotecGramarParser::InstruccionContext>();
}

LogotecGramarParser::InstruccionContext* LogotecGramarParser::Haz_mientras_variableContext::instruccion(size_t i) {
  return getRuleContext<LogotecGramarParser::InstruccionContext>(i);
}

tree::TerminalNode* LogotecGramarParser::Haz_mientras_variableContext::NEWLINE() {
  return getToken(LogotecGramarParser::NEWLINE, 0);
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
  enterRule(_localctx, 86, LogotecGramarParser::RuleHaz_mientras_variable);
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
    setState(575);
    match(LogotecGramarParser::HAZ_MIENTRAS);
    setState(576);
    match(LogotecGramarParser::T__0);
    setState(580);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 55299) != 0)) {
      setState(577);
      instruccion();
      setState(582);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(583);
    match(LogotecGramarParser::T__1);
    setState(585);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::NEWLINE) {
      setState(584);
      match(LogotecGramarParser::NEWLINE);
    }
    setState(587);
    match(LogotecGramarParser::PAR_OPEN);
    setState(588);
    exp_logica();
    setState(589);
    match(LogotecGramarParser::PAR_CLOSE);
   
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

LogotecGramarParser::Exp_logicaContext* LogotecGramarParser::Mientras_variableContext::exp_logica() {
  return getRuleContext<LogotecGramarParser::Exp_logicaContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Mientras_variableContext::PAR_CLOSE() {
  return getToken(LogotecGramarParser::PAR_CLOSE, 0);
}

tree::TerminalNode* LogotecGramarParser::Mientras_variableContext::NEWLINE() {
  return getToken(LogotecGramarParser::NEWLINE, 0);
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
  enterRule(_localctx, 88, LogotecGramarParser::RuleMientras_variable);
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
    setState(591);
    match(LogotecGramarParser::MIENTRAS);
    setState(592);
    match(LogotecGramarParser::PAR_OPEN);
    setState(593);
    exp_logica();
    setState(594);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(596);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::NEWLINE) {
      setState(595);
      match(LogotecGramarParser::NEWLINE);
    }
    setState(598);
    match(LogotecGramarParser::T__0);
    setState(602);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 55299) != 0)) {
      setState(599);
      instruccion();
      setState(604);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(605);
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

std::vector<LogotecGramarParser::Exp_logicaContext *> LogotecGramarParser::Iguales_variableContext::exp_logica() {
  return getRuleContexts<LogotecGramarParser::Exp_logicaContext>();
}

LogotecGramarParser::Exp_logicaContext* LogotecGramarParser::Iguales_variableContext::exp_logica(size_t i) {
  return getRuleContext<LogotecGramarParser::Exp_logicaContext>(i);
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
  enterRule(_localctx, 90, LogotecGramarParser::RuleIguales_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(607);
    match(LogotecGramarParser::IGUALESQ);
    setState(608);
    exp_logica();
    setState(609);
    exp_logica();
   
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

std::vector<LogotecGramarParser::Exp_logicaContext *> LogotecGramarParser::Y_variableContext::exp_logica() {
  return getRuleContexts<LogotecGramarParser::Exp_logicaContext>();
}

LogotecGramarParser::Exp_logicaContext* LogotecGramarParser::Y_variableContext::exp_logica(size_t i) {
  return getRuleContext<LogotecGramarParser::Exp_logicaContext>(i);
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
  enterRule(_localctx, 92, LogotecGramarParser::RuleY_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(611);
    match(LogotecGramarParser::Y);
    setState(612);
    exp_logica();
    setState(613);
    exp_logica();
   
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

std::vector<LogotecGramarParser::Exp_logicaContext *> LogotecGramarParser::O_variableContext::exp_logica() {
  return getRuleContexts<LogotecGramarParser::Exp_logicaContext>();
}

LogotecGramarParser::Exp_logicaContext* LogotecGramarParser::O_variableContext::exp_logica(size_t i) {
  return getRuleContext<LogotecGramarParser::Exp_logicaContext>(i);
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
  enterRule(_localctx, 94, LogotecGramarParser::RuleO_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(615);
    match(LogotecGramarParser::O);
    setState(616);
    exp_logica();
    setState(617);
    exp_logica();
   
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

std::vector<LogotecGramarParser::Expr_mat_aritmContext *> LogotecGramarParser::Mayorque_variableContext::expr_mat_aritm() {
  return getRuleContexts<LogotecGramarParser::Expr_mat_aritmContext>();
}

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Mayorque_variableContext::expr_mat_aritm(size_t i) {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(i);
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
  enterRule(_localctx, 96, LogotecGramarParser::RuleMayorque_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(619);
    match(LogotecGramarParser::MAYORQUEQ);
    setState(620);
    expr_mat_aritm();
    setState(621);
    expr_mat_aritm();
   
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

std::vector<LogotecGramarParser::Expr_mat_aritmContext *> LogotecGramarParser::Menorque_variableContext::expr_mat_aritm() {
  return getRuleContexts<LogotecGramarParser::Expr_mat_aritmContext>();
}

LogotecGramarParser::Expr_mat_aritmContext* LogotecGramarParser::Menorque_variableContext::expr_mat_aritm(size_t i) {
  return getRuleContext<LogotecGramarParser::Expr_mat_aritmContext>(i);
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
  enterRule(_localctx, 98, LogotecGramarParser::RuleMenorque_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(623);
    match(LogotecGramarParser::MENORQUEQ);
    setState(624);
    expr_mat_aritm();
    setState(625);
    expr_mat_aritm();
   
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

LogotecGramarParser::Variable_nombreContext* LogotecGramarParser::Colores_variableContext::variable_nombre() {
  return getRuleContext<LogotecGramarParser::Variable_nombreContext>(0);
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
  enterRule(_localctx, 100, LogotecGramarParser::RuleColores_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(629);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::AZUL:
      case LogotecGramarParser::NEGRO:
      case LogotecGramarParser::ROJO: {
        enterOuterAlt(_localctx, 1);
        setState(627);
        colores();
        break;
      }

      case LogotecGramarParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(628);
        variable_nombre();
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
  enterRule(_localctx, 102, LogotecGramarParser::RuleColores);
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
    setState(631);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 14680064) != 0))) {
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

LogotecGramarParser::Variable_nombreContext* LogotecGramarParser::ExprContext::variable_nombre() {
  return getRuleContext<LogotecGramarParser::Variable_nombreContext>(0);
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
  enterRule(_localctx, 104, LogotecGramarParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(639);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(633);
      match(LogotecGramarParser::CADENA_TEXTO);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(634);
      variable_nombre();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(635);
      match(LogotecGramarParser::NUMBER);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(636);
      exp_integer();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(637);
      exp_logica();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(638);
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
  enterRule(_localctx, 106, LogotecGramarParser::RuleExp_integer);

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(641);
      exp_matematica();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(642);
      exp_aritmetica();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(643);
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
  enterRule(_localctx, 108, LogotecGramarParser::RuleExp_aritmetica);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(672);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::PAR_OPEN: {
        enterOuterAlt(_localctx, 1);
        setState(646);
        match(LogotecGramarParser::PAR_OPEN);
        setState(647);
        exp_matematica();
        setState(653);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(648);
            operador();
            setState(649);
            exp_matematica(); 
          }
          setState(655);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx);
        }
        setState(656);
        operador();
        setState(657);
        exp_matematica();
        setState(658);
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
        setState(660);
        exp_matematica();
        setState(666);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(661);
            operador();
            setState(662);
            exp_matematica(); 
          }
          setState(668);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
        }
        setState(669);
        operador();
        setState(670);
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

LogotecGramarParser::Variable_nombreContext* LogotecGramarParser::Exp_matematicaContext::variable_nombre() {
  return getRuleContext<LogotecGramarParser::Variable_nombreContext>(0);
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
  enterRule(_localctx, 110, LogotecGramarParser::RuleExp_matematica);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(682);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::DIFERENCIA: {
        enterOuterAlt(_localctx, 1);
        setState(674);
        diferencia_expr();
        break;
      }

      case LogotecGramarParser::AZAR: {
        enterOuterAlt(_localctx, 2);
        setState(675);
        azar_expr();
        break;
      }

      case LogotecGramarParser::PRODUCTO: {
        enterOuterAlt(_localctx, 3);
        setState(676);
        producto_expr();
        break;
      }

      case LogotecGramarParser::POTENCIA: {
        enterOuterAlt(_localctx, 4);
        setState(677);
        potencia_expr();
        break;
      }

      case LogotecGramarParser::DIVISION: {
        enterOuterAlt(_localctx, 5);
        setState(678);
        division_expr();
        break;
      }

      case LogotecGramarParser::SUMA: {
        enterOuterAlt(_localctx, 6);
        setState(679);
        suma_expr();
        break;
      }

      case LogotecGramarParser::ID: {
        enterOuterAlt(_localctx, 7);
        setState(680);
        variable_nombre();
        break;
      }

      case LogotecGramarParser::NUMBER: {
        enterOuterAlt(_localctx, 8);
        setState(681);
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
  enterRule(_localctx, 112, LogotecGramarParser::RuleExpr_mat_aritm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(686);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(684);
      exp_aritmetica();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(685);
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
  enterRule(_localctx, 114, LogotecGramarParser::RuleLogico);
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
    setState(688);
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
  enterRule(_localctx, 116, LogotecGramarParser::RuleValor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(693);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(690);
        match(LogotecGramarParser::NUMBER);
        break;
      }

      case LogotecGramarParser::TRUE:
      case LogotecGramarParser::FALSE: {
        enterOuterAlt(_localctx, 2);
        setState(691);
        logico();
        break;
      }

      case LogotecGramarParser::CADENA_TEXTO: {
        enterOuterAlt(_localctx, 3);
        setState(692);
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

tree::TerminalNode* LogotecGramarParser::Operador_logicoContext::ASSIGN() {
  return getToken(LogotecGramarParser::ASSIGN, 0);
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
  enterRule(_localctx, 118, LogotecGramarParser::RuleOperador_logico);
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
    setState(695);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1120402348703744) != 0))) {
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
  enterRule(_localctx, 120, LogotecGramarParser::RuleOperador);
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
    setState(697);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 64424509440) != 0))) {
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
  enterRule(_localctx, 122, LogotecGramarParser::RuleDiferencia_expr);

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
    setState(699);
    match(LogotecGramarParser::DIFERENCIA);

    setState(700);
    expr_mat_aritm();
    setState(702); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(701);
              expr_mat_aritm();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(704); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx);
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
  enterRule(_localctx, 124, LogotecGramarParser::RuleAzar_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(706);
    match(LogotecGramarParser::AZAR);

    setState(707);
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
  enterRule(_localctx, 126, LogotecGramarParser::RuleProducto_expr);

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
    setState(709);
    match(LogotecGramarParser::PRODUCTO);

    setState(710);
    expr_mat_aritm();
    setState(712); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(711);
              expr_mat_aritm();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(714); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx);
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
  enterRule(_localctx, 128, LogotecGramarParser::RulePotencia_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(716);
    match(LogotecGramarParser::POTENCIA);

    setState(717);
    expr_mat_aritm();

    setState(718);
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
  enterRule(_localctx, 130, LogotecGramarParser::RuleDivision_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(720);
    match(LogotecGramarParser::DIVISION);

    setState(721);
    expr_mat_aritm();

    setState(722);
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
  enterRule(_localctx, 132, LogotecGramarParser::RuleSuma_expr);

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
    setState(724);
    match(LogotecGramarParser::SUMA);

    setState(725);
    expr_mat_aritm();
    setState(727); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(726);
              expr_mat_aritm();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(729); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx);
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
    case 37: return exp_logicas_exprSempred(antlrcpp::downCast<Exp_logicas_exprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LogotecGramarParser::exp_logicas_exprSempred(Exp_logicas_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

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
