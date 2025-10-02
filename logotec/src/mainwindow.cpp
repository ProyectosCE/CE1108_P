#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "compile.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include "parsetreewindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->action_New_File, &QAction::triggered, this, &MainWindow::newFile);
    connect(ui->action_Open, &QAction::triggered, this, &MainWindow::openFile);
    connect(ui->action_Save, &QAction::triggered, this, &MainWindow::saveFile);

    connect(ui->actionParser_Tree, &QAction::triggered, this, &MainWindow::parseTree);
    connect(ui->CompileButton, &QPushButton::clicked, this, &MainWindow::compileProgram);
}

// Slots
void MainWindow::newFile() {
    // Abrir diálogo para seleccionar nombre y ubicación del nuevo archivo
    QString fileName = QFileDialog::getSaveFileName(
        this,
        tr("Create New File"),
        "",
        tr("Logotec Files (*.lt);;All Files (*)")
    );

    if (fileName.isEmpty())
        return; // Usuario canceló

    // Agregar .lt automáticamente
    if (!fileName.endsWith(".lt"))
        fileName += ".lt";

    // Limpiar el textEdit para empezar con un archivo vacío
    ui->plainTextEdit->clear();

    // Guardar la ruta del archivo
    currentFilePath = fileName;

    QMessageBox::information(this, "New File", "New file created:\n" + fileName);
}


void MainWindow::openFile() {
    QString fileName = QFileDialog::getOpenFileName(this,
                        tr("Open File"), "",
                        tr("Text Files (*.txt *.lt);;All Files (*)"));

    if (fileName.isEmpty())
        return;

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, tr("Error"),
                             tr("Could not open the file:\n%1").arg(fileName));
        return;
    }

    QTextStream in(&file);
    QString content = in.readAll();
    file.close();

    ui->plainTextEdit->setPlainText(content);
    currentFilePath = fileName; // Guardar la ruta
}


void MainWindow::saveFile() {
    if (currentFilePath.isEmpty()) {
        QMessageBox::warning(this, "Save", "Please open a file first.");
        return;
    }

    QFile file(currentFilePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Save", "Could not save the file:\n" + currentFilePath);
        return;
    }

    QTextStream out(&file);
    out << ui->plainTextEdit->toPlainText();
    file.close();

    QMessageBox::information(this, "Save", "File saved successfully.");
}


void MainWindow::compileProgram() {
    if (currentFilePath.isEmpty()) {
        QMessageBox::warning(this, "Compile", "Please open a file first.");
        return;
    }

    int result = compileFile(currentFilePath.toStdString());
    if (result == 0)
        QMessageBox::information(this, "Success", "Compilation finished successfully.");
    else
        QMessageBox::critical(this, "Error", "There were errors during compilation.");
}

void MainWindow::parseTree() {
    auto treeWindow = new parsetreewindow();
    treeWindow->drawTestTree(); // mostrar árbol de prueba
    treeWindow->show();
    treeWindow->setAttribute(Qt::WA_DeleteOnClose);
}





MainWindow::~MainWindow()
{
    delete ui;
}
