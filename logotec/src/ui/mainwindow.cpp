#include "mainwindow.h"
#include <iostream>
#include <math.h>

#include "ui_mainwindow.h"
#include "../compile.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include "parsetreewindow.h"
#include <QThread>
#include <cstdlib>
#include <ctime>
#include <QProcess>



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
    connect(ui->actionFlash, &QAction::triggered, this, &MainWindow::flashBoard);
    ui->plainTextEdit->setReadOnly(true);
    ui->plainTextEdit->setPlainText("Open File / New File to start editing...");

    // Redirigir cout y cerr
    coutRedirect = new CoutRedirect(ui->terminal, false);
    cerrRedirect = new CoutRedirect(ui->terminal, true);
    std::cout.rdbuf(coutRedirect);
    std::cerr.rdbuf(cerrRedirect);

    // Turtle
    turtleScene = new TurtleScene(this);
    turtleView = new TurtleView(this);
    turtleView->setScene(turtleScene);
    turtleView->setShowGrid(true);
    turtleView->setUnitSize(50);
    std::srand(std::time(nullptr));

    // Inicializar parser con la escena
    turtleParser = TurtleCodeGen(turtleScene);

    inoTranslator = new InoTranslator();

    // -- Botones realcionados a turtle
    connect(ui->btn_start, &QPushButton::clicked, this, &MainWindow::turtle_start);
    connect(ui->btn_reset, &QPushButton::clicked, this, &MainWindow::turtle_reset);
    connect(ui->btn_end, &QPushButton::clicked, this, &MainWindow::turtle_end);
    connect(ui->actionShow_Grid, &QAction::triggered, this, &MainWindow::turtle_show_grid);
    connect(ui->actionArrow, &QAction::triggered, this, &MainWindow::turtle_change_cursor_arrow);
    connect(ui->actionTurtle, &QAction::triggered, this, &MainWindow::turtle_change_cursor_icon);
    connect(ui->actionDonatello_3, &QAction::triggered, this, &MainWindow::turtle_change_cursor_icon);
    connect(ui->actionLeonardo, &QAction::triggered, this, &MainWindow::turtle_change_cursor_icon);
    connect(ui->actionMichaelangelo, &QAction::triggered, this, &MainWindow::turtle_change_cursor_icon);
    connect(ui->actionRafael_3, &QAction::triggered, this, &MainWindow::turtle_change_cursor_icon);
    connect(ui->actionTest, &QAction::triggered, this, &MainWindow::turtle_test);

    QPixmap icono("../src/ui/assets/tortuga.png");
    //turtleScene->usarIcono(icono);

    ui->verticalLayout->addWidget(turtleView);

}

// Slots

void MainWindow::turtle_test() {
    if (turtleEnEjecucion) return; // prevenir doble click

    turtleEnEjecucion = true;
    ui->btn_reset->setEnabled(false); // bloquear reset

    // Configuración inicial Turtle
    turtleScene->setAnimado(true);
    turtleScene->velocidad("fast");


    turtleScene->setAnimado(true);
    turtleScene->velocidad("fast");

    turtleScene->ponPos(4 , 4);
    turtleScene->ponY(2);
    turtleScene->ponPos(0 , 0);

    // Animación terminada
    turtleEnEjecucion = false;
    ui->btn_reset->setEnabled(true);
}

void MainWindow::turtle_start() {
    if (turtleEnEjecucion) return; // prevenir doble click
    if (currentFilePath.isEmpty()) {
        QMessageBox::warning(this, "Turtle Start", "No file loaded. Please open or create a file first.");
        return;
    }
    if (!compiled) {
        QMessageBox::warning(this, "Turtle Start", "File has not been compiled successfully.");
        return;
    }

    turtleEnEjecucion = true;
    ui->btn_reset->setEnabled(false); // bloquear reset

    // Configuración inicial Turtle
    turtleScene->setAnimado(true);
    turtleScene->velocidad("fast");

    // ---- Leer y parsear archivo .lt cargado ----
    QStringList lineas = turtleParser.leerArchivo(currentFilePath);
    QList<Bloque> bloques = turtleParser.parsearBloques(lineas);

    // ---- Ejecutar bloques ----
    turtleParser.ejecutarBloques(bloques);

    // Animación terminada
    turtleEnEjecucion = false;
    ui->btn_reset->setEnabled(true);
}


