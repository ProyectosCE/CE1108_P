#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../turtle/turtlecodegen.h"
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
    QString currentFilePath = "../main.lt";

    TurtleScene *turtleScene;
    TurtleView *turtleView;
    bool m_gridVisible = true;
    bool turtleEnEjecucion = false;

    TurtleCodeGen turtleParser;
};

#endif // MAINWINDOW_H
