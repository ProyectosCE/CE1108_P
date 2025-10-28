#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../turtle/turtlescene.h"
#include "../turtle/turtleview.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/* Class: MainWindow
   Descripción:
     Ventana principal de la aplicación, con integración de TurtleGraphics.
     Permite iniciar, resetear y finalizar la ejecución de programas Turtle,
     además de mostrar u ocultar la cuadrícula de la escena.
*/
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void turtle_start();
    void turtle_reset();
    void turtle_end();
    void turtle_show_grid();

private:
    Ui::MainWindow *ui;
    TurtleScene *turtleScene;
    TurtleView *turtleView;

    bool turtleEnEjecucion = false;
    bool m_gridVisible = true;

    void executeTranslatedCode();
    void executeLtFallback();
};

#endif // MAINWINDOW_H