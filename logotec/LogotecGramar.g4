grammar LogotecGramar;

options { language=Cpp;}

// Programa
programa
    : comentario (NEWLINE | linea_instrucciones | procedimiento)*
      EOF
    ;

 // Definición de procedimiento
procedimiento
    : PARA ID parametros? (linea_instrucciones)* linea_instrucciones? FIN SEMICOLON
    ;

parametros
    : '[' lista_parametros? ']'
    ;

linea_instrucciones
    : ((instruccion SEMICOLON)     | comentario_linea
                                   | NEWLINE)+
    ;

lista_parametros
    : ID (',' ID)*
   ;

// Instrucciones
instruccion
    : (haz_variable (comentario_linea)?
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
    | procedimiento_llamado (comentario_linea)?
    | rumbo_get (comentario_linea)?
    | muestra (comentario_linea)?
    | salida (comentario_linea)?)
    | NEWLINE;


salida:
    SALIDA expr;

muestra:
    MUESTRA (expr|rumbo_get);

rumbo_get:
    RUMBO;
 // Comentario de línea
comentario_linea
    : LINE_COMMENT
    ;

comentario
    : LINE_COMMENT
    ;

procedimiento_llamado
    : ID parametros_llamado?
    ;

parametros_llamado
    : '[' lista_parametros_llamado? ']'
    ;

lista_parametros_llamado
    : expr (',' expr)*
    ;
// Haz: creación de variable
haz_variable: HAZ ID e=expr;

    // INIC: inicialización o asignación
inic_variable
    : INIC ID '=' e=expr;

// INC: incremento de variable
inc_variable
    : INC '[' ID (expr_mat_aritm)? ']'   // N1 obligatorio, N2 opcional
    ;

    // AVANZA: mover avatar
avanza_variable
    : (AVANZA) e=expr_mat_aritm
    ;

retrocede_variable
    : (RETROCEDE) e=expr_mat_aritm
    ;

gira_derecha_variable
    : (GIRA_DERECHA) e=expr_mat_aritm
    ;

gira_izquierda_variable
    : (GIRA_IZQUIERDA) e=expr_mat_aritm
    ;

ocultar_tortuga_variable
    : (OCULTAR_TORTUGA)
    ;

ponpos_variable
    : PONPOS '[' expr_mat_aritm expr_mat_aritm ']'
    ;

ponxy_variable
    : PONXY expr_mat_aritm expr_mat_aritm
    ;

ponrumbo_variable
    : PONRUMBO expr_mat_aritm
    ;

ponx_variable
    : PONX expr_mat_aritm
    ;

pony_variable
    : PONY expr_mat_aritm
    ;

bajalapiz_variable
    : (BAJALAPIZ)
    ;

subelapiz_variable
    : (SUBELAPIZ)
    ;

poncolorlapiz_variable
    : (PONCOLORLAPIZ | PCL) (colores_variable)
    ;

 centro_variable
    : CENTRO;

 esperar_variable
    : ESPERAR exp_integer;

ejecuta_variable
    : EJECUTA '[' instruccion* ']'
    ;

repite_variable
    : REPITE e=expr_mat_aritm '[' instruccion* ']'
    ;

exp_logica
    :
     exp_logica_operaciones
    | exp_logicas_expr
    ;

exp_logica_operaciones:
    iguales_variable
    | y_variable
    | o_variable
    | mayorque_variable
    | logico
    | ID
    | NUMBER
    | exp_integer
    | CADENA_TEXTO
    | menorque_variable;

exp_logicas_expr:
    NOT exp_logicas_expr                                                                            #Negacion
    |'(' exp_logicas_expr ')'                                                                      #ExpLogicaParentesis
    | exp_logicas_expr operador_logico exp_logicas_expr       #OperacionLogicaSimple
    | exp_logicas_expr (andor exp_logicas_expr)* (andor exp_logicas_expr)           #OperacionLogicaCompleja
    | exp_logica_operaciones                                                                        #ExpLogicaSimple
    ;

andor:
AND | OR;

si_variable
    : (SI '(' exp_logica ')' NEWLINE?'[' instruccion* ']') | (SI '[' exp_logica ']' NEWLINE?'[' instruccion* ']')
    ;



si_sino_variable
    : si_variable NEWLINE? '[' instruccion* ']'
    ;

haz_hasta_variable
    : HAZ_HASTA '[' instruccion* ']' NEWLINE? '(' exp_logica ')'
    ;

hasta_variable
    : (HASTA|HAZ_HASTA) '(' exp_logica ')' NEWLINE? '[' instruccion* ']'
    ;

haz_mientras_variable
    : HAZ_MIENTRAS '[' instruccion* ']' NEWLINE?'(' exp_logica')'
    ;

mientras_variable
    : MIENTRAS '(' exp_logica ')' NEWLINE?'[' instruccion* ']'
    ;

iguales_variable
    : IGUALESQ exp_logica exp_logica
    ;

y_variable
    : Y exp_logica exp_logica
    ;

o_variable
    : O exp_logica exp_logica
    ;

mayorque_variable
    : MAYORQUEQ expr_mat_aritm expr_mat_aritm
    ;

menorque_variable
    : MENORQUEQ expr_mat_aritm expr_mat_aritm
    ;

colores_variable:
    colores |ID;

colores
    : AZUL | NEGRO | ROJO
    ;
// Expresiones (solo suma simple de momento)
expr
    : CADENA_TEXTO
    | ID
    | NUMBER
    | exp_integer
    | exp_logica
    | colores
    ;

