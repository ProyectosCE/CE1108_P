grammar LogotecGramar;

options { language=Cpp;}

// Programa
programa
    : (procedimiento)* (linea NEWLINE)* linea? EOF
    ;

 // Definición de procedimiento
procedimiento
    : PARA ID parametros NEWLINE (linea NEWLINE)* linea? FIN
    ;

parametros
    : '[' lista_parametros? ']'
    ;

lista_parametros
    : ID (',' ID)*
    ;


// Permite varias instrucciones por línea
linea
    : (instruccion)+
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
    | ejecuta_variable (comentario_linea)?
    | repite_variable (comentario_linea)?
    | si_sino_variable (comentario_linea)?
    | si_variable (comentario_linea)?
    | haz_hasta_variable (comentario_linea)?
    | hasta_variable (comentario_linea)?
    | haz_mientras_variable (comentario_linea)?
    | mientras_variable (comentario_linea)?
    | iguales_variable (comentario_linea)?
    | y_variable (comentario_linea)?
    | o_variable (comentario_linea)?
    | mayorque_variable (comentario_linea)?
    | menorque_variable (comentario_linea)?
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

ejecuta_variable
    : EJECUTA '[' instruccion* ']'
    ;

repite_variable
    : REPITE NUMBER '[' instruccion* ']'
    ;

si_variable
    : SI '(' expr ')' '[' instruccion* ']'
    ;

si_sino_variable
    : SI '(' expr ')' '[' instruccion* ']' '[' instruccion* ']'
    ;

haz_hasta_variable
    : HAZ_HASTA '[' instruccion* ']' '(' expr ')'
    ;

hasta_variable
    : HASTA '(' expr ')' '[' instruccion* ']'
    ;

haz_mientras_variable
    : HAZ_MIENTRAS '[' instruccion* ']' '[' expr+ ']'
    ;

mientras_variable
    : MIENTRAS '(' expr ')' '[' instruccion* ']'
    ;

iguales_variable
    : IGUALESQ expr expr
    ;

y_variable
    : Y '(' expr ')' '(' expr ')'
    ;

o_variable
    : O '(' expr ')' '(' expr ')'
    ;

mayorque_variable
    : MAYORQUEQ expr expr
    ;

menorque_variable
    : MENORQUEQ expr expr
    ;

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
    | diferencia_expr
    | azar_expr
    | producto_expr
    | potencia_expr
    | division_expr
    | suma_expr
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

diferencia_expr
    : DIFERENCIA expr (expr)+
    ;

azar_expr
    : AZAR expr
    ;

producto_expr
    : PRODUCTO expr (expr)+
    ;

potencia_expr
    : POTENCIA expr expr
    ;

division_expr
    : DIVISION expr expr
    ;

suma_expr
    : SUMA expr (expr)+
   ;

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

REPITE : 'repite' ;

SI : 'SI' ;

HAZ_HASTA : 'HAZ.HASTA' ;

HASTA : 'HASTA' ;

HAZ_MIENTRAS : 'HAZ.MIENTRAS' ;

MIENTRAS : 'MIENTRAS' ;

IGUALESQ : 'Iguales?' ;

Y : 'Y' ;

O : 'O' ;

MAYORQUEQ : 'MayorQue?' ;

MENORQUEQ : 'MenorQue?' ;

DIFERENCIA : 'Diferencia' ;
AZAR : 'Azar' ;

PRODUCTO : 'Producto' ;
POTENCIA : 'Potencia' ;
DIVISION : 'Division' ;
SUMA : 'Suma' ;
RESTA : 'Resta' ;
PARA : 'Para' ;
FIN : 'Fin' ;
EJECUTA : 'Ejecuta' ;