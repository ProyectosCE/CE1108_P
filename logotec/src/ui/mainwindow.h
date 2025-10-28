#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../utils/coutredirect.h"
#include "../turtle/turtlecodegen.h"
#include "../turtle/turtlescene.h"
#include "../turtle/turtleview.h"
#include "../turtle/ino_translator.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


/* Class: MainWindow
   Descripción:
     Ventana principal de la aplicación Logotec. Gestiona la interfaz de usuario,
     la compilación de programas, la simulación con Turtle Graphics y la comunicación
     con la placa (ESP8266).

   Responsabilidades:
     - Crear, abrir, guardar y compilar archivos de código (.lt / .ino).
     - Ejecutar programas Turtle y mostrar su animación.
     - Mostrar el árbol de análisis sintáctico (Parse Tree).
     - Enviar programas compilados a la placa mediante esptool.py.
     - Redirigir la salida estándar (cout y cerr) a la terminal gráfica.
*/
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void printTerminal(const QString &message);

private slots:
    void newFile();
    void openFile();
    void saveFile();
    void compileProgram();
    void compile_executable();
    void flashBoard();
    void parseTree();

    void turtle_start();
    void turtle_reset();
    void turtle_end();
    void turtle_show_grid();
    void turtle_change_cursor_arrow();
    void turtle_change_cursor_icon();

private:
    Ui::MainWindow *ui;
    QString currentFilePath; // Ruta del archivo abierto
    QString currentJsonPath = "";
    bool compiled = false;

    CoutRedirect* coutRedirect;
    CoutRedirect* cerrRedirect;

    TurtleScene *turtleScene;
    TurtleView *turtleView;
    bool m_gridVisible = true;
    bool turtleEnEjecucion = false;
    QPixmap icono;

    TurtleCodeGen turtleParser;

    InoTranslator *inoTranslator;
};

#endif // MAINWINDOW_H
