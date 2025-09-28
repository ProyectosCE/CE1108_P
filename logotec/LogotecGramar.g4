grammar LogotecGramar;

options { language=Cpp;}

// Programa
programa
    : (instruccion NEWLINE)* EOF
    ;


// Instrucciones
instruccion
    : haz_variable (comentario_linea)?
    | inic_variable (comentario_linea)?
    | inc_variable (comentario_linea)?
    | avanza_variable (comentario_linea)?
    | retrocede_variable (comentario_linea)?
    | gira_derecha_variable (comentario_linea)?
    | gira_izquierda_variable (comentario_linea)?
    | ocultar_tortuga_variable (comentario_linea)?
    | ponpos_variable (comentario_linea)?
    | ponxy_variable (comentario_linea)?
    | ponrumbo_variable (comentario_linea)?
    | ponx_variable (comentario_linea)?
    | pony_variable (comentario_linea)?
    | bajalapiz_variable (comentario_linea)?
    | subelapiz_variable (comentario_linea)?
    | poncolorlapiz_variable (comentario_linea)?
    | centro_variable (comentario_linea)?
    | esperar_variable (comentario_linea)?
    | comentario
    ;

// Comentario de línea
comentario_linea
    : LINE_COMMENT
    ;

comentario
    : LINE_COMMENT
    ;


// Haz: creación de variable
haz_variable: HAZ ID v=valor;

    // INIC: inicialización o asignación
inic_variable
    : INIC ID '=' e=expr;

// INC: incremento de variable
inc_variable
    : INC '[' ID (ID | NUMBER)? ']'   // N1 obligatorio, N2 opcional
    ;

// AVANZA: mover avatar
avanza_variable
    : (AVANZA | AV) e=expr
    ;

retrocede_variable
    : (RETROCEDE | RE) e=expr
    ;

gira_derecha_variable
    : (GIRA_DERECHA | GD) e=expr
    ;

gira_izquierda_variable
    : (GIRA_IZQUIERDA | GI) e=expr
    ;

ocultar_tortuga_variable
    : (OCULTAR_TORTUGA | OT)
    ;

ponpos_variable
    : PONPOS '[' NUMBER NUMBER ']'
    ;

ponxy_variable
    : PONXY NUMBER NUMBER
    ;

ponrumbo_variable
    : PONRUMBO NUMBER
    ;

ponx_variable
    : PONX NUMBER
    ;

pony_variable
    : PONY NUMBER
    ;

bajalapiz_variable
    : (BAJALAPIZ | BL)
    ;

subelapiz_variable
    : (SUBELAPIZ | SL)
    ;

poncolorlapiz_variable
    : (PONCOLORLAPIZ | PCL) colores
    ;

 centro_variable
    : CENTRO;

 esperar_variable
    : ESPERAR NUMBER;

colores
    : AZUL | NEGRO | ROJO
    ;
// Expresiones (solo suma simple de momento)
expr
    : e1=expr operador e2=expr
    | NUMBER
    | logico
    | CADENA_TEXTO
    | ID
    ;

    // Tipos lógicos
logico
    : TRUE
    | FALSE
    ;

    // Valores para Haz
valor
    : NUMBER
    | logico
    | CADENA_TEXTO
    ;

 operador:
    PLUS
    | MINUS
    | MULT
    | DIV;

// === TOKENS ===
HAZ          : 'Haz' ;
INIC         : 'INIC' ;
INC : 'INC' ;

AVANZA : 'avanza' ;
AV     : 'av' ;

RETROCEDE: 'retrocede' ;
RE: 're' ;


GIRA_DERECHA: 'GiraDerecha' ;
GD: 'GD';

GIRA_IZQUIERDA: 'GiraIzquierda' ;
GI: 'GI';

OCULTAR_TORTUGA: 'OcultarTortuga' ;
OT: 'OT';

PONPOS: 'ponpos' ;
PONXY: 'ponxy' ;

PONRUMBO: 'ponrumbo' ;

PONX: 'ponx' ;

PONY: 'pony' ;

BAJALAPIZ: 'bajalapiz' ;
BL: 'BL' ;

SUBELAPIZ: 'subelapiz' ;
SL: 'SL' ;

AZUL: 'azul' ;
NEGRO: 'negro' ;
ROJO: 'rojo' ;

PONCOLORLAPIZ: 'poncolorlapiz' ;
PCL: 'poncl' ;

CENTRO: 'centro' ;
ESPERAR: 'espera' ;

TRUE         : 'True' ;
FALSE        : 'False' ;
NUMBER       : [0-9]+ ;
CADENA_TEXTO : '"' (~["\r\n])* '"' ;
ID           : [a-zA-Z_][a-zA-Z0-9_]* ;


// Saltos de línea significativos
NEWLINE      : [\r\n]+ ;

// Ignorar espacios y tabs
WS           : [ \t]+ -> skip ;

// Token para comentarios
LINE_COMMENT : '//' ~[\r\n]* ;


PROGRAM: 'program';
VAR: 'var';
PRINTLN: 'println';

PLUS: '+';
MINUS: '-';
MULT: '*';
DIV: '/';

IF: 'if';
ELSE: 'else';
WHILE: 'while';
FOR: 'for';



AND: '&&';
OR: '||';
NOT: '!';

GT: '>';
LT: '<';
GEQ: '>=';
LEQ: '<=';
EQ: '==';
NEQ: '!=';



ASSIGN: '=';

BRACKET_OPEN: '{';
BRACKET_CLOSE: '}';

PAR_OPEN: '(';
PAR_CLOSE: ')';

SEMICOLON: ';';