//
// Created by jimmy on 15/10/25.
//

#ifndef LOGOTEC_TURTLESCENE_H
#define LOGOTEC_TURTLESCENE_H


#pragma once
#include <QGraphicsScene>
#include <QGraphicsLineItem>
#include <QGraphicsPolygonItem>
#include <QTimer>
#include <QPen>

class TurtleScene : public QGraphicsScene {
    Q_OBJECT
public:
    explicit TurtleScene(QObject *parent = nullptr);

    // comandos tipo turtle
    void avanza(double n);
    void retrocede(double n);
    void giraderecha(double grados);
    void giraizquierda(double grados);
    void ocultaTortuga();
    void ponpos(double x, double y);
    void ponrumbo(double grados);
    double rumbo() const { return m_angleDeg; }
    void ponx(double x);
    void pony(double y);
    void bajalapiz();
    void subelapiz();
    void poncolorlapiz(const QString &color);
    void centro();
    void espera(int n); // n/60 s

    // Alias de comandos
    inline void av(double n) {avanza(n);}
    inline void re(double n) {retrocede(n);}
    inline void gd(double n) {giraderecha(n);}
    inline void gi(double n) {giraizquierda(n);}
    inline void ot() {ocultaTortuga();}
    inline void bl() { bajalapiz(); }
    inline void sb() { subelapiz(); }
    inline void pocl(const QString &c) { poncolorlapiz(c); }

    // Metodos adicionales
    void setAnimado(bool animado);
    void velocidad(const QString &modo);
    void limpiar();

private:
    //estados
    QPointF m_pos;
    double m_angleDeg;
    bool m_penDown;
    QColor m_penColor;
    //elementos graficos
    QGraphicsPolygonItem *m_turtle;
    QPointF m_center;
    //Animacion
    bool m_animado;         // true: animado, false: instantáneo
    int m_velocidad;        // velocidad 1–10 (10 = más rápido)
    //Utilidades
    void animarDelay();
    void updateTurtle();
    void ensureTurtleExists();
};



#endif //LOGOTEC_TURTLESCENE_H