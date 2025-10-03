#include "mainwindow.h"
#include <iostream>
#include "ui_mainwindow.h"
#include "../compile.h"
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

    ui->plainTextEdit->setReadOnly(true);
    ui->plainTextEdit->setPlainText("Open File / New File to start editing...");

    // Redirigir cout y cerr
    coutRedirect = new CoutRedirect(ui->terminal, false);
    cerrRedirect = new CoutRedirect(ui->terminal, true);
    std::cout.rdbuf(coutRedirect);
    std::cerr.rdbuf(cerrRedirect);
}

// Slots

void MainWindow::printTerminal(const QString &message) {
    ui->terminal->appendPlainText(message);
}


void MainWindow::newFile() {
    QString fileName = QFileDialog::getSaveFileName(
        this,
        tr("Create New File"),
        "",
        tr("Logotec Files (*.lt);;All Files (*)")
    );

    if (fileName.isEmpty()) return;

    if (!fileName.endsWith(".lt"))
        fileName += ".lt";

    ui->plainTextEdit->clear();          // Limpiar mensaje
    ui->plainTextEdit->setReadOnly(false); // Permitir edición

    currentFilePath = fileName;
    compiled = false;
    currentJsonPath = "";

    printTerminal(QString("File %1 opened in %2")
                  .arg(QFileInfo(fileName).fileName())
                  .arg(QFileInfo(fileName).absolutePath()));
}


void MainWindow::openFile() {
    QString fileName = QFileDialog::getOpenFileName(
        this,
        tr("Open File"),
        "",
        tr("Text Files (*.txt *.lt);;All Files (*)")
    );

    if (fileName.isEmpty()) return;

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
    ui->plainTextEdit->setReadOnly(false); // Permitir edición

    currentFilePath = fileName;
    compiled = false;
    currentJsonPath = "";

    printTerminal(QString("File %1 opened in %2")
                  .arg(QFileInfo(fileName).fileName())
                  .arg(QFileInfo(fileName).absolutePath()));
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
}


void MainWindow::compileProgram() {
    if (currentFilePath.isEmpty()) {
        QMessageBox::warning(this, "Compile", "Please open a file first.");
        return;
    }

    // Guardar cambios antes de compilar
    saveFile();

    int result = compileFile(currentFilePath.toStdString());
    if (result == 0) {
        QMessageBox::information(this, "Success", "Compilation finished successfully.");
        compiled = true;
        currentJsonPath = "./out/tree.json"; // JSON temporal del árbol
    } else {
        QMessageBox::critical(this, "Error", "There were errors during compilation.");
        compiled = false;
        currentJsonPath = "";
    }
}


void MainWindow::parseTree() {
    // Si no hay archivo cargado
    if (currentFilePath.isEmpty()) {
        std::cout << "No file is currently loaded. Please open or create a new file first." << std::endl;
        return;
    }

    // Si el archivo no ha sido compilado exitosamente
    if (!compiled || currentJsonPath.isEmpty()) {
        std::cout << "The parse tree is unavailable. Compile the current file first." << std::endl;
        return;
    }

    auto treeWindow = new parsetreewindow();
    treeWindow->drawTreeFromJsonFile(currentJsonPath);
    treeWindow->show();
    treeWindow->setAttribute(Qt::WA_DeleteOnClose);
}




MainWindow::~MainWindow() {
    if (!currentJsonPath.isEmpty()) {
        QFile::remove(currentJsonPath);
    }
    delete ui;
}

