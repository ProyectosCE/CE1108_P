#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../utils/coutredirect.h"

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
    void parseTree();

private:
    Ui::MainWindow *ui;
    QString currentFilePath; // Ruta del archivo abierto
    QString currentJsonPath = "";
    bool compiled = false;

    CoutRedirect* coutRedirect;
    CoutRedirect* cerrRedirect;
};

#endif // MAINWINDOW_H
