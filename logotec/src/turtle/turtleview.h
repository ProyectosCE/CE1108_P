//
// Created by jimmy on 15/10/25.
//

#ifndef LOGOTEC_TURTLEVIEW_H
#define LOGOTEC_TURTLEVIEW_H


#include <QGraphicsView>
#include <QWheelEvent>
#include <QPainter>
#include "turtlescene.h"

class TurtleView : public QGraphicsView {
    Q_OBJECT
public:
    explicit TurtleView(QWidget *parent = nullptr);

    void setShowGrid(bool show);
    void setUnitSize(double unit);
    void resetZoom();

protected:
    void drawBackground(QPainter *painter, const QRectF &rect) override;
    void wheelEvent(QWheelEvent *event) override;

private:
    bool m_showGrid;
    double m_unitSize;
    double m_zoomLevel;
};


#endif //LOGOTEC_TURTLEVIEW_H