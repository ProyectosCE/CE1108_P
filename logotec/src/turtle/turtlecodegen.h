#ifndef LOGOTEC_TURTLE_CODEGEN_H
#define LOGOTEC_TURTLE_CODEGEN_H

#include <QString>
#include <QStringList>
#include <QList>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QStack>
#include "turtlescene.h"

/* Struct: Bloque
   Descripción:
     Representa una unidad lógica de código, como una instrucción simple o
     un bloque de control estructurado (REPITE, SI, MIENTRAS, etc.).

   Atributos:
     - tipo: Tipo del bloque ("instruccion", "SI", "REPITE", "HAZ", etc.).
     - repeticiones: Número de repeticiones (para REPITE).
     - condicion: Expresión condicional (para SI, MIENTRAS, HASTA).
     - lineas: Subbloques contenidos dentro del bloque principal.
     - instruccion: Texto de la instrucción (para bloques simples).
     - repeticionesStr: Expresión textual del número de repeticiones.
     - tieneElse: Indica si el bloque SI tiene un bloque ELSE asociado.
     - lineasElse: Lista de bloques correspondientes al ELSE.
*/
struct Bloque {
    QString tipo;          // "instruccion", "REPITE", "SI", "HAZ", etc.
    int repeticiones = 1;  // para REPITE
    QString condicion;     // para SI, HASTA, MIENTRAS
    QList<Bloque> lineas;  // bloques internos
    QString instruccion;   // para tipo "instruccion"
    QString repeticionesStr;
    bool tieneElse = false;
    QList<Bloque> lineasElse;  // para el bloque ELSE de SI
};

/* Class: TurtleCodeGen
   Descripción:
     Clase encargada de interpretar y ejecutar código Logo en base a bloques
     estructurados (REPITE, SI, MIENTRAS, HAZ, etc.) sobre una escena TurtleScene.

   Funcionalidad:
     - Leer archivos .lt y generar estructuras de bloques lógicos.
     - Interpretar y ejecutar instrucciones secuenciales y anidadas.
     - Administrar variables y evaluar expresiones aritméticas o lógicas.
     - Comunicar las instrucciones ejecutables a la escena TurtleScene.
*/
class TurtleCodeGen {
public:

    /* Function: TurtleCodeGen
       Descripción:
         Constructor que inicializa el generador de código Logo con una referencia
         a la escena de dibujo.

       Params:
         - scene: Puntero a la escena TurtleScene donde se ejecutarán las instrucciones.
    */
    explicit TurtleCodeGen(TurtleScene *scene = nullptr) : turtleScene(scene) {}

    /* Function: leerArchivo
       Descripción:
         Lee un archivo de texto con extensión .lt, filtrando comentarios y líneas vacías.

       Params:
         - rutaArchivo: Ruta completa del archivo a leer.

       Returns:
         Lista de líneas de texto procesadas.
    */
    QStringList leerArchivo(const QString &rutaArchivo) {
        QStringList lineas;
        QFile archivo(rutaArchivo);
        if (!archivo.open(QIODevice::ReadOnly | QIODevice::Text)) return lineas;
        QTextStream in(&archivo);
        while (!in.atEnd()) {
            QString linea = in.readLine().trimmed();
            if (!linea.isEmpty() && !linea.startsWith("//"))
                lineas.append(linea);
        }
        archivo.close();
        return lineas;
    }

