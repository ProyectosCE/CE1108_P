//
// Created by jimmy on 15/10/25.
//

#ifndef LOGOTEC_TURTLEVIEW_H
#define LOGOTEC_TURTLEVIEW_H


#include <QGraphicsView>
#include <QWheelEvent>
#include <QPainter>
#include "turtlescene.h"

/* Class: TurtleView
   Descripción:
     Clase derivada de QGraphicsView que proporciona una vista interactiva
     para la escena de dibujo tipo Logo. Permite hacer zoom, desplazarse y
     visualizar una cuadrícula opcional para referencia visual.

   Funcionalidad:
     - Mostrar u ocultar una cuadrícula centrada en (0,0).
     - Controlar el nivel de zoom con la rueda del ratón.
     - Mostrar información del zoom actual y tamaño de unidad.
     - Coordinar el tamaño de unidad con la escena TurtleScene.
*/

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
    double m_zoomLevel;
};


#endif //LOGOTEC_TURTLEVIEW_H