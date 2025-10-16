//
// Created by jimmy on 15/10/25.
//

#include "turtleview.h"

#include <cmath>
#include <QScrollBar>
#include <QGraphicsScene>

TurtleView::TurtleView(QWidget *parent)
    : QGraphicsView(parent),
      m_showGrid(true),
      m_zoomLevel(1.0)
{
    setRenderHint(QPainter::Antialiasing);
    setDragMode(QGraphicsView::ScrollHandDrag);
    setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
}

void TurtleView::setShowGrid(bool show) {
    m_showGrid = show;
    viewport()->update();
}

void TurtleView::setUnitSize(double unit) {
    // actualizar la escena si existe
    TurtleScene* ts = dynamic_cast<TurtleScene*>(scene());
    if(ts) ts->setUnitSize(unit);

    // actualizar la vista
    viewport()->update();
}


void TurtleView::resetZoom() {
    resetTransform();
    m_zoomLevel = 1.0;
}

void TurtleView::drawBackground(QPainter *painter, const QRectF &rect) {
    QGraphicsView::drawBackground(painter, rect);

    // obtener la unidad de la escena si es TurtleScene
    double unit = 50.0; // valor por defecto
    if(TurtleScene* ts = dynamic_cast<TurtleScene*>(scene()))
        unit = ts->unitSize();

    if (!m_showGrid) {
        painter->resetTransform();
        painter->setPen(Qt::black);
        painter->drawText(10, 20, QString("Zoom: %1x | Unidad: %2 px").arg(m_zoomLevel, 0, 'f', 2).arg(unit, 0, 'f', 0));
        return;
    }

    // Líneas de cuadrícula
    const double left = std::floor(rect.left() / unit) * unit;
    const double top = std::floor(rect.top() / unit) * unit;

    QPen gridPen(Qt::lightGray, 0);
    painter->setPen(gridPen);

    for (double x = left; x < rect.right(); x += unit)
        painter->drawLine(QLineF(x, rect.top(), x, rect.bottom()));
    for (double y = top; y < rect.bottom(); y += unit)
        painter->drawLine(QLineF(rect.left(), y, rect.right(), y));

    // Dibujar ejes X e Y
    painter->setPen(QPen(Qt::darkGray, 1));
    painter->drawLine(QLineF(rect.left(), 0, rect.right(), 0)); // Eje X
    painter->drawLine(QLineF(0, rect.top(), 0, rect.bottom())); // Eje Y

    // Texto con zoom/unidad
    painter->resetTransform();
    painter->setPen(Qt::black);
    painter->drawText(10, 20, QString("Zoom: %1x | Unidad: %2 px").arg(m_zoomLevel, 0, 'f', 2).arg(unit, 0, 'f', 0));
}


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