    /* Function: parsearBloques
       Descripción:
         Analiza las líneas del archivo y construye una lista jerárquica de bloques
         lógicos que representan la estructura del código Logo.

       Detalles:
         Soporta estructuras como REPITE, SI-ELSE, MIENTRAS, HASTA y HAZ.MIENTRAS.
         Reconoce bloques anidados y condiciones en línea.

       Params:
         - lineas: Lista de líneas de código a analizar.

       Returns:
         Lista jerárquica de bloques interpretados.
    */
    QList<Bloque> parsearBloques(const QStringList &lineas) {
        QList<Bloque> bloques;
        QStack<Bloque*> stack;

        for (int idx = 0; idx < lineas.size(); ++idx) {
            QString linea = lineas[idx].trimmed();

            if (linea.isEmpty()) continue;

            // Detectar SI con ELSE en la misma línea (cuando está en cualquier contexto)
            if (linea.startsWith("SI") && linea.contains("] [") && linea.endsWith("]")) {
                Bloque *b = new Bloque();
                b->tipo = "SI";
                b->tieneElse = true;

                // Extraer condición
                int inicioCond = linea.indexOf('(');
                int finCond = linea.indexOf(')', inicioCond);
                if (inicioCond != -1 && finCond != -1) {
                    b->condicion = linea.mid(inicioCond + 1, finCond - inicioCond - 1).trimmed();
                }

                // Extraer bloques IF y ELSE
                int primerCorchete = linea.indexOf('[');
                int separador = linea.indexOf("] [", primerCorchete);
                int ultimoCorchete = linea.lastIndexOf(']');

                if (primerCorchete != -1 && separador != -1 && ultimoCorchete != -1) {
                    QString bloqueIf = linea.mid(primerCorchete + 1, separador - primerCorchete - 1).trimmed();
                    QString bloqueElse = linea.mid(separador + 3, ultimoCorchete - separador - 3).trimmed();

                    // Parsear instrucciones del IF
                    if (!bloqueIf.isEmpty()) {
                        Bloque subBloque;
                        subBloque.tipo = "instruccion";
                        subBloque.instruccion = bloqueIf;
                        b->lineas.append(subBloque);
                    }

                    // Parsear instrucciones del ELSE
                    if (!bloqueElse.isEmpty()) {
                        Bloque subBloque;
                        subBloque.tipo = "instruccion";
                        subBloque.instruccion = bloqueElse;
                        b->lineasElse.append(subBloque);
                    }
                }

                // Si hay un bloque en el stack, agregar este SI como parte de ese bloque
                if (!stack.isEmpty()) {
                    stack.top()->lineas.append(*b);
                } else {
                    bloques.append(*b);
                }
                delete b;
                continue;
            }

            // Detectar HAZ.MIENTRAS/HAZ.HASTA con condición en la misma línea del cierre
            if ((linea.startsWith("HAZ.MIENTRAS") || linea.startsWith("HAZ.HASTA")) &&
                linea.contains("[") && linea.contains("]") && linea.contains("(")) {

                Bloque *b = new Bloque();
                if (linea.startsWith("HAZ.MIENTRAS")) {
                    b->tipo = "HAZ.MIENTRAS";
                } else {
                    b->tipo = "HAZ.HASTA";
                }

                // Extraer condición del final (entre paréntesis)
                int inicioCond = linea.lastIndexOf('(');
                int finCond = linea.lastIndexOf(')');
                if (inicioCond != -1 && finCond != -1 && finCond > inicioCond) {
                    b->condicion = linea.mid(inicioCond + 1, finCond - inicioCond - 1).trimmed();
                }

                // Extraer contenido del bloque (entre corchetes)
                int inicioBloque = linea.indexOf('[');
                int finBloque = linea.indexOf(']', inicioBloque);
                if (inicioBloque != -1 && finBloque != -1) {
                    QString contenido = linea.mid(inicioBloque + 1, finBloque - inicioBloque - 1).trimmed();
                    // Procesar cada instrucción dentro del bloque
                    QStringList instrucciones = contenido.split('\n', Qt::SkipEmptyParts);
                    for (const QString &inst : instrucciones) {
                        QString instruccion = inst.trimmed();
                        if (!instruccion.isEmpty()) {
                            Bloque subBloque;
                            subBloque.tipo = "instruccion";
                            subBloque.instruccion = instruccion;
                            b->lineas.append(subBloque);
                        }
                    }
                }

                bloques.append(*b);
                delete b;
                continue;
            }

            // Detectar inicio de bloques
            if (linea.startsWith("REPITE")) {
                Bloque *b = new Bloque();
                b->tipo = "REPITE";

                QString resto = linea.mid(6).trimmed();
                int espacio = resto.indexOf(' ');
                if (espacio != -1) {
                    b->repeticionesStr = resto.left(espacio).trimmed();
                } else {
                    b->repeticionesStr = resto;
                }

                stack.push(b);
            }
            else if (linea.startsWith("SI")) {
                Bloque *b = new Bloque();
                b->tipo = "SI";

                int inicioCond = linea.indexOf('(');
                int finCond = linea.indexOf(')', inicioCond);
                if (inicioCond != -1 && finCond != -1) {
                    b->condicion = linea.mid(inicioCond + 1, finCond - inicioCond - 1).trimmed();
                }

                stack.push(b);
            }
            else if (linea.startsWith("EJECUTA")) {
                Bloque *b = new Bloque();
                b->tipo = "EJECUTA";
                stack.push(b);
            }
            else if (linea.startsWith("HAZ.HASTA")) {
                Bloque *b = new Bloque();
                b->tipo = "HAZ.HASTA";
                stack.push(b);
            }
            else if (linea.startsWith("HASTA")) {
                Bloque *b = new Bloque();
                b->tipo = "HASTA";

                int inicioCond = linea.indexOf('(');
                int finCond = linea.indexOf(')', inicioCond);
                if (inicioCond != -1 && finCond != -1) {
                    b->condicion = linea.mid(inicioCond + 1, finCond - inicioCond - 1).trimmed();
                }

                stack.push(b);
            }
            else if (linea.startsWith("HAZ.MIENTRAS")) {
                Bloque *b = new Bloque();
                b->tipo = "HAZ.MIENTRAS";
                stack.push(b);
            }
            else if (linea.startsWith("MIENTRAS")) {
                Bloque *b = new Bloque();
                b->tipo = "MIENTRAS";

                int inicioCond = linea.indexOf('(');
                int finCond = linea.indexOf(')', inicioCond);
                if (inicioCond != -1 && finCond != -1) {
                    b->condicion = linea.mid(inicioCond + 1, finCond - inicioCond - 1).trimmed();
                }

                stack.push(b);
            }
            // Detectar fin de bloques CON condición (para HAZ.MIENTRAS y HAZ.HASTA)
            else if (linea.startsWith("] (") && linea.endsWith(")")) {
                if (!stack.isEmpty() && (stack.top()->tipo == "HAZ.MIENTRAS" || stack.top()->tipo == "HAZ.HASTA")) {
                    // Extraer condición del cierre
                    int inicioCond = linea.indexOf('(');
                    int finCond = linea.lastIndexOf(')');
                    if (inicioCond != -1 && finCond != -1) {
                        stack.top()->condicion = linea.mid(inicioCond + 1, finCond - inicioCond - 1).trimmed();
                    }

                    // Cerrar el bloque
                    Bloque *cerrado = stack.pop();
                    if (stack.isEmpty()) {
                        bloques.append(*cerrado);
                    } else {
                        stack.top()->lineas.append(*cerrado);
                    }
                    delete cerrado;
                } else if (!stack.isEmpty()) {
                    // Cierre normal de bloque
                    Bloque *cerrado = stack.pop();
                    if (stack.isEmpty()) {
                        bloques.append(*cerrado);
                    } else {
                        stack.top()->lineas.append(*cerrado);
                    }
                    delete cerrado;
                }
            }
            // Detectar fin de bloques SIN condición
            else if (linea == "]" || linea == "}") {
                if (!stack.isEmpty()) {
                    Bloque *cerrado = stack.pop();
                    if (stack.isEmpty()) {
                        bloques.append(*cerrado);
                    } else {
                        stack.top()->lineas.append(*cerrado);
                    }
                    delete cerrado;
                }
            }
            else {
                // Instrucción normal - SIEMPRE agregar al bloque actual si hay stack
                Bloque b;
                b.tipo = "instruccion";
                b.instruccion = linea;

                if (!stack.isEmpty()) {
                    stack.top()->lineas.append(b);
                } else {
                    bloques.append(b);
                }
            }
        }

        // Limpiar stack en caso de error
        while (!stack.isEmpty()) {
            Bloque *b = stack.pop();
            bloques.append(*b);
            delete b;
        }

        return bloques;
    }