void MainWindow::turtle_reset() {
    turtleScene->limpiar();
}

void MainWindow::turtle_end() {
    turtleScene->setAnimado(false);
}

void MainWindow::turtle_show_grid() {
    m_gridVisible = !m_gridVisible;
    turtleView->setShowGrid(m_gridVisible);
}

void MainWindow::turtle_change_cursor_arrow() {
    turtleScene->usarFlecha();
}

void MainWindow::turtle_change_cursor_icon() {
    QAction* action = qobject_cast<QAction*>(sender());
    if (!action) return;

    QString iconPath;

    if (action == ui->actionTurtle)
        iconPath = "../src/ui/assets/tortuga.png";
    else if (action == ui->actionDonatello_3)
        iconPath = "../src/ui/assets/donatello.png";
    else if (action == ui->actionLeonardo)
        iconPath = "../src/ui/assets/leonardo.png";
    else if (action == ui->actionRafael_3)
        iconPath = "../src/ui/assets/rafael.png";
    else if (action == ui->actionMichaelangelo)
        iconPath = "../src/ui/assets/michaelangelo.png";
    else
        return;
    QPixmap pixmap;
    if (!pixmap.load(iconPath)) {
        qWarning("No se pudo cargar el icono: %s", qUtf8Printable(iconPath));
        return;
    }

    turtleScene->usarIcono(pixmap);
}

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
    out.flush();
    file.flush();
    file.close();
}



void MainWindow::compileProgram() {
    if (currentFilePath.isEmpty()) {
        QMessageBox::warning(this, "Compile", "Please open a file first.");
        return;
    }

    saveFile();

    Compiler compiler;
    compiler.clear();

    int result = compiler.compileFile(currentFilePath.toStdString());
    if (result != 0) {
        QMessageBox::critical(this, "Error", "There were errors during compilation.");
        compiled = false;
        currentJsonPath.clear();
        return;
    }

    QString sketchFolder = "../out_files";
    QString buildFolder = sketchFolder + "/build";

    QProcess *process = new QProcess(this);

    // Conectar señales para recibir salida en tiempo real
    connect(process, &QProcess::readyReadStandardOutput, [=]() {
        QString output = process->readAllStandardOutput();
        ui->terminal->appendPlainText(output);
    });

    connect(process, &QProcess::readyReadStandardError, [=]() {
        QString error = process->readAllStandardError();
        ui->terminal->appendPlainText(error);
    });

    connect(process, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            [=](int exitCode, QProcess::ExitStatus status) {
        if (exitCode == 0) {
            printTerminal("Compilation finished successfully with Arduino CLI.");
            compiled = true;
            currentJsonPath = "../out_files/tree.json";
            compile_executable();
        } else {
            QMessageBox::critical(this, "Error", "Arduino CLI compilation failed.");
            compiled = false;
        }
        process->deleteLater(); // liberar memoria
    });

    printTerminal("Compilation with arduino-cli in progress...");

    QStringList args;
    args << "compile"
         << "--fqbn" << "esp8266:esp8266:nodemcuv2"
         << "--build-path" << buildFolder
         << sketchFolder;

    process->start("arduino-cli", args);
}


