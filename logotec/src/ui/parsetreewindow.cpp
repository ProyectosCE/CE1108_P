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

// Calcular ancho total del subárbol (sin dibujar)
int parsetreewindow::calculateSubtreeWidth(const QJsonObject &node) {
    int spacing = 20;
    int textWidth = QGraphicsTextItem(node["text"].toString()).boundingRect().width();

    QJsonArray children = node["children"].toArray();
    int childCount = children.size();
    if (childCount == 0) return textWidth;

    int totalWidth = 0;
    for (int i = 0; i < childCount; i++) {
        totalWidth += calculateSubtreeWidth(children[i].toObject());
    }
    totalWidth += spacing * (childCount - 1);
    return std::max(textWidth, totalWidth);
}

// Dibujar nodo en la posición correcta
void parsetreewindow::drawJsonNode(const QJsonObject &node, int x, int y, int yOffset) {
    int spacing = 20;

    QGraphicsTextItem* textItem = scene->addText(node["text"].toString());
    textItem->setPos(x, y);
    int textWidth = textItem->boundingRect().width();
    int textHeight = textItem->boundingRect().height();

    QJsonArray children = node["children"].toArray();
    int childCount = children.size();
    if (childCount == 0) return;

    // Calcular ancho de cada hijo
    QVector<int> childWidths;
    int totalChildrenWidth = 0;
    for (int i = 0; i < childCount; i++) {
        int w = calculateSubtreeWidth(children[i].toObject());
        childWidths.append(w);
        totalChildrenWidth += w;
    }
    totalChildrenWidth += spacing * (childCount - 1);

    // Posicionar hijos y dibujar líneas
    int startX = x - totalChildrenWidth / 2;
    for (int i = 0; i < childCount; i++) {
        int childX = startX + childWidths[i] / 2;
        int childY = y + yOffset;

        drawJsonNode(children[i].toObject(), childX, childY, yOffset);

        scene->addLine(x + textWidth/2, y + textHeight,
                       childX + QGraphicsTextItem(children[i].toObject()["text"].toString()).boundingRect().width()/2,
                       childY);

        startX += childWidths[i] + spacing;
    }
}

// Cargar JSON y dibujar árbol
void parsetreewindow::drawTreeFromJsonFile(const QString &filename) {
    scene->clear();

    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly)) {
        qWarning("Could not open JSON file");
        return;
    }

    QByteArray data = file.readAll();
    file.close();

    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (!doc.isObject()) {
        qWarning("Invalid JSON");
        return;
    }

    QJsonObject root = doc.object();
    int treeWidth = calculateSubtreeWidth(root);
    drawJsonNode(root, 0, 0, 100);

    // Centrar árbol
    scene->setSceneRect(-treeWidth/2, 0, treeWidth, 600);
}