    /* Function: ejecutarBloques
       Descripción:
         Ejecuta secuencialmente una lista de bloques previamente parseados.

       Params:
         - bloques: Lista de bloques a ejecutar.
    */
    void ejecutarBloques(const QList<Bloque> &bloques) {
        for (const Bloque &b : bloques) {
            ejecutarBloque(b);
        }
    }

private:
    TurtleScene *turtleScene;
    QMap<QString, int> variables;

    /* Function: ejecutarBloque
       Descripción:
         Ejecuta un bloque individual, interpretando su tipo y contenido.

       Detalles:
         - Si es una instrucción simple, se envía directamente a la escena.
         - Si es un bloque estructurado (REPITE, SI, HASTA, MIENTRAS, etc.),
           se ejecuta recursivamente su contenido hasta cumplir la condición.

       Params:
         - b: Bloque a ejecutar.
    */
    void ejecutarBloque(const Bloque &b) {

        if (b.tipo == "instruccion") {
            procesarInstruccion(b.instruccion);
        }
        else if (b.tipo == "REPITE") {
            int reps = evaluarExpresion(b.repeticionesStr);
            for (int i = 0; i < reps; ++i) {
                for (const Bloque &sub : b.lineas) {
                    ejecutarBloque(sub);
                }
            }
        }
        else if (b.tipo == "SI") {
            bool condicion = evaluarCondicion(b.condicion);

            if (condicion) {
                for (const Bloque &sub : b.lineas) {
                    ejecutarBloque(sub);
                }
            } else if (b.tieneElse) {
                for (const Bloque &sub : b.lineasElse) {
                    ejecutarBloque(sub);
                }
            }
        }
        else if (b.tipo == "EJECUTA") {
            for (const Bloque &sub : b.lineas) {
                ejecutarBloque(sub);
            }
        }
        else if (b.tipo == "HASTA") {
            int iteracion = 0;
            while (!evaluarCondicion(b.condicion)) {
                for (const Bloque &sub : b.lineas) {
                    ejecutarBloque(sub);
                }
                if (iteracion > 1000) {
                    break;
                }
            }
        }
        else if (b.tipo == "MIENTRAS") {
            int iteracion = 0;
            while (evaluarCondicion(b.condicion)) {
                for (const Bloque &sub : b.lineas) {
                    ejecutarBloque(sub);
                }
                if (iteracion > 1000) {
                    break;
                }
            }
        }
        else if (b.tipo == "HAZ.HASTA") {
            int iteracion = 0;
            do {
                for (const Bloque &sub : b.lineas) {
                    ejecutarBloque(sub);
                }
                bool condEvaluada = evaluarCondicion(b.condicion);
                if (iteracion > 1000) {
                    break;
                }
            } while (!evaluarCondicion(b.condicion));
        }
        else if (b.tipo == "HAZ.MIENTRAS") {
            int iteracion = 0;
            do {
                for (const Bloque &sub : b.lineas) {
                    ejecutarBloque(sub);
                }
                bool condEvaluada = evaluarCondicion(b.condicion);
                if (iteracion > 1000) {
                    break;
                }
            } while (evaluarCondicion(b.condicion));
        }
    }


