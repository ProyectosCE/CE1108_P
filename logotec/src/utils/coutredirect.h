//
// Created by jimmy on 2/10/25.
//

#ifndef LOGOTEC_COUTREDIRECT_H
#define LOGOTEC_COUTREDIRECT_H

#include <streambuf>
#include <ostream>
#include <QString>
#include <QPlainTextEdit>

class CoutRedirect : public std::streambuf {
public:
    // isError = true -> texto en rojo
    explicit CoutRedirect(QPlainTextEdit* outputWidget, bool isError = false)
        : m_output(outputWidget), m_isError(isError) {}

protected:
    int_type overflow(int_type v) override {
        if (v == '\n') {
            if (m_isError) {
                m_output->appendHtml("<span style='color:red;'>" + buffer.toHtmlEscaped() + "</span>");
            } else {
                m_output->appendPlainText(buffer);
            }
            buffer.clear();
        } else {
            buffer += static_cast<char>(v);
        }
        return v;
    }

private:
    QPlainTextEdit* m_output;
    QString buffer;
    bool m_isError;
};

#endif //LOGOTEC_COUTREDIRECT_H
