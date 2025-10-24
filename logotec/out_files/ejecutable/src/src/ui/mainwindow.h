#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../turtle/turtlescene.h"
#include "../turtle/turtleview.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

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