    /* Function: procesarInstruccion
       Descripción:
         Interpreta una línea individual y decide si es una asignación de variable
         o una instrucción para la tortuga.

       Params:
         - linea: Texto de la instrucción.
    */

    void procesarInstruccion(const QString &linea) {
        if (!turtleScene) return;

        QString l = linea.trimmed();

        // Procesar asignaciones de variables primero
        if (procesarAsignacionVariable(l)) {
            return;
        }

        // Ejecutar instrucciones de tortuga
        ejecutarInstruccionTortuga(l);
    }


    /* Function: procesarAsignacionVariable
       Descripción:
         Procesa instrucciones de asignación de variables ("Haz", "INC").

       Detalles:
         - "Haz variable valor" asigna un valor numérico o expresivo.
         - "INC [variable incremento]" aumenta una variable existente.

       Params:
         - linea: Texto de la posible asignación.

       Returns:
         true si la línea fue procesada como asignación, false en caso contrario.
    */
    bool procesarAsignacionVariable(const QString &linea) {
        QString l = linea.trimmed();

        // Formato: Haz variable valor (sin =)
        if (l.startsWith("Haz ")) {
            QString resto = l.mid(4).trimmed();
            QStringList parts = resto.split(' ', Qt::SkipEmptyParts);
            if (parts.size() >= 2) {
                QString varName = parts[0];
                QString valorExpr = resto.mid(varName.length()).trimmed();
                variables[varName] = evaluarExpresion(valorExpr);
                return true;
            }
        }

        // Formato: INC [variable incremento]
        if (l.startsWith("INC")) {
            int start = l.indexOf('[');
            int end = l.indexOf(']', start);
            if (start != -1 && end != -1 && end > start) {
                QString inside = l.mid(start + 1, end - start - 1).trimmed();
                QStringList parts = inside.split(' ', Qt::SkipEmptyParts);
                if (!parts.isEmpty()) {
                    QString varName = parts[0];
                    int incremento = 1;

                    if (parts.size() >= 2) {
                        incremento = evaluarExpresion(parts[1]);
                    }

                    int valorActual = variables.value(varName, 0);
                    variables[varName] = valorActual + incremento;
                }
            }
            return true;
        }

        return false;
    }



