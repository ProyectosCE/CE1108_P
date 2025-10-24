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
    void turtle_test();

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
