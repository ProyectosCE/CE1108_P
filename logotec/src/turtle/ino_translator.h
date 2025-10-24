#ifndef LOGOTEC_INO_TRANSLATOR_H
#define LOGOTEC_INO_TRANSLATOR_H

#include <QString>
#include <QSet>

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