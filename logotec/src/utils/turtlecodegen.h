#ifndef LOGOTEC_TURTLE_CODEGEN_H
#define LOGOTEC_TURTLE_CODEGEN_H

#include <QString>
#include <QStringList>
#include <QList>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QStack>
#include "../turtle/turtlescene.h"

// =======================================================
// Estructura de bloque
// =======================================================
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

// =======================================================
// Clase TurtleCodeGen
// =======================================================
class TurtleCodeGen {
public:
    explicit TurtleCodeGen(TurtleScene *scene = nullptr) : turtleScene(scene) {}

    // ---------------------------------------------
    // Leer archivo .lt
    // ---------------------------------------------
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

    // ---------------------------------------------
    // Parsear bloques - VERSIÓN CORREGIDA
    // ---------------------------------------------
QList<Bloque> parsearBloques(const QStringList &lineas) {
    QList<Bloque> bloques;
    QStack<Bloque*> stack;

    for (int idx = 0; idx < lineas.size(); ++idx) {
        QString linea = lineas[idx].trimmed();

        if (linea.isEmpty()) continue;

        qDebug() << "Procesando línea:" << linea;

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
                qDebug() << "Condición extraída para" << b->tipo << ":" << b->condicion;
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
                    qDebug() << "Condición asignada a" << stack.top()->tipo << ":" << stack.top()->condicion;
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

    // ---------------------------------------------
    // Ejecutar bloques
    // ---------------------------------------------
    void ejecutarBloques(const QList<Bloque> &bloques) {
        for (const Bloque &b : bloques) {
            ejecutarBloque(b);
        }
    }

private:
    TurtleScene *turtleScene;
    QMap<QString, int> variables;

    // ---------------------------------------------
    // Ejecutar un bloque individual - VERSIÓN CORREGIDA
    // ---------------------------------------------
void ejecutarBloque(const Bloque &b) {
    qDebug() << "Ejecutando bloque:" << b.tipo << "cond:" << b.condicion;

    if (b.tipo == "instruccion") {
        procesarInstruccion(b.instruccion);
    }
    else if (b.tipo == "REPITE") {
        int reps = evaluarExpresion(b.repeticionesStr);
        qDebug() << "REPITE:" << reps << "veces";
        for (int i = 0; i < reps; ++i) {
            for (const Bloque &sub : b.lineas) {
                ejecutarBloque(sub);
            }
        }
    }
    else if (b.tipo == "SI") {
        bool condicion = evaluarCondicion(b.condicion);
        qDebug() << "SI condicion:" << b.condicion << "=" << condicion;

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
        qDebug() << "HASTA: Iniciando loop, condición:" << b.condicion;
        int iteracion = 0;
        while (!evaluarCondicion(b.condicion)) {
            qDebug() << "HASTA: Iteración" << ++iteracion << "condición:" << b.condicion << "=" << evaluarCondicion(b.condicion);
            for (const Bloque &sub : b.lineas) {
                ejecutarBloque(sub);
            }
            if (iteracion > 1000) {
                qDebug() << "HASTA: Demasiadas iteraciones, abortando";
                break;
            }
        }
        qDebug() << "HASTA: Loop terminado después de" << iteracion << "iteraciones";
    }
    else if (b.tipo == "MIENTRAS") {
        qDebug() << "MIENTRAS: Iniciando loop, condición:" << b.condicion;
        int iteracion = 0;
        while (evaluarCondicion(b.condicion)) {
            qDebug() << "MIENTRAS: Iteración" << ++iteracion << "condición:" << b.condicion << "=" << evaluarCondicion(b.condicion);
            for (const Bloque &sub : b.lineas) {
                ejecutarBloque(sub);
            }
            if (iteracion > 1000) {
                qDebug() << "MIENTRAS: Demasiadas iteraciones, abortando";
                break;
            }
        }
        qDebug() << "MIENTRAS: Loop terminado después de" << iteracion << "iteraciones";
    }
    else if (b.tipo == "HAZ.HASTA") {
        qDebug() << "HAZ.HASTA: Iniciando loop do-while, condición:" << b.condicion;
        int iteracion = 0;
        do {
            qDebug() << "HAZ.HASTA: Iteración" << ++iteracion;
            for (const Bloque &sub : b.lineas) {
                ejecutarBloque(sub);
            }
            bool condEvaluada = evaluarCondicion(b.condicion);
            qDebug() << "HAZ.HASTA: Después de ejecutar - condición '" << b.condicion << "' = " << condEvaluada;
            if (iteracion > 1000) {
                qDebug() << "HAZ.HASTA: Demasiadas iteraciones, abortando";
                break;
            }
        } while (!evaluarCondicion(b.condicion));
        qDebug() << "HAZ.HASTA: Loop terminado después de" << iteracion << "iteraciones";
    }
    else if (b.tipo == "HAZ.MIENTRAS") {
        qDebug() << "HAZ.MIENTRAS: Iniciando loop do-while, condición:" << b.condicion;
        int iteracion = 0;
        do {
            qDebug() << "HAZ.MIENTRAS: Iteración" << ++iteracion;
            for (const Bloque &sub : b.lineas) {
                ejecutarBloque(sub);
            }
            bool condEvaluada = evaluarCondicion(b.condicion);
            qDebug() << "HAZ.MIENTRAS: Después de ejecutar - condición '" << b.condicion << "' = " << condEvaluada;
            if (iteracion > 1000) {
                qDebug() << "HAZ.MIENTRAS: Demasiadas iteraciones, abortando";
                break;
            }
        } while (evaluarCondicion(b.condicion));
        qDebug() << "HAZ.MIENTRAS: Loop terminado después de" << iteracion << "iteraciones";
    }
}

    // ---------------------------------------------
    // Procesar instrucción
    // ---------------------------------------------
    void procesarInstruccion(const QString &linea) {
        if (!turtleScene) return;

        QString l = linea.trimmed();
        qDebug() << "Procesando instrucción:" << l;

        // Procesar asignaciones de variables primero
        if (procesarAsignacionVariable(l)) {
            return;
        }

        // Ejecutar instrucciones de tortuga
        ejecutarInstruccionTortuga(l);
    }

    // ---------------------------------------------
    // Procesar asignación de variables - CORREGIDO
    // ---------------------------------------------
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
                qDebug() << "Variable asignada:" << varName << "=" << variables[varName];
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
                    qDebug() << "Variable incrementada:" << varName << "de" << valorActual << "a" << variables[varName];
                }
            }
            return true;
        }

        return false;
    }


    // ---------------------------------------------
    // Ejecutar instrucción de tortuga
    // ---------------------------------------------
    void ejecutarInstruccionTortuga(const QString &linea) {
        if (!turtleScene) return;

        QString l = linea.toLower();
        qDebug() << "Ejecutando tortuga:" << l;

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

    // ---------------------------------------------
    // Extraer valor de la instrucción
    // ---------------------------------------------
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

    // ---------------------------------------------
    // Evaluar condiciones lógicas - CORREGIDO
    // ---------------------------------------------
    bool evaluarCondicion(const QString &cond) {
        QString c = cond.trimmed();

        qDebug() << "Evaluando condición:" << c;

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

                qDebug() << "Comparación:" << left << op << right << "=" << valLeft << op << valRight;

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
        qDebug() << "Condición como expresión:" << c << "=" << resultado;
        return resultado != 0;
    }


    // ---------------------------------------------
    // Evaluar expresiones aritméticas
    // ---------------------------------------------
    int evaluarExpresion(const QString &expr) {
        QString e = expr.trimmed();
        qDebug() << "Evaluando expresión:" << e;

        // Verificar si es una variable
        if (variables.contains(e)) {
            int valor = variables[e];
            qDebug() << "Variable encontrada:" << e << "=" << valor;
            return valor;
        }

        // Verificar si es un número
        bool ok;
        int valor = e.toInt(&ok);
        if (ok) {
            qDebug() << "Número literal:" << valor;
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
            qDebug() << "Suma resultado:" << total;
            return total;
        }
        else if (op == "Resta") {
            if (tokens.size() < 2) return 0;
            int total = evaluarExpresion(tokens[1]);
            for (int i = 2; i < tokens.size(); ++i) {
                total -= evaluarExpresion(tokens[i]);
            }
            qDebug() << "Resta resultado:" << total;
            return total;
        }
        else if (op == "Producto") {
            int total = 1;
            for (int i = 1; i < tokens.size(); ++i) {
                total *= evaluarExpresion(tokens[i]);
            }
            qDebug() << "Producto resultado:" << total;
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
            qDebug() << "Potencia resultado:" << total;
            return total;
        }
        else if (op == "Division") {
            if (tokens.size() < 3) return 0;
            int a = evaluarExpresion(tokens[1]);
            int b = evaluarExpresion(tokens[2]);
            int resultado = b != 0 ? a / b : 0;
            qDebug() << "División resultado:" << resultado;
            return resultado;
        }
        else if (op == "Azar") {
            if (tokens.size() < 2) return 0;
            int n = evaluarExpresion(tokens[1]);
            if (n <= 0) return 0;
            int resultado = rand() % (n + 1);
            qDebug() << "Azar resultado:" << resultado;
            return resultado;
        }

        qDebug() << "Expresión no reconocida, retornando 0";
        return 0;
    }
};

#endif // LOGOTEC_TURTLE_CODEGEN_H