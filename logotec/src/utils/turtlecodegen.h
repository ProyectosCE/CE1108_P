#ifndef LOGOTEC_TURTLE_CODEGEN_H
#define LOGOTEC_TURTLE_CODEGEN_H

#include <QString>
#include <QStringList>
#include <QList>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "../turtle/turtlescene.h"

// Estructura de bloque
struct Bloque {
    QString tipo;          // "instruccion", "REPITE", "SI", "HAZ", etc.
    int repeticiones = 1;  // para REPITE
    QString condicion;     // para SI o HASTA
    QList<Bloque> lineas;  // bloques internos
    QString instruccion;   // para tipo "instruccion"
};

class TurtleCodeGen {
public:
    explicit TurtleCodeGen(TurtleScene *scene = nullptr) : turtleScene(scene) {}

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

    // Parser principal de bloques
    QList<Bloque> parsearBloques(const QStringList &lineas) {
        QList<Bloque> bloques;
        QList<Bloque*> stack;

        for (const QString &linea : lineas) {
            QString l = linea.trimmed();
            if (l.startsWith("REPITE")) {
                Bloque b;
                b.tipo = "REPITE";
                b.repeticiones = l.section(' ',1,1).toInt();
                stack.append(new Bloque(b));
            } else if (l.startsWith("SI")) {
                Bloque b;
                b.tipo = "SI";
                b.condicion = l.section('(',1,1).section(')',0,0);
                stack.append(new Bloque(b));
            } else if (l.startsWith("EJECUTA") || l.startsWith("HAZ") || l.startsWith("HASTA") || l.startsWith("MIENTRAS")) {
                Bloque b;
                b.tipo = l.section(' ',0,0);
                if (l.contains("(")) b.condicion = l.section('(',1,1).section(')',0,0);
                stack.append(new Bloque(b));
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

        // No añadir bloques abiertos automáticamente; el stack debería estar vacío
        return bloques;
    }


    // Ejecutar bloques
    void ejecutarBloques(const QList<Bloque> &bloques) {
        for (const Bloque &b : bloques) {
            ejecutarBloque(b);
        }
    }

private:
    TurtleScene *turtleScene;

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
        } else if (b.tipo == "EJECUTA") {
            for (const Bloque &sub : b.lineas)
                ejecutarBloque(sub);
        } else if (b.tipo == "HAZ") {
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
                // formato: ponpos [5 0]
                QString coords = linea.section('[',1,1).section(']',0,0).trimmed();
                QStringList parts = coords.split(' ', Qt::SkipEmptyParts);
                if (parts.size() >= 2) {
                    x = parts[0].toInt();
                    y = parts[1].toInt();
                }
            } else {
                // formato: ponxy 5 0
                QStringList parts = linea.split(' ', Qt::SkipEmptyParts);
                if (parts.size() >= 3) {
                    x = parts[1].toInt();
                    y = parts[2].toInt();
                }
            }
            turtleScene->ponPos(x, y);
        }
        else if (l.startsWith("ponrumbo")) turtleScene->ponRumbo(extraerValor(linea));

        else if (l.startsWith("ponx")) turtleScene->ponX(extraerValor(linea));
        else if (l.startsWith("pony")) turtleScene->ponY(extraerValor(linea));


        else if (l.startsWith("bl") || l.startsWith("bajalapiz")) turtleScene->bl();
        else if (l.startsWith("sl") || l.startsWith("subelapiz")) turtleScene->sl();
        else if (l.startsWith("poncl") || l.startsWith("poncolorlapiz")) {
            QStringList parts = linea.split(" ");
            if (parts.size()>1) turtleScene->poncl(parts[1]);
        }
        else if (l.startsWith("centro")) turtleScene->centro();
        else if (l.startsWith("espera")) turtleScene->esperar(extraerValor(linea));

    }

    int extraerValor(const QString &linea) {
        QString s = linea;
        int start = s.indexOf("(")+1;
        int end = s.indexOf(")");
        if (start<=0 || end<0) return s.section(' ',1,1).toInt();
        return s.mid(start,end-start).toInt();
    }

    bool evaluarCondicion(const QString &cond) {
        QString c = cond.trimmed().toLower();
        if (c=="false") return false;
        if (c=="true") return true;
        // por simplicidad, siempre true para demo; puedes evaluar variables reales después
        return true;
    }
};

#endif // LOGOTEC_TURTLE_CODEGEN_H
