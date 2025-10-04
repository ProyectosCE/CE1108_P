
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
      "lista_parametros", "instruccion", "comentario_linea", "comentario", 
      "procedimiento_llamado", "parametros_llamado", "lista_parametros_llamado", 
      "haz_variable", "inic_variable", "inc_variable", "avanza_variable", 
      "retrocede_variable", "gira_derecha_variable", "gira_izquierda_variable", 
      "ocultar_tortuga_variable", "ponpos_variable", "ponxy_variable", "ponrumbo_variable", 
      "ponx_variable", "pony_variable", "bajalapiz_variable", "subelapiz_variable", 
      "poncolorlapiz_variable", "centro_variable", "esperar_variable", "ejecuta_variable", 
      "repite_variable", "si_variable", "si_sino_variable", "haz_hasta_variable", 
      "hasta_variable", "haz_mientras_variable", "mientras_variable", "iguales_variable", 
      "y_variable", "o_variable", "mayorque_variable", "menorque_variable", 
      "colores", "expr", "exp_logica", "exp_integer", "exp_aritmetica", 
      "exp_matematica", "expr_mat_aritm", "logico", "valor", "operador", 
      "diferencia_expr", "azar_expr", "producto_expr", "potencia_expr", 
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
  	4,1,87,629,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,1,0,1,0,1,0,5,0,120,8,0,10,0,12,0,123,9,0,1,0,1,0,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,5,1,134,8,1,10,1,12,1,137,9,1,1,1,3,1,140,8,1,1,
  	1,1,1,1,2,1,2,3,2,146,8,2,1,2,1,2,1,3,4,3,151,8,3,11,3,12,3,152,1,4,1,
  	4,1,4,5,4,158,8,4,10,4,12,4,161,9,4,1,5,1,5,3,5,165,8,5,1,5,1,5,3,5,169,
  	8,5,1,5,1,5,3,5,173,8,5,1,5,1,5,3,5,177,8,5,1,5,1,5,3,5,181,8,5,1,5,1,
  	5,3,5,185,8,5,1,5,1,5,3,5,189,8,5,1,5,1,5,3,5,193,8,5,1,5,1,5,3,5,197,
  	8,5,1,5,1,5,3,5,201,8,5,1,5,1,5,3,5,205,8,5,1,5,1,5,3,5,209,8,5,1,5,1,
  	5,3,5,213,8,5,1,5,1,5,3,5,217,8,5,1,5,1,5,3,5,221,8,5,1,5,1,5,3,5,225,
  	8,5,1,5,1,5,3,5,229,8,5,1,5,1,5,3,5,233,8,5,1,5,1,5,3,5,237,8,5,1,5,1,
  	5,3,5,241,8,5,1,5,1,5,3,5,245,8,5,1,5,1,5,3,5,249,8,5,1,5,1,5,3,5,253,
  	8,5,1,5,1,5,3,5,257,8,5,1,5,1,5,3,5,261,8,5,1,5,1,5,3,5,265,8,5,1,5,1,
  	5,3,5,269,8,5,1,5,1,5,3,5,273,8,5,1,5,1,5,3,5,277,8,5,1,5,1,5,3,5,281,
  	8,5,1,5,1,5,3,5,285,8,5,1,5,1,5,3,5,289,8,5,1,5,3,5,292,8,5,1,6,1,6,1,
  	7,1,7,1,8,1,8,1,8,1,9,1,9,3,9,303,8,9,1,9,1,9,1,10,1,10,1,10,5,10,310,
  	8,10,10,10,12,10,313,9,10,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,
  	1,13,1,13,1,13,1,13,3,13,328,8,13,1,13,1,13,1,14,1,14,1,14,1,15,1,15,
  	1,15,1,16,1,16,1,16,1,17,1,17,1,17,1,18,1,18,1,19,1,19,1,19,1,19,1,19,
  	1,19,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,22,1,22,1,22,1,23,1,23,1,23,
  	1,24,1,24,1,25,1,25,1,26,1,26,1,26,3,26,372,8,26,1,27,1,27,1,28,1,28,
  	1,28,1,29,1,29,1,29,5,29,382,8,29,10,29,12,29,385,9,29,1,29,1,29,1,30,
  	1,30,1,30,1,30,5,30,393,8,30,10,30,12,30,396,9,30,1,30,1,30,1,31,1,31,
  	1,31,1,31,1,31,1,31,5,31,406,8,31,10,31,12,31,409,9,31,1,31,1,31,1,32,
  	1,32,1,32,1,32,1,32,1,32,5,32,419,8,32,10,32,12,32,422,9,32,1,32,1,32,
  	1,32,5,32,427,8,32,10,32,12,32,430,9,32,1,32,1,32,1,33,1,33,1,33,5,33,
  	437,8,33,10,33,12,33,440,9,33,1,33,1,33,1,33,1,33,1,33,1,34,1,34,1,34,
  	1,34,1,34,1,34,5,34,453,8,34,10,34,12,34,456,9,34,1,34,1,34,1,35,1,35,
  	1,35,5,35,463,8,35,10,35,12,35,466,9,35,1,35,1,35,1,35,4,35,471,8,35,
  	11,35,12,35,472,1,35,1,35,1,36,1,36,1,36,1,36,1,36,1,36,5,36,483,8,36,
  	10,36,12,36,486,9,36,1,36,1,36,1,37,1,37,1,37,1,37,1,38,1,38,1,38,1,38,
  	1,38,1,38,1,38,1,38,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,40,1,40,
  	1,40,1,40,1,41,1,41,1,41,1,41,1,42,1,42,1,43,1,43,1,43,1,43,1,43,1,43,
  	3,43,526,8,43,1,44,1,44,1,44,1,44,1,44,1,44,3,44,534,8,44,1,45,1,45,3,
  	45,538,8,45,1,46,1,46,1,46,1,46,1,46,5,46,545,8,46,10,46,12,46,548,9,
  	46,1,46,1,46,1,46,1,46,1,46,1,46,1,46,1,46,5,46,558,8,46,10,46,12,46,
  	561,9,46,1,46,1,46,1,46,3,46,566,8,46,1,47,1,47,1,47,1,47,1,47,1,47,1,
  	47,1,47,3,47,576,8,47,1,48,1,48,3,48,580,8,48,1,49,1,49,1,50,1,50,1,50,
  	3,50,587,8,50,1,51,1,51,1,52,1,52,1,52,4,52,594,8,52,11,52,12,52,595,
  	1,53,1,53,1,53,1,54,1,54,1,54,4,54,604,8,54,11,54,12,54,605,1,55,1,55,
  	1,55,4,55,611,8,55,11,55,12,55,612,1,56,1,56,1,56,4,56,618,8,56,11,56,
  	12,56,619,1,57,1,57,1,57,4,57,625,8,57,11,57,12,57,626,1,57,0,0,58,0,
  	2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,
  	52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,
  	98,100,102,104,106,108,110,112,114,0,12,2,0,35,35,84,84,1,0,7,8,1,0,9,
  	10,1,0,11,12,1,0,13,14,1,0,15,16,1,0,22,23,1,0,24,25,1,0,29,30,1,0,26,
  	28,1,0,33,34,1,0,40,43,685,0,121,1,0,0,0,2,126,1,0,0,0,4,143,1,0,0,0,
  	6,150,1,0,0,0,8,154,1,0,0,0,10,291,1,0,0,0,12,293,1,0,0,0,14,295,1,0,
  	0,0,16,297,1,0,0,0,18,300,1,0,0,0,20,306,1,0,0,0,22,314,1,0,0,0,24,318,
  	1,0,0,0,26,323,1,0,0,0,28,331,1,0,0,0,30,334,1,0,0,0,32,337,1,0,0,0,34,
  	340,1,0,0,0,36,343,1,0,0,0,38,345,1,0,0,0,40,351,1,0,0,0,42,355,1,0,0,
  	0,44,358,1,0,0,0,46,361,1,0,0,0,48,364,1,0,0,0,50,366,1,0,0,0,52,368,
  	1,0,0,0,54,373,1,0,0,0,56,375,1,0,0,0,58,378,1,0,0,0,60,388,1,0,0,0,62,
  	399,1,0,0,0,64,412,1,0,0,0,66,433,1,0,0,0,68,446,1,0,0,0,70,459,1,0,0,
  	0,72,476,1,0,0,0,74,489,1,0,0,0,76,493,1,0,0,0,78,501,1,0,0,0,80,509,
  	1,0,0,0,82,513,1,0,0,0,84,517,1,0,0,0,86,525,1,0,0,0,88,533,1,0,0,0,90,
  	537,1,0,0,0,92,565,1,0,0,0,94,575,1,0,0,0,96,579,1,0,0,0,98,581,1,0,0,
  	0,100,586,1,0,0,0,102,588,1,0,0,0,104,590,1,0,0,0,106,597,1,0,0,0,108,
  	600,1,0,0,0,110,607,1,0,0,0,112,614,1,0,0,0,114,621,1,0,0,0,116,120,5,
  	85,0,0,117,120,3,6,3,0,118,120,3,2,1,0,119,116,1,0,0,0,119,117,1,0,0,
  	0,119,118,1,0,0,0,120,123,1,0,0,0,121,119,1,0,0,0,121,122,1,0,0,0,122,
  	124,1,0,0,0,123,121,1,0,0,0,124,125,5,0,0,1,125,1,1,0,0,0,126,127,5,81,
  	0,0,127,128,5,84,0,0,128,129,3,4,2,0,129,135,5,85,0,0,130,131,3,6,3,0,
  	131,132,5,85,0,0,132,134,1,0,0,0,133,130,1,0,0,0,134,137,1,0,0,0,135,
  	133,1,0,0,0,135,136,1,0,0,0,136,139,1,0,0,0,137,135,1,0,0,0,138,140,3,
  	6,3,0,139,138,1,0,0,0,139,140,1,0,0,0,140,141,1,0,0,0,141,142,5,82,0,
  	0,142,3,1,0,0,0,143,145,5,1,0,0,144,146,3,8,4,0,145,144,1,0,0,0,145,146,
  	1,0,0,0,146,147,1,0,0,0,147,148,5,2,0,0,148,5,1,0,0,0,149,151,3,10,5,
  	0,150,149,1,0,0,0,151,152,1,0,0,0,152,150,1,0,0,0,152,153,1,0,0,0,153,
  	7,1,0,0,0,154,159,5,84,0,0,155,156,5,3,0,0,156,158,5,84,0,0,157,155,1,
  	0,0,0,158,161,1,0,0,0,159,157,1,0,0,0,159,160,1,0,0,0,160,9,1,0,0,0,161,
  	159,1,0,0,0,162,164,3,22,11,0,163,165,3,12,6,0,164,163,1,0,0,0,164,165,
  	1,0,0,0,165,292,1,0,0,0,166,168,3,24,12,0,167,169,3,12,6,0,168,167,1,
  	0,0,0,168,169,1,0,0,0,169,292,1,0,0,0,170,172,3,26,13,0,171,173,3,12,
  	6,0,172,171,1,0,0,0,172,173,1,0,0,0,173,292,1,0,0,0,174,176,3,28,14,0,
  	175,177,3,12,6,0,176,175,1,0,0,0,176,177,1,0,0,0,177,292,1,0,0,0,178,
  	180,3,30,15,0,179,181,3,12,6,0,180,179,1,0,0,0,180,181,1,0,0,0,181,292,
  	1,0,0,0,182,184,3,32,16,0,183,185,3,12,6,0,184,183,1,0,0,0,184,185,1,
  	0,0,0,185,292,1,0,0,0,186,188,3,34,17,0,187,189,3,12,6,0,188,187,1,0,
  	0,0,188,189,1,0,0,0,189,292,1,0,0,0,190,192,3,36,18,0,191,193,3,12,6,
  	0,192,191,1,0,0,0,192,193,1,0,0,0,193,292,1,0,0,0,194,196,3,38,19,0,195,
  	197,3,12,6,0,196,195,1,0,0,0,196,197,1,0,0,0,197,292,1,0,0,0,198,200,
  	3,40,20,0,199,201,3,12,6,0,200,199,1,0,0,0,200,201,1,0,0,0,201,292,1,
  	0,0,0,202,204,3,42,21,0,203,205,3,12,6,0,204,203,1,0,0,0,204,205,1,0,
  	0,0,205,292,1,0,0,0,206,208,3,44,22,0,207,209,3,12,6,0,208,207,1,0,0,
  	0,208,209,1,0,0,0,209,292,1,0,0,0,210,212,3,46,23,0,211,213,3,12,6,0,
  	212,211,1,0,0,0,212,213,1,0,0,0,213,292,1,0,0,0,214,216,3,48,24,0,215,
  	217,3,12,6,0,216,215,1,0,0,0,216,217,1,0,0,0,217,292,1,0,0,0,218,220,
  	3,50,25,0,219,221,3,12,6,0,220,219,1,0,0,0,220,221,1,0,0,0,221,292,1,
  	0,0,0,222,224,3,52,26,0,223,225,3,12,6,0,224,223,1,0,0,0,224,225,1,0,
  	0,0,225,292,1,0,0,0,226,228,3,54,27,0,227,229,3,12,6,0,228,227,1,0,0,
  	0,228,229,1,0,0,0,229,292,1,0,0,0,230,232,3,56,28,0,231,233,3,12,6,0,
  	232,231,1,0,0,0,232,233,1,0,0,0,233,292,1,0,0,0,234,236,3,58,29,0,235,
  	237,3,12,6,0,236,235,1,0,0,0,236,237,1,0,0,0,237,292,1,0,0,0,238,240,
  	3,60,30,0,239,241,3,12,6,0,240,239,1,0,0,0,240,241,1,0,0,0,241,292,1,
  	0,0,0,242,244,3,64,32,0,243,245,3,12,6,0,244,243,1,0,0,0,244,245,1,0,
  	0,0,245,292,1,0,0,0,246,248,3,62,31,0,247,249,3,12,6,0,248,247,1,0,0,
  	0,248,249,1,0,0,0,249,292,1,0,0,0,250,252,3,66,33,0,251,253,3,12,6,0,
  	252,251,1,0,0,0,252,253,1,0,0,0,253,292,1,0,0,0,254,256,3,68,34,0,255,
  	257,3,12,6,0,256,255,1,0,0,0,256,257,1,0,0,0,257,292,1,0,0,0,258,260,
  	3,70,35,0,259,261,3,12,6,0,260,259,1,0,0,0,260,261,1,0,0,0,261,292,1,
  	0,0,0,262,264,3,72,36,0,263,265,3,12,6,0,264,263,1,0,0,0,264,265,1,0,
  	0,0,265,292,1,0,0,0,266,268,3,74,37,0,267,269,3,12,6,0,268,267,1,0,0,
  	0,268,269,1,0,0,0,269,292,1,0,0,0,270,272,3,76,38,0,271,273,3,12,6,0,
  	272,271,1,0,0,0,272,273,1,0,0,0,273,292,1,0,0,0,274,276,3,78,39,0,275,
  	277,3,12,6,0,276,275,1,0,0,0,276,277,1,0,0,0,277,292,1,0,0,0,278,280,
  	3,80,40,0,279,281,3,12,6,0,280,279,1,0,0,0,280,281,1,0,0,0,281,292,1,
  	0,0,0,282,284,3,82,41,0,283,285,3,12,6,0,284,283,1,0,0,0,284,285,1,0,
  	0,0,285,292,1,0,0,0,286,288,3,16,8,0,287,289,3,12,6,0,288,287,1,0,0,0,
  	288,289,1,0,0,0,289,292,1,0,0,0,290,292,3,14,7,0,291,162,1,0,0,0,291,
  	166,1,0,0,0,291,170,1,0,0,0,291,174,1,0,0,0,291,178,1,0,0,0,291,182,1,
  	0,0,0,291,186,1,0,0,0,291,190,1,0,0,0,291,194,1,0,0,0,291,198,1,0,0,0,
  	291,202,1,0,0,0,291,206,1,0,0,0,291,210,1,0,0,0,291,214,1,0,0,0,291,218,
  	1,0,0,0,291,222,1,0,0,0,291,226,1,0,0,0,291,230,1,0,0,0,291,234,1,0,0,
  	0,291,238,1,0,0,0,291,242,1,0,0,0,291,246,1,0,0,0,291,250,1,0,0,0,291,
  	254,1,0,0,0,291,258,1,0,0,0,291,262,1,0,0,0,291,266,1,0,0,0,291,270,1,
  	0,0,0,291,274,1,0,0,0,291,278,1,0,0,0,291,282,1,0,0,0,291,286,1,0,0,0,
  	291,290,1,0,0,0,292,11,1,0,0,0,293,294,5,87,0,0,294,13,1,0,0,0,295,296,
  	5,87,0,0,296,15,1,0,0,0,297,298,5,84,0,0,298,299,3,18,9,0,299,17,1,0,
  	0,0,300,302,5,1,0,0,301,303,3,20,10,0,302,301,1,0,0,0,302,303,1,0,0,0,
  	303,304,1,0,0,0,304,305,5,2,0,0,305,19,1,0,0,0,306,311,3,86,43,0,307,
  	308,5,3,0,0,308,310,3,86,43,0,309,307,1,0,0,0,310,313,1,0,0,0,311,309,
  	1,0,0,0,311,312,1,0,0,0,312,21,1,0,0,0,313,311,1,0,0,0,314,315,5,4,0,
  	0,315,316,5,84,0,0,316,317,3,86,43,0,317,23,1,0,0,0,318,319,5,5,0,0,319,
  	320,5,84,0,0,320,321,5,57,0,0,321,322,3,86,43,0,322,25,1,0,0,0,323,324,
  	5,6,0,0,324,325,5,1,0,0,325,327,5,84,0,0,326,328,7,0,0,0,327,326,1,0,
  	0,0,327,328,1,0,0,0,328,329,1,0,0,0,329,330,5,2,0,0,330,27,1,0,0,0,331,
  	332,7,1,0,0,332,333,3,86,43,0,333,29,1,0,0,0,334,335,7,2,0,0,335,336,
  	3,86,43,0,336,31,1,0,0,0,337,338,7,3,0,0,338,339,3,86,43,0,339,33,1,0,
  	0,0,340,341,7,4,0,0,341,342,3,86,43,0,342,35,1,0,0,0,343,344,7,5,0,0,
  	344,37,1,0,0,0,345,346,5,17,0,0,346,347,5,1,0,0,347,348,5,35,0,0,348,
  	349,5,35,0,0,349,350,5,2,0,0,350,39,1,0,0,0,351,352,5,18,0,0,352,353,
  	5,35,0,0,353,354,5,35,0,0,354,41,1,0,0,0,355,356,5,19,0,0,356,357,5,35,
  	0,0,357,43,1,0,0,0,358,359,5,20,0,0,359,360,5,35,0,0,360,45,1,0,0,0,361,
  	362,5,21,0,0,362,363,5,35,0,0,363,47,1,0,0,0,364,365,7,6,0,0,365,49,1,
  	0,0,0,366,367,7,7,0,0,367,51,1,0,0,0,368,371,7,8,0,0,369,372,3,84,42,
  	0,370,372,5,84,0,0,371,369,1,0,0,0,371,370,1,0,0,0,372,53,1,0,0,0,373,
  	374,5,31,0,0,374,55,1,0,0,0,375,376,5,32,0,0,376,377,5,35,0,0,377,57,
  	1,0,0,0,378,379,5,83,0,0,379,383,5,1,0,0,380,382,3,10,5,0,381,380,1,0,
  	0,0,382,385,1,0,0,0,383,381,1,0,0,0,383,384,1,0,0,0,384,386,1,0,0,0,385,
  	383,1,0,0,0,386,387,5,2,0,0,387,59,1,0,0,0,388,389,5,63,0,0,389,390,5,
  	35,0,0,390,394,5,1,0,0,391,393,3,10,5,0,392,391,1,0,0,0,393,396,1,0,0,
  	0,394,392,1,0,0,0,394,395,1,0,0,0,395,397,1,0,0,0,396,394,1,0,0,0,397,
  	398,5,2,0,0,398,61,1,0,0,0,399,400,5,64,0,0,400,401,5,60,0,0,401,402,
  	3,86,43,0,402,403,5,61,0,0,403,407,5,1,0,0,404,406,3,10,5,0,405,404,1,
  	0,0,0,406,409,1,0,0,0,407,405,1,0,0,0,407,408,1,0,0,0,408,410,1,0,0,0,
  	409,407,1,0,0,0,410,411,5,2,0,0,411,63,1,0,0,0,412,413,5,64,0,0,413,414,
  	5,60,0,0,414,415,3,86,43,0,415,416,5,61,0,0,416,420,5,1,0,0,417,419,3,
  	10,5,0,418,417,1,0,0,0,419,422,1,0,0,0,420,418,1,0,0,0,420,421,1,0,0,
  	0,421,423,1,0,0,0,422,420,1,0,0,0,423,424,5,2,0,0,424,428,5,1,0,0,425,
  	427,3,10,5,0,426,425,1,0,0,0,427,430,1,0,0,0,428,426,1,0,0,0,428,429,
  	1,0,0,0,429,431,1,0,0,0,430,428,1,0,0,0,431,432,5,2,0,0,432,65,1,0,0,
  	0,433,434,5,65,0,0,434,438,5,1,0,0,435,437,3,10,5,0,436,435,1,0,0,0,437,
  	440,1,0,0,0,438,436,1,0,0,0,438,439,1,0,0,0,439,441,1,0,0,0,440,438,1,
  	0,0,0,441,442,5,2,0,0,442,443,5,60,0,0,443,444,3,86,43,0,444,445,5,61,
  	0,0,445,67,1,0,0,0,446,447,5,66,0,0,447,448,5,60,0,0,448,449,3,86,43,
  	0,449,450,5,61,0,0,450,454,5,1,0,0,451,453,3,10,5,0,452,451,1,0,0,0,453,
  	456,1,0,0,0,454,452,1,0,0,0,454,455,1,0,0,0,455,457,1,0,0,0,456,454,1,
  	0,0,0,457,458,5,2,0,0,458,69,1,0,0,0,459,460,5,67,0,0,460,464,5,1,0,0,
  	461,463,3,10,5,0,462,461,1,0,0,0,463,466,1,0,0,0,464,462,1,0,0,0,464,
  	465,1,0,0,0,465,467,1,0,0,0,466,464,1,0,0,0,467,468,5,2,0,0,468,470,5,
  	1,0,0,469,471,3,86,43,0,470,469,1,0,0,0,471,472,1,0,0,0,472,470,1,0,0,
  	0,472,473,1,0,0,0,473,474,1,0,0,0,474,475,5,2,0,0,475,71,1,0,0,0,476,
  	477,5,68,0,0,477,478,5,60,0,0,478,479,3,86,43,0,479,480,5,61,0,0,480,
  	484,5,1,0,0,481,483,3,10,5,0,482,481,1,0,0,0,483,486,1,0,0,0,484,482,
  	1,0,0,0,484,485,1,0,0,0,485,487,1,0,0,0,486,484,1,0,0,0,487,488,5,2,0,
  	0,488,73,1,0,0,0,489,490,5,69,0,0,490,491,3,86,43,0,491,492,3,86,43,0,
  	492,75,1,0,0,0,493,494,5,70,0,0,494,495,5,60,0,0,495,496,3,86,43,0,496,
  	497,5,61,0,0,497,498,5,60,0,0,498,499,3,86,43,0,499,500,5,61,0,0,500,
  	77,1,0,0,0,501,502,5,71,0,0,502,503,5,60,0,0,503,504,3,86,43,0,504,505,
  	5,61,0,0,505,506,5,60,0,0,506,507,3,86,43,0,507,508,5,61,0,0,508,79,1,
  	0,0,0,509,510,5,72,0,0,510,511,3,86,43,0,511,512,3,86,43,0,512,81,1,0,
  	0,0,513,514,5,73,0,0,514,515,3,86,43,0,515,516,3,86,43,0,516,83,1,0,0,
  	0,517,518,7,9,0,0,518,85,1,0,0,0,519,526,5,36,0,0,520,526,5,84,0,0,521,
  	526,5,35,0,0,522,526,3,88,44,0,523,526,3,90,45,0,524,526,3,84,42,0,525,
  	519,1,0,0,0,525,520,1,0,0,0,525,521,1,0,0,0,525,522,1,0,0,0,525,523,1,
  	0,0,0,525,524,1,0,0,0,526,87,1,0,0,0,527,534,3,74,37,0,528,534,3,76,38,
  	0,529,534,3,78,39,0,530,534,3,80,40,0,531,534,3,82,41,0,532,534,3,98,
  	49,0,533,527,1,0,0,0,533,528,1,0,0,0,533,529,1,0,0,0,533,530,1,0,0,0,
  	533,531,1,0,0,0,533,532,1,0,0,0,534,89,1,0,0,0,535,538,3,94,47,0,536,
  	538,3,92,46,0,537,535,1,0,0,0,537,536,1,0,0,0,538,91,1,0,0,0,539,540,
  	5,60,0,0,540,546,3,94,47,0,541,542,3,102,51,0,542,543,3,94,47,0,543,545,
  	1,0,0,0,544,541,1,0,0,0,545,548,1,0,0,0,546,544,1,0,0,0,546,547,1,0,0,
  	0,547,549,1,0,0,0,548,546,1,0,0,0,549,550,3,102,51,0,550,551,3,94,47,
  	0,551,552,5,61,0,0,552,566,1,0,0,0,553,559,3,94,47,0,554,555,3,102,51,
  	0,555,556,3,94,47,0,556,558,1,0,0,0,557,554,1,0,0,0,558,561,1,0,0,0,559,
  	557,1,0,0,0,559,560,1,0,0,0,560,562,1,0,0,0,561,559,1,0,0,0,562,563,3,
  	102,51,0,563,564,3,94,47,0,564,566,1,0,0,0,565,539,1,0,0,0,565,553,1,
  	0,0,0,566,93,1,0,0,0,567,576,3,104,52,0,568,576,3,106,53,0,569,576,3,
  	108,54,0,570,576,3,110,55,0,571,576,3,112,56,0,572,576,3,114,57,0,573,
  	576,5,84,0,0,574,576,5,35,0,0,575,567,1,0,0,0,575,568,1,0,0,0,575,569,
  	1,0,0,0,575,570,1,0,0,0,575,571,1,0,0,0,575,572,1,0,0,0,575,573,1,0,0,
  	0,575,574,1,0,0,0,576,95,1,0,0,0,577,580,3,92,46,0,578,580,3,94,47,0,
  	579,577,1,0,0,0,579,578,1,0,0,0,580,97,1,0,0,0,581,582,7,10,0,0,582,99,
  	1,0,0,0,583,587,5,35,0,0,584,587,3,98,49,0,585,587,5,36,0,0,586,583,1,
  	0,0,0,586,584,1,0,0,0,586,585,1,0,0,0,587,101,1,0,0,0,588,589,7,11,0,
  	0,589,103,1,0,0,0,590,591,5,74,0,0,591,593,3,96,48,0,592,594,3,96,48,
  	0,593,592,1,0,0,0,594,595,1,0,0,0,595,593,1,0,0,0,595,596,1,0,0,0,596,
  	105,1,0,0,0,597,598,5,75,0,0,598,599,3,96,48,0,599,107,1,0,0,0,600,601,
  	5,76,0,0,601,603,3,96,48,0,602,604,3,96,48,0,603,602,1,0,0,0,604,605,
  	1,0,0,0,605,603,1,0,0,0,605,606,1,0,0,0,606,109,1,0,0,0,607,608,5,77,
  	0,0,608,610,3,96,48,0,609,611,3,96,48,0,610,609,1,0,0,0,611,612,1,0,0,
  	0,612,610,1,0,0,0,612,613,1,0,0,0,613,111,1,0,0,0,614,615,5,78,0,0,615,
  	617,3,96,48,0,616,618,3,96,48,0,617,616,1,0,0,0,618,619,1,0,0,0,619,617,
  	1,0,0,0,619,620,1,0,0,0,620,113,1,0,0,0,621,622,5,79,0,0,622,624,3,96,
  	48,0,623,625,3,96,48,0,624,623,1,0,0,0,625,626,1,0,0,0,626,624,1,0,0,
  	0,626,627,1,0,0,0,627,115,1,0,0,0,68,119,121,135,139,145,152,159,164,
  	168,172,176,180,184,188,192,196,200,204,208,212,216,220,224,228,232,236,
  	240,244,248,252,256,260,264,268,272,276,280,284,288,291,302,311,327,371,
  	383,394,407,420,428,438,454,464,472,484,525,533,537,546,559,565,575,579,
  	586,595,605,612,619,626
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
    setState(121);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 12190719) != 0)) {
      setState(119);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LogotecGramarParser::NEWLINE: {
          setState(116);
          match(LogotecGramarParser::NEWLINE);
          break;
        }

        case LogotecGramarParser::HAZ:
        case LogotecGramarParser::INIC:
        case LogotecGramarParser::INC:
        case LogotecGramarParser::AVANZA:
        case LogotecGramarParser::AV:
        case LogotecGramarParser::RETROCEDE:
        case LogotecGramarParser::RE:
        case LogotecGramarParser::GIRA_DERECHA:
        case LogotecGramarParser::GD:
        case LogotecGramarParser::GIRA_IZQUIERDA:
        case LogotecGramarParser::GI:
        case LogotecGramarParser::OCULTAR_TORTUGA:
        case LogotecGramarParser::OT:
        case LogotecGramarParser::PONPOS:
        case LogotecGramarParser::PONXY:
        case LogotecGramarParser::PONRUMBO:
        case LogotecGramarParser::PONX:
        case LogotecGramarParser::PONY:
        case LogotecGramarParser::BAJALAPIZ:
        case LogotecGramarParser::BL:
        case LogotecGramarParser::SUBELAPIZ:
        case LogotecGramarParser::SL:
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
        case LogotecGramarParser::EJECUTA:
        case LogotecGramarParser::ID:
        case LogotecGramarParser::LINE_COMMENT: {
          setState(117);
          linea_instrucciones();
          break;
        }

        case LogotecGramarParser::PARA: {
          setState(118);
          procedimiento();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(123);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(124);
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
    setState(126);
    match(LogotecGramarParser::PARA);
    setState(127);
    match(LogotecGramarParser::ID);
    setState(128);
    parametros();
    setState(129);
    match(LogotecGramarParser::NEWLINE);
    setState(135);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(130);
        linea_instrucciones();
        setState(131);
        match(LogotecGramarParser::NEWLINE); 
      }
      setState(137);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(139);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 9962495) != 0)) {
      setState(138);
      linea_instrucciones();
    }
    setState(141);
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
    setState(143);
    match(LogotecGramarParser::T__0);
    setState(145);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::ID) {
      setState(144);
      lista_parametros();
    }
    setState(147);
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
    setState(150); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(149);
              instruccion();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(152); 
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
    setState(154);
    match(LogotecGramarParser::ID);
    setState(159);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogotecGramarParser::T__2) {
      setState(155);
      match(LogotecGramarParser::T__2);
      setState(156);
      match(LogotecGramarParser::ID);
      setState(161);
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
    setState(291);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(162);
      haz_variable();
      setState(164);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
      case 1: {
        setState(163);
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
      setState(166);
      inic_variable();
      setState(168);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
      case 1: {
        setState(167);
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
      setState(170);
      inc_variable();
      setState(172);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
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

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(174);
      avanza_variable();
      setState(176);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
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

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(178);
      retrocede_variable();
      setState(180);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
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

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(182);
      gira_derecha_variable();
      setState(184);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
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

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(186);
      gira_izquierda_variable();
      setState(188);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
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

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(190);
      ocultar_tortuga_variable();
      setState(192);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
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

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(194);
      ponpos_variable();
      setState(196);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
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

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(198);
      ponxy_variable();
      setState(200);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
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

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(202);
      ponrumbo_variable();
      setState(204);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
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

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(206);
      ponx_variable();
      setState(208);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
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

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(210);
      pony_variable();
      setState(212);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
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

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(214);
      bajalapiz_variable();
      setState(216);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
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

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(218);
      subelapiz_variable();
      setState(220);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
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

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(222);
      poncolorlapiz_variable();
      setState(224);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
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

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(226);
      centro_variable();
      setState(228);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
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

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(230);
      esperar_variable();
      setState(232);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
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

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(234);
      ejecuta_variable();
      setState(236);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
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

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(238);
      repite_variable();
      setState(240);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
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

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(242);
      si_sino_variable();
      setState(244);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
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

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(246);
      si_variable();
      setState(248);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
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

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(250);
      haz_hasta_variable();
      setState(252);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
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

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(254);
      hasta_variable();
      setState(256);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
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

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(258);
      haz_mientras_variable();
      setState(260);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
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

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(262);
      mientras_variable();
      setState(264);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
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

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(266);
      iguales_variable();
      setState(268);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
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

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(270);
      y_variable();
      setState(272);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
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

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(274);
      o_variable();
      setState(276);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
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

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(278);
      mayorque_variable();
      setState(280);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
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

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(282);
      menorque_variable();
      setState(284);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
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

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(286);
      procedimiento_llamado();
      setState(288);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
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

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(290);
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
    setState(293);
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
    setState(295);
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
    setState(297);
    match(LogotecGramarParser::ID);
    setState(298);
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
    setState(300);
    match(LogotecGramarParser::T__0);
    setState(302);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 26) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 26)) & 306235995748042631) != 0)) {
      setState(301);
      lista_parametros_llamado();
    }
    setState(304);
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
    setState(306);
    expr();
    setState(311);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogotecGramarParser::T__2) {
      setState(307);
      match(LogotecGramarParser::T__2);
      setState(308);
      expr();
      setState(313);
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
    setState(314);
    match(LogotecGramarParser::HAZ);
    setState(315);
    match(LogotecGramarParser::ID);
    setState(316);
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
    setState(318);
    match(LogotecGramarParser::INIC);
    setState(319);
    match(LogotecGramarParser::ID);
    setState(320);
    match(LogotecGramarParser::ASSIGN);
    setState(321);
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
    setState(323);
    match(LogotecGramarParser::INC);
    setState(324);
    match(LogotecGramarParser::T__0);
    setState(325);
    match(LogotecGramarParser::ID);
    setState(327);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogotecGramarParser::NUMBER

    || _la == LogotecGramarParser::ID) {
      setState(326);
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
    setState(329);
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
    setState(331);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::AVANZA

    || _la == LogotecGramarParser::AV)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(332);
    antlrcpp::downCast<Avanza_variableContext *>(_localctx)->e = expr();
   
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
    setState(334);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::RETROCEDE

    || _la == LogotecGramarParser::RE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(335);
    antlrcpp::downCast<Retrocede_variableContext *>(_localctx)->e = expr();
   
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
    setState(337);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::GIRA_DERECHA

    || _la == LogotecGramarParser::GD)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(338);
    antlrcpp::downCast<Gira_derecha_variableContext *>(_localctx)->e = expr();
   
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
    setState(340);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::GIRA_IZQUIERDA

    || _la == LogotecGramarParser::GI)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(341);
    antlrcpp::downCast<Gira_izquierda_variableContext *>(_localctx)->e = expr();
   
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
    setState(343);
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
    setState(345);
    match(LogotecGramarParser::PONPOS);
    setState(346);
    match(LogotecGramarParser::T__0);
    setState(347);
    match(LogotecGramarParser::NUMBER);
    setState(348);
    match(LogotecGramarParser::NUMBER);
    setState(349);
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
    setState(351);
    match(LogotecGramarParser::PONXY);
    setState(352);
    match(LogotecGramarParser::NUMBER);
    setState(353);
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
    setState(355);
    match(LogotecGramarParser::PONRUMBO);
    setState(356);
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
    setState(358);
    match(LogotecGramarParser::PONX);
    setState(359);
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
    setState(361);
    match(LogotecGramarParser::PONY);
    setState(362);
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
    setState(364);
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
    setState(366);
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

