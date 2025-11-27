#ifndef LOGOTEC_INO_TRANSLATOR_H
#define LOGOTEC_INO_TRANSLATOR_H

#include <QString>
#include <QSet>
#include <QMap>

class InoTranslator {
public:
    InoTranslator() = default;
    bool translateInoToCpp(const QString &inoFilePath, const QString &outputCppPath);

private:
    QString extractExtraFunctions(const QString &code);
    QString extractMainCodeFromMain(const QString &code);
    QMap<QString, bool> userFunctions;

    QString processLinesWithScope(const QStringList &lines);
    QString translateLineWithVariables(const QString &line, QSet<QString> &declaredVariables);
};

#endif //LOGOTEC_INO_TRANSLATOR_H