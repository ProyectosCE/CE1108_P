#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "compile.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->action_New_File, &QAction::triggered, this, &MainWindow::newFile);
    connect(ui->action_Open, &QAction::triggered, this, &MainWindow::openFile);
    connect(ui->action_Save, &QAction::triggered, this, &MainWindow::saveFile);

    connect(ui->CompileButton, &QPushButton::clicked, this, &MainWindow::compileProgram);
}

// Slots
void MainWindow::newFile() {
    ui->textEdit->clear();
    QMessageBox::information(this, "New File", "Nuevo archivo creado.");
}

void MainWindow::openFile() {
    // Abrir un diálogo para seleccionar archivo
    QString fileName = QFileDialog::getOpenFileName(this,
                        tr("Open File"), "",
                        tr("Text Files (*.txt *.lt);;All Files (*)"));

    if (fileName.isEmpty())
        return; // el usuario canceló

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, tr("Error"),
                             tr("No se pudo abrir el archivo:\n%1").arg(fileName));
        return;
    }

    QTextStream in(&file);
    QString content = in.readAll();   // leer todo el contenido
    file.close();

    ui->textEdit->setPlainText(content); // mostrar en QTextEdit
}

void MainWindow::saveFile() {
    QMessageBox::information(this, "Save", "Guardar archivo...");
}

void MainWindow::compileProgram() {
    QMessageBox::information(this, "Compile", "Compilando...");
    QString fileName = QFileDialog::getOpenFileName(this, "Selecciona archivo", ".", "*.lt");
    if (!fileName.isEmpty()) {
        int result = compileFile(fileName.toStdString());
        if (result == 0)
            QMessageBox::information(this, "Éxito", "Compilación terminada correctamente.");
        else
            QMessageBox::critical(this, "Error", "Hubo errores en la compilación.");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
