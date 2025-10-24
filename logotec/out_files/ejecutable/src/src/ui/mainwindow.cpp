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

void MainWindow::executeTranslatedCode() {
    // Esta función ejecutará el código traducido
    executeTurtleProgram(turtleScene);
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