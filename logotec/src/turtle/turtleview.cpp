//
// Created by jimmy on 15/10/25.
//

#include "turtleview.h"

#include <cmath>
#include <QScrollBar>
#include <QGraphicsScene>


/* Function: TurtleView
   Descripción:
     Constructor que inicializa la vista con antialiasing, modo de arrastre
     y anclaje de transformación bajo el cursor.

   Params:
     - parent: Widget padre del visor.
*/
TurtleView::TurtleView(QWidget *parent)
    : QGraphicsView(parent),
      m_showGrid(true),
      m_zoomLevel(1.0)
{
    setRenderHint(QPainter::Antialiasing);
    setDragMode(QGraphicsView::ScrollHandDrag);
    setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
}

/* Function: setShowGrid
   Descripción:
     Activa o desactiva la visualización de la cuadrícula en la vista.

   Params:
     - show: Si es true, se muestra la cuadrícula; si es false, se oculta.
*/
void TurtleView::setShowGrid(bool show) {
    m_showGrid = show;
    viewport()->update();
}

/* Function: setUnitSize
   Descripción:
     Cambia el tamaño de la unidad de dibujo en la cuadrícula y actualiza la vista.

   Detalles:
     Si la escena asociada es de tipo TurtleScene, también actualiza
     su tamaño de unidad interno.

   Params:
     - unit: Tamaño de la unidad en píxeles.
*/
void TurtleView::setUnitSize(double unit) {
    // actualizar la escena si existe
    TurtleScene* ts = dynamic_cast<TurtleScene*>(scene());
    if(ts) ts->setUnitSize(unit);

    // actualizar la vista
    viewport()->update();
}


/* Function: resetZoom
   Descripción:
     Restaura el nivel de zoom a su valor original (1.0x) y reinicia la transformación.
*/
void TurtleView::resetZoom() {
    resetTransform();
    m_zoomLevel = 1.0;
}

/* Function: drawBackground
   Descripción:
     Dibuja el fondo de la vista, incluyendo la cuadrícula, los ejes y
     el texto informativo con el nivel de zoom y el tamaño de la unidad.

   Detalles:
     - Si la cuadrícula está desactivada, solo muestra la información textual.
     - Las líneas principales (ejes) se dibujan en color gris oscuro.
     - Las líneas de cuadrícula se dibujan en gris claro.
   Params:
     - painter: Puntero al objeto QPainter para dibujar en el fondo.
     - rect: Región visible actual de la vista.
*/
void TurtleView::drawBackground(QPainter *painter, const QRectF &rect) {
    QGraphicsView::drawBackground(painter, rect);

    double unit = 50.0;
    if(TurtleScene* ts = dynamic_cast<TurtleScene*>(scene()))
        unit = ts->unitSize();

    if (!m_showGrid) {
        painter->resetTransform();
        painter->setPen(Qt::black);
        painter->drawText(10, 20,
            QString("Zoom: %1x | Unidad: %2 px").arg(m_zoomLevel, 0, 'f', 2).arg(unit, 0, 'f', 0));
        return;
    }

    // Líneas de cuadrícula centradas en 0,0
    int left   = int(std::floor(rect.left() / unit) * unit);
    int right  = int(std::ceil(rect.right() / unit) * unit);
    int top    = int(std::floor(rect.top() / unit) * unit);
    int bottom = int(std::ceil(rect.bottom() / unit) * unit);

    painter->setPen(QPen(Qt::lightGray, 0));
    for(double x = left; x <= right; x += unit)
        painter->drawLine(QLineF(x, top, x, bottom));
    for(double y = top; y <= bottom; y += unit)
        painter->drawLine(QLineF(left, y, right, y));

    // Dibujar ejes
    painter->setPen(QPen(Qt::darkGray, 1));
    painter->drawLine(QLineF(left, 0, right, 0)); // eje X
    painter->drawLine(QLineF(0, top, 0, bottom)); // eje Y

    // Texto con zoom/unidad
    painter->resetTransform();
    painter->setPen(Qt::black);
    painter->drawText(10, 20,
        QString("Zoom: %1x | Unidad: %2 px").arg(m_zoomLevel, 0, 'f', 2).arg(unit, 0, 'f', 0));
}


/* Function: wheelEvent
   Descripción:
     Maneja los eventos de la rueda del ratón para hacer zoom in/out.

   Detalles:
     - Usa un factor de escala constante (1.15).
     - Aumenta o reduce el nivel de zoom de forma acumulativa.
   Params:
     - event: Evento de rueda del ratón (QWheelEvent).
*/
void TurtleView::wheelEvent(QWheelEvent *event) {
    constexpr double scaleFactor = 1.15;
    if (event->angleDelta().y() > 0) {
        scale(scaleFactor, scaleFactor);
        m_zoomLevel *= scaleFactor;
    } else {
        scale(1.0 / scaleFactor, 1.0 / scaleFactor);
        m_zoomLevel /= scaleFactor;
    }
}