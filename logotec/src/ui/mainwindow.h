#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
};

#endif // MAINWINDOW_H