LogotecGramarParser::ColoresContext* LogotecGramarParser::Poncolorlapiz_variableContext::colores() {
  return getRuleContext<LogotecGramarParser::ColoresContext>(0);
}

tree::TerminalNode* LogotecGramarParser::Poncolorlapiz_variableContext::ID() {
  return getToken(LogotecGramarParser::ID, 0);
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
    setState(368);
    _la = _input->LA(1);
    if (!(_la == LogotecGramarParser::PONCOLORLAPIZ

    || _la == LogotecGramarParser::PCL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(371);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::AZUL:
      case LogotecGramarParser::NEGRO:
      case LogotecGramarParser::ROJO: {
        setState(369);
        colores();
        break;
      }

      case LogotecGramarParser::ID: {
        setState(370);
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
    setState(373);
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
    setState(375);
    match(LogotecGramarParser::ESPERAR);
    setState(376);
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
    setState(378);
    match(LogotecGramarParser::EJECUTA);
    setState(379);
    match(LogotecGramarParser::T__0);
    setState(383);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 9962495) != 0)) {
      setState(380);
      instruccion();
      setState(385);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(386);
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
    setState(388);
    match(LogotecGramarParser::REPITE);
    setState(389);
    match(LogotecGramarParser::NUMBER);
    setState(390);
    match(LogotecGramarParser::T__0);
    setState(394);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 9962495) != 0)) {
      setState(391);
      instruccion();
      setState(396);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(397);
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
  enterRule(_localctx, 62, LogotecGramarParser::RuleSi_variable);
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
    setState(399);
    match(LogotecGramarParser::SI);
    setState(400);
    match(LogotecGramarParser::PAR_OPEN);
    setState(401);
    expr();
    setState(402);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(403);
    match(LogotecGramarParser::T__0);
    setState(407);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 9962495) != 0)) {
      setState(404);
      instruccion();
      setState(409);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(410);
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
  enterRule(_localctx, 64, LogotecGramarParser::RuleSi_sino_variable);
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
    setState(412);
    match(LogotecGramarParser::SI);
    setState(413);
    match(LogotecGramarParser::PAR_OPEN);
    setState(414);
    expr();
    setState(415);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(416);
    match(LogotecGramarParser::T__0);
    setState(420);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 9962495) != 0)) {
      setState(417);
      instruccion();
      setState(422);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(423);
    match(LogotecGramarParser::T__1);
    setState(424);
    match(LogotecGramarParser::T__0);
    setState(428);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 9962495) != 0)) {
      setState(425);
      instruccion();
      setState(430);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(431);
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
  enterRule(_localctx, 66, LogotecGramarParser::RuleHaz_hasta_variable);
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
    setState(433);
    match(LogotecGramarParser::HAZ_HASTA);
    setState(434);
    match(LogotecGramarParser::T__0);
    setState(438);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 9962495) != 0)) {
      setState(435);
      instruccion();
      setState(440);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(441);
    match(LogotecGramarParser::T__1);
    setState(442);
    match(LogotecGramarParser::PAR_OPEN);
    setState(443);
    expr();
    setState(444);
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
  enterRule(_localctx, 68, LogotecGramarParser::RuleHasta_variable);
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
    match(LogotecGramarParser::HASTA);
    setState(447);
    match(LogotecGramarParser::PAR_OPEN);
    setState(448);
    expr();
    setState(449);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(450);
    match(LogotecGramarParser::T__0);
    setState(454);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 9962495) != 0)) {
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
  enterRule(_localctx, 70, LogotecGramarParser::RuleHaz_mientras_variable);
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
    setState(459);
    match(LogotecGramarParser::HAZ_MIENTRAS);
    setState(460);
    match(LogotecGramarParser::T__0);
    setState(464);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 9962495) != 0)) {
      setState(461);
      instruccion();
      setState(466);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(467);
    match(LogotecGramarParser::T__1);
    setState(468);
    match(LogotecGramarParser::T__0);
    setState(470); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(469);
      expr();
      setState(472); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 26) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 26)) & 306235995748042631) != 0));
    setState(474);
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
  enterRule(_localctx, 72, LogotecGramarParser::RuleMientras_variable);
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
    setState(476);
    match(LogotecGramarParser::MIENTRAS);
    setState(477);
    match(LogotecGramarParser::PAR_OPEN);
    setState(478);
    expr();
    setState(479);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(480);
    match(LogotecGramarParser::T__0);
    setState(484);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372028734603280) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 9962495) != 0)) {
      setState(481);
      instruccion();
      setState(486);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(487);
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
  enterRule(_localctx, 74, LogotecGramarParser::RuleIguales_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(489);
    match(LogotecGramarParser::IGUALESQ);
    setState(490);
    expr();
    setState(491);
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
  enterRule(_localctx, 76, LogotecGramarParser::RuleY_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(493);
    match(LogotecGramarParser::Y);
    setState(494);
    match(LogotecGramarParser::PAR_OPEN);
    setState(495);
    expr();
    setState(496);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(497);
    match(LogotecGramarParser::PAR_OPEN);
    setState(498);
    expr();
    setState(499);
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
  enterRule(_localctx, 78, LogotecGramarParser::RuleO_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(501);
    match(LogotecGramarParser::O);
    setState(502);
    match(LogotecGramarParser::PAR_OPEN);
    setState(503);
    expr();
    setState(504);
    match(LogotecGramarParser::PAR_CLOSE);
    setState(505);
    match(LogotecGramarParser::PAR_OPEN);
    setState(506);
    expr();
    setState(507);
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
  enterRule(_localctx, 80, LogotecGramarParser::RuleMayorque_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(509);
    match(LogotecGramarParser::MAYORQUEQ);
    setState(510);
    expr();
    setState(511);
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
  enterRule(_localctx, 82, LogotecGramarParser::RuleMenorque_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(513);
    match(LogotecGramarParser::MENORQUEQ);
    setState(514);
    expr();
    setState(515);
    expr();
   
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
  enterRule(_localctx, 84, LogotecGramarParser::RuleColores);
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
    setState(517);
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

LogotecGramarParser::Exp_logicaContext* LogotecGramarParser::ExprContext::exp_logica() {
  return getRuleContext<LogotecGramarParser::Exp_logicaContext>(0);
}

LogotecGramarParser::Exp_integerContext* LogotecGramarParser::ExprContext::exp_integer() {
  return getRuleContext<LogotecGramarParser::Exp_integerContext>(0);
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
  enterRule(_localctx, 86, LogotecGramarParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(525);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(519);
      match(LogotecGramarParser::CADENA_TEXTO);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(520);
      match(LogotecGramarParser::ID);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(521);
      match(LogotecGramarParser::NUMBER);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(522);
      exp_logica();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(523);
      exp_integer();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(524);
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

//----------------- Exp_logicaContext ------------------------------------------------------------------

LogotecGramarParser::Exp_logicaContext::Exp_logicaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LogotecGramarParser::Iguales_variableContext* LogotecGramarParser::Exp_logicaContext::iguales_variable() {
  return getRuleContext<LogotecGramarParser::Iguales_variableContext>(0);
}

LogotecGramarParser::Y_variableContext* LogotecGramarParser::Exp_logicaContext::y_variable() {
  return getRuleContext<LogotecGramarParser::Y_variableContext>(0);
}

LogotecGramarParser::O_variableContext* LogotecGramarParser::Exp_logicaContext::o_variable() {
  return getRuleContext<LogotecGramarParser::O_variableContext>(0);
}

LogotecGramarParser::Mayorque_variableContext* LogotecGramarParser::Exp_logicaContext::mayorque_variable() {
  return getRuleContext<LogotecGramarParser::Mayorque_variableContext>(0);
}

LogotecGramarParser::Menorque_variableContext* LogotecGramarParser::Exp_logicaContext::menorque_variable() {
  return getRuleContext<LogotecGramarParser::Menorque_variableContext>(0);
}

LogotecGramarParser::LogicoContext* LogotecGramarParser::Exp_logicaContext::logico() {
  return getRuleContext<LogotecGramarParser::LogicoContext>(0);
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
  enterRule(_localctx, 88, LogotecGramarParser::RuleExp_logica);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(533);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::IGUALESQ: {
        enterOuterAlt(_localctx, 1);
        setState(527);
        iguales_variable();
        break;
      }

      case LogotecGramarParser::Y: {
        enterOuterAlt(_localctx, 2);
        setState(528);
        y_variable();
        break;
      }

      case LogotecGramarParser::O: {
        enterOuterAlt(_localctx, 3);
        setState(529);
        o_variable();
        break;
      }

      case LogotecGramarParser::MAYORQUEQ: {
        enterOuterAlt(_localctx, 4);
        setState(530);
        mayorque_variable();
        break;
      }

      case LogotecGramarParser::MENORQUEQ: {
        enterOuterAlt(_localctx, 5);
        setState(531);
        menorque_variable();
        break;
      }

      case LogotecGramarParser::TRUE:
      case LogotecGramarParser::FALSE: {
        enterOuterAlt(_localctx, 6);
        setState(532);
        logico();
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
  enterRule(_localctx, 90, LogotecGramarParser::RuleExp_integer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(537);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(535);
      exp_matematica();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(536);
      exp_aritmetica();
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
  enterRule(_localctx, 92, LogotecGramarParser::RuleExp_aritmetica);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(565);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::PAR_OPEN: {
        enterOuterAlt(_localctx, 1);
        setState(539);
        match(LogotecGramarParser::PAR_OPEN);
        setState(540);
        exp_matematica();
        setState(546);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(541);
            operador();
            setState(542);
            exp_matematica(); 
          }
          setState(548);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx);
        }
        setState(549);
        operador();
        setState(550);
        exp_matematica();
        setState(551);
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
        setState(553);
        exp_matematica();
        setState(559);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(554);
            operador();
            setState(555);
            exp_matematica(); 
          }
          setState(561);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
        }
        setState(562);
        operador();
        setState(563);
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
  enterRule(_localctx, 94, LogotecGramarParser::RuleExp_matematica);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(575);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::DIFERENCIA: {
        enterOuterAlt(_localctx, 1);
        setState(567);
        diferencia_expr();
        break;
      }

      case LogotecGramarParser::AZAR: {
        enterOuterAlt(_localctx, 2);
        setState(568);
        azar_expr();
        break;
      }

      case LogotecGramarParser::PRODUCTO: {
        enterOuterAlt(_localctx, 3);
        setState(569);
        producto_expr();
        break;
      }

      case LogotecGramarParser::POTENCIA: {
        enterOuterAlt(_localctx, 4);
        setState(570);
        potencia_expr();
        break;
      }

      case LogotecGramarParser::DIVISION: {
        enterOuterAlt(_localctx, 5);
        setState(571);
        division_expr();
        break;
      }

      case LogotecGramarParser::SUMA: {
        enterOuterAlt(_localctx, 6);
        setState(572);
        suma_expr();
        break;
      }

      case LogotecGramarParser::ID: {
        enterOuterAlt(_localctx, 7);
        setState(573);
        match(LogotecGramarParser::ID);
        break;
      }

      case LogotecGramarParser::NUMBER: {
        enterOuterAlt(_localctx, 8);
        setState(574);
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
  enterRule(_localctx, 96, LogotecGramarParser::RuleExpr_mat_aritm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(579);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(577);
      exp_aritmetica();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(578);
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
  enterRule(_localctx, 98, LogotecGramarParser::RuleLogico);
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
    setState(581);
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
  enterRule(_localctx, 100, LogotecGramarParser::RuleValor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(586);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogotecGramarParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(583);
        match(LogotecGramarParser::NUMBER);
        break;
      }

      case LogotecGramarParser::TRUE:
      case LogotecGramarParser::FALSE: {
        enterOuterAlt(_localctx, 2);
        setState(584);
        logico();
        break;
      }

      case LogotecGramarParser::CADENA_TEXTO: {
        enterOuterAlt(_localctx, 3);
        setState(585);
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
  enterRule(_localctx, 102, LogotecGramarParser::RuleOperador);
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
    setState(588);
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
  enterRule(_localctx, 104, LogotecGramarParser::RuleDiferencia_expr);

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
    setState(590);
    match(LogotecGramarParser::DIFERENCIA);

    setState(591);
    expr_mat_aritm();
    setState(593); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(592);
              expr_mat_aritm();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(595); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
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
  enterRule(_localctx, 106, LogotecGramarParser::RuleAzar_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(597);
    match(LogotecGramarParser::AZAR);

    setState(598);
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
  enterRule(_localctx, 108, LogotecGramarParser::RuleProducto_expr);

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
    setState(600);
    match(LogotecGramarParser::PRODUCTO);

    setState(601);
    expr_mat_aritm();
    setState(603); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(602);
              expr_mat_aritm();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(605); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
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
  enterRule(_localctx, 110, LogotecGramarParser::RulePotencia_expr);

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
    setState(607);
    match(LogotecGramarParser::POTENCIA);

    setState(608);
    expr_mat_aritm();
    setState(610); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(609);
              expr_mat_aritm();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(612); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
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
  enterRule(_localctx, 112, LogotecGramarParser::RuleDivision_expr);

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
    setState(614);
    match(LogotecGramarParser::DIVISION);

    setState(615);
    expr_mat_aritm();
    setState(617); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(616);
              expr_mat_aritm();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(619); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
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
  enterRule(_localctx, 114, LogotecGramarParser::RuleSuma_expr);

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
    setState(621);
    match(LogotecGramarParser::SUMA);

    setState(622);
    expr_mat_aritm();
    setState(624); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(623);
              expr_mat_aritm();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(626); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
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
