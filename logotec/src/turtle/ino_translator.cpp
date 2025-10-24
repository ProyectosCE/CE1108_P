#include "ino_translator.h"
#include <QFile>
#include <QDir>
#include <QDebug>
#include <QTextStream>
#include <QRegularExpression>

bool InoTranslator::translateInoToCpp(const QString &inoFilePath, const QString &outputCppPath) {
    // Leer archivo .ino
    QFile inoFile(inoFilePath);
    if (!inoFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning() << "No se pudo abrir archivo .ino:" << inoFilePath;
        return false;
    }

    QString inoContent = inoFile.readAll();
    inoFile.close();

    // Extraer y traducir código
    QString mainCode = extractMainCode(inoContent);
    QStringList lines = mainCode.split('\n', Qt::SkipEmptyParts);

    // Procesar líneas manteniendo la estructura de bloques
    QString translatedCode = processLinesWithScope(lines);

    // Generar código C++ completo
    QString cppCode = QString(R"(
#include "turtle/turtlescene.h"
#include <cstdlib>
#include <ctime>

void executeTurtleProgram(TurtleScene* turtleScene) {
    std::srand(std::time(nullptr));
    %1
}
)").arg(translatedCode);

    // Asegurar que el directorio existe
    QDir().mkpath(QFileInfo(outputCppPath).absolutePath());

    // Guardar archivo .cpp
    QFile outputFile(outputCppPath);
    if (!outputFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qWarning() << "No se pudo crear archivo .cpp:" << outputCppPath;
        return false;
    }

    QTextStream out(&outputFile);
    out << cppCode;
    outputFile.close();

    return true;
}

QString InoTranslator::processLinesWithScope(const QStringList &lines) {
    QStringList resultLines;
    QSet<QString> declaredVariables; // Variables ya declaradas

    for (const QString &line : lines) {
        QString translated = translateLineWithVariables(line.trimmed(), declaredVariables);
        if (!translated.isEmpty()) {
            resultLines.append(translated);
        }
    }

    return resultLines.join('\n');
}

QString InoTranslator::translateLineWithVariables(const QString &line, QSet<QString> &declaredVariables) {
    if (line.isEmpty() || line.startsWith("#include") ||
        line.startsWith("void ") || line.contains("initTurtle()")) {
        return "";
    }

    QString result = line;

    // Manejar declaraciones con "Haz"
    QRegularExpression hazRegex("Haz\\s+(\\w+)\\s+(.+)");
    QRegularExpressionMatch hazMatch = hazRegex.match(line);
    if (hazMatch.hasMatch()) {
        QString varName = hazMatch.captured(1);
        QString value = hazMatch.captured(2);

        if (!declaredVariables.contains(varName)) {
            declaredVariables.insert(varName);
            return QString("int %1 = %2;").arg(varName).arg(value);
        } else {
            return QString("%1 = %2;").arg(varName).arg(value);
        }
    }

    // Manejar condicionales SI
    QRegularExpression siRegex("SI\\s*\\((.*?)\\)\\s*\\[(.*)\\]");
    QRegularExpressionMatch siMatch = siRegex.match(line);
    if (siMatch.hasMatch()) {
        QString condition = siMatch.captured(1);
        QString blockContent = siMatch.captured(2);

        // Procesar el contenido del bloque
        QStringList blockLines = blockContent.split(';', Qt::SkipEmptyParts);
        QStringList translatedBlockLines;
        QSet<QString> blockVariables = declaredVariables; // Copiar variables del ámbito padre

        for (const QString &blockLine : blockLines) {
            QString translated = translateLineWithVariables(blockLine.trimmed(), blockVariables);
            if (!translated.isEmpty()) {
                translatedBlockLines.append("    " + translated);
            }
        }

        return QString("if (%1) {\n%2\n}").arg(condition).arg(translatedBlockLines.join('\n'));
    }

    // Reemplazar funciones de tortuga
    result.replace("avanzaTortuga(", "turtleScene->avanzaTortuga(");
    result.replace("retrocedeTortuga(", "turtleScene->retrocedeTortuga(");
    result.replace("giraDerecha(", "turtleScene->giraDerecha(");
    result.replace("giraIzquierda(", "turtleScene->giraIzquierda(");
    result.replace("ocultaTortuga()", "turtleScene->ocultaTortuga()");
    result.replace("ponPos(", "turtleScene->ponPos(");
    result.replace("ponRumbo(", "turtleScene->ponRumbo(");
    result.replace("ponX(", "turtleScene->ponX(");
    result.replace("ponY(", "turtleScene->ponY(");
    result.replace("bajaLapiz()", "turtleScene->bajaLapiz()");
    result.replace("subeLapiz()", "turtleScene->subeLapiz()");
    result.replace("ponColorLapiz(", "turtleScene->ponColorLapiz(");
    result.replace("centro()", "turtleScene->centro()");
    result.replace("esperar(", "turtleScene->esperar(");

    // Mantener operaciones aritméticas
    result.replace("AZAR(", "turtleScene->AZAR(");
    result.replace("SUMA(", "turtleScene->SUMA(");
    result.replace("DIFERENCIA(", "turtleScene->DIFERENCIA(");
    result.replace("PRODUCTO(", "turtleScene->PRODUCTO(");
    result.replace("DIVISION(", "turtleScene->DIVISION(");
    result.replace("POTENCIA(", "turtleScene->POTENCIA(");

    // Añadir punto y coma si falta
    if (!result.isEmpty() && !result.endsWith(';') && !result.endsWith('{') && !result.endsWith('}')) {
        result += ';';
    }

    return result;
}

QString InoTranslator::extractMainCode(const QString &inoCode) {
    // extraer all entre setup() { y }
    int start = inoCode.indexOf("void setup()");
    if (start == -1) return "";

    start = inoCode.indexOf("{", start);
    if (start == -1) return "";
    start++; // pasar la llave

    int end = inoCode.indexOf("void loop()");
    if (end == -1) {
        end = inoCode.length();
    }

    // Extraer el contenido y limpiarlo
    QString content = inoCode.mid(start, end - start).trimmed();

    // Remover la última llave de cierre si existe
    if (content.endsWith("}")) {
        content.chop(1);
    }

    return content.trimmed();
}