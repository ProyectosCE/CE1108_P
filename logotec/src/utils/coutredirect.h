#ifndef LOGOTEC_COUTREDIRECT_H
#define LOGOTEC_COUTREDIRECT_H

#include <streambuf>
#include <ostream>
#include <QString>
#include <QPlainTextEdit>

/* Class: CoutRedirect
   Descripción:
     Clase derivada de `std::streambuf` que permite redirigir texto enviado
     a flujos estándar (como `std::cout` o `std::cerr`) hacia un `QPlainTextEdit`.

     Si se trata de una salida de error, el texto se muestra en color rojo.

   Uso:
     QPlainTextEdit* console = new QPlainTextEdit;
     CoutRedirect redirect(console, false);
     std::cout.rdbuf(&redirect);
     std::cout << "Mensaje en GUI" << std::endl;

   Restricciones:
     - El puntero `outputWidget` debe ser válido y no nulo.
     - La llamada a `appendHtml` o `appendPlainText` debe ejecutarse en el hilo de la GUI.
*/
class CoutRedirect : public std::streambuf {
public:
    /* Function: CoutRedirect
       Descripción:
         Constructor del redireccionador de salida. Permite definir el widget
         destino y si el texto debe mostrarse en color rojo (modo error).

       Params:
         - outputWidget: Puntero al widget `QPlainTextEdit` donde se mostrará la salida.
         - isError: Indica si la salida es de error (`true` = texto en rojo).

       Returns:
         - (Ninguno)
    */
    explicit CoutRedirect(QPlainTextEdit* outputWidget, bool isError = false)
        : m_output(outputWidget), m_isError(isError) {}

protected:
    /* Function: overflow
       Descripción:
         Sobrescribe la función base `std::streambuf::overflow` para interceptar
         cada carácter enviado al flujo de salida.

         Si se detecta un salto de línea (`'\n'`), el contenido acumulado se envía
         al `QPlainTextEdit`. En modo error, el texto se muestra en color rojo.

       Params:
         - v: Carácter recibido desde el flujo.

       Returns:
         - int_type: Devuelve el mismo carácter recibido (indicando éxito).

       Restricciones:
         - `m_output` debe ser un puntero válido a un `QPlainTextEdit`.
         - Debe llamarse dentro del hilo principal de la interfaz gráfica.
    */
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
    QPlainTextEdit* m_output;  // Widget destino donde se escribe la salida.
    QString buffer;            // Almacena temporalmente el texto antes de enviarlo.
    bool m_isError;            // Indica si la salida debe mostrarse en color rojo.
};

#endif // LOGOTEC_COUTREDIRECT_H