exp_integer:
    exp_matematica
    | exp_aritmetica
    | NUMBER
    ;

 exp_aritmetica:
    '(' exp_matematica (operador exp_matematica)* operador  exp_matematica ')'
     | exp_matematica (operador exp_matematica)* operador  exp_matematica;

exp_matematica:
        diferencia_expr
        | azar_expr
        | producto_expr
        | potencia_expr
        | division_expr
        | suma_expr
        | ID
        | NUMBER;


expr_mat_aritm:
    exp_aritmetica|exp_matematica
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

operador_logico:
    AND
    | OR
    | GT
    | LT
    | GEQ
    | LEQ
    | EQ
    | ASSIGN
    | NEQ
    ;

 operador:
    PLUS
    | MINUS
    | MULT
    | DIV;

diferencia_expr
    : DIFERENCIA (expr_mat_aritm) (expr_mat_aritm)+
    ;

azar_expr
    : AZAR (expr_mat_aritm)
    ;

producto_expr
    : PRODUCTO (expr_mat_aritm) (expr_mat_aritm)+
    ;

potencia_expr
    : POTENCIA (expr_mat_aritm) (expr_mat_aritm)
    ;

division_expr
    : DIVISION (expr_mat_aritm) (expr_mat_aritm)
    ;

suma_expr
    : SUMA (expr_mat_aritm) (expr_mat_aritm)+
   ;

    // === TOKENS ===
HAZ          : 'Haz' ;
INIC         : 'INIC' ;
INC : 'INC' ;

AVANZA : 'avanza' | 'AVANZA' | 'AV' | 'Avanza' | 'Av' | 'av' ;

RETROCEDE: 'retrocede' | 'RETROCEDE' | 'RE' | 'Retrocede' | 'Re' | 're' ;


GIRA_DERECHA: 'GiraDerecha' | 'GD' | 'giraderecha' | 'GIRADERECHA' | 'Giraderecha' | 'gd' ;

GIRA_IZQUIERDA: 'GiraIzquierda' | 'GI' | 'giraizquierda' | 'GIRAIZQUIERDA' | 'Girazquierda' | 'gi' ;

OCULTAR_TORTUGA: 'OcultarTortuga' | 'OT' | 'ocultartortuga' | 'OCULTARTORTUGA' | 'Ocultartortuga' | 'ot' | 'OcultaTortuga' | 'ocultaTortuga' | 'OCULTATORTUGA' ;

PONPOS: 'ponpos' | 'Ponpos'| 'PONPOS' | 'PonPos' | 'ponPos' | 'PonPOS' ;
PONXY: 'ponxy' | 'Ponxy' | 'PONXY' | 'PonXY' | 'ponXY' | 'PONXy' ;

PONRUMBO: 'ponrumbo' | 'Ponrumbo' | 'PONRUMBO' | 'PonRumbo' | 'ponRumbo' | 'PONRumbo' ;
RUMBO: 'rumbo' | 'RUMBO' | 'Rumbo' ;
MUESTRA: 'Muestra' | 'muestra' | 'MUESTRA' ;

PONX: 'ponx' | 'Ponx' | 'PONX' | 'PonX' | 'ponX' | 'PONx' ;

PONY: 'pony' | 'Pony' | 'PONY' | 'PonY' | 'ponY' | 'PONy' ;

BAJALAPIZ: 'bajalapiz' | 'Bajalapiz' | 'BL' | 'BAJALAPIZ' | 'bl' | 'BajaLapiz' | 'bajaLapiz' | 'BAJALapiz' ;


SUBELAPIZ: 'subelapiz' | 'Subelapiz' | 'SL' | 'SUBELAPIZ' | 'sl' | 'SubeLapiz' | 'subeLapiz' | 'SUBELapiz' ;

AZUL: 'azul' ;
NEGRO: 'negro' ;
ROJO: 'rojo' ;

PONCOLORLAPIZ: 'poncolorlapiz' | 'PonColoLapiz' | 'PONCOLORLAPIZ' | 'PonColorLapiz' | 'ponColorLapiz' | 'PONColorLapiz' ;
PCL: 'poncl' | 'PonCL' | 'PONCL' | 'PonCl' | 'ponCl' | 'PONcL' ;

CENTRO: 'centro' | 'Centro' | 'CENTRO' ;
ESPERAR: 'espera' | 'Espera' | 'ESPERA' ;

TRUE         : 'True' | 'true'  | 'TRUE' ;
FALSE        : 'False' | 'false' | 'FALSE' ;
NUMBER       : [0-9]+ ;
CADENA_TEXTO : '"' (~["\r\n])* '"' | '“' (~["\r\n])* '”' ;


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

REPITE : 'REPITE' ;

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

PRODUCTO : 'Producto' | 'producto' | 'PRODUCTO' ;
POTENCIA : 'Potencia' | 'potencia' | 'POTENCIA' ;
DIVISION : 'Division' | 'division' | 'DIVISION' | 'División'| 'división' | 'DIVISIÓN' ;
SUMA : 'Suma' | 'suma' | 'SUMA' ;
RESTA : 'Resta' | 'resta' | 'RESTA' ;
PARA : 'Para' | 'para' | 'PARA' ;
FIN : 'Fin' | 'fin' | 'FIN' ;
SALIDA : 'Salida' | 'salida' | 'SALIDA' ;
EJECUTA : 'EJECUTA' | 'Ejecuta' | 'ejecuta' ;

ID           : [a-zA-Z_][a-zA-Z0-9_]* ;
// Saltos de línea significativos
NEWLINE      : [\r\n]+ ;

// Ignorar espacios y tabs
WS           : [ \t]+ -> skip ;

// Token para comentarios
LINE_COMMENT : '//' ~[\r\n]* ;