#ifndef LOGOTEC_INO_TRANSLATOR_H
#define LOGOTEC_INO_TRANSLATOR_H

#include <QString>
#include <QSet>

/* Class: InoTranslator
   Descripción:
     Clase encargada de traducir archivos de código `.ino` (Arduino) a código C++ estándar,
     adaptado para ser ejecutado dentro del entorno `TurtleScene`.

   Funcionalidad principal:
     - Lee un archivo `.ino` y extrae el contenido relevante de la función `setup()`.
     - Traduce las instrucciones específicas del lenguaje tipo Logo a invocaciones C++ sobre `TurtleScene`.
     - Genera un archivo `.cpp` válido con la estructura necesaria para ejecutar el código en la aplicación.

   Ejemplo:
     InoTranslator translator;
     translator.translateInoToCpp("programa.ino", "programa.cpp");
     // Traduce el código Arduino a C++ integrable con TurtleScene.
*/

class InoTranslator {
public:
    InoTranslator() = default;
    bool translateInoToCpp(const QString &inoFilePath, const QString &outputCppPath);

private:
    QString extractMainCode(const QString &inoCode);
    QString processLinesWithScope(const QStringList &lines);
    QString translateLineWithVariables(const QString &line, QSet<QString> &declaredVariables);
};

#endif //LOGOTEC_INO_TRANSLATOR_H