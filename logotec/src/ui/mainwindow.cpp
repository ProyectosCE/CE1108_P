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
    QString sourceDir = projectRoot + "/src";
    QString buildDir = projectRoot + "/build";

    QDir dir;
    if (!dir.exists(buildDir))
        dir.mkpath(buildDir);

    // ===============================
    // Traducir .ino a .cpp
    // ===============================
    QString inoFilePath = "../out_files/out_files.ino";
    QString cppFilePath = sourceDir + "/src/turtle_program.cpp";

    if (!inoTranslator->translateInoToCpp(inoFilePath, cppFilePath)) {
        QMessageBox::warning(this, "Translation Failed", "Could not translate .ino to .cpp");
        return;
    }

    // ===============================
    // Generar ui_mainwindow.h desde mainwindow.ui
    // ===============================
    QString uiFile = sourceDir + "/src/ui/mainwindow.ui";
    QString uiHeaderFile = buildDir + "/src/ui_mainwindow.h";

    QProcess uicProcess;
    uicProcess.start("uic", QStringList() << uiFile << "-o" << uiHeaderFile);
    uicProcess.waitForFinished(5000);

    if (uicProcess.exitCode() != 0 || !QFile::exists(uiHeaderFile)) {
        QMessageBox::warning(this, "UI Compilation", "Failed to generate ui_mainwindow.h");
        return;
    }

#ifdef _WIN32
    QString execName = "logotec.exe";
#else
    QString execName = "logotec";
#endif

    printTerminal("Building executable with g++...");

    QProcess *process = new QProcess(this);

    // Redirigir salida en tiempo real
    connect(process, &QProcess::readyReadStandardOutput, [=]() {
        ui->terminal->appendPlainText(process->readAllStandardOutput());
    });
    connect(process, &QProcess::readyReadStandardError, [=]() {
        ui->terminal->appendPlainText(process->readAllStandardError());
    });

    // ===============================
    // Compilar directamente con g++
    // ===============================
    QString outputPath = buildDir + "/" + execName;

    // Obtener flags de Qt
    QString qtFlags = getQtFlags();

    // Lista de archivos fuente (corregidos los paths)
    QStringList sourceFiles = {
        sourceDir + "/src/main.cpp",
        sourceDir + "/src/ui/mainwindow.cpp",
        sourceDir + "/src/turtle/turtlescene.cpp",
        sourceDir + "/src/turtle/turtleview.cpp",
        sourceDir + "/src/turtle_program.cpp"
    };

    // Argumentos de compilación
    QStringList compileArgs;
    compileArgs << "-std=c++20"
                << "-fPIC"
                << "-o" << outputPath
                << sourceFiles
                // Incluir directorios necesarios
                << "-I" + sourceDir
                << "-I" + sourceDir + "/src/ui"
                << "-I" + sourceDir + "/src/turtle"
                << "-I" + buildDir  // Para ui_mainwindow.h generado
                << qtFlags.split(' ', Qt::SkipEmptyParts)
                << "-lstdc++"
                << "-fpermissive"
                << "-Wno-deprecated-enum-enum-conversion"  // Para los warnings específicos
                << "-Wno-deprecated-declarations";

    qDebug() << "Compiling with g++...";
    ui->terminal->appendPlainText("Compiling with g++...");

    process->start("g++", compileArgs);

    connect(process, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            [=](int exitCode, QProcess::ExitStatus status) {
        if (exitCode == 0) {
            if (QFile::exists(outputPath)) {
                printTerminal("Executable built successfully: " + outputPath);

                // Limpiar archivo temporal
                QFile::remove(uiHeaderFile);
            } else {
                QMessageBox::warning(this, "Warning", "Build finished but executable not found.");
            }
        } else {
            QMessageBox::critical(this, "Error", "Compilation failed. Check terminal for details.");
        }
        process->deleteLater();
    });
}

QString MainWindow::getQtFlags() {
    // Intentar con pkg-config primero
    QProcess pkgConfig;
    pkgConfig.start("pkg-config", QStringList() << "--cflags" << "--libs" << "Qt5Widgets");
    pkgConfig.waitForFinished(3000);

    if (pkgConfig.exitCode() == 0) {
        QString flags = pkgConfig.readAllStandardOutput().trimmed();
        qDebug() << "Using pkg-config flags:" << flags;
        return flags;
    }

    // Intentar con qmake
    QProcess qmake;
    qmake.start("qmake", QStringList() << "-query" << "QT_INSTALL_HEADERS");
    qmake.waitForFinished(3000);

    if (qmake.exitCode() == 0) {
        QString qtHeaders = qmake.readAllStandardOutput().trimmed();
        QString qtLibs = qtHeaders;

        QProcess qmakeLibs;
        qmakeLibs.start("qmake", QStringList() << "-query" << "QT_INSTALL_LIBS");
        qmakeLibs.waitForFinished(3000);
        if (qmakeLibs.exitCode() == 0) {
            qtLibs = qmakeLibs.readAllStandardOutput().trimmed();
        }

        QString flags = QString("-I%1 -L%2 -lQt5Widgets -lQt5Core -lQt5Gui").arg(qtHeaders).arg(qtLibs);
        qDebug() << "Using qmake flags:" << flags;
        return flags;
    }

    // Valores por defecto para Linux
    QString flags = "-I/usr/include/x86_64-linux-gnu/qt5 "
                   "-I/usr/include/x86_64-linux-gnu/qt5/QtWidgets "
                   "-I/usr/include/x86_64-linux-gnu/qt5/QtCore "
                   "-I/usr/include/x86_64-linux-gnu/qt5/QtGui "
                   "-lQt5Widgets -lQt5Core -lQt5Gui";
    qDebug() << "Using default flags:" << flags;
    return flags;
}

MainWindow::~MainWindow() {
    if (!currentJsonPath.isEmpty()) {
        QFile::remove(currentJsonPath);
    }
    delete ui;
    delete inoTranslator;
}

