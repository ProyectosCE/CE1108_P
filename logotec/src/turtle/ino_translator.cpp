#include "ino_translator.h"
#include <QFile>
#include <QDir>
#include <QDebug>
#include <QTextStream>
#include <QRegularExpression>

/* Function: translateInoToCpp
   Descripción:
     Traduce un archivo `.ino` (Arduino) a un archivo `.cpp` compatible con el sistema Turtle.
     La función lee el código fuente del archivo `.ino`, extrae las secciones relevantes,
     traduce las instrucciones al formato C++ y genera un archivo `.cpp` listo para compilación.

   Params:
     - inoFilePath: Ruta completa del archivo `.ino` de entrada.
     - outputCppPath: Ruta donde se guardará el archivo `.cpp` generado.

   Returns:
     - bool: `true` si la traducción se realiza correctamente, `false` si ocurre un error.

   Restricciones:
     - El archivo `.ino` debe existir y ser accesible.
     - El directorio de salida debe ser válido o crearse correctamente.
     - Se asume que las funciones de tortuga (`avanzaTortuga`, `giraDerecha`, etc.) están definidas.

   Ejemplo:
     translateInoToCpp("programa.ino", "programa.cpp");
*/
bool InoTranslator::translateInoToCpp(const QString &inoFilePath, const QString &outputCppPath) {
    QFile inoFile(inoFilePath);
    if (!inoFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning() << "No se pudo abrir archivo .ino:" << inoFilePath;
        return false;
    }

    QString inoContent = inoFile.readAll();
    inoFile.close();

    QString mainCode = extractMainCode(inoContent);
    QStringList lines = mainCode.split('\n', Qt::SkipEmptyParts);

    QString translatedCode = processLinesWithScope(lines);

    QString cppCode = QString(R"(
#include "turtle/turtlescene.h"
#include <cstdlib>
#include <ctime>

void executeTurtleProgram(TurtleScene* turtleScene) {
    std::srand(std::time(nullptr));
    %1
}
)").arg(translatedCode);

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

/* Function: processLinesWithScope
   Descripción:
     Procesa una lista de líneas de código y las traduce al formato C++,
     manteniendo el control de las variables declaradas y el alcance de cada bloque.

   Params:
     - lines: Lista de líneas de código extraídas del archivo `.ino`.

   Returns:
     - QString: Código traducido en formato C++.

   Restricciones:
     - Las líneas deben estar correctamente delimitadas por saltos de línea.
     - Se asume que las variables declaradas siguen el formato del pseudolenguaje Turtle.
*/
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

/* Function: translateLineWithVariables
   Descripción:
     Traduce una línea individual del pseudolenguaje Turtle al equivalente en C++,
     manejando declaraciones de variables, condicionales y llamadas a funciones de tortuga.

   Params:
     - line: Línea de código a traducir.
     - declaredVariables: Conjunto de variables ya declaradas para evitar redefiniciones.

   Returns:
     - QString: Línea traducida en C++ o una cadena vacía si no requiere traducción.

   Restricciones:
     - Las sentencias "Haz", "SI" y las funciones de tortuga deben estar bien formadas.
     - Se asume que los nombres de variables no contienen caracteres inválidos.

   Ejemplo:
     Entrada:  "Haz x 5"
     Salida:   "int x = 5;"
*/
QString InoTranslator::translateLineWithVariables(const QString &line, QSet<QString> &declaredVariables) {
    if (line.isEmpty() || line.startsWith("#include") ||
        line.startsWith("void ") || line.contains("initTurtle()")) {
        return "";
    }

    QString result = line;

    // Declaraciones con "Haz"
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

    // Condicionales "SI"
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

        return QString("if (%1) {\n%2\n}").arg(condition).arg(translatedBlockLines.join('\n'));
    }

    // Traducción de funciones de tortuga
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

    // Operaciones aritméticas
    result.replace("AZAR(", "turtleScene->AZAR(");
    result.replace("SUMA(", "turtleScene->SUMA(");
    result.replace("DIFERENCIA(", "turtleScene->DIFERENCIA(");
    result.replace("PRODUCTO(", "turtleScene->PRODUCTO(");
    result.replace("DIVISION(", "turtleScene->DIVISION(");
    result.replace("POTENCIA(", "turtleScene->POTENCIA(");

    if (!result.isEmpty() && !result.endsWith(';') && !result.endsWith('{') && !result.endsWith('}')) {
        result += ';';
    }

    return result;
}

/* Function: extractMainCode
   Descripción:
     Extrae el bloque principal de código del archivo `.ino`, correspondiente al contenido
     de la función `setup()`. Ignora el bloque `loop()` y limpia llaves y espacios innecesarios.

   Params:
     - inoCode: Contenido completo del archivo `.ino`.

   Returns:
     - QString: Código contenido dentro de `setup()` listo para traducción.

   Restricciones:
     - La función `setup()` debe existir y estar correctamente delimitada por llaves.
     - Si no se encuentra la función `setup()`, se devuelve una cadena vacía.

   Ejemplo:
     Entrada:
       void setup() {
         avanzaTortuga(50);
       }
     Salida:
       avanzaTortuga(50);
*/
QString InoTranslator::extractMainCode(const QString &inoCode) {
    int start = inoCode.indexOf("void setup()");
    if (start == -1) return "";

    start = inoCode.indexOf("{", start);
    if (start == -1) return "";
    start++;

    int end = inoCode.indexOf("void loop()");
    if (end == -1) {
        end = inoCode.length();
    }

    QString content = inoCode.mid(start, end - start).trimmed();

    if (content.endsWith("}")) {
        content.chop(1);
    }

    return content.trimmed();
}
