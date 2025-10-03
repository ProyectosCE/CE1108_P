#include "parsetreewindow.h"
#include "ui_parsetreewindow.h"

#include <QGraphicsTextItem>
#include <QGraphicsRectItem>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

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

// Recursiva para dibujar JSON
void parsetreewindow::drawJsonNode(const QJsonObject &node, int x, int y, int xOffset, int yOffset) {
    QString nodeText = node["text"].toString();

    scene->addRect(x, y, 80, 40);
    scene->addText(nodeText)->setPos(x + 5, y + 5);

    QJsonArray children = node["children"].toArray();
    int childCount = children.size();
    if (childCount == 0) return;

    int step = (childCount > 1) ? xOffset / (childCount-1) : 0;
    int startX = x - xOffset / 2;

    for (int i = 0; i < childCount; i++) {
        QJsonObject child = children[i].toObject();
        int childX = startX + i * step;
        int childY = y + yOffset;

        drawJsonNode(child, childX, childY, xOffset / 2, yOffset);
        scene->addLine(x + 40, y + 40, childX + 40, childY);
    }
}

// Función pública para cargar JSON desde archivo
void parsetreewindow::drawTreeFromJsonFile(const QString &filename) {
    scene->clear();

    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly)) {
        qWarning("No se pudo abrir el archivo JSON");
        return;
    }

    QByteArray data = file.readAll();
    file.close();

    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (!doc.isObject()) {
        qWarning("JSON inválido");
        return;
    }

    QJsonObject root = doc.object();
    drawJsonNode(root, 0, 0, 400, 100); // Ajusta offsets a tu vista
}
