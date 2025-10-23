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

    // Inicializar parser con la escena
    turtleParser = TurtleCodeGen(turtleScene);

    // -- Botones realcionados a turtle
    connect(ui->btn_start, &QPushButton::clicked, this, &MainWindow::turtle_start);
    connect(ui->btn_reset, &QPushButton::clicked, this, &MainWindow::turtle_reset);
    connect(ui->btn_end, &QPushButton::clicked, this, &MainWindow::turtle_end);
    connect(ui->actionShow_Grid, &QAction::triggered, this, &MainWindow::turtle_show_grid);

    ui->verticalLayout->addWidget(turtleView);

}

// Slots


void MainWindow::turtle_start() {
    if (turtleEnEjecucion) return; // prevenir doble click

    turtleEnEjecucion = true;
    ui->btn_reset->setEnabled(false); // bloquear reset

    // Configuración inicial Turtle
    turtleScene->setAnimado(true);
    turtleScene->velocidad("fast");

    // Abrir archivo desde Qt Resource System
    QFile ltFile(":/main.lt");  // ":/" viene del prefix del .qrc
    if (!ltFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning("No se pudo abrir main.lt desde recursos");
        return;
    }

    // Leer contenido y convertir a QStringList
    QString contenido = ltFile.readAll();
    QStringList lineas = contenido.split('\n');

    // Ejecutar bloques como antes
    QList<Bloque> bloques = turtleParser.parsearBloques(lineas);
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


MainWindow::~MainWindow() {
    delete ui;
}

