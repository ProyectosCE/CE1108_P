#include "mainwindow.h"
#include <iostream>
#include <math.h>
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QThread>
#include <cstdlib>
#include <ctime>
#include <QProcess>
#include <QDebug>
#include "../turtle_program.h"

/* Function: MainWindow
   Descripción:
     Constructor. Inicializa la interfaz gráfica, la escena de Turtle, la vista
     y conecta los botones de control con sus respectivos slots.

   Params:
     - parent: Widget padre. Por defecto nullptr.
*/
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Turtle
    turtleScene = new TurtleScene(this);
    turtleView = new TurtleView(this);
    turtleView->setScene(turtleScene);
    turtleView->setShowGrid(true);
    turtleView->setUnitSize(50);
    std::srand(std::time(nullptr));


    // -- Botones relacionados a turtle
    connect(ui->btn_start, &QPushButton::clicked, this, &MainWindow::turtle_start);
    connect(ui->btn_reset, &QPushButton::clicked, this, &MainWindow::turtle_reset);
    connect(ui->btn_end, &QPushButton::clicked, this, &MainWindow::turtle_end);
    connect(ui->actionShow_Grid, &QAction::triggered, this, &MainWindow::turtle_show_grid);

    ui->verticalLayout->addWidget(turtleView);
}

/* Function: turtle_start
   Descripción:
     Slot llamado al presionar "Start". Configura la animación de la escena
     y ejecuta el código traducido de Turtle.
     Previene la ejecución múltiple simultánea bloqueando el botón de reset.
*/
void MainWindow::turtle_start() {
    if (turtleEnEjecucion) return;

    turtleEnEjecucion = true;
    ui->btn_reset->setEnabled(false);

    // Configuración inicial Turtle
    turtleScene->setAnimado(true);
    turtleScene->velocidad("fast");

    // EJECUTAR CÓDIGO .cpp TRADUCIDO
    executeTranslatedCode();

    turtleEnEjecucion = false;
    ui->btn_reset->setEnabled(true);
}


/* Function: executeTranslatedCode
   Descripción:
     Ejecuta el código de Turtle previamente traducido a C++ en la escena.
     Llama a la función global `executeTurtleProgram` definida en `turtle_program.h`.
*/
void MainWindow::executeTranslatedCode() {
    // Esta función ejecutará el código traducido
    executeTurtleProgram(turtleScene);
}

/* Function: turtle_reset
   Descripción:
     Slot llamado al presionar "Reset". Limpia la escena de Turtle.
*/
void MainWindow::turtle_reset() {
    turtleScene->limpiar();
}

/* Function: turtle_end
   Descripción:
     Slot llamado al presionar "End". Detiene la animación de la escena.
*/
void MainWindow::turtle_end() {
    turtleScene->setAnimado(false);
}


/* Function: turtle_show_grid
   Descripción:
     Alterna la visibilidad de la cuadrícula en la vista de Turtle.
*/
void MainWindow::turtle_show_grid() {
    m_gridVisible = !m_gridVisible;
    turtleView->setShowGrid(m_gridVisible);
}

/* Function: ~MainWindow
   Descripción:
     Destructor. Libera los recursos asociados a la UI.
*/
MainWindow::~MainWindow() {
    delete ui;
}