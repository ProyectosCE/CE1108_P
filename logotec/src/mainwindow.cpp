#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "compile.h"
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // Conectar botón a lambda que llama compileFile
    connect(ui->commandLinkButton, &QCommandLinkButton::clicked, this, [=]() {
        // Abrir diálogo para seleccionar archivo .lt
        QString fileName = QFileDialog::getOpenFileName(this, "Selecciona archivo", ".", "*.lt");
        if (!fileName.isEmpty()) {
            int result = compileFile(fileName.toStdString());
            if (result == 0)
                QMessageBox::information(this, "Éxito", "Compilación terminada correctamente.");
            else
                QMessageBox::critical(this, "Error", "Hubo errores en la compilación.");
        }
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}
