#include "parsetreewindow.h"
#include "ui_parsetreewindow.h"

#include <QGraphicsTextItem>
#include <QGraphicsRectItem>

parsetreewindow::parsetreewindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::parsetreewindow),
    scene(new QGraphicsScene(this))
{
    ui->setupUi(this);

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
}

parsetreewindow::~parsetreewindow()
{
    delete ui;
}

void parsetreewindow::drawTestTree() {
    scene->clear();

    // Dibujar nodos como rectángulos con texto
    auto root = scene->addRect(0, 0, 80, 40);
    scene->addText("Root")->setPos(10, 5);

    auto child1 = scene->addRect(-120, 100, 80, 40);
    scene->addText("Child1")->setPos(-110, 105);

    auto child2 = scene->addRect(120, 100, 80, 40);
    scene->addText("Child2")->setPos(130, 105);

    // Conectar con líneas
    scene->addLine(40, 40, -80, 100);  // root → child1
    scene->addLine(40, 40, 160, 100);  // root → child2
}
