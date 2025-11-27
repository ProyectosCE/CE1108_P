
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
      "lista_parametros", "instruccion", "salida", "muestra", "rumbo_get", 
      "comentario_linea", "comentario", "procedimiento_llamado", "parametros_llamado", 
      "lista_parametros_llamado", "haz_variable", "inic_variable", "inc_variable", 
      "avanza_variable", "retrocede_variable", "gira_derecha_variable", 
      "gira_izquierda_variable", "ocultar_tortuga_variable", "ponpos_variable", 
      "ponxy_variable", "ponrumbo_variable", "ponx_variable", "pony_variable", 
      "bajalapiz_variable", "subelapiz_variable", "poncolorlapiz_variable", 
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
      "FIN", "SALIDA", "EJECUTA", "ID", "NEWLINE", "WS", "LINE_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,80,728,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,7,
  	63,2,64,7,64,2,65,7,65,1,0,1,0,1,0,1,0,5,0,137,8,0,10,0,12,0,140,9,0,
  	1,0,1,0,1,1,1,1,1,1,3,1,147,8,1,1,1,5,1,150,8,1,10,1,12,1,153,9,1,1,1,
  	3,1,156,8,1,1,1,1,1,1,1,1,2,1,2,3,2,163,8,2,1,2,1,2,1,3,1,3,1,3,1,3,1,
  	3,4,3,172,8,3,11,3,12,3,173,1,4,1,4,1,4,5,4,179,8,4,10,4,12,4,182,9,4,
  	1,5,1,5,3,5,186,8,5,1,5,1,5,3,5,190,8,5,1,5,1,5,3,5,194,8,5,1,5,1,5,3,
  	5,198,8,5,1,5,1,5,3,5,202,8,5,1,5,1,5,3,5,206,8,5,1,5,1,5,3,5,210,8,5,
  	1,5,1,5,3,5,214,8,5,1,5,1,5,3,5,218,8,5,1,5,1,5,3,5,222,8,5,1,5,1,5,3,
  	5,226,8,5,1,5,1,5,3,5,230,8,5,1,5,1,5,3,5,234,8,5,1,5,1,5,3,5,238,8,5,
  	1,5,1,5,3,5,242,8,5,1,5,1,5,3,5,246,8,5,1,5,1,5,3,5,250,8,5,1,5,1,5,3,
  	5,254,8,5,1,5,1,5,3,5,258,8,5,1,5,1,5,3,5,262,8,5,1,5,1,5,3,5,266,8,5,
  	1,5,1,5,3,5,270,8,5,1,5,1,5,3,5,274,8,5,1,5,1,5,3,5,278,8,5,1,5,1,5,3,
  	5,282,8,5,1,5,1,5,3,5,286,8,5,1,5,1,5,3,5,290,8,5,1,5,1,5,3,5,294,8,5,
  	1,5,1,5,3,5,298,8,5,1,5,1,5,3,5,302,8,5,1,5,1,5,3,5,306,8,5,1,5,1,5,3,
  	5,310,8,5,1,5,1,5,3,5,314,8,5,1,5,1,5,3,5,318,8,5,1,5,1,5,3,5,322,8,5,
  	3,5,324,8,5,1,5,3,5,327,8,5,1,6,1,6,1,6,1,7,1,7,1,7,3,7,335,8,7,1,8,1,
  	8,1,9,1,9,1,10,1,10,1,11,1,11,3,11,345,8,11,1,12,1,12,3,12,349,8,12,1,
  	12,1,12,1,13,1,13,1,13,5,13,356,8,13,10,13,12,13,359,9,13,1,14,1,14,1,
  	14,1,14,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,3,16,374,8,16,1,
  	16,1,16,1,17,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,20,1,
  	21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,24,1,24,1,
  	24,1,25,1,25,1,25,1,26,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,29,1,
  	30,1,30,1,31,1,31,1,31,1,32,1,32,1,32,5,32,426,8,32,10,32,12,32,429,9,
  	32,1,32,1,32,1,33,1,33,1,33,1,33,5,33,437,8,33,10,33,12,33,440,9,33,1,
  	33,1,33,1,34,1,34,3,34,446,8,34,1,35,1,35,1,35,1,35,1,35,1,35,1,35,1,
  	35,1,35,1,35,3,35,458,8,35,1,36,1,36,1,36,1,36,1,36,1,36,1,36,1,36,3,
  	36,468,8,36,1,36,1,36,1,36,1,36,1,36,1,36,1,36,1,36,5,36,478,8,36,10,
  	36,12,36,481,9,36,1,36,1,36,1,36,5,36,486,8,36,10,36,12,36,489,9,36,1,
  	37,1,37,1,38,1,38,1,38,1,38,1,38,3,38,498,8,38,1,38,1,38,5,38,502,8,38,
  	10,38,12,38,505,9,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,3,38,514,8,38,
  	1,38,1,38,5,38,518,8,38,10,38,12,38,521,9,38,1,38,1,38,3,38,525,8,38,
  	1,39,1,39,3,39,529,8,39,1,39,1,39,5,39,533,8,39,10,39,12,39,536,9,39,
  	1,39,1,39,1,40,1,40,1,40,5,40,543,8,40,10,40,12,40,546,9,40,1,40,1,40,
  	3,40,550,8,40,1,40,1,40,1,40,1,40,1,41,1,41,1,41,1,41,1,41,3,41,561,8,
  	41,1,41,1,41,5,41,565,8,41,10,41,12,41,568,9,41,1,41,1,41,1,42,1,42,1,
  	42,5,42,575,8,42,10,42,12,42,578,9,42,1,42,1,42,3,42,582,8,42,1,42,1,
  	42,1,42,1,42,1,43,1,43,1,43,1,43,1,43,3,43,593,8,43,1,43,1,43,5,43,597,
  	8,43,10,43,12,43,600,9,43,1,43,1,43,1,44,1,44,1,44,1,44,1,45,1,45,1,45,
  	1,45,1,46,1,46,1,46,1,46,1,47,1,47,1,47,1,47,1,48,1,48,1,48,1,48,1,49,
  	1,49,3,49,626,8,49,1,50,1,50,1,51,1,51,1,51,1,51,1,51,1,51,3,51,636,8,
  	51,1,52,1,52,1,52,3,52,641,8,52,1,53,1,53,1,53,1,53,1,53,5,53,648,8,53,
  	10,53,12,53,651,9,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,5,53,661,
  	8,53,10,53,12,53,664,9,53,1,53,1,53,1,53,3,53,669,8,53,1,54,1,54,1,54,
  	1,54,1,54,1,54,1,54,1,54,3,54,679,8,54,1,55,1,55,3,55,683,8,55,1,56,1,
  	56,1,57,1,57,1,57,3,57,690,8,57,1,58,1,58,1,59,1,59,1,60,1,60,1,60,4,
  	60,699,8,60,11,60,12,60,700,1,61,1,61,1,61,1,62,1,62,1,62,4,62,709,8,
  	62,11,62,12,62,710,1,63,1,63,1,63,1,63,1,64,1,64,1,64,1,64,1,65,1,65,
  	1,65,4,65,724,8,65,11,65,12,65,725,1,65,0,1,72,66,0,2,4,6,8,10,12,14,
  	16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,
  	62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,98,100,102,104,
  	106,108,110,112,114,116,118,120,122,124,126,128,130,0,7,1,0,24,25,1,0,
  	40,41,1,0,57,58,1,0,21,23,1,0,28,29,2,0,40,41,43,49,1,0,32,35,803,0,132,
  	1,0,0,0,2,143,1,0,0,0,4,160,1,0,0,0,6,171,1,0,0,0,8,175,1,0,0,0,10,326,
  	1,0,0,0,12,328,1,0,0,0,14,331,1,0,0,0,16,336,1,0,0,0,18,338,1,0,0,0,20,
  	340,1,0,0,0,22,342,1,0,0,0,24,346,1,0,0,0,26,352,1,0,0,0,28,360,1,0,0,
  	0,30,364,1,0,0,0,32,369,1,0,0,0,34,377,1,0,0,0,36,380,1,0,0,0,38,383,
  	1,0,0,0,40,386,1,0,0,0,42,389,1,0,0,0,44,391,1,0,0,0,46,397,1,0,0,0,48,
  	401,1,0,0,0,50,404,1,0,0,0,52,407,1,0,0,0,54,410,1,0,0,0,56,412,1,0,0,
  	0,58,414,1,0,0,0,60,417,1,0,0,0,62,419,1,0,0,0,64,422,1,0,0,0,66,432,
  	1,0,0,0,68,445,1,0,0,0,70,457,1,0,0,0,72,467,1,0,0,0,74,490,1,0,0,0,76,
  	524,1,0,0,0,78,526,1,0,0,0,80,539,1,0,0,0,82,555,1,0,0,0,84,571,1,0,0,
  	0,86,587,1,0,0,0,88,603,1,0,0,0,90,607,1,0,0,0,92,611,1,0,0,0,94,615,
  	1,0,0,0,96,619,1,0,0,0,98,625,1,0,0,0,100,627,1,0,0,0,102,635,1,0,0,0,
  	104,640,1,0,0,0,106,668,1,0,0,0,108,678,1,0,0,0,110,682,1,0,0,0,112,684,
  	1,0,0,0,114,689,1,0,0,0,116,691,1,0,0,0,118,693,1,0,0,0,120,695,1,0,0,
  	0,122,702,1,0,0,0,124,705,1,0,0,0,126,712,1,0,0,0,128,716,1,0,0,0,130,
  	720,1,0,0,0,132,138,3,20,10,0,133,137,5,78,0,0,134,137,3,6,3,0,135,137,
  	3,2,1,0,136,133,1,0,0,0,136,134,1,0,0,0,136,135,1,0,0,0,137,140,1,0,0,
  	0,138,136,1,0,0,0,138,139,1,0,0,0,139,141,1,0,0,0,140,138,1,0,0,0,141,
  	142,5,0,0,1,142,1,1,0,0,0,143,144,5,73,0,0,144,146,5,77,0,0,145,147,3,
  	4,2,0,146,145,1,0,0,0,146,147,1,0,0,0,147,151,1,0,0,0,148,150,3,6,3,0,
  	149,148,1,0,0,0,150,153,1,0,0,0,151,149,1,0,0,0,151,152,1,0,0,0,152,155,
  	1,0,0,0,153,151,1,0,0,0,154,156,3,6,3,0,155,154,1,0,0,0,155,156,1,0,0,
  	0,156,157,1,0,0,0,157,158,5,74,0,0,158,159,5,54,0,0,159,3,1,0,0,0,160,
  	162,5,1,0,0,161,163,3,8,4,0,162,161,1,0,0,0,162,163,1,0,0,0,163,164,1,
  	0,0,0,164,165,5,2,0,0,165,5,1,0,0,0,166,167,3,10,5,0,167,168,5,54,0,0,
  	168,172,1,0,0,0,169,172,3,18,9,0,170,172,5,78,0,0,171,166,1,0,0,0,171,
  	169,1,0,0,0,171,170,1,0,0,0,172,173,1,0,0,0,173,171,1,0,0,0,173,174,1,
  	0,0,0,174,7,1,0,0,0,175,180,5,77,0,0,176,177,5,3,0,0,177,179,5,77,0,0,
  	178,176,1,0,0,0,179,182,1,0,0,0,180,178,1,0,0,0,180,181,1,0,0,0,181,9,
  	1,0,0,0,182,180,1,0,0,0,183,185,3,28,14,0,184,186,3,18,9,0,185,184,1,
  	0,0,0,185,186,1,0,0,0,186,324,1,0,0,0,187,189,3,30,15,0,188,190,3,18,
  	9,0,189,188,1,0,0,0,189,190,1,0,0,0,190,324,1,0,0,0,191,193,3,32,16,0,
  	192,194,3,18,9,0,193,192,1,0,0,0,193,194,1,0,0,0,194,324,1,0,0,0,195,
  	197,3,34,17,0,196,198,3,18,9,0,197,196,1,0,0,0,197,198,1,0,0,0,198,324,
  	1,0,0,0,199,201,3,36,18,0,200,202,3,18,9,0,201,200,1,0,0,0,201,202,1,
  	0,0,0,202,324,1,0,0,0,203,205,3,38,19,0,204,206,3,18,9,0,205,204,1,0,
  	0,0,205,206,1,0,0,0,206,324,1,0,0,0,207,209,3,40,20,0,208,210,3,18,9,
  	0,209,208,1,0,0,0,209,210,1,0,0,0,210,324,1,0,0,0,211,213,3,42,21,0,212,
  	214,3,18,9,0,213,212,1,0,0,0,213,214,1,0,0,0,214,324,1,0,0,0,215,217,
  	3,44,22,0,216,218,3,18,9,0,217,216,1,0,0,0,217,218,1,0,0,0,218,324,1,
  	0,0,0,219,221,3,46,23,0,220,222,3,18,9,0,221,220,1,0,0,0,221,222,1,0,
  	0,0,222,324,1,0,0,0,223,225,3,48,24,0,224,226,3,18,9,0,225,224,1,0,0,
  	0,225,226,1,0,0,0,226,324,1,0,0,0,227,229,3,50,25,0,228,230,3,18,9,0,
  	229,228,1,0,0,0,229,230,1,0,0,0,230,324,1,0,0,0,231,233,3,52,26,0,232,
  	234,3,18,9,0,233,232,1,0,0,0,233,234,1,0,0,0,234,324,1,0,0,0,235,237,
  	3,54,27,0,236,238,3,18,9,0,237,236,1,0,0,0,237,238,1,0,0,0,238,324,1,
  	0,0,0,239,241,3,56,28,0,240,242,3,18,9,0,241,240,1,0,0,0,241,242,1,0,
  	0,0,242,324,1,0,0,0,243,245,3,58,29,0,244,246,3,18,9,0,245,244,1,0,0,
  	0,245,246,1,0,0,0,246,324,1,0,0,0,247,249,3,60,30,0,248,250,3,18,9,0,
  	249,248,1,0,0,0,249,250,1,0,0,0,250,324,1,0,0,0,251,253,3,62,31,0,252,
  	254,3,18,9,0,253,252,1,0,0,0,253,254,1,0,0,0,254,324,1,0,0,0,255,257,
  	3,64,32,0,256,258,3,18,9,0,257,256,1,0,0,0,257,258,1,0,0,0,258,324,1,
  	0,0,0,259,261,3,66,33,0,260,262,3,18,9,0,261,260,1,0,0,0,261,262,1,0,
  	0,0,262,324,1,0,0,0,263,265,3,78,39,0,264,266,3,18,9,0,265,264,1,0,0,
  	0,265,266,1,0,0,0,266,324,1,0,0,0,267,269,3,76,38,0,268,270,3,18,9,0,
  	269,268,1,0,0,0,269,270,1,0,0,0,270,324,1,0,0,0,271,273,3,80,40,0,272,
  	274,3,18,9,0,273,272,1,0,0,0,273,274,1,0,0,0,274,324,1,0,0,0,275,277,
  	3,82,41,0,276,278,3,18,9,0,277,276,1,0,0,0,277,278,1,0,0,0,278,324,1,
  	0,0,0,279,281,3,84,42,0,280,282,3,18,9,0,281,280,1,0,0,0,281,282,1,0,
  	0,0,282,324,1,0,0,0,283,285,3,86,43,0,284,286,3,18,9,0,285,284,1,0,0,
  	0,285,286,1,0,0,0,286,324,1,0,0,0,287,289,3,88,44,0,288,290,3,18,9,0,
  	289,288,1,0,0,0,289,290,1,0,0,0,290,324,1,0,0,0,291,293,3,90,45,0,292,
  	294,3,18,9,0,293,292,1,0,0,0,293,294,1,0,0,0,294,324,1,0,0,0,295,297,
  	3,92,46,0,296,298,3,18,9,0,297,296,1,0,0,0,297,298,1,0,0,0,298,324,1,
  	0,0,0,299,301,3,94,47,0,300,302,3,18,9,0,301,300,1,0,0,0,301,302,1,0,
  	0,0,302,324,1,0,0,0,303,305,3,96,48,0,304,306,3,18,9,0,305,304,1,0,0,
  	0,305,306,1,0,0,0,306,324,1,0,0,0,307,309,3,22,11,0,308,310,3,18,9,0,
  	309,308,1,0,0,0,309,310,1,0,0,0,310,324,1,0,0,0,311,313,3,16,8,0,312,
  	314,3,18,9,0,313,312,1,0,0,0,313,314,1,0,0,0,314,324,1,0,0,0,315,317,
  	3,14,7,0,316,318,3,18,9,0,317,316,1,0,0,0,317,318,1,0,0,0,318,324,1,0,
  	0,0,319,321,3,12,6,0,320,322,3,18,9,0,321,320,1,0,0,0,321,322,1,0,0,0,
  	322,324,1,0,0,0,323,183,1,0,0,0,323,187,1,0,0,0,323,191,1,0,0,0,323,195,
  	1,0,0,0,323,199,1,0,0,0,323,203,1,0,0,0,323,207,1,0,0,0,323,211,1,0,0,
  	0,323,215,1,0,0,0,323,219,1,0,0,0,323,223,1,0,0,0,323,227,1,0,0,0,323,
  	231,1,0,0,0,323,235,1,0,0,0,323,239,1,0,0,0,323,243,1,0,0,0,323,247,1,
  	0,0,0,323,251,1,0,0,0,323,255,1,0,0,0,323,259,1,0,0,0,323,263,1,0,0,0,
  	323,267,1,0,0,0,323,271,1,0,0,0,323,275,1,0,0,0,323,279,1,0,0,0,323,283,
  	1,0,0,0,323,287,1,0,0,0,323,291,1,0,0,0,323,295,1,0,0,0,323,299,1,0,0,
  	0,323,303,1,0,0,0,323,307,1,0,0,0,323,311,1,0,0,0,323,315,1,0,0,0,323,
  	319,1,0,0,0,324,327,1,0,0,0,325,327,5,78,0,0,326,323,1,0,0,0,326,325,
  	1,0,0,0,327,11,1,0,0,0,328,329,5,75,0,0,329,330,3,102,51,0,330,13,1,0,
  	0,0,331,334,5,16,0,0,332,335,3,102,51,0,333,335,3,16,8,0,334,332,1,0,
  	0,0,334,333,1,0,0,0,335,15,1,0,0,0,336,337,5,15,0,0,337,17,1,0,0,0,338,
  	339,5,80,0,0,339,19,1,0,0,0,340,341,5,80,0,0,341,21,1,0,0,0,342,344,5,
  	77,0,0,343,345,3,24,12,0,344,343,1,0,0,0,344,345,1,0,0,0,345,23,1,0,0,
  	0,346,348,5,1,0,0,347,349,3,26,13,0,348,347,1,0,0,0,348,349,1,0,0,0,349,
  	350,1,0,0,0,350,351,5,2,0,0,351,25,1,0,0,0,352,357,3,102,51,0,353,354,
  	5,3,0,0,354,356,3,102,51,0,355,353,1,0,0,0,356,359,1,0,0,0,357,355,1,
  	0,0,0,357,358,1,0,0,0,358,27,1,0,0,0,359,357,1,0,0,0,360,361,5,4,0,0,
  	361,362,5,77,0,0,362,363,3,102,51,0,363,29,1,0,0,0,364,365,5,5,0,0,365,
  	366,5,77,0,0,366,367,5,49,0,0,367,368,3,102,51,0,368,31,1,0,0,0,369,370,
  	5,6,0,0,370,371,5,1,0,0,371,373,5,77,0,0,372,374,3,110,55,0,373,372,1,
  	0,0,0,373,374,1,0,0,0,374,375,1,0,0,0,375,376,5,2,0,0,376,33,1,0,0,0,
  	377,378,5,7,0,0,378,379,3,110,55,0,379,35,1,0,0,0,380,381,5,8,0,0,381,
  	382,3,110,55,0,382,37,1,0,0,0,383,384,5,9,0,0,384,385,3,110,55,0,385,
  	39,1,0,0,0,386,387,5,10,0,0,387,388,3,110,55,0,388,41,1,0,0,0,389,390,
  	5,11,0,0,390,43,1,0,0,0,391,392,5,12,0,0,392,393,5,1,0,0,393,394,3,110,
  	55,0,394,395,3,110,55,0,395,396,5,2,0,0,396,45,1,0,0,0,397,398,5,13,0,
  	0,398,399,3,110,55,0,399,400,3,110,55,0,400,47,1,0,0,0,401,402,5,14,0,
  	0,402,403,3,110,55,0,403,49,1,0,0,0,404,405,5,17,0,0,405,406,3,110,55,
  	0,406,51,1,0,0,0,407,408,5,18,0,0,408,409,3,110,55,0,409,53,1,0,0,0,410,
  	411,5,19,0,0,411,55,1,0,0,0,412,413,5,20,0,0,413,57,1,0,0,0,414,415,7,
  	0,0,0,415,416,3,98,49,0,416,59,1,0,0,0,417,418,5,26,0,0,418,61,1,0,0,
  	0,419,420,5,27,0,0,420,421,3,104,52,0,421,63,1,0,0,0,422,423,5,76,0,0,
  	423,427,5,1,0,0,424,426,3,10,5,0,425,424,1,0,0,0,426,429,1,0,0,0,427,
  	425,1,0,0,0,427,428,1,0,0,0,428,430,1,0,0,0,429,427,1,0,0,0,430,431,5,
  	2,0,0,431,65,1,0,0,0,432,433,5,55,0,0,433,434,3,110,55,0,434,438,5,1,
  	0,0,435,437,3,10,5,0,436,435,1,0,0,0,437,440,1,0,0,0,438,436,1,0,0,0,
  	438,439,1,0,0,0,439,441,1,0,0,0,440,438,1,0,0,0,441,442,5,2,0,0,442,67,
  	1,0,0,0,443,446,3,70,35,0,444,446,3,72,36,0,445,443,1,0,0,0,445,444,1,
  	0,0,0,446,69,1,0,0,0,447,458,3,88,44,0,448,458,3,90,45,0,449,458,3,92,
  	46,0,450,458,3,94,47,0,451,458,3,112,56,0,452,458,5,77,0,0,453,458,5,
  	30,0,0,454,458,3,104,52,0,455,458,5,31,0,0,456,458,3,96,48,0,457,447,
  	1,0,0,0,457,448,1,0,0,0,457,449,1,0,0,0,457,450,1,0,0,0,457,451,1,0,0,
  	0,457,452,1,0,0,0,457,453,1,0,0,0,457,454,1,0,0,0,457,455,1,0,0,0,457,
  	456,1,0,0,0,458,71,1,0,0,0,459,460,6,36,-1,0,460,461,5,42,0,0,461,468,
  	3,72,36,5,462,463,5,52,0,0,463,464,3,72,36,0,464,465,5,53,0,0,465,468,
  	1,0,0,0,466,468,3,70,35,0,467,459,1,0,0,0,467,462,1,0,0,0,467,466,1,0,
  	0,0,468,487,1,0,0,0,469,470,10,3,0,0,470,471,3,116,58,0,471,472,3,72,
  	36,4,472,486,1,0,0,0,473,479,10,2,0,0,474,475,3,74,37,0,475,476,3,72,
  	36,0,476,478,1,0,0,0,477,474,1,0,0,0,478,481,1,0,0,0,479,477,1,0,0,0,
  	479,480,1,0,0,0,480,482,1,0,0,0,481,479,1,0,0,0,482,483,3,74,37,0,483,
  	484,3,72,36,0,484,486,1,0,0,0,485,469,1,0,0,0,485,473,1,0,0,0,486,489,
  	1,0,0,0,487,485,1,0,0,0,487,488,1,0,0,0,488,73,1,0,0,0,489,487,1,0,0,
  	0,490,491,7,1,0,0,491,75,1,0,0,0,492,493,5,56,0,0,493,494,5,52,0,0,494,
  	495,3,68,34,0,495,497,5,53,0,0,496,498,5,78,0,0,497,496,1,0,0,0,497,498,
  	1,0,0,0,498,499,1,0,0,0,499,503,5,1,0,0,500,502,3,10,5,0,501,500,1,0,
  	0,0,502,505,1,0,0,0,503,501,1,0,0,0,503,504,1,0,0,0,504,506,1,0,0,0,505,
  	503,1,0,0,0,506,507,5,2,0,0,507,525,1,0,0,0,508,509,5,56,0,0,509,510,
  	5,1,0,0,510,511,3,68,34,0,511,513,5,2,0,0,512,514,5,78,0,0,513,512,1,
  	0,0,0,513,514,1,0,0,0,514,515,1,0,0,0,515,519,5,1,0,0,516,518,3,10,5,
  	0,517,516,1,0,0,0,518,521,1,0,0,0,519,517,1,0,0,0,519,520,1,0,0,0,520,
  	522,1,0,0,0,521,519,1,0,0,0,522,523,5,2,0,0,523,525,1,0,0,0,524,492,1,
  	0,0,0,524,508,1,0,0,0,525,77,1,0,0,0,526,528,3,76,38,0,527,529,5,78,0,
  	0,528,527,1,0,0,0,528,529,1,0,0,0,529,530,1,0,0,0,530,534,5,1,0,0,531,
  	533,3,10,5,0,532,531,1,0,0,0,533,536,1,0,0,0,534,532,1,0,0,0,534,535,
  	1,0,0,0,535,537,1,0,0,0,536,534,1,0,0,0,537,538,5,2,0,0,538,79,1,0,0,
  	0,539,540,5,57,0,0,540,544,5,1,0,0,541,543,3,10,5,0,542,541,1,0,0,0,543,
  	546,1,0,0,0,544,542,1,0,0,0,544,545,1,0,0,0,545,547,1,0,0,0,546,544,1,
  	0,0,0,547,549,5,2,0,0,548,550,5,78,0,0,549,548,1,0,0,0,549,550,1,0,0,
  	0,550,551,1,0,0,0,551,552,5,52,0,0,552,553,3,68,34,0,553,554,5,53,0,0,
  	554,81,1,0,0,0,555,556,7,2,0,0,556,557,5,52,0,0,557,558,3,68,34,0,558,
  	560,5,53,0,0,559,561,5,78,0,0,560,559,1,0,0,0,560,561,1,0,0,0,561,562,
  	1,0,0,0,562,566,5,1,0,0,563,565,3,10,5,0,564,563,1,0,0,0,565,568,1,0,
  	0,0,566,564,1,0,0,0,566,567,1,0,0,0,567,569,1,0,0,0,568,566,1,0,0,0,569,
  	570,5,2,0,0,570,83,1,0,0,0,571,572,5,59,0,0,572,576,5,1,0,0,573,575,3,
  	10,5,0,574,573,1,0,0,0,575,578,1,0,0,0,576,574,1,0,0,0,576,577,1,0,0,
  	0,577,579,1,0,0,0,578,576,1,0,0,0,579,581,5,2,0,0,580,582,5,78,0,0,581,
  	580,1,0,0,0,581,582,1,0,0,0,582,583,1,0,0,0,583,584,5,52,0,0,584,585,
  	3,68,34,0,585,586,5,53,0,0,586,85,1,0,0,0,587,588,5,60,0,0,588,589,5,
  	52,0,0,589,590,3,68,34,0,590,592,5,53,0,0,591,593,5,78,0,0,592,591,1,
  	0,0,0,592,593,1,0,0,0,593,594,1,0,0,0,594,598,5,1,0,0,595,597,3,10,5,
  	0,596,595,1,0,0,0,597,600,1,0,0,0,598,596,1,0,0,0,598,599,1,0,0,0,599,
  	601,1,0,0,0,600,598,1,0,0,0,601,602,5,2,0,0,602,87,1,0,0,0,603,604,5,
  	61,0,0,604,605,3,68,34,0,605,606,3,68,34,0,606,89,1,0,0,0,607,608,5,62,
  	0,0,608,609,3,68,34,0,609,610,3,68,34,0,610,91,1,0,0,0,611,612,5,63,0,
  	0,612,613,3,68,34,0,613,614,3,68,34,0,614,93,1,0,0,0,615,616,5,64,0,0,
  	616,617,3,110,55,0,617,618,3,110,55,0,618,95,1,0,0,0,619,620,5,65,0,0,
  	620,621,3,110,55,0,621,622,3,110,55,0,622,97,1,0,0,0,623,626,3,100,50,
  	0,624,626,5,77,0,0,625,623,1,0,0,0,625,624,1,0,0,0,626,99,1,0,0,0,627,
  	628,7,3,0,0,628,101,1,0,0,0,629,636,5,31,0,0,630,636,5,77,0,0,631,636,
  	5,30,0,0,632,636,3,104,52,0,633,636,3,68,34,0,634,636,3,100,50,0,635,
  	629,1,0,0,0,635,630,1,0,0,0,635,631,1,0,0,0,635,632,1,0,0,0,635,633,1,
  	0,0,0,635,634,1,0,0,0,636,103,1,0,0,0,637,641,3,108,54,0,638,641,3,106,
  	53,0,639,641,5,30,0,0,640,637,1,0,0,0,640,638,1,0,0,0,640,639,1,0,0,0,
  	641,105,1,0,0,0,642,643,5,52,0,0,643,649,3,108,54,0,644,645,3,118,59,
  	0,645,646,3,108,54,0,646,648,1,0,0,0,647,644,1,0,0,0,648,651,1,0,0,0,
  	649,647,1,0,0,0,649,650,1,0,0,0,650,652,1,0,0,0,651,649,1,0,0,0,652,653,
  	3,118,59,0,653,654,3,108,54,0,654,655,5,53,0,0,655,669,1,0,0,0,656,662,
  	3,108,54,0,657,658,3,118,59,0,658,659,3,108,54,0,659,661,1,0,0,0,660,
  	657,1,0,0,0,661,664,1,0,0,0,662,660,1,0,0,0,662,663,1,0,0,0,663,665,1,
  	0,0,0,664,662,1,0,0,0,665,666,3,118,59,0,666,667,3,108,54,0,667,669,1,
  	0,0,0,668,642,1,0,0,0,668,656,1,0,0,0,669,107,1,0,0,0,670,679,3,120,60,
  	0,671,679,3,122,61,0,672,679,3,124,62,0,673,679,3,126,63,0,674,679,3,
  	128,64,0,675,679,3,130,65,0,676,679,5,77,0,0,677,679,5,30,0,0,678,670,
  	1,0,0,0,678,671,1,0,0,0,678,672,1,0,0,0,678,673,1,0,0,0,678,674,1,0,0,
  	0,678,675,1,0,0,0,678,676,1,0,0,0,678,677,1,0,0,0,679,109,1,0,0,0,680,
  	683,3,106,53,0,681,683,3,108,54,0,682,680,1,0,0,0,682,681,1,0,0,0,683,
  	111,1,0,0,0,684,685,7,4,0,0,685,113,1,0,0,0,686,690,5,30,0,0,687,690,
  	3,112,56,0,688,690,5,31,0,0,689,686,1,0,0,0,689,687,1,0,0,0,689,688,1,
  	0,0,0,690,115,1,0,0,0,691,692,7,5,0,0,692,117,1,0,0,0,693,694,7,6,0,0,
  	694,119,1,0,0,0,695,696,5,66,0,0,696,698,3,110,55,0,697,699,3,110,55,
  	0,698,697,1,0,0,0,699,700,1,0,0,0,700,698,1,0,0,0,700,701,1,0,0,0,701,
  	121,1,0,0,0,702,703,5,67,0,0,703,704,3,110,55,0,704,123,1,0,0,0,705,706,
  	5,68,0,0,706,708,3,110,55,0,707,709,3,110,55,0,708,707,1,0,0,0,709,710,
  	1,0,0,0,710,708,1,0,0,0,710,711,1,0,0,0,711,125,1,0,0,0,712,713,5,69,
  	0,0,713,714,3,110,55,0,714,715,3,110,55,0,715,127,1,0,0,0,716,717,5,70,
  	0,0,717,718,3,110,55,0,718,719,3,110,55,0,719,129,1,0,0,0,720,721,5,71,
  	0,0,721,723,3,110,55,0,722,724,3,110,55,0,723,722,1,0,0,0,724,725,1,0,
  	0,0,725,723,1,0,0,0,725,726,1,0,0,0,726,131,1,0,0,0,86,136,138,146,151,
  	155,162,171,173,180,185,189,193,197,201,205,209,213,217,221,225,229,233,
  	237,241,245,249,253,257,261,265,269,273,277,281,285,289,293,297,301,305,
  	309,313,317,321,323,326,334,344,348,357,373,427,438,445,457,467,479,485,
  	487,497,503,513,519,524,528,534,544,549,560,566,576,581,592,598,625,635,
  	640,649,662,668,678,682,689,700,710,725
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
    setState(132);
    comentario();
    setState(138);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 96771) != 0)) {
      setState(136);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(133);
        match(LogotecGramarParser::NEWLINE);
        break;
      }

      case 2: {
        setState(134);
        linea_instrucciones();
        break;
      }

      case 3: {
        setState(135);
        procedimiento();
        break;
      }

      default:
        break;
      }
      setState(140);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(141);
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
    setState(143);
    match(LogotecGramarParser::PARA);
    setState(144);
    match(LogotecGramarParser::ID);
    setState(146);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::T__0) {
      setState(145);
      parametros();
    }
    setState(151);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(148);
        linea_instrucciones(); 
      }
      setState(153);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
    setState(155);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 96259) != 0)) {
      setState(154);
      linea_instrucciones();
    }
    setState(157);
    match(LogotecGramarParser::FIN);
    setState(158);
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
    setState(160);
    match(LogotecGramarParser::T__0);
    setState(162);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::ID) {
      setState(161);
      lista_parametros();
    }
    setState(164);
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
    setState(171); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(171);
              _errHandler->sync(this);
              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
              case 1: {
                setState(166);
                instruccion();
                setState(167);
                match(LogotecGramarParser::SEMICOLON);
                break;
              }

              case 2: {
                setState(169);
                comentario_linea();
                break;
              }

              case 3: {
                setState(170);
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
      setState(173); 
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
    setState(175);
    match(LogotecGramarParser::ID);
    setState(180);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogotecGramarParser::T__2) {
      setState(176);
      match(LogotecGramarParser::T__2);
      setState(177);
      match(LogotecGramarParser::ID);
      setState(182);
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
  enterRule(_localctx, 10, LogotecGramarParser::RuleInstruccion);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(326);
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
        setState(323);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
        case 1: {
          setState(183);
          haz_variable();
          setState(185);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(184);
            comentario_linea();
          }
          break;
        }

        case 2: {
          setState(187);
          inic_variable();
          setState(189);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(188);
            comentario_linea();
          }
          break;
        }

        case 3: {
          setState(191);
          inc_variable();
          setState(193);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(192);
            comentario_linea();
          }
          break;
        }

        case 4: {
          setState(195);
          avanza_variable();
          setState(197);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(196);
            comentario_linea();
          }
          break;
        }

        case 5: {
          setState(199);
          retrocede_variable();
          setState(201);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(200);
            comentario_linea();
          }
          break;
        }

        case 6: {
          setState(203);
          gira_derecha_variable();
          setState(205);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(204);
            comentario_linea();
          }
          break;
        }

        case 7: {
          setState(207);
          gira_izquierda_variable();
          setState(209);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(208);
            comentario_linea();
          }
          break;
        }

        case 8: {
          setState(211);
          ocultar_tortuga_variable();
          setState(213);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(212);
            comentario_linea();
          }
          break;
        }

        case 9: {
          setState(215);
          ponpos_variable();
          setState(217);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(216);
            comentario_linea();
          }
          break;
        }

        case 10: {
          setState(219);
          ponxy_variable();
          setState(221);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(220);
            comentario_linea();
          }
          break;
        }

        case 11: {
          setState(223);
          ponrumbo_variable();
          setState(225);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(224);
            comentario_linea();
          }
          break;
        }

        case 12: {
          setState(227);
          ponx_variable();
          setState(229);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(228);
            comentario_linea();
          }
          break;
        }

        case 13: {
          setState(231);
          pony_variable();
          setState(233);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(232);
            comentario_linea();
          }
          break;
        }

        case 14: {
          setState(235);
          bajalapiz_variable();
          setState(237);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(236);
            comentario_linea();
          }
          break;
        }

        case 15: {
          setState(239);
          subelapiz_variable();
          setState(241);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(240);
            comentario_linea();
          }
          break;
        }

        case 16: {
          setState(243);
          poncolorlapiz_variable();
          setState(245);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(244);
            comentario_linea();
          }
          break;
        }

        case 17: {
          setState(247);
          centro_variable();
          setState(249);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(248);
            comentario_linea();
          }
          break;
        }

        case 18: {
          setState(251);
          esperar_variable();
          setState(253);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(252);
            comentario_linea();
          }
          break;
        }

        case 19: {
          setState(255);
          ejecuta_variable();
          setState(257);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(256);
            comentario_linea();
          }
          break;
        }

        case 20: {
          setState(259);
          repite_variable();
          setState(261);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(260);
            comentario_linea();
          }
          break;
        }

        case 21: {
          setState(263);
          si_sino_variable();
          setState(265);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(264);
            comentario_linea();
          }
          break;
        }

        case 22: {
          setState(267);
          si_variable();
          setState(269);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(268);
            comentario_linea();
          }
          break;
        }

        case 23: {
          setState(271);
          haz_hasta_variable();
          setState(273);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(272);
            comentario_linea();
          }
          break;
        }

        case 24: {
          setState(275);
          hasta_variable();
          setState(277);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(276);
            comentario_linea();
          }
          break;
        }

        case 25: {
          setState(279);
          haz_mientras_variable();
          setState(281);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(280);
            comentario_linea();
          }
          break;
        }

        case 26: {
          setState(283);
          mientras_variable();
          setState(285);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(284);
            comentario_linea();
          }
          break;
        }

        case 27: {
          setState(287);
          iguales_variable();
          setState(289);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(288);
            comentario_linea();
          }
          break;
        }

        case 28: {
          setState(291);
          y_variable();
          setState(293);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(292);
            comentario_linea();
          }
          break;
        }

        case 29: {
          setState(295);
          o_variable();
          setState(297);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(296);
            comentario_linea();
          }
          break;
        }

        case 30: {
          setState(299);
          mayorque_variable();
          setState(301);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(300);
            comentario_linea();
          }
          break;
        }

        case 31: {
          setState(303);
          menorque_variable();
          setState(305);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(304);
            comentario_linea();
          }
          break;
        }

        case 32: {
          setState(307);
          procedimiento_llamado();
          setState(309);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(308);
            comentario_linea();
          }
          break;
        }

        case 33: {
          setState(311);
          rumbo_get();
          setState(313);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(312);
            comentario_linea();
          }
          break;
        }

        case 34: {
          setState(315);
          muestra();
          setState(317);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(316);
            comentario_linea();
          }
          break;
        }

        case 35: {
          setState(319);
          salida();
          setState(321);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == LogotecGramarParser::LINE_COMMENT) {
            setState(320);
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
        setState(325);
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
  enterRule(_localctx, 12, LogotecGramarParser::RuleSalida);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(328);
    match(LogotecGramarParser::SALIDA);
    setState(329);
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
  enterRule(_localctx, 14, LogotecGramarParser::RuleMuestra);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(331);
    match(LogotecGramarParser::MUESTRA);
    setState(334);
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
        setState(332);
        expr();
        break;
      }

      case LogotecGramarParser::RUMBO: {
        setState(333);
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
  enterRule(_localctx, 16, LogotecGramarParser::RuleRumbo_get);

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
  enterRule(_localctx, 18, LogotecGramarParser::RuleComentario_linea);

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
  enterRule(_localctx, 20, LogotecGramarParser::RuleComentario);

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
  enterRule(_localctx, 22, LogotecGramarParser::RuleProcedimiento_llamado);
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
    setState(342);
    match(LogotecGramarParser::ID);
    setState(344);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::T__0) {
      setState(343);
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
  enterRule(_localctx, 24, LogotecGramarParser::RuleParametros_llamado);
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
    match(LogotecGramarParser::T__0);
    setState(348);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 21) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 21)) & 74308296489568135) != 0)) {
      setState(347);
      lista_parametros_llamado();
    }
    setState(350);
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
  enterRule(_localctx, 26, LogotecGramarParser::RuleLista_parametros_llamado);
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
    expr();
    setState(357);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogotecGramarParser::T__2) {
      setState(353);
      match(LogotecGramarParser::T__2);
      setState(354);
      expr();
      setState(359);
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
  enterRule(_localctx, 28, LogotecGramarParser::RuleHaz_variable);

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
    match(LogotecGramarParser::HAZ);
    setState(361);
    match(LogotecGramarParser::ID);
    setState(362);
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
  enterRule(_localctx, 30, LogotecGramarParser::RuleInic_variable);

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
    match(LogotecGramarParser::INIC);
    setState(365);
    match(LogotecGramarParser::ID);
    setState(366);
    match(LogotecGramarParser::ASSIGN);
    setState(367);
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
  enterRule(_localctx, 32, LogotecGramarParser::RuleInc_variable);
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
    match(LogotecGramarParser::INC);
    setState(370);
    match(LogotecGramarParser::T__0);
    setState(371);
    match(LogotecGramarParser::ID);
    setState(373);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 30) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 30)) & 145066819584001) != 0)) {
      setState(372);
      expr_mat_aritm();
    }
    setState(375);
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
  enterRule(_localctx, 34, LogotecGramarParser::RuleAvanza_variable);

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
    match(LogotecGramarParser::AVANZA);
    setState(378);
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
  enterRule(_localctx, 36, LogotecGramarParser::RuleRetrocede_variable);

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
    match(LogotecGramarParser::RETROCEDE);
    setState(381);
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
  enterRule(_localctx, 38, LogotecGramarParser::RuleGira_derecha_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(383);
    match(LogotecGramarParser::GIRA_DERECHA);
    setState(384);
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
  enterRule(_localctx, 40, LogotecGramarParser::RuleGira_izquierda_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(386);
    match(LogotecGramarParser::GIRA_IZQUIERDA);
    setState(387);
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
  enterRule(_localctx, 42, LogotecGramarParser::RuleOcultar_tortuga_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(389);
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
  enterRule(_localctx, 44, LogotecGramarParser::RulePonpos_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(391);
    match(LogotecGramarParser::PONPOS);
    setState(392);
    match(LogotecGramarParser::T__0);
    setState(393);
    expr_mat_aritm();
    setState(394);
    expr_mat_aritm();
    setState(395);
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
  enterRule(_localctx, 46, LogotecGramarParser::RulePonxy_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(397);
    match(LogotecGramarParser::PONXY);
    setState(398);
    expr_mat_aritm();
    setState(399);
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
  enterRule(_localctx, 48, LogotecGramarParser::RulePonrumbo_variable);

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
    match(LogotecGramarParser::PONRUMBO);
    setState(402);
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
  enterRule(_localctx, 50, LogotecGramarParser::RulePonx_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(404);
    match(LogotecGramarParser::PONX);
    setState(405);
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
  enterRule(_localctx, 52, LogotecGramarParser::RulePony_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(407);
    match(LogotecGramarParser::PONY);
    setState(408);
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
  enterRule(_localctx, 54, LogotecGramarParser::RuleBajalapiz_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(410);
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
  enterRule(_localctx, 56, LogotecGramarParser::RuleSubelapiz_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(412);
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
  enterRule(_localctx, 58, LogotecGramarParser::RulePoncolorlapiz_variable);
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
    setState(414);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::PONCOLORLAPIZ

    || _la == LogotecGramarParser::PCL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }

    setState(415);
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
  enterRule(_localctx, 60, LogotecGramarParser::RuleCentro_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(417);
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
  enterRule(_localctx, 62, LogotecGramarParser::RuleEsperar_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(419);
    match(LogotecGramarParser::ESPERAR);
    setState(420);
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
  enterRule(_localctx, 64, LogotecGramarParser::RuleEjecuta_variable);
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
    setState(422);
    match(LogotecGramarParser::EJECUTA);
    setState(423);
    match(LogotecGramarParser::T__0);
    setState(427);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 30723) != 0)) {
      setState(424);
      instruccion();
      setState(429);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(430);
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
  enterRule(_localctx, 66, LogotecGramarParser::RuleRepite_variable);
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
    setState(432);
    match(LogotecGramarParser::REPITE);
    setState(433);
    antlrcpp::downCast<Repite_variableContext *>(_localctx)->e = expr_mat_aritm();
    setState(434);
    match(LogotecGramarParser::T__0);
    setState(438);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 30723) != 0)) {
      setState(435);
      instruccion();
      setState(440);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(441);
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
  enterRule(_localctx, 68, LogotecGramarParser::RuleExp_logica);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(445);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(443);
      exp_logica_operaciones();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(444);
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

tree::TerminalNode* LogotecGramarParser::Exp_logica_operacionesContext::ID() {
  return getToken(LogotecGramarParser::ID, 0);
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
  enterRule(_localctx, 70, LogotecGramarParser::RuleExp_logica_operaciones);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(457);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(447);
      iguales_variable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(448);
      y_variable();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(449);
      o_variable();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(450);
      mayorque_variable();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(451);
      logico();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(452);
      match(LogotecGramarParser::ID);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(453);
      match(LogotecGramarParser::NUMBER);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(454);
      exp_integer();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(455);
      match(LogotecGramarParser::CADENA_TEXTO);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(456);
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
  size_t startState = 72;
  enterRecursionRule(_localctx, 72, LogotecGramarParser::RuleExp_logicas_expr, precedence);

    

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
    setState(467);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NegacionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(460);
      match(LogotecGramarParser::NOT);
      setState(461);
      exp_logicas_expr(5);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ExpLogicaParentesisContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(462);
      match(LogotecGramarParser::PAR_OPEN);
      setState(463);
      exp_logicas_expr(0);
      setState(464);
      match(LogotecGramarParser::PAR_CLOSE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ExpLogicaSimpleContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(466);
      exp_logica_operaciones();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(487);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(485);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<OperacionLogicaSimpleContext>(_tracker.createInstance<Exp_logicas_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp_logicas_expr);
          setState(469);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(470);
          operador_logico();
          setState(471);
          exp_logicas_expr(4);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<OperacionLogicaComplejaContext>(_tracker.createInstance<Exp_logicas_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp_logicas_expr);
          setState(473);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(479);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(474);
              andor();
              setState(475);
              exp_logicas_expr(0); 
            }
            setState(481);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
          }

          setState(482);
          andor();
          setState(483);
          exp_logicas_expr(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(489);
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
  enterRule(_localctx, 74, LogotecGramarParser::RuleAndor);
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
    setState(490);
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
  enterRule(_localctx, 76, LogotecGramarParser::RuleSi_variable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(524);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(492);
      match(LogotecGramarParser::SI);
      setState(493);
      match(LogotecGramarParser::PAR_OPEN);
      setState(494);
      exp_logica();
      setState(495);
      match(LogotecGramarParser::PAR_CLOSE);
      setState(497);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LogotecGramarParser::NEWLINE) {
        setState(496);
        match(LogotecGramarParser::NEWLINE);
      }
      setState(499);
      match(LogotecGramarParser::T__0);
      setState(503);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 30723) != 0)) {
        setState(500);
        instruccion();
        setState(505);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(506);
      match(LogotecGramarParser::T__1);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(508);
      match(LogotecGramarParser::SI);
      setState(509);
      match(LogotecGramarParser::T__0);
      setState(510);
      exp_logica();
      setState(511);
      match(LogotecGramarParser::T__1);
      setState(513);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LogotecGramarParser::NEWLINE) {
        setState(512);
        match(LogotecGramarParser::NEWLINE);
      }
      setState(515);
      match(LogotecGramarParser::T__0);
      setState(519);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 30723) != 0)) {
        setState(516);
        instruccion();
        setState(521);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(522);
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
  enterRule(_localctx, 78, LogotecGramarParser::RuleSi_sino_variable);
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
    setState(526);
    si_variable();
    setState(528);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::NEWLINE) {
      setState(527);
      match(LogotecGramarParser::NEWLINE);
    }
    setState(530);
    match(LogotecGramarParser::T__0);
    setState(534);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 30723) != 0)) {
      setState(531);
      instruccion();
      setState(536);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(537);
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
  enterRule(_localctx, 80, LogotecGramarParser::RuleHaz_hasta_variable);
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
    setState(539);
    match(LogotecGramarParser::HAZ_HASTA);
    setState(540);
    match(LogotecGramarParser::T__0);
    setState(544);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 30723) != 0)) {
      setState(541);
      instruccion();
      setState(546);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(547);
    match(LogotecGramarParser::T__1);
    setState(549);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::NEWLINE) {
      setState(548);
      match(LogotecGramarParser::NEWLINE);
    }
    setState(551);
    match(LogotecGramarParser::PAR_OPEN);
    setState(552);
    exp_logica();
    setState(553);
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
  enterRule(_localctx, 82, LogotecGramarParser::RuleHasta_variable);
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
    setState(555);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::HAZ_HASTA

    || _la == LogotecGramarParser::HASTA)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(556);
    match(LogotecGramarParser::PAR_OPEN);
    setState(557);
    exp_logica();
    setState(558);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(560);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::NEWLINE) {
      setState(559);
      match(LogotecGramarParser::NEWLINE);
    }
    setState(562);
    match(LogotecGramarParser::T__0);
    setState(566);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 30723) != 0)) {
      setState(563);
      instruccion();
      setState(568);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(569);
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
  enterRule(_localctx, 84, LogotecGramarParser::RuleHaz_mientras_variable);
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
    setState(571);
    match(LogotecGramarParser::HAZ_MIENTRAS);
    setState(572);
    match(LogotecGramarParser::T__0);
    setState(576);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 30723) != 0)) {
      setState(573);
      instruccion();
      setState(578);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(579);
    match(LogotecGramarParser::T__1);
    setState(581);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::NEWLINE) {
      setState(580);
      match(LogotecGramarParser::NEWLINE);
    }
    setState(583);
    match(LogotecGramarParser::PAR_OPEN);
    setState(584);
    exp_logica();
    setState(585);
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
  enterRule(_localctx, 86, LogotecGramarParser::RuleMientras_variable);
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
    setState(587);
    match(LogotecGramarParser::MIENTRAS);
    setState(588);
    match(LogotecGramarParser::PAR_OPEN);
    setState(589);
    exp_logica();
    setState(590);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(592);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::NEWLINE) {
      setState(591);
      match(LogotecGramarParser::NEWLINE);
    }
    setState(594);
    match(LogotecGramarParser::T__0);
    setState(598);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -36028796765208592) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 30723) != 0)) {
      setState(595);
      instruccion();
      setState(600);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(601);
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
  enterRule(_localctx, 88, LogotecGramarParser::RuleIguales_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(603);
    match(LogotecGramarParser::IGUALESQ);
    setState(604);
    exp_logica();
    setState(605);
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
  enterRule(_localctx, 90, LogotecGramarParser::RuleY_variable);

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
    match(LogotecGramarParser::Y);
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
  enterRule(_localctx, 92, LogotecGramarParser::RuleO_variable);

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
    match(LogotecGramarParser::O);
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
  enterRule(_localctx, 94, LogotecGramarParser::RuleMayorque_variable);

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
    match(LogotecGramarParser::MAYORQUEQ);
    setState(616);
    expr_mat_aritm();
    setState(617);
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
  enterRule(_localctx, 96, LogotecGramarParser::RuleMenorque_variable);

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
    match(LogotecGramarParser::MENORQUEQ);
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
  enterRule(_localctx, 98, LogotecGramarParser::RuleColores_variable);

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
    switch (_input->LA(1)) {
      case LogotecGramarParser::AZUL:
      case LogotecGramarParser::NEGRO:
      case LogotecGramarParser::ROJO: {
        enterOuterAlt(_localctx, 1);
        setState(623);
        colores();
        break;
      }

      case LogotecGramarParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(624);
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
  enterRule(_localctx, 100, LogotecGramarParser::RuleColores);
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
  enterRule(_localctx, 102, LogotecGramarParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(635);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(629);
      match(LogotecGramarParser::CADENA_TEXTO);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(630);
      match(LogotecGramarParser::ID);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(631);
      match(LogotecGramarParser::NUMBER);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(632);
      exp_integer();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(633);
      exp_logica();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(634);
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
  enterRule(_localctx, 104, LogotecGramarParser::RuleExp_integer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(640);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(637);
      exp_matematica();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(638);
      exp_aritmetica();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(639);
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
  enterRule(_localctx, 106, LogotecGramarParser::RuleExp_aritmetica);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(668);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::PAR_OPEN: {
        enterOuterAlt(_localctx, 1);
        setState(642);
        match(LogotecGramarParser::PAR_OPEN);
        setState(643);
        exp_matematica();
        setState(649);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(644);
            operador();
            setState(645);
            exp_matematica(); 
          }
          setState(651);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx);
        }
        setState(652);
        operador();
        setState(653);
        exp_matematica();
        setState(654);
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
        setState(656);
        exp_matematica();
        setState(662);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(657);
            operador();
            setState(658);
            exp_matematica(); 
          }
          setState(664);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
        }
        setState(665);
        operador();
        setState(666);
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
  enterRule(_localctx, 108, LogotecGramarParser::RuleExp_matematica);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(678);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::DIFERENCIA: {
        enterOuterAlt(_localctx, 1);
        setState(670);
        diferencia_expr();
        break;
      }

      case LogotecGramarParser::AZAR: {
        enterOuterAlt(_localctx, 2);
        setState(671);
        azar_expr();
        break;
      }

      case LogotecGramarParser::PRODUCTO: {
        enterOuterAlt(_localctx, 3);
        setState(672);
        producto_expr();
        break;
      }

      case LogotecGramarParser::POTENCIA: {
        enterOuterAlt(_localctx, 4);
        setState(673);
        potencia_expr();
        break;
      }

      case LogotecGramarParser::DIVISION: {
        enterOuterAlt(_localctx, 5);
        setState(674);
        division_expr();
        break;
      }

      case LogotecGramarParser::SUMA: {
        enterOuterAlt(_localctx, 6);
        setState(675);
        suma_expr();
        break;
      }

      case LogotecGramarParser::ID: {
        enterOuterAlt(_localctx, 7);
        setState(676);
        match(LogotecGramarParser::ID);
        break;
      }

      case LogotecGramarParser::NUMBER: {
        enterOuterAlt(_localctx, 8);
        setState(677);
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
  enterRule(_localctx, 110, LogotecGramarParser::RuleExpr_mat_aritm);

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(680);
      exp_aritmetica();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(681);
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
  enterRule(_localctx, 112, LogotecGramarParser::RuleLogico);
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
    setState(684);
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
  enterRule(_localctx, 114, LogotecGramarParser::RuleValor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(689);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(686);
        match(LogotecGramarParser::NUMBER);
        break;
      }

      case LogotecGramarParser::TRUE:
      case LogotecGramarParser::FALSE: {
        enterOuterAlt(_localctx, 2);
        setState(687);
        logico();
        break;
      }

      case LogotecGramarParser::CADENA_TEXTO: {
        enterOuterAlt(_localctx, 3);
        setState(688);
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
  enterRule(_localctx, 116, LogotecGramarParser::RuleOperador_logico);
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
    setState(691);
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
  enterRule(_localctx, 118, LogotecGramarParser::RuleOperador);
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
    setState(693);
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
  enterRule(_localctx, 120, LogotecGramarParser::RuleDiferencia_expr);

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
    setState(695);
    match(LogotecGramarParser::DIFERENCIA);

    setState(696);
    expr_mat_aritm();
    setState(698); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(697);
              expr_mat_aritm();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(700); 
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
  enterRule(_localctx, 122, LogotecGramarParser::RuleAzar_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(702);
    match(LogotecGramarParser::AZAR);

    setState(703);
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
  enterRule(_localctx, 124, LogotecGramarParser::RuleProducto_expr);

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
    setState(705);
    match(LogotecGramarParser::PRODUCTO);

    setState(706);
    expr_mat_aritm();
    setState(708); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(707);
              expr_mat_aritm();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(710); 
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
  enterRule(_localctx, 126, LogotecGramarParser::RulePotencia_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(712);
    match(LogotecGramarParser::POTENCIA);

    setState(713);
    expr_mat_aritm();

    setState(714);
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
  enterRule(_localctx, 128, LogotecGramarParser::RuleDivision_expr);

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
    match(LogotecGramarParser::DIVISION);

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
  enterRule(_localctx, 130, LogotecGramarParser::RuleSuma_expr);

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
    setState(720);
    match(LogotecGramarParser::SUMA);

    setState(721);
    expr_mat_aritm();
    setState(723); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(722);
              expr_mat_aritm();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(725); 
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
    case 36: return exp_logicas_exprSempred(antlrcpp::downCast<Exp_logicas_exprContext *>(context), predicateIndex);

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
