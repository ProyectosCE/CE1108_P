#include "parsetreewindow.h"
#include "ui_parsetreewindow.h"

#include <QGraphicsTextItem>
#include <QGraphicsRectItem>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

/* Function: parsetreewindow
   Descripción:
     Constructor de la clase. Inicializa la UI, la escena gráfica y configura
     la vista para zoom y arrastre con el mouse.

   Params:
     - parent: Puntero al widget padre. Por defecto nullptr.
*/
parsetreewindow::parsetreewindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::parsetreewindow),
    scene(new QGraphicsScene(this))
{
    ui->setupUi(this);

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    // Permitir arrastrar con el mouse
    ui->graphicsView->setDragMode(QGraphicsView::ScrollHandDrag);

    // Zoom centrado en el cursor
    ui->graphicsView->setTransformationAnchor(QGraphicsView::AnchorUnderMouse);

    // Instalar filtro de eventos para capturar la rueda del mouse
    ui->graphicsView->viewport()->installEventFilter(this);
}

/* Function: ~parsetreewindow
   Descripción:
     Destructor de la clase. Libera los recursos asociados a la UI y la escena.
*/
parsetreewindow::~parsetreewindow()
{
    delete ui;
}


/* Function: calculateSubtreeWidth
   Descripción:
     Calcula el ancho total necesario para dibujar un subárbol completo
     sin solapamientos, considerando la longitud de los textos de los nodos
     y el espaciado entre hijos.

   Params:
     - node: Objeto JSON que representa el nodo raíz del subárbol.

   Returns:
     - Ancho total requerido para renderizar el subárbol.
*/
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


/* Function: drawJsonNode
   Descripción:
     Dibuja recursivamente un nodo y sus hijos en la escena gráfica, creando
     líneas que conectan cada nodo padre con sus hijos.

   Params:
     - node: Objeto JSON que representa el nodo actual.
     - x, y: Coordenadas donde se dibuja el nodo.
     - yOffset: Desplazamiento vertical entre niveles del árbol.
*/
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

/* Function: drawTreeFromJsonFile
   Descripción:
     Carga un archivo JSON desde disco, interpreta su contenido como un árbol
     sintáctico y dibuja todos los nodos en la QGraphicsScene asociada.

   Params:
     - filename: Ruta del archivo JSON que contiene el árbol.

   Errores:
     - Muestra advertencias si el archivo no puede abrirse o no es un JSON válido.
*/
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
    scene->setSceneRect(scene->itemsBoundingRect().adjusted(-200, -200, 200, 200));
}

/* Function: eventFilter
   Descripción:
     Captura eventos de la rueda del mouse sobre la viewport de la QGraphicsView
     para implementar zoom centrado en el cursor.

   Params:
     - obj: Objeto que genera el evento.
     - event: Evento que se captura (QWheelEvent esperado).

   Returns:
     - true si el evento fue manejado (zoom realizado), false en caso contrario.
*/
bool parsetreewindow::eventFilter(QObject *obj, QEvent *event) {
    if (obj == ui->graphicsView->viewport() && event->type() == QEvent::Wheel) {
        QWheelEvent *wheelEvent = static_cast<QWheelEvent *>(event);
        if (wheelEvent->angleDelta().y() > 0)
            ui->graphicsView->scale(zoomFactor, zoomFactor);   // Zoom in
        else
            ui->graphicsView->scale(1.0 / zoomFactor, 1.0 / zoomFactor); // Zoom out
        return true; // Evento manejado
    }
    return QWidget::eventFilter(obj, event);
}