    /* Function: ejecutarInstruccionTortuga
       Descripción:
         Envía comandos de movimiento o control a la escena TurtleScene.

       Soporta:
         - Movimiento: AV, RE, GD, GI.
         - Posición: ponx, pony, ponxy, ponpos.
         - Lápiz: bl, sl, poncolorlapiz.
         - Otros: centro, espera, ot.

       Params:
         - linea: Texto con la instrucción de Logo a ejecutar.
    */
    void ejecutarInstruccionTortuga(const QString &linea) {
        if (!turtleScene) return;

        QString l = linea.toLower();

        if (l.startsWith("av") || l.startsWith("avanza")) turtleScene->av(extraerValor(linea));
        else if (l.startsWith("re") || l.startsWith("retrocede")) turtleScene->re(extraerValor(linea));
        else if (l.startsWith("gd") || l.startsWith("giraderecha")) turtleScene->gd(extraerValor(linea));
        else if (l.startsWith("gi") || l.startsWith("giraizquierda")) turtleScene->gi(extraerValor(linea));

        else if (l.startsWith("ot") || l.startsWith("ocultartortuga")) turtleScene->ocultaTortuga();

        else if (l.startsWith("ponpos") || l.startsWith("ponxy")) {
            int x = 0, y = 0;
            if (linea.contains("[")) {
                QString coords = linea.section('[',1,1).section(']',0,0).trimmed();
                QStringList parts = coords.split(' ', Qt::SkipEmptyParts);
                if (parts.size() >= 2) { x = parts[0].toInt(); y = parts[1].toInt(); }
            } else {
                QStringList parts = linea.split(' ', Qt::SkipEmptyParts);
                if (parts.size() >= 3) { x = parts[1].toInt(); y = parts[2].toInt(); }
            }
            turtleScene->ponPos(x, y);
        }
        else if (l.startsWith("ponrumbo")) turtleScene->ponRumbo(extraerValor(linea));
        else if (l.startsWith("ponx")) turtleScene->ponX(extraerValor(linea));
        else if (l.startsWith("pony")) turtleScene->ponY(extraerValor(linea));

        else if (l.startsWith("bl") || l.startsWith("bajalapiz")) turtleScene->bl();
        else if (l.startsWith("sl") || l.startsWith("subelapiz")) turtleScene->sl();
        else if (l.startsWith("poncl") || l.startsWith("poncolorlapiz")) {
            QStringList parts = linea.split(' ');
            if (parts.size()>1) turtleScene->poncl(parts[1]);
        }

        else if (l.startsWith("centro")) turtleScene->centro();
        else if (l.startsWith("espera")) turtleScene->esperar(extraerValor(linea));
    }

