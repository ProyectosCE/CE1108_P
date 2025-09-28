grammar LogotecGramar;

options { language=Cpp; }

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
    | todo_variable (comentario_linea)?
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


// TO-DO: instrucción futura
todo_variable
    : TODO expr?    // permite opcionalmente una expresión
    ;



// AVANZA: mover avatar
avanza_variable
    : (AVANZA | AV) e=expr
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
// Token para TODO
TODO : 'TODO' ;

AVANZA : 'AVANZA' ;
AV     : 'AV' ;


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