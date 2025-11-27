#include "ino_translator.h"
#include <QFile>
#include <QDir>
#include <QDebug>
#include <QTextStream>
#include <QRegularExpression>

bool InoTranslator::translateInoToCpp(const QString &inoFilePath, const QString &outputCppPath) {

    userFunctions.clear();   // limpiar funciones anteriores

    QFile inoFile(inoFilePath);
    if (!inoFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning() << "No se pudo abrir archivo .ino:" << inoFilePath;
        return false;
    }

    QString inoContent = inoFile.readAll();
    inoFile.close();

    // 1. Extraer funciones auxiliares
    QString functionsCode = extractExtraFunctions(inoContent);

    // 2. Extraer contenido del main
    QString mainCode = extractMainCodeFromMain(inoContent);

    // 3. Procesar main
    QStringList lines = mainCode.split('\n');
    QString translatedMain = processLinesWithScope(lines);

    // 4. Generar C++
    QString cppCode = QString(R"(
#include "turtle/turtlescene.h"
#include <cstdlib>
#include <ctime>

%1

void executeTurtleProgram(TurtleScene* turtleScene) {
    std::srand(std::time(nullptr));
%2
}
)").arg(functionsCode).arg(translatedMain);

    QDir().mkpath(QFileInfo(outputCppPath).absolutePath());

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

QString InoTranslator::extractExtraFunctions(const QString &code) {

    QString result;

    QRegularExpression funcHeader(
        R"((void|int|float|double)\s+(\w+)\s*\(([^)]*)\)\s*\{)"
    );

    QRegularExpressionMatchIterator it = funcHeader.globalMatch(code);

    while (it.hasNext()) {

        QRegularExpressionMatch match = it.next();

        QString returnType = match.captured(1);
        QString functionName = match.captured(2);
        QString originalParams = match.captured(3).trimmed();

        if (functionName == "setup" ||
            functionName == "loop" ||
            functionName == "main")
            continue;

        int start = match.capturedEnd(0); // posición justo después del {

        int braceCounter = 1;
        int pos = start;

        while (pos < code.length() && braceCounter > 0) {
            if (code[pos] == '{')
                braceCounter++;
            else if (code[pos] == '}')
                braceCounter--;

            pos++;
        }

        QString functionBody = code.mid(start, pos - start - 1);

        // Registrar función
        bool hasParams = !originalParams.isEmpty();
        userFunctions.insert(functionName, hasParams);

        // Parámetros
        QString newParams;
        if (originalParams.isEmpty())
            newParams = "TurtleScene* turtleScene";
        else
            newParams = "TurtleScene* turtleScene, " + originalParams;

        QString functionSignature =
            returnType + " " + functionName + "(" + newParams + ")";

        // Traducir cuerpo
        QStringList bodyLines = functionBody.split('\n');
        QString translatedBody = processLinesWithScope(bodyLines);

        result += functionSignature + " {\n";
        result += translatedBody;
        result += "\n}\n\n";
    }

    return result;
}

QString InoTranslator::extractMainCodeFromMain(const QString &code) {

    int mainIndex = code.indexOf(QRegularExpression(R"(int\s+main\s*\(\))"));
    if (mainIndex == -1)
        return "";

    int braceStart = code.indexOf("{", mainIndex);
    if (braceStart == -1)
        return "";

    int braceCount = 0;
    int bodyStart = braceStart + 1;
    int i = braceStart;

    for (; i < code.length(); i++) {
        if (code[i] == '{')
            braceCount++;
        else if (code[i] == '}') {
            braceCount--;
            if (braceCount == 0)
                break;
        }
    }

    QString body = code.mid(bodyStart, i - bodyStart);
    return body.trimmed();
}



QString InoTranslator::processLinesWithScope(const QStringList &lines) {
    QStringList resultLines;
    QSet<QString> declaredVariables;

    for (const QString &line : lines) {
        QString translated = translateLineWithVariables(line.trimmed(), declaredVariables);
        if (!translated.isEmpty()) {
            resultLines.append(translated);
        }
    }

    return resultLines.join('\n');
}

QString InoTranslator::translateLineWithVariables(const QString &line,
                                                   QSet<QString> &declaredVariables) {
    if (line.isEmpty() || line.startsWith("#include") ||
        line.startsWith("void ") || line.contains("initTurtle()")) {
        return "";
    }

    QString result = line;

    // -----------------------------
    // Manejo de "Haz"
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

    // -----------------------------
    // Condicional SI
    QRegularExpression siRegex("SI\\s*\\((.*?)\\)\\s*\\[(.*)\\]");
    QRegularExpressionMatch siMatch = siRegex.match(line);
    if (siMatch.hasMatch()) {
        QString condition = siMatch.captured(1);
        QString blockContent = siMatch.captured(2);

        QStringList blockLines = blockContent.split(';', Qt::SkipEmptyParts);
        QStringList translatedBlockLines;

        QSet<QString> blockVariables = declaredVariables;

        for (const QString &blockLine : blockLines) {
            QString translated = translateLineWithVariables(blockLine.trimmed(), blockVariables);
            if (!translated.isEmpty()) {
                translatedBlockLines.append("    " + translated);
            }
        }

        return QString("if (%1) {\n%2\n}")
               .arg(condition)
               .arg(translatedBlockLines.join('\n'));
    }

    // -----------------------------
    // Funciones de tortuga
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

    // Operaciones
    result.replace("AZAR(", "turtleScene->AZAR(");
    result.replace("SUMA(", "turtleScene->SUMA(");
    result.replace("DIFERENCIA(", "turtleScene->DIFERENCIA(");
    result.replace("PRODUCTO(", "turtleScene->PRODUCTO(");
    result.replace("DIVISION(", "turtleScene->DIVISION(");
    result.replace("POTENCIA(", "turtleScene->POTENCIA(");

    // Reescritura automática de llamadas a funciones del usuario
    for (auto it = userFunctions.begin(); it != userFunctions.end(); ++it) {
        QString funcName = it.key();
        bool hasParams = it.value();

        QRegularExpression callRegex(QString("\\b%1\\s*\\(([^)]*)\\)").arg(funcName));
        QRegularExpressionMatch match = callRegex.match(result);

        if (match.hasMatch()) {
            QString inside = match.captured(1).trimmed();

            if (inside.isEmpty()) {
                // sin parámetros
                result.replace(callRegex, funcName + "(turtleScene)");
            } else {
                // con parámetros
                result.replace(callRegex,
                               funcName + "(turtleScene, " + inside + ")");
            }
        }
    }

    // Añadir punto y coma
    if (!result.isEmpty() &&
        !result.endsWith(';') &&
        !result.endsWith('{') &&
        !result.endsWith('}')) {
        result += ';';
    }

    return result;
}