    /* Function: extraerValor
       Descripción:
         Obtiene el valor numérico de una instrucción o variable.

       Detalles:
         - Si el argumento es una variable, devuelve su valor.
         - Si es un número o expresión, lo evalúa.

       Params:
         - linea: Texto con la expresión o referencia.

       Returns:
         Valor entero correspondiente a la evaluación.
    */
    int extraerValor(const QString &linea) {
        QStringList tokens = linea.split(' ', Qt::SkipEmptyParts);
        if (tokens.size() < 2) return 0;
        QString expr = tokens.mid(1).join(" ");

        // Si es una variable existente, devuelve su valor
        if (variables.contains(expr))
            return variables[expr];

        // Si no, evalúa como expresión
        return evaluarExpresion(expr);
    }

    /* Function: evaluarCondicion
       Descripción:
         Evalúa una condición lógica simple (>, <, ==, <=, >=, !=) o una expresión.

       Params:
         - cond: Texto con la condición.

       Returns:
         true si la condición es verdadera, false en caso contrario.
    */
    bool evaluarCondicion(const QString &cond) {
        QString c = cond.trimmed();

        if (c.isEmpty()) return false;

        // Detectar operadores
        QStringList ops = {"<=", ">=", "==", "!=", "<", ">"};
        for (const QString &op : ops) {
            int idx = c.indexOf(op);
            if (idx != -1) {
                QString left = c.left(idx).trimmed();
                QString right = c.mid(idx + op.length()).trimmed();

                int valLeft = evaluarExpresion(left);
                int valRight = evaluarExpresion(right);

                if (op == "<") return valLeft < valRight;
                if (op == "<=") return valLeft <= valRight;
                if (op == ">") return valLeft > valRight;
                if (op == ">=") return valLeft >= valRight;
                if (op == "==") return valLeft == valRight;
                if (op == "!=") return valLeft != valRight;
            }
        }

        // Si no reconoce operador, evaluar como expresión
        int resultado = evaluarExpresion(c);
        return resultado != 0;
    }


    /* Function: evaluarExpresion
       Descripción:
         Evalúa expresiones aritméticas o variables.

       Soporta:
         - Operaciones: Suma, Resta, Producto, Potencia, Division, Azar.
         - Variables definidas en tiempo de ejecución.
         - Números literales y expresiones simples.

       Params:
         - expr: Texto de la expresión.

       Returns:
         Resultado entero de la evaluación.
    */
    int evaluarExpresion(const QString &expr) {
        QString e = expr.trimmed();

        // Verificar si es una variable
        if (variables.contains(e)) {
            int valor = variables[e];
            return valor;
        }

        // Verificar si es un número
        bool ok;
        int valor = e.toInt(&ok);
        if (ok) {
            return valor;
        }

        // Verificar operaciones matemáticas
        QStringList tokens = e.split(' ', Qt::SkipEmptyParts);
        if (tokens.isEmpty()) return 0;

        QString op = tokens[0];

        if (op == "Suma") {
            int total = 0;
            for (int i = 1; i < tokens.size(); ++i) {
                total += evaluarExpresion(tokens[i]);
            }
            return total;
        }
        else if (op == "Resta") {
            if (tokens.size() < 2) return 0;
            int total = evaluarExpresion(tokens[1]);
            for (int i = 2; i < tokens.size(); ++i) {
                total -= evaluarExpresion(tokens[i]);
            }
            return total;
        }
        else if (op == "Producto") {
            int total = 1;
            for (int i = 1; i < tokens.size(); ++i) {
                total *= evaluarExpresion(tokens[i]);
            }
            return total;
        }
        else if (op == "Potencia") {
            if (tokens.size() < 3) return 0;
            int base = evaluarExpresion(tokens[1]);
            int exp = evaluarExpresion(tokens[2]);
            int total = 1;
            for (int i = 0; i < exp; ++i) {
                total *= base;
            }
            return total;
        }
        else if (op == "Division") {
            if (tokens.size() < 3) return 0;
            int a = evaluarExpresion(tokens[1]);
            int b = evaluarExpresion(tokens[2]);
            int resultado = b != 0 ? a / b : 0;
            return resultado;
        }
        else if (op == "Azar") {
            if (tokens.size() < 2) return 0;
            int n = evaluarExpresion(tokens[1]);
            if (n <= 0) return 0;
            int resultado = rand() % (n + 1);
            return resultado;
        }
        return 0;
    }
};

#endif // LOGOTEC_TURTLE_CODEGEN_H