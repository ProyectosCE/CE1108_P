#ifndef LOGOTEC_TURTLE_CODEGEN_H
#define LOGOTEC_TURTLE_CODEGEN_H

#include <QString>
#include <QStringList>
#include <QList>
#include <QFile>
#include <QTextStream>
#include <QDebug>
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
    // Parsear bloques
    // ---------------------------------------------
    QList<Bloque> parsearBloques(const QStringList &lineas) {
        QList<Bloque> bloques;
        QList<Bloque*> stack;

        for (const QString &linea : lineas) {
            QString l = linea.trimmed();
            if (l.startsWith("REPITE")) {
                Bloque *b = new Bloque();
                b->tipo = "REPITE";
                b->repeticiones = l.section(' ',1,1).toInt();
                stack.append(b);
            } else if (l.startsWith("SI")) {
                Bloque *b = new Bloque();
                b->tipo = "SI";
                b->condicion = l.section('(',1,1).section(')',0,0);
                stack.append(b);
            } else if (l.startsWith("EJECUTA") || l.startsWith("HAZ") || l.startsWith("HASTA") || l.startsWith("MIENTRAS")) {
                Bloque *b = new Bloque();
                b->tipo = l.section(' ',0,0);
                if (l.contains("(")) b->condicion = l.section('(',1,1).section(')',0,0);
                stack.append(b);
            } else if (l.startsWith("]") || l.startsWith("}")) {
                if (!stack.isEmpty()) {
                    Bloque *cerrado = stack.takeLast();
                    if (stack.isEmpty()) bloques.append(*cerrado);
                    else stack.last()->lineas.append(*cerrado);
                    delete cerrado;
                }
            } else { // instrucción normal
                Bloque b;
                b.tipo = "instruccion";
                b.instruccion = l;
                if (!stack.isEmpty()) stack.last()->lineas.append(b);
                else bloques.append(b);
            }
        }

        // Agregar bloques abiertos restantes
        for (Bloque* b : stack) {
            bloques.append(*b);
            delete b;
        }
        stack.clear();

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

    // ---------------------------------------------
    // Ejecutar un bloque individual
    // ---------------------------------------------
    void ejecutarBloque(const Bloque &b) {
        if (b.tipo == "instruccion") {
            ejecutarInstruccion(b.instruccion);
        } else if (b.tipo == "REPITE") {
            for (int i=0;i<b.repeticiones;i++)
                for (const Bloque &sub : b.lineas)
                    ejecutarBloque(sub);
        } else if (b.tipo == "SI") {
            if (evaluarCondicion(b.condicion))
                for (const Bloque &sub : b.lineas)
                    ejecutarBloque(sub);
        } else if (b.tipo == "EJECUTA" || b.tipo == "HAZ") {
            for (const Bloque &sub : b.lineas)
                ejecutarBloque(sub);
        } else if (b.tipo == "HASTA") {
            while (!evaluarCondicion(b.condicion))
                for (const Bloque &sub : b.lineas)
                    ejecutarBloque(sub);
        } else if (b.tipo == "MIENTRAS") {
            while (evaluarCondicion(b.condicion))
                for (const Bloque &sub : b.lineas)
                    ejecutarBloque(sub);
        }
    }

    // ---------------------------------------------
    // Ejecutar instrucción simple
    // ---------------------------------------------
    void ejecutarInstruccion(const QString &linea) {
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

    // ---------------------------------------------
    // Extraer valor de la instrucción
    // ---------------------------------------------
    int extraerValor(const QString &linea) {
        QStringList tokens = linea.split(' ', Qt::SkipEmptyParts);
        if (tokens.size() < 2) return 0;
        QString expr = tokens.mid(1).join(" ");
        return evaluarExpresion(expr);
    }

    // ---------------------------------------------
    // Evaluar condiciones lógicas simples
    // ---------------------------------------------
    bool evaluarCondicion(const QString &cond) {
        QString c = cond.trimmed().toLower();
        if (c=="false") return false;
        if (c=="true") return true;
        return true; // default true para demo
    }

    // ---------------------------------------------
    // Evaluar expresiones aritméticas simples
    // ---------------------------------------------
    int evaluarExpresion(const QString &linea) {
        QStringList tokens = linea.split(' ', Qt::SkipEmptyParts);
        if (tokens.isEmpty()) return 0;

        QString op = tokens[0];

        if (op == "Suma") {
            int total = 0;
            for (int i=1;i<tokens.size();++i) total += evaluarExpresion(tokens[i]);
            return total;
        }
        if (op == "Resta") {
            if (tokens.size()<2) return 0;
            int total = evaluarExpresion(tokens[1]);
            for (int i=2;i<tokens.size();++i) total -= evaluarExpresion(tokens[i]);
            return total;
        }
        if (op == "Producto") {
            int total = 1;
            for (int i=1;i<tokens.size();++i) total *= evaluarExpresion(tokens[i]);
            return total;
        }
        if (op == "Potencia") {
            if (tokens.size()<3) return 0;
            int base = evaluarExpresion(tokens[1]);
            int exp = evaluarExpresion(tokens[2]);
            int total = 1;
            for (int i=0;i<exp;++i) total *= base;
            return total;
        }
        if (op == "Division") {
            if (tokens.size()<3) return 0;
            int a = evaluarExpresion(tokens[1]);
            int b = evaluarExpresion(tokens[2]);
            return b!=0 ? a/b : 0;
        }
        if (op == "Azar") {
            if (tokens.size() < 2) return 0;
            int n = evaluarExpresion(tokens[1]);
            if (n <= 0) return 0;
            return rand() % (n + 1); // número aleatorio entre 0 y n
        }


        // Números literales
        bool ok=false;
        int val = tokens[0].toInt(&ok);
        if (ok) return val;

        return 0; // default
    }
};

#endif // LOGOTEC_TURTLE_CODEGEN_H
