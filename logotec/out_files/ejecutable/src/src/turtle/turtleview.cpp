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
