
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
      "programa", "procedimiento", "parametros", "linea_instrucciones", 
      "lista_parametros", "instruccion", "muestra", "rumbo_get", "comentario_linea", 
      "comentario", "procedimiento_llamado", "parametros_llamado", "lista_parametros_llamado", 
      "haz_variable", "inic_variable", "inc_variable", "avanza_variable", 
      "retrocede_variable", "gira_derecha_variable", "gira_izquierda_variable", 
      "ocultar_tortuga_variable", "ponpos_variable", "ponxy_variable", "ponrumbo_variable", 
      "ponx_variable", "pony_variable", "bajalapiz_variable", "subelapiz_variable", 
      "poncolorlapiz_variable", "centro_variable", "esperar_variable", "ejecuta_variable", 
      "repite_variable", "exp_logica", "exp_logica_operaciones", "exp_logicas_expr", 
      "andor", "si_variable", "si_sino_variable", "haz_hasta_variable", 
      "hasta_variable", "haz_mientras_variable", "mientras_variable", "iguales_variable", 
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
      "'rumbo'", "'Muestra'", "'ponx'", "'pony'", "'bajalapiz'", "'BL'", 
      "'subelapiz'", "'SL'", "'azul'", "'negro'", "'rojo'", "'poncolorlapiz'", 
      "'poncl'", "'centro'", "'espera'", "'True'", "'False'", "", "", "'program'", 
      "'var'", "'println'", "'+'", "'-'", "'*'", "'/'", "'if'", "'else'", 
      "'while'", "'for'", "'&&'", "'||'", "'!'", "'>'", "'<'", "'>='", "'<='", 
      "'=='", "'!='", "'='", "'{'", "'}'", "'('", "')'", "';'", "'REPITE'", 
      "'SI'", "'HAZ.HASTA'", "'HASTA'", "'HAZ.MIENTRAS'", "'MIENTRAS'", 
      "'Iguales\\u003F'", "'Y'", "'O'", "'MayorQue\\u003F'", "'MenorQue\\u003F'", 
      "'Diferencia'", "'Azar'", "'Producto'", "'Potencia'", "'Division'", 
      "'Suma'", "'Resta'", "'Para'", "'Fin'", "'Ejecuta'"
    },
    std::vector<std::string>{
      "", "", "", "", "HAZ", "INIC", "INC", "AVANZA", "AV", "RETROCEDE", 
      "RE", "GIRA_DERECHA", "GD", "GIRA_IZQUIERDA", "GI", "OCULTAR_TORTUGA", 
      "OT", "PONPOS", "PONXY", "PONRUMBO", "RUMBO", "MUESTRA", "PONX", "PONY", 
      "BAJALAPIZ", "BL", "SUBELAPIZ", "SL", "AZUL", "NEGRO", "ROJO", "PONCOLORLAPIZ", 
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
  	4,1,89,675,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,7,
  	63,2,64,7,64,1,0,1,0,1,0,5,0,134,8,0,10,0,12,0,137,9,0,1,0,1,0,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,5,1,148,8,1,10,1,12,1,151,9,1,1,1,3,1,154,8,1,1,
  	1,1,1,1,2,1,2,3,2,160,8,2,1,2,1,2,1,3,4,3,165,8,3,11,3,12,3,166,1,4,1,
  	4,1,4,5,4,172,8,4,10,4,12,4,175,9,4,1,5,1,5,3,5,179,8,5,1,5,1,5,3,5,183,
  	8,5,1,5,1,5,3,5,187,8,5,1,5,1,5,3,5,191,8,5,1,5,1,5,3,5,195,8,5,1,5,1,
  	5,3,5,199,8,5,1,5,1,5,3,5,203,8,5,1,5,1,5,3,5,207,8,5,1,5,1,5,3,5,211,
  	8,5,1,5,1,5,3,5,215,8,5,1,5,1,5,3,5,219,8,5,1,5,1,5,3,5,223,8,5,1,5,1,
  	5,3,5,227,8,5,1,5,1,5,3,5,231,8,5,1,5,1,5,3,5,235,8,5,1,5,1,5,3,5,239,
  	8,5,1,5,1,5,3,5,243,8,5,1,5,1,5,3,5,247,8,5,1,5,1,5,3,5,251,8,5,1,5,1,
  	5,3,5,255,8,5,1,5,1,5,3,5,259,8,5,1,5,1,5,3,5,263,8,5,1,5,1,5,3,5,267,
  	8,5,1,5,1,5,3,5,271,8,5,1,5,1,5,3,5,275,8,5,1,5,1,5,3,5,279,8,5,1,5,1,
  	5,3,5,283,8,5,1,5,1,5,3,5,287,8,5,1,5,1,5,3,5,291,8,5,1,5,1,5,3,5,295,
  	8,5,1,5,1,5,3,5,299,8,5,1,5,1,5,3,5,303,8,5,1,5,1,5,3,5,307,8,5,1,5,1,
  	5,3,5,311,8,5,1,5,1,5,3,5,315,8,5,1,6,1,6,1,6,3,6,320,8,6,1,7,1,7,1,8,
  	1,8,1,9,1,9,1,10,1,10,1,10,1,11,1,11,3,11,333,8,11,1,11,1,11,1,12,1,12,
  	1,12,5,12,340,8,12,10,12,12,12,343,9,12,1,13,1,13,1,13,1,13,1,14,1,14,
  	1,14,1,14,1,14,1,15,1,15,1,15,1,15,3,15,358,8,15,1,15,1,15,1,16,1,16,
  	1,16,1,17,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,21,1,21,
  	1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,24,1,24,1,24,
  	1,25,1,25,1,25,1,26,1,26,1,27,1,27,1,28,1,28,1,28,1,29,1,29,1,30,1,30,
  	1,30,1,31,1,31,1,31,5,31,410,8,31,10,31,12,31,413,9,31,1,31,1,31,1,32,
  	1,32,1,32,1,32,5,32,421,8,32,10,32,12,32,424,9,32,1,32,1,32,1,33,1,33,
  	3,33,430,8,33,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,3,34,441,8,
  	34,1,35,1,35,1,35,1,35,1,35,1,35,1,35,1,35,3,35,451,8,35,1,35,1,35,1,
  	35,1,35,1,35,1,35,1,35,1,35,5,35,461,8,35,10,35,12,35,464,9,35,1,35,1,
  	35,1,35,5,35,469,8,35,10,35,12,35,472,9,35,1,36,1,36,1,37,1,37,1,37,1,
  	37,1,37,1,37,5,37,482,8,37,10,37,12,37,485,9,37,1,37,1,37,1,38,1,38,1,
  	38,5,38,492,8,38,10,38,12,38,495,9,38,1,38,1,38,1,39,1,39,1,39,5,39,502,
  	8,39,10,39,12,39,505,9,39,1,39,1,39,1,39,1,39,1,39,1,40,1,40,1,40,1,40,
  	1,40,1,40,5,40,518,8,40,10,40,12,40,521,9,40,1,40,1,40,1,41,1,41,1,41,
  	5,41,528,8,41,10,41,12,41,531,9,41,1,41,1,41,1,41,1,41,1,41,1,42,1,42,
  	1,42,1,42,1,42,1,42,5,42,544,8,42,10,42,12,42,547,9,42,1,42,1,42,1,43,
  	1,43,1,43,1,43,1,44,1,44,1,44,1,44,1,45,1,45,1,45,1,45,1,46,1,46,1,46,
  	1,46,1,47,1,47,1,47,1,47,1,48,1,48,3,48,573,8,48,1,49,1,49,1,50,1,50,
  	1,50,1,50,1,50,1,50,3,50,583,8,50,1,51,1,51,1,51,3,51,588,8,51,1,52,1,
  	52,1,52,1,52,1,52,5,52,595,8,52,10,52,12,52,598,9,52,1,52,1,52,1,52,1,
  	52,1,52,1,52,1,52,1,52,5,52,608,8,52,10,52,12,52,611,9,52,1,52,1,52,1,
  	52,3,52,616,8,52,1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,3,53,626,8,53,
  	1,54,1,54,3,54,630,8,54,1,55,1,55,1,56,1,56,1,56,3,56,637,8,56,1,57,1,
  	57,1,58,1,58,1,59,1,59,1,59,4,59,646,8,59,11,59,12,59,647,1,60,1,60,1,
  	60,1,61,1,61,1,61,4,61,656,8,61,11,61,12,61,657,1,62,1,62,1,62,1,62,1,
  	63,1,63,1,63,1,63,1,64,1,64,1,64,4,64,671,8,64,11,64,12,64,672,1,64,0,
  	1,70,65,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,
  	44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,
  	90,92,94,96,98,100,102,104,106,108,110,112,114,116,118,120,122,124,126,
  	128,0,13,1,0,7,8,1,0,9,10,1,0,11,12,1,0,13,14,1,0,15,16,1,0,24,25,1,0,
  	26,27,1,0,31,32,1,0,50,51,1,0,28,30,1,0,35,36,2,0,50,51,53,58,1,0,42,
  	45,736,0,135,1,0,0,0,2,140,1,0,0,0,4,157,1,0,0,0,6,164,1,0,0,0,8,168,
  	1,0,0,0,10,314,1,0,0,0,12,316,1,0,0,0,14,321,1,0,0,0,16,323,1,0,0,0,18,
  	325,1,0,0,0,20,327,1,0,0,0,22,330,1,0,0,0,24,336,1,0,0,0,26,344,1,0,0,
  	0,28,348,1,0,0,0,30,353,1,0,0,0,32,361,1,0,0,0,34,364,1,0,0,0,36,367,
  	1,0,0,0,38,370,1,0,0,0,40,373,1,0,0,0,42,375,1,0,0,0,44,381,1,0,0,0,46,
  	385,1,0,0,0,48,388,1,0,0,0,50,391,1,0,0,0,52,394,1,0,0,0,54,396,1,0,0,
  	0,56,398,1,0,0,0,58,401,1,0,0,0,60,403,1,0,0,0,62,406,1,0,0,0,64,416,
  	1,0,0,0,66,429,1,0,0,0,68,440,1,0,0,0,70,450,1,0,0,0,72,473,1,0,0,0,74,
  	475,1,0,0,0,76,488,1,0,0,0,78,498,1,0,0,0,80,511,1,0,0,0,82,524,1,0,0,
  	0,84,537,1,0,0,0,86,550,1,0,0,0,88,554,1,0,0,0,90,558,1,0,0,0,92,562,
  	1,0,0,0,94,566,1,0,0,0,96,572,1,0,0,0,98,574,1,0,0,0,100,582,1,0,0,0,
  	102,587,1,0,0,0,104,615,1,0,0,0,106,625,1,0,0,0,108,629,1,0,0,0,110,631,
  	1,0,0,0,112,636,1,0,0,0,114,638,1,0,0,0,116,640,1,0,0,0,118,642,1,0,0,
  	0,120,649,1,0,0,0,122,652,1,0,0,0,124,659,1,0,0,0,126,663,1,0,0,0,128,
  	667,1,0,0,0,130,134,5,87,0,0,131,134,3,6,3,0,132,134,3,2,1,0,133,130,
  	1,0,0,0,133,131,1,0,0,0,133,132,1,0,0,0,134,137,1,0,0,0,135,133,1,0,0,
  	0,135,136,1,0,0,0,136,138,1,0,0,0,137,135,1,0,0,0,138,139,5,0,0,1,139,
  	1,1,0,0,0,140,141,5,83,0,0,141,142,5,86,0,0,142,143,3,4,2,0,143,149,5,
  	87,0,0,144,145,3,6,3,0,145,146,5,87,0,0,146,148,1,0,0,0,147,144,1,0,0,
  	0,148,151,1,0,0,0,149,147,1,0,0,0,149,150,1,0,0,0,150,153,1,0,0,0,151,
  	149,1,0,0,0,152,154,3,6,3,0,153,152,1,0,0,0,153,154,1,0,0,0,154,155,1,
  	0,0,0,155,156,5,84,0,0,156,3,1,0,0,0,157,159,5,1,0,0,158,160,3,8,4,0,
  	159,158,1,0,0,0,159,160,1,0,0,0,160,161,1,0,0,0,161,162,5,2,0,0,162,5,
  	1,0,0,0,163,165,3,10,5,0,164,163,1,0,0,0,165,166,1,0,0,0,166,164,1,0,
  	0,0,166,167,1,0,0,0,167,7,1,0,0,0,168,173,5,86,0,0,169,170,5,3,0,0,170,
  	172,5,86,0,0,171,169,1,0,0,0,172,175,1,0,0,0,173,171,1,0,0,0,173,174,
  	1,0,0,0,174,9,1,0,0,0,175,173,1,0,0,0,176,178,3,26,13,0,177,179,3,16,
  	8,0,178,177,1,0,0,0,178,179,1,0,0,0,179,315,1,0,0,0,180,182,3,28,14,0,
  	181,183,3,16,8,0,182,181,1,0,0,0,182,183,1,0,0,0,183,315,1,0,0,0,184,
  	186,3,30,15,0,185,187,3,16,8,0,186,185,1,0,0,0,186,187,1,0,0,0,187,315,
  	1,0,0,0,188,190,3,32,16,0,189,191,3,16,8,0,190,189,1,0,0,0,190,191,1,
  	0,0,0,191,315,1,0,0,0,192,194,3,34,17,0,193,195,3,16,8,0,194,193,1,0,
  	0,0,194,195,1,0,0,0,195,315,1,0,0,0,196,198,3,36,18,0,197,199,3,16,8,
  	0,198,197,1,0,0,0,198,199,1,0,0,0,199,315,1,0,0,0,200,202,3,38,19,0,201,
  	203,3,16,8,0,202,201,1,0,0,0,202,203,1,0,0,0,203,315,1,0,0,0,204,206,
  	3,40,20,0,205,207,3,16,8,0,206,205,1,0,0,0,206,207,1,0,0,0,207,315,1,
  	0,0,0,208,210,3,42,21,0,209,211,3,16,8,0,210,209,1,0,0,0,210,211,1,0,
  	0,0,211,315,1,0,0,0,212,214,3,44,22,0,213,215,3,16,8,0,214,213,1,0,0,
  	0,214,215,1,0,0,0,215,315,1,0,0,0,216,218,3,46,23,0,217,219,3,16,8,0,
  	218,217,1,0,0,0,218,219,1,0,0,0,219,315,1,0,0,0,220,222,3,48,24,0,221,
  	223,3,16,8,0,222,221,1,0,0,0,222,223,1,0,0,0,223,315,1,0,0,0,224,226,
  	3,50,25,0,225,227,3,16,8,0,226,225,1,0,0,0,226,227,1,0,0,0,227,315,1,
  	0,0,0,228,230,3,52,26,0,229,231,3,16,8,0,230,229,1,0,0,0,230,231,1,0,
  	0,0,231,315,1,0,0,0,232,234,3,54,27,0,233,235,3,16,8,0,234,233,1,0,0,
  	0,234,235,1,0,0,0,235,315,1,0,0,0,236,238,3,56,28,0,237,239,3,16,8,0,
  	238,237,1,0,0,0,238,239,1,0,0,0,239,315,1,0,0,0,240,242,3,58,29,0,241,
  	243,3,16,8,0,242,241,1,0,0,0,242,243,1,0,0,0,243,315,1,0,0,0,244,246,
  	3,60,30,0,245,247,3,16,8,0,246,245,1,0,0,0,246,247,1,0,0,0,247,315,1,
  	0,0,0,248,250,3,62,31,0,249,251,3,16,8,0,250,249,1,0,0,0,250,251,1,0,
  	0,0,251,315,1,0,0,0,252,254,3,64,32,0,253,255,3,16,8,0,254,253,1,0,0,
  	0,254,255,1,0,0,0,255,315,1,0,0,0,256,258,3,76,38,0,257,259,3,16,8,0,
  	258,257,1,0,0,0,258,259,1,0,0,0,259,315,1,0,0,0,260,262,3,74,37,0,261,
  	263,3,16,8,0,262,261,1,0,0,0,262,263,1,0,0,0,263,315,1,0,0,0,264,266,
  	3,78,39,0,265,267,3,16,8,0,266,265,1,0,0,0,266,267,1,0,0,0,267,315,1,
  	0,0,0,268,270,3,80,40,0,269,271,3,16,8,0,270,269,1,0,0,0,270,271,1,0,
  	0,0,271,315,1,0,0,0,272,274,3,82,41,0,273,275,3,16,8,0,274,273,1,0,0,
  	0,274,275,1,0,0,0,275,315,1,0,0,0,276,278,3,84,42,0,277,279,3,16,8,0,
  	278,277,1,0,0,0,278,279,1,0,0,0,279,315,1,0,0,0,280,282,3,86,43,0,281,
  	283,3,16,8,0,282,281,1,0,0,0,282,283,1,0,0,0,283,315,1,0,0,0,284,286,
  	3,88,44,0,285,287,3,16,8,0,286,285,1,0,0,0,286,287,1,0,0,0,287,315,1,
  	0,0,0,288,290,3,90,45,0,289,291,3,16,8,0,290,289,1,0,0,0,290,291,1,0,
  	0,0,291,315,1,0,0,0,292,294,3,92,46,0,293,295,3,16,8,0,294,293,1,0,0,
  	0,294,295,1,0,0,0,295,315,1,0,0,0,296,298,3,94,47,0,297,299,3,16,8,0,
  	298,297,1,0,0,0,298,299,1,0,0,0,299,315,1,0,0,0,300,302,3,20,10,0,301,
  	303,3,16,8,0,302,301,1,0,0,0,302,303,1,0,0,0,303,315,1,0,0,0,304,306,
  	3,14,7,0,305,307,3,16,8,0,306,305,1,0,0,0,306,307,1,0,0,0,307,315,1,0,
  	0,0,308,310,3,12,6,0,309,311,3,16,8,0,310,309,1,0,0,0,310,311,1,0,0,0,
  	311,315,1,0,0,0,312,315,3,18,9,0,313,315,5,87,0,0,314,176,1,0,0,0,314,
  	180,1,0,0,0,314,184,1,0,0,0,314,188,1,0,0,0,314,192,1,0,0,0,314,196,1,
  	0,0,0,314,200,1,0,0,0,314,204,1,0,0,0,314,208,1,0,0,0,314,212,1,0,0,0,
  	314,216,1,0,0,0,314,220,1,0,0,0,314,224,1,0,0,0,314,228,1,0,0,0,314,232,
  	1,0,0,0,314,236,1,0,0,0,314,240,1,0,0,0,314,244,1,0,0,0,314,248,1,0,0,
  	0,314,252,1,0,0,0,314,256,1,0,0,0,314,260,1,0,0,0,314,264,1,0,0,0,314,
  	268,1,0,0,0,314,272,1,0,0,0,314,276,1,0,0,0,314,280,1,0,0,0,314,284,1,
  	0,0,0,314,288,1,0,0,0,314,292,1,0,0,0,314,296,1,0,0,0,314,300,1,0,0,0,
  	314,304,1,0,0,0,314,308,1,0,0,0,314,312,1,0,0,0,314,313,1,0,0,0,315,11,
  	1,0,0,0,316,319,5,21,0,0,317,320,3,100,50,0,318,320,3,14,7,0,319,317,
  	1,0,0,0,319,318,1,0,0,0,320,13,1,0,0,0,321,322,5,20,0,0,322,15,1,0,0,
  	0,323,324,5,89,0,0,324,17,1,0,0,0,325,326,5,89,0,0,326,19,1,0,0,0,327,
  	328,5,86,0,0,328,329,3,22,11,0,329,21,1,0,0,0,330,332,5,1,0,0,331,333,
  	3,24,12,0,332,331,1,0,0,0,332,333,1,0,0,0,333,334,1,0,0,0,334,335,5,2,
  	0,0,335,23,1,0,0,0,336,341,3,100,50,0,337,338,5,3,0,0,338,340,3,100,50,
  	0,339,337,1,0,0,0,340,343,1,0,0,0,341,339,1,0,0,0,341,342,1,0,0,0,342,
  	25,1,0,0,0,343,341,1,0,0,0,344,345,5,4,0,0,345,346,5,86,0,0,346,347,3,
  	100,50,0,347,27,1,0,0,0,348,349,5,5,0,0,349,350,5,86,0,0,350,351,5,59,
  	0,0,351,352,3,100,50,0,352,29,1,0,0,0,353,354,5,6,0,0,354,355,5,1,0,0,
  	355,357,5,86,0,0,356,358,3,108,54,0,357,356,1,0,0,0,357,358,1,0,0,0,358,
  	359,1,0,0,0,359,360,5,2,0,0,360,31,1,0,0,0,361,362,7,0,0,0,362,363,3,
  	108,54,0,363,33,1,0,0,0,364,365,7,1,0,0,365,366,3,108,54,0,366,35,1,0,
  	0,0,367,368,7,2,0,0,368,369,3,108,54,0,369,37,1,0,0,0,370,371,7,3,0,0,
  	371,372,3,108,54,0,372,39,1,0,0,0,373,374,7,4,0,0,374,41,1,0,0,0,375,
  	376,5,17,0,0,376,377,5,1,0,0,377,378,3,108,54,0,378,379,3,108,54,0,379,
  	380,5,2,0,0,380,43,1,0,0,0,381,382,5,18,0,0,382,383,3,108,54,0,383,384,
  	3,108,54,0,384,45,1,0,0,0,385,386,5,19,0,0,386,387,3,108,54,0,387,47,
  	1,0,0,0,388,389,5,22,0,0,389,390,3,108,54,0,390,49,1,0,0,0,391,392,5,
  	23,0,0,392,393,3,108,54,0,393,51,1,0,0,0,394,395,7,5,0,0,395,53,1,0,0,
  	0,396,397,7,6,0,0,397,55,1,0,0,0,398,399,7,7,0,0,399,400,3,96,48,0,400,
  	57,1,0,0,0,401,402,5,33,0,0,402,59,1,0,0,0,403,404,5,34,0,0,404,405,3,
  	102,51,0,405,61,1,0,0,0,406,407,5,85,0,0,407,411,5,1,0,0,408,410,3,10,
  	5,0,409,408,1,0,0,0,410,413,1,0,0,0,411,409,1,0,0,0,411,412,1,0,0,0,412,
  	414,1,0,0,0,413,411,1,0,0,0,414,415,5,2,0,0,415,63,1,0,0,0,416,417,5,
  	65,0,0,417,418,3,108,54,0,418,422,5,1,0,0,419,421,3,10,5,0,420,419,1,
  	0,0,0,421,424,1,0,0,0,422,420,1,0,0,0,422,423,1,0,0,0,423,425,1,0,0,0,
  	424,422,1,0,0,0,425,426,5,2,0,0,426,65,1,0,0,0,427,430,3,68,34,0,428,
  	430,3,70,35,0,429,427,1,0,0,0,429,428,1,0,0,0,430,67,1,0,0,0,431,441,
  	3,86,43,0,432,441,3,88,44,0,433,441,3,90,45,0,434,441,3,92,46,0,435,441,
  	3,110,55,0,436,441,5,86,0,0,437,441,5,37,0,0,438,441,5,38,0,0,439,441,
  	3,94,47,0,440,431,1,0,0,0,440,432,1,0,0,0,440,433,1,0,0,0,440,434,1,0,
  	0,0,440,435,1,0,0,0,440,436,1,0,0,0,440,437,1,0,0,0,440,438,1,0,0,0,440,
  	439,1,0,0,0,441,69,1,0,0,0,442,443,6,35,-1,0,443,444,5,52,0,0,444,451,
  	3,70,35,5,445,446,5,62,0,0,446,447,3,70,35,0,447,448,5,63,0,0,448,451,
  	1,0,0,0,449,451,3,68,34,0,450,442,1,0,0,0,450,445,1,0,0,0,450,449,1,0,
  	0,0,451,470,1,0,0,0,452,453,10,3,0,0,453,454,3,114,57,0,454,455,3,70,
  	35,4,455,469,1,0,0,0,456,462,10,2,0,0,457,458,3,72,36,0,458,459,3,70,
  	35,0,459,461,1,0,0,0,460,457,1,0,0,0,461,464,1,0,0,0,462,460,1,0,0,0,
  	462,463,1,0,0,0,463,465,1,0,0,0,464,462,1,0,0,0,465,466,3,72,36,0,466,
  	467,3,70,35,0,467,469,1,0,0,0,468,452,1,0,0,0,468,456,1,0,0,0,469,472,
  	1,0,0,0,470,468,1,0,0,0,470,471,1,0,0,0,471,71,1,0,0,0,472,470,1,0,0,
  	0,473,474,7,8,0,0,474,73,1,0,0,0,475,476,5,66,0,0,476,477,5,62,0,0,477,
  	478,3,66,33,0,478,479,5,63,0,0,479,483,5,1,0,0,480,482,3,10,5,0,481,480,
  	1,0,0,0,482,485,1,0,0,0,483,481,1,0,0,0,483,484,1,0,0,0,484,486,1,0,0,
  	0,485,483,1,0,0,0,486,487,5,2,0,0,487,75,1,0,0,0,488,489,3,74,37,0,489,
  	493,5,1,0,0,490,492,3,10,5,0,491,490,1,0,0,0,492,495,1,0,0,0,493,491,
  	1,0,0,0,493,494,1,0,0,0,494,496,1,0,0,0,495,493,1,0,0,0,496,497,5,2,0,
  	0,497,77,1,0,0,0,498,499,5,67,0,0,499,503,5,1,0,0,500,502,3,10,5,0,501,
  	500,1,0,0,0,502,505,1,0,0,0,503,501,1,0,0,0,503,504,1,0,0,0,504,506,1,
  	0,0,0,505,503,1,0,0,0,506,507,5,2,0,0,507,508,5,62,0,0,508,509,3,66,33,
  	0,509,510,5,63,0,0,510,79,1,0,0,0,511,512,5,68,0,0,512,513,5,62,0,0,513,
  	514,3,66,33,0,514,515,5,63,0,0,515,519,5,1,0,0,516,518,3,10,5,0,517,516,
  	1,0,0,0,518,521,1,0,0,0,519,517,1,0,0,0,519,520,1,0,0,0,520,522,1,0,0,
  	0,521,519,1,0,0,0,522,523,5,2,0,0,523,81,1,0,0,0,524,525,5,69,0,0,525,
  	529,5,1,0,0,526,528,3,10,5,0,527,526,1,0,0,0,528,531,1,0,0,0,529,527,
  	1,0,0,0,529,530,1,0,0,0,530,532,1,0,0,0,531,529,1,0,0,0,532,533,5,2,0,
  	0,533,534,5,1,0,0,534,535,3,66,33,0,535,536,5,2,0,0,536,83,1,0,0,0,537,
  	538,5,70,0,0,538,539,5,62,0,0,539,540,3,66,33,0,540,541,5,63,0,0,541,
  	545,5,1,0,0,542,544,3,10,5,0,543,542,1,0,0,0,544,547,1,0,0,0,545,543,
  	1,0,0,0,545,546,1,0,0,0,546,548,1,0,0,0,547,545,1,0,0,0,548,549,5,2,0,
  	0,549,85,1,0,0,0,550,551,5,71,0,0,551,552,3,66,33,0,552,553,3,66,33,0,
  	553,87,1,0,0,0,554,555,5,72,0,0,555,556,3,66,33,0,556,557,3,66,33,0,557,
  	89,1,0,0,0,558,559,5,73,0,0,559,560,3,66,33,0,560,561,3,66,33,0,561,91,
  	1,0,0,0,562,563,5,74,0,0,563,564,3,108,54,0,564,565,3,108,54,0,565,93,
  	1,0,0,0,566,567,5,75,0,0,567,568,3,108,54,0,568,569,3,108,54,0,569,95,
  	1,0,0,0,570,573,3,98,49,0,571,573,5,86,0,0,572,570,1,0,0,0,572,571,1,
  	0,0,0,573,97,1,0,0,0,574,575,7,9,0,0,575,99,1,0,0,0,576,583,5,38,0,0,
  	577,583,5,86,0,0,578,583,5,37,0,0,579,583,3,102,51,0,580,583,3,66,33,
  	0,581,583,3,98,49,0,582,576,1,0,0,0,582,577,1,0,0,0,582,578,1,0,0,0,582,
  	579,1,0,0,0,582,580,1,0,0,0,582,581,1,0,0,0,583,101,1,0,0,0,584,588,3,
  	106,53,0,585,588,3,104,52,0,586,588,5,37,0,0,587,584,1,0,0,0,587,585,
  	1,0,0,0,587,586,1,0,0,0,588,103,1,0,0,0,589,590,5,62,0,0,590,596,3,106,
  	53,0,591,592,3,116,58,0,592,593,3,106,53,0,593,595,1,0,0,0,594,591,1,
  	0,0,0,595,598,1,0,0,0,596,594,1,0,0,0,596,597,1,0,0,0,597,599,1,0,0,0,
  	598,596,1,0,0,0,599,600,3,116,58,0,600,601,3,106,53,0,601,602,5,63,0,
  	0,602,616,1,0,0,0,603,609,3,106,53,0,604,605,3,116,58,0,605,606,3,106,
  	53,0,606,608,1,0,0,0,607,604,1,0,0,0,608,611,1,0,0,0,609,607,1,0,0,0,
  	609,610,1,0,0,0,610,612,1,0,0,0,611,609,1,0,0,0,612,613,3,116,58,0,613,
  	614,3,106,53,0,614,616,1,0,0,0,615,589,1,0,0,0,615,603,1,0,0,0,616,105,
  	1,0,0,0,617,626,3,118,59,0,618,626,3,120,60,0,619,626,3,122,61,0,620,
  	626,3,124,62,0,621,626,3,126,63,0,622,626,3,128,64,0,623,626,5,86,0,0,
  	624,626,5,37,0,0,625,617,1,0,0,0,625,618,1,0,0,0,625,619,1,0,0,0,625,
  	620,1,0,0,0,625,621,1,0,0,0,625,622,1,0,0,0,625,623,1,0,0,0,625,624,1,
  	0,0,0,626,107,1,0,0,0,627,630,3,104,52,0,628,630,3,106,53,0,629,627,1,
  	0,0,0,629,628,1,0,0,0,630,109,1,0,0,0,631,632,7,10,0,0,632,111,1,0,0,
  	0,633,637,5,37,0,0,634,637,3,110,55,0,635,637,5,38,0,0,636,633,1,0,0,
  	0,636,634,1,0,0,0,636,635,1,0,0,0,637,113,1,0,0,0,638,639,7,11,0,0,639,
  	115,1,0,0,0,640,641,7,12,0,0,641,117,1,0,0,0,642,643,5,76,0,0,643,645,
  	3,108,54,0,644,646,3,108,54,0,645,644,1,0,0,0,646,647,1,0,0,0,647,645,
  	1,0,0,0,647,648,1,0,0,0,648,119,1,0,0,0,649,650,5,77,0,0,650,651,3,108,
  	54,0,651,121,1,0,0,0,652,653,5,78,0,0,653,655,3,108,54,0,654,656,3,108,
  	54,0,655,654,1,0,0,0,656,657,1,0,0,0,657,655,1,0,0,0,657,658,1,0,0,0,
  	658,123,1,0,0,0,659,660,5,79,0,0,660,661,3,108,54,0,661,662,3,108,54,
  	0,662,125,1,0,0,0,663,664,5,80,0,0,664,665,3,108,54,0,665,666,3,108,54,
  	0,666,127,1,0,0,0,667,668,5,81,0,0,668,670,3,108,54,0,669,671,3,108,54,
  	0,670,669,1,0,0,0,671,672,1,0,0,0,672,670,1,0,0,0,672,673,1,0,0,0,673,
  	129,1,0,0,0,72,133,135,149,153,159,166,173,178,182,186,190,194,198,202,
  	206,210,214,218,222,226,230,234,238,242,246,250,254,258,262,266,270,274,
  	278,282,286,290,294,298,302,306,310,314,319,332,341,357,411,422,429,440,
  	450,462,468,470,483,493,503,519,529,545,572,582,587,596,609,615,625,629,
  	636,647,657,672
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
    setState(135);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32480690160) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 24381439) != 0)) {
      setState(133);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(130);
        match(LogotecGramarParser::NEWLINE);
        break;
      }

      case 2: {
        setState(131);
        linea_instrucciones();
        break;
      }

      case 3: {
        setState(132);
        procedimiento();
        break;
      }

      default:
        break;
      }
      setState(137);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(138);
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
    setState(140);
    match(LogotecGramarParser::PARA);
    setState(141);
    match(LogotecGramarParser::ID);
    setState(142);
    parametros();
    setState(143);
    match(LogotecGramarParser::NEWLINE);
    setState(149);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(144);
        linea_instrucciones();
        setState(145);
        match(LogotecGramarParser::NEWLINE); 
      }
      setState(151);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(153);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32480690160) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 24119295) != 0)) {
      setState(152);
      linea_instrucciones();
    }
    setState(155);
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
    setState(157);
    match(LogotecGramarParser::T__0);
    setState(159);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::ID) {
      setState(158);
      lista_parametros();
    }
    setState(161);
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
    setState(164); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(163);
              instruccion();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(166); 
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
    setState(168);
    match(LogotecGramarParser::ID);
    setState(173);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogotecGramarParser::T__2) {
      setState(169);
      match(LogotecGramarParser::T__2);
      setState(170);
      match(LogotecGramarParser::ID);
      setState(175);
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

LogotecGramarParser::Rumbo_getContext* LogotecGramarParser::InstruccionContext::rumbo_get() {
  return getRuleContext<LogotecGramarParser::Rumbo_getContext>(0);
}

LogotecGramarParser::MuestraContext* LogotecGramarParser::InstruccionContext::muestra() {
  return getRuleContext<LogotecGramarParser::MuestraContext>(0);
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
    setState(314);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(176);
      haz_variable();
      setState(178);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
      case 1: {
        setState(177);
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
      setState(180);
      inic_variable();
      setState(182);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
      case 1: {
        setState(181);
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
      setState(184);
      inc_variable();
      setState(186);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
      case 1: {
        setState(185);
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
      setState(188);
      avanza_variable();
      setState(190);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
      case 1: {
        setState(189);
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
      setState(192);
      retrocede_variable();
      setState(194);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
      case 1: {
        setState(193);
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
      setState(196);
      gira_derecha_variable();
      setState(198);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
      case 1: {
        setState(197);
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
      setState(200);
      gira_izquierda_variable();
      setState(202);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        setState(201);
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
      setState(204);
      ocultar_tortuga_variable();
      setState(206);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
      case 1: {
        setState(205);
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
      setState(208);
      ponpos_variable();
      setState(210);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
      case 1: {
        setState(209);
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
      setState(212);
      ponxy_variable();
      setState(214);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
      case 1: {
        setState(213);
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
      setState(216);
      ponrumbo_variable();
      setState(218);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
      case 1: {
        setState(217);
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
      setState(220);
      ponx_variable();
      setState(222);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
      case 1: {
        setState(221);
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
      setState(224);
      pony_variable();
      setState(226);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(225);
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
      setState(228);
      bajalapiz_variable();
      setState(230);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
      case 1: {
        setState(229);
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
      setState(232);
      subelapiz_variable();
      setState(234);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
      case 1: {
        setState(233);
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
      setState(236);
      poncolorlapiz_variable();
      setState(238);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
      case 1: {
        setState(237);
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
      setState(240);
      centro_variable();
      setState(242);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
      case 1: {
        setState(241);
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
      setState(244);
      esperar_variable();
      setState(246);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
      case 1: {
        setState(245);
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
      setState(248);
      ejecuta_variable();
      setState(250);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
      case 1: {
        setState(249);
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
      setState(252);
      repite_variable();
      setState(254);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
      case 1: {
        setState(253);
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
      setState(256);
      si_sino_variable();
      setState(258);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
      case 1: {
        setState(257);
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
      setState(260);
      si_variable();
      setState(262);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
      case 1: {
        setState(261);
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
      setState(264);
      haz_hasta_variable();
      setState(266);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
      case 1: {
        setState(265);
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
      setState(268);
      hasta_variable();
      setState(270);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
      case 1: {
        setState(269);
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
      setState(272);
      haz_mientras_variable();
      setState(274);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
      case 1: {
        setState(273);
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
      setState(276);
      mientras_variable();
      setState(278);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
      case 1: {
        setState(277);
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
      setState(280);
      iguales_variable();
      setState(282);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
      case 1: {
        setState(281);
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
      setState(284);
      y_variable();
      setState(286);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
      case 1: {
        setState(285);
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
      setState(288);
      o_variable();
      setState(290);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
      case 1: {
        setState(289);
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
      setState(292);
      mayorque_variable();
      setState(294);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
      case 1: {
        setState(293);
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
      setState(296);
      menorque_variable();
      setState(298);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
      case 1: {
        setState(297);
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
      setState(300);
      procedimiento_llamado();
      setState(302);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
      case 1: {
        setState(301);
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
      setState(304);
      rumbo_get();
      setState(306);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
      case 1: {
        setState(305);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(308);
      muestra();
      setState(310);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
      case 1: {
        setState(309);
        comentario_linea();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 35: {
      enterOuterAlt(_localctx, 35);
      setState(312);
      comentario();
      break;
    }

    case 36: {
      enterOuterAlt(_localctx, 36);
      setState(313);
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
  enterRule(_localctx, 12, LogotecGramarParser::RuleMuestra);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(316);
    match(LogotecGramarParser::MUESTRA);
    setState(319);
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
        setState(317);
        expr();
        break;
      }

      case LogotecGramarParser::RUMBO: {
        setState(318);
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
  enterRule(_localctx, 14, LogotecGramarParser::RuleRumbo_get);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
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
  enterRule(_localctx, 16, LogotecGramarParser::RuleComentario_linea);

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
  enterRule(_localctx, 18, LogotecGramarParser::RuleComentario);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
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
  enterRule(_localctx, 20, LogotecGramarParser::RuleProcedimiento_llamado);

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
    match(LogotecGramarParser::ID);
    setState(328);
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
  enterRule(_localctx, 22, LogotecGramarParser::RuleParametros_llamado);
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
    setState(330);
    match(LogotecGramarParser::T__0);
    setState(332);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 28) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 28)) & 306235995764819847) != 0)) {
      setState(331);
      lista_parametros_llamado();
    }
    setState(334);
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
  enterRule(_localctx, 24, LogotecGramarParser::RuleLista_parametros_llamado);
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
    expr();
    setState(341);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogotecGramarParser::T__2) {
      setState(337);
      match(LogotecGramarParser::T__2);
      setState(338);
      expr();
      setState(343);
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
  enterRule(_localctx, 26, LogotecGramarParser::RuleHaz_variable);

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
    match(LogotecGramarParser::HAZ);
    setState(345);
    match(LogotecGramarParser::ID);
    setState(346);
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
  enterRule(_localctx, 28, LogotecGramarParser::RuleInic_variable);

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
    match(LogotecGramarParser::INIC);
    setState(349);
    match(LogotecGramarParser::ID);
    setState(350);
    match(LogotecGramarParser::ASSIGN);
    setState(351);
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
  enterRule(_localctx, 30, LogotecGramarParser::RuleInc_variable);
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
    setState(353);
    match(LogotecGramarParser::INC);
    setState(354);
    match(LogotecGramarParser::T__0);
    setState(355);
    match(LogotecGramarParser::ID);
    setState(357);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 37) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 37)) & 597584603250689) != 0)) {
      setState(356);
      expr_mat_aritm();
    }
    setState(359);
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
  enterRule(_localctx, 32, LogotecGramarParser::RuleAvanza_variable);
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
    setState(361);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::AVANZA

    || _la == LogotecGramarParser::AV)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(362);
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
  enterRule(_localctx, 34, LogotecGramarParser::RuleRetrocede_variable);
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
    setState(364);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::RETROCEDE

    || _la == LogotecGramarParser::RE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(365);
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
  enterRule(_localctx, 36, LogotecGramarParser::RuleGira_derecha_variable);
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
    setState(367);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::GIRA_DERECHA

    || _la == LogotecGramarParser::GD)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(368);
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
  enterRule(_localctx, 38, LogotecGramarParser::RuleGira_izquierda_variable);
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
    setState(370);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::GIRA_IZQUIERDA

    || _la == LogotecGramarParser::GI)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(371);
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
  enterRule(_localctx, 40, LogotecGramarParser::RuleOcultar_tortuga_variable);
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
  enterRule(_localctx, 42, LogotecGramarParser::RulePonpos_variable);

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
    match(LogotecGramarParser::PONPOS);
    setState(376);
    match(LogotecGramarParser::T__0);
    setState(377);
    expr_mat_aritm();
    setState(378);
    expr_mat_aritm();
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
  enterRule(_localctx, 44, LogotecGramarParser::RulePonxy_variable);

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
    match(LogotecGramarParser::PONXY);
    setState(382);
    expr_mat_aritm();
    setState(383);
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
  enterRule(_localctx, 46, LogotecGramarParser::RulePonrumbo_variable);

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
    match(LogotecGramarParser::PONRUMBO);
    setState(386);
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
  enterRule(_localctx, 48, LogotecGramarParser::RulePonx_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(388);
    match(LogotecGramarParser::PONX);
    setState(389);
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
  enterRule(_localctx, 50, LogotecGramarParser::RulePony_variable);

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
    match(LogotecGramarParser::PONY);
    setState(392);
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
  enterRule(_localctx, 52, LogotecGramarParser::RuleBajalapiz_variable);
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
    setState(394);
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
  enterRule(_localctx, 54, LogotecGramarParser::RuleSubelapiz_variable);
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
    setState(396);
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
  enterRule(_localctx, 56, LogotecGramarParser::RulePoncolorlapiz_variable);
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
    setState(398);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::PONCOLORLAPIZ

    || _la == LogotecGramarParser::PCL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }

    setState(399);
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
  enterRule(_localctx, 58, LogotecGramarParser::RuleCentro_variable);

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
  enterRule(_localctx, 60, LogotecGramarParser::RuleEsperar_variable);

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
    match(LogotecGramarParser::ESPERAR);
    setState(404);
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
  enterRule(_localctx, 62, LogotecGramarParser::RuleEjecuta_variable);
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
    setState(406);
    match(LogotecGramarParser::EJECUTA);
    setState(407);
    match(LogotecGramarParser::T__0);
    setState(411);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32480690160) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 24119295) != 0)) {
      setState(408);
      instruccion();
      setState(413);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(414);
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
  enterRule(_localctx, 64, LogotecGramarParser::RuleRepite_variable);
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
    match(LogotecGramarParser::REPITE);
    setState(417);
    antlrcpp::downCast<Repite_variableContext *>(_localctx)->e = expr_mat_aritm();
    setState(418);
    match(LogotecGramarParser::T__0);
    setState(422);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32480690160) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 24119295) != 0)) {
      setState(419);
      instruccion();
      setState(424);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(425);
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
  enterRule(_localctx, 66, LogotecGramarParser::RuleExp_logica);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(429);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(427);
      exp_logica_operaciones();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(428);
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
  enterRule(_localctx, 68, LogotecGramarParser::RuleExp_logica_operaciones);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(440);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::IGUALESQ: {
        enterOuterAlt(_localctx, 1);
        setState(431);
        iguales_variable();
        break;
      }

      case LogotecGramarParser::Y: {
        enterOuterAlt(_localctx, 2);
        setState(432);
        y_variable();
        break;
      }

      case LogotecGramarParser::O: {
        enterOuterAlt(_localctx, 3);
        setState(433);
        o_variable();
        break;
      }

      case LogotecGramarParser::MAYORQUEQ: {
        enterOuterAlt(_localctx, 4);
        setState(434);
        mayorque_variable();
        break;
      }

      case LogotecGramarParser::TRUE:
      case LogotecGramarParser::FALSE: {
        enterOuterAlt(_localctx, 5);
        setState(435);
        logico();
        break;
      }

      case LogotecGramarParser::ID: {
        enterOuterAlt(_localctx, 6);
        setState(436);
        match(LogotecGramarParser::ID);
        break;
      }

      case LogotecGramarParser::NUMBER: {
        enterOuterAlt(_localctx, 7);
        setState(437);
        match(LogotecGramarParser::NUMBER);
        break;
      }

      case LogotecGramarParser::CADENA_TEXTO: {
        enterOuterAlt(_localctx, 8);
        setState(438);
        match(LogotecGramarParser::CADENA_TEXTO);
        break;
      }

      case LogotecGramarParser::MENORQUEQ: {
        enterOuterAlt(_localctx, 9);
        setState(439);
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
  size_t startState = 70;
  enterRecursionRule(_localctx, 70, LogotecGramarParser::RuleExp_logicas_expr, precedence);

    

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
    setState(450);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::NOT: {
        _localctx = _tracker.createInstance<NegacionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(443);
        match(LogotecGramarParser::NOT);
        setState(444);
        exp_logicas_expr(5);
        break;
      }

      case LogotecGramarParser::PAR_OPEN: {
        _localctx = _tracker.createInstance<ExpLogicaParentesisContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(445);
        match(LogotecGramarParser::PAR_OPEN);
        setState(446);
        exp_logicas_expr(0);
        setState(447);
        match(LogotecGramarParser::PAR_CLOSE);
        break;
      }

      case LogotecGramarParser::TRUE:
      case LogotecGramarParser::FALSE:
      case LogotecGramarParser::NUMBER:
      case LogotecGramarParser::CADENA_TEXTO:
      case LogotecGramarParser::IGUALESQ:
      case LogotecGramarParser::Y:
      case LogotecGramarParser::O:
      case LogotecGramarParser::MAYORQUEQ:
      case LogotecGramarParser::MENORQUEQ:
      case LogotecGramarParser::ID: {
        _localctx = _tracker.createInstance<ExpLogicaSimpleContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(449);
        exp_logica_operaciones();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(470);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(468);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<OperacionLogicaSimpleContext>(_tracker.createInstance<Exp_logicas_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp_logicas_expr);
          setState(452);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(453);
          operador_logico();
          setState(454);
          exp_logicas_expr(4);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<OperacionLogicaComplejaContext>(_tracker.createInstance<Exp_logicas_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp_logicas_expr);
          setState(456);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(462);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(457);
              andor();
              setState(458);
              exp_logicas_expr(0); 
            }
            setState(464);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
          }

          setState(465);
          andor();
          setState(466);
          exp_logicas_expr(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(472);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
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
  enterRule(_localctx, 72, LogotecGramarParser::RuleAndor);
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
    setState(473);
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
  enterRule(_localctx, 74, LogotecGramarParser::RuleSi_variable);
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
    setState(475);
    match(LogotecGramarParser::SI);
    setState(476);
    match(LogotecGramarParser::PAR_OPEN);
    setState(477);
    exp_logica();
    setState(478);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(479);
    match(LogotecGramarParser::T__0);
    setState(483);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32480690160) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 24119295) != 0)) {
      setState(480);
      instruccion();
      setState(485);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(486);
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

LogotecGramarParser::Si_variableContext* LogotecGramarParser::Si_sino_variableContext::si_variable() {
  return getRuleContext<LogotecGramarParser::Si_variableContext>(0);
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
  enterRule(_localctx, 76, LogotecGramarParser::RuleSi_sino_variable);
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
    setState(488);
    si_variable();
    setState(489);
    match(LogotecGramarParser::T__0);
    setState(493);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32480690160) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 24119295) != 0)) {
      setState(490);
      instruccion();
      setState(495);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(496);
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
  enterRule(_localctx, 78, LogotecGramarParser::RuleHaz_hasta_variable);
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
    setState(498);
    match(LogotecGramarParser::HAZ_HASTA);
    setState(499);
    match(LogotecGramarParser::T__0);
    setState(503);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32480690160) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 24119295) != 0)) {
      setState(500);
      instruccion();
      setState(505);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(506);
    match(LogotecGramarParser::T__1);
    setState(507);
    match(LogotecGramarParser::PAR_OPEN);
    setState(508);
    exp_logica();
    setState(509);
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

LogotecGramarParser::Exp_logicaContext* LogotecGramarParser::Hasta_variableContext::exp_logica() {
  return getRuleContext<LogotecGramarParser::Exp_logicaContext>(0);
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
  enterRule(_localctx, 80, LogotecGramarParser::RuleHasta_variable);
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
    match(LogotecGramarParser::HASTA);
    setState(512);
    match(LogotecGramarParser::PAR_OPEN);
    setState(513);
    exp_logica();
    setState(514);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(515);
    match(LogotecGramarParser::T__0);
    setState(519);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32480690160) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 24119295) != 0)) {
      setState(516);
      instruccion();
      setState(521);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(522);
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

LogotecGramarParser::Exp_logicaContext* LogotecGramarParser::Haz_mientras_variableContext::exp_logica() {
  return getRuleContext<LogotecGramarParser::Exp_logicaContext>(0);
}

std::vector<LogotecGramarParser::InstruccionContext *> LogotecGramarParser::Haz_mientras_variableContext::instruccion() {
  return getRuleContexts<LogotecGramarParser::InstruccionContext>();
}

LogotecGramarParser::InstruccionContext* LogotecGramarParser::Haz_mientras_variableContext::instruccion(size_t i) {
  return getRuleContext<LogotecGramarParser::InstruccionContext>(i);
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
  enterRule(_localctx, 82, LogotecGramarParser::RuleHaz_mientras_variable);
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
    setState(524);
    match(LogotecGramarParser::HAZ_MIENTRAS);
    setState(525);
    match(LogotecGramarParser::T__0);
    setState(529);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32480690160) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 24119295) != 0)) {
      setState(526);
      instruccion();
      setState(531);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(532);
    match(LogotecGramarParser::T__1);
    setState(533);
    match(LogotecGramarParser::T__0);
    setState(534);
    exp_logica();
    setState(535);
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

LogotecGramarParser::Exp_logicaContext* LogotecGramarParser::Mientras_variableContext::exp_logica() {
  return getRuleContext<LogotecGramarParser::Exp_logicaContext>(0);
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
  enterRule(_localctx, 84, LogotecGramarParser::RuleMientras_variable);
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
    setState(537);
    match(LogotecGramarParser::MIENTRAS);
    setState(538);
    match(LogotecGramarParser::PAR_OPEN);
    setState(539);
    exp_logica();
    setState(540);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(541);
    match(LogotecGramarParser::T__0);
    setState(545);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32480690160) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 24119295) != 0)) {
      setState(542);
      instruccion();
      setState(547);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(548);
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
  enterRule(_localctx, 86, LogotecGramarParser::RuleIguales_variable);

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
    match(LogotecGramarParser::IGUALESQ);
    setState(551);
    exp_logica();
    setState(552);
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
  enterRule(_localctx, 88, LogotecGramarParser::RuleY_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(554);
    match(LogotecGramarParser::Y);
    setState(555);
    exp_logica();
    setState(556);
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
  enterRule(_localctx, 90, LogotecGramarParser::RuleO_variable);

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
    match(LogotecGramarParser::O);
    setState(559);
    exp_logica();
    setState(560);
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
  enterRule(_localctx, 92, LogotecGramarParser::RuleMayorque_variable);

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
    match(LogotecGramarParser::MAYORQUEQ);
    setState(563);
    expr_mat_aritm();
    setState(564);
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
  enterRule(_localctx, 94, LogotecGramarParser::RuleMenorque_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(566);
    match(LogotecGramarParser::MENORQUEQ);
    setState(567);
    expr_mat_aritm();
    setState(568);
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
  enterRule(_localctx, 96, LogotecGramarParser::RuleColores_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(572);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::AZUL:
      case LogotecGramarParser::NEGRO:
      case LogotecGramarParser::ROJO: {
        enterOuterAlt(_localctx, 1);
        setState(570);
        colores();
        break;
      }

      case LogotecGramarParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(571);
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
  enterRule(_localctx, 98, LogotecGramarParser::RuleColores);
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
    setState(574);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1879048192) != 0))) {
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
  enterRule(_localctx, 100, LogotecGramarParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(582);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(576);
      match(LogotecGramarParser::CADENA_TEXTO);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(577);
      match(LogotecGramarParser::ID);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(578);
      match(LogotecGramarParser::NUMBER);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(579);
      exp_integer();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(580);
      exp_logica();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(581);
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
  enterRule(_localctx, 102, LogotecGramarParser::RuleExp_integer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(587);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(584);
      exp_matematica();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(585);
      exp_aritmetica();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(586);
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
  enterRule(_localctx, 104, LogotecGramarParser::RuleExp_aritmetica);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(615);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::PAR_OPEN: {
        enterOuterAlt(_localctx, 1);
        setState(589);
        match(LogotecGramarParser::PAR_OPEN);
        setState(590);
        exp_matematica();
        setState(596);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(591);
            operador();
            setState(592);
            exp_matematica(); 
          }
          setState(598);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
        }
        setState(599);
        operador();
        setState(600);
        exp_matematica();
        setState(601);
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
        setState(603);
        exp_matematica();
        setState(609);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(604);
            operador();
            setState(605);
            exp_matematica(); 
          }
          setState(611);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
        }
        setState(612);
        operador();
        setState(613);
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
  enterRule(_localctx, 106, LogotecGramarParser::RuleExp_matematica);

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
      case LogotecGramarParser::DIFERENCIA: {
        enterOuterAlt(_localctx, 1);
        setState(617);
        diferencia_expr();
        break;
      }

      case LogotecGramarParser::AZAR: {
        enterOuterAlt(_localctx, 2);
        setState(618);
        azar_expr();
        break;
      }

      case LogotecGramarParser::PRODUCTO: {
        enterOuterAlt(_localctx, 3);
        setState(619);
        producto_expr();
        break;
      }

      case LogotecGramarParser::POTENCIA: {
        enterOuterAlt(_localctx, 4);
        setState(620);
        potencia_expr();
        break;
      }

      case LogotecGramarParser::DIVISION: {
        enterOuterAlt(_localctx, 5);
        setState(621);
        division_expr();
        break;
      }

      case LogotecGramarParser::SUMA: {
        enterOuterAlt(_localctx, 6);
        setState(622);
        suma_expr();
        break;
      }

      case LogotecGramarParser::ID: {
        enterOuterAlt(_localctx, 7);
        setState(623);
        match(LogotecGramarParser::ID);
        break;
      }

      case LogotecGramarParser::NUMBER: {
        enterOuterAlt(_localctx, 8);
        setState(624);
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
  enterRule(_localctx, 108, LogotecGramarParser::RuleExpr_mat_aritm);

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(627);
      exp_aritmetica();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(628);
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
  enterRule(_localctx, 110, LogotecGramarParser::RuleLogico);
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
  enterRule(_localctx, 112, LogotecGramarParser::RuleValor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(636);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(633);
        match(LogotecGramarParser::NUMBER);
        break;
      }

      case LogotecGramarParser::TRUE:
      case LogotecGramarParser::FALSE: {
        enterOuterAlt(_localctx, 2);
        setState(634);
        logico();
        break;
      }

      case LogotecGramarParser::CADENA_TEXTO: {
        enterOuterAlt(_localctx, 3);
        setState(635);
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
  enterRule(_localctx, 114, LogotecGramarParser::RuleOperador_logico);
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
    setState(638);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 570831252769210368) != 0))) {
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
  enterRule(_localctx, 116, LogotecGramarParser::RuleOperador);
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
    setState(640);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 65970697666560) != 0))) {
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
  enterRule(_localctx, 118, LogotecGramarParser::RuleDiferencia_expr);

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
    setState(642);
    match(LogotecGramarParser::DIFERENCIA);

    setState(643);
    expr_mat_aritm();
    setState(645); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(644);
              expr_mat_aritm();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(647); 
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
  enterRule(_localctx, 120, LogotecGramarParser::RuleAzar_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(649);
    match(LogotecGramarParser::AZAR);

    setState(650);
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
  enterRule(_localctx, 122, LogotecGramarParser::RuleProducto_expr);

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
    setState(652);
    match(LogotecGramarParser::PRODUCTO);

    setState(653);
    expr_mat_aritm();
    setState(655); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(654);
              expr_mat_aritm();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(657); 
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
  enterRule(_localctx, 124, LogotecGramarParser::RulePotencia_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(659);
    match(LogotecGramarParser::POTENCIA);

    setState(660);
    expr_mat_aritm();

    setState(661);
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
  enterRule(_localctx, 126, LogotecGramarParser::RuleDivision_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(663);
    match(LogotecGramarParser::DIVISION);

    setState(664);
    expr_mat_aritm();

    setState(665);
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
  enterRule(_localctx, 128, LogotecGramarParser::RuleSuma_expr);

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
    setState(667);
    match(LogotecGramarParser::SUMA);

    setState(668);
    expr_mat_aritm();
    setState(670); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(669);
              expr_mat_aritm();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(672); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx);
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
    case 35: return exp_logicas_exprSempred(antlrcpp::downCast<Exp_logicas_exprContext *>(context), predicateIndex);

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