void MainWindow::flashBoard() {
    if (!compiled) {
        QMessageBox::warning(this, "Flash Error", "Cannot flash: The program has not been compiled successfully.");
        return;
    }
    QString port = "/dev/ttyUSB0";
    QString binFile = "../out_files/build/out_files.ino.bin";

    // Verificar si el puerto existe
    if (!QFile::exists(port)) {
        QMessageBox::critical(this, "Flash Error", QString("Board not found on %1").arg(port));
        return;
    }

    // Preparar QProcess
    QProcess *process = new QProcess(this);

    connect(process, &QProcess::readyReadStandardOutput, [=]() {
        QString output = process->readAllStandardOutput();
        ui->terminal->appendPlainText(output);
    });

    connect(process, &QProcess::readyReadStandardError, [=]() {
        QString error = process->readAllStandardError();
        ui->terminal->appendPlainText(error);
    });

    connect(process, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            [=](int exitCode, QProcess::ExitStatus status) {
        if (exitCode == 0) {
            QMessageBox::information(this, "Flash Success", "Board flashed successfully!");
        } else {
            QMessageBox::critical(this, "Flash Failed", "Flashing the board failed.");
        }
        process->deleteLater();
    });

    // Comando a ejecutar
    QStringList args;
    args << "--port" << port
         << "write_flash"
         << "0x00000"
         << binFile;

    process->start("esptool.py", args);
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

void MainWindow::compile_executable() {
    QString projectRoot = "../out_files/ejecutable";
    QString sourceDir = projectRoot + "/src/src";
    QString buildDir = projectRoot + "/build";
    QString objDir = buildDir + "/obj";

    QDir dir;
    if (!dir.exists(buildDir))
        dir.mkpath(buildDir);
    if (!dir.exists(objDir))
        dir.mkpath(objDir);

    // Traducir .ino a .cpp PRIMERO (esto se hace en C++)
    QString inoFilePath = "../out_files/out_files.ino";
    QString cppFilePath = sourceDir + "/turtle_program.cpp";

    if (!inoTranslator->translateInoToCpp(inoFilePath, cppFilePath)) {
        QMessageBox::warning(this, "Translation Failed", "Could not translate .ino to .cpp");
        return;
    }

    printTerminal("Starting executable compilation in background...");

    // Crear un QProcess para manejar la compilación completa
    QProcess *buildProcess = new QProcess(this);

    // Conectar señales para recibir salida en tiempo real
    connect(buildProcess, &QProcess::readyReadStandardOutput, [=]() {
        QString output = buildProcess->readAllStandardOutput();
        ui->terminal->appendPlainText(output);
    });

    connect(buildProcess, &QProcess::readyReadStandardError, [=]() {
        QString error = buildProcess->readAllStandardError();
        ui->terminal->appendPlainText(error);
    });

    connect(buildProcess, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            [=](int exitCode, QProcess::ExitStatus status) {
        if (exitCode == 0) {
            printTerminal("Executable compilation completed successfully!");

        } else {
            printTerminal("Executable compilation failed");
            QMessageBox::critical(this, "Build Error", "Executable compilation failed. Check terminal for details.");
        }
        buildProcess->deleteLater();
    });

    // Usar el archivo .sh existente
    QString scriptPath = projectRoot + "/build_script.sh";

    // Verificar que el script existe
    if (!QFile::exists(scriptPath)) {
        printTerminal("Build script not found: " + scriptPath);
        QMessageBox::critical(this, "Build Error", "Build script not found:\n" + scriptPath);
        buildProcess->deleteLater();
        return;
    }

    // Dar permisos de ejecución (por si acaso)
    QFile::setPermissions(scriptPath,
        QFile::ReadOwner | QFile::WriteOwner | QFile::ExeOwner |
        QFile::ReadGroup | QFile::ExeGroup |
        QFile::ReadOther | QFile::ExeOther);

    // Ejecutar el script con los parámetros
    QStringList scriptArgs;
    scriptArgs << sourceDir << buildDir << objDir;

    printTerminal("Executing: bash " + scriptPath + " " + scriptArgs.join(" "));
    buildProcess->start("bash", QStringList() << scriptPath << scriptArgs);
}


MainWindow::~MainWindow() {
    if (!currentJsonPath.isEmpty()) {
        QFile::remove(currentJsonPath);
    }
    delete ui;
    delete inoTranslator;
}

