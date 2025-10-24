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
    void avanzaTortuga(double n);
    void retrocedeTortuga(double n);
    void giraDerecha(double grados);
    void giraIzquierda(double grados);
    void ocultaTortuga();
    void ponPos(double x, double y);
    void ponRumbo(double grados);
    double getRumbo() const { return m_angleDeg; }
    void ponX(double x);
    void ponY(double y);
    void bajaLapiz();
    void subeLapiz();
    void ponColorLapiz(const QString &color);
    void centro();
    void esperar(int n); // n/60 s

    // Alias de comandos
    inline void av(double n) {avanzaTortuga(n);}
    inline void re(double n) {retrocedeTortuga(n);}
    inline void gd(double n) {giraDerecha(n);}
    inline void gi(double n) {giraIzquierda(n);}
    inline void ot() {ocultaTortuga();}
    inline void ponXY(double x, double y) { ponPos(x, y); }
    inline void bl() { bajaLapiz(); }
    inline void sl() { subeLapiz(); }
    inline void poncl(const QString &c) { ponColorLapiz(c); }

    // Metodos adicionales
    void setAnimado(bool animado);
    void velocidad(const QString &modo);
    void limpiar();

    void usarIcono(const QPixmap &pixmap);
    void usarFlecha();

    double unitSize() const { return m_unitSize; }
    void setUnitSize(double u) { m_unitSize = u; }

    // Operaciones aritmeticas

    // Caso base de Suma
    inline int SUMA(int x) { return x; }

    // Template recursivo para cualquier cantidad de argumentos
    template<typename... Args>
    inline int SUMA(int x, Args... args) {
        return x + SUMA(args...);
    }

    // Caso base de Resta
    inline int DIFERENCIA(int x) { return x; }

    // Template recursivo para Resta
    template<typename... Args>
    inline int DIFERENCIA(int x, Args... args) {
        return x - DIFERENCIA(args...);
    }
    int PRODUCTO(int a, int b) {
        return a * b;
    }

    int DIVISION(int a, int b) {
        if (b == 0) {
            // Evita división por cero
            return 0;
        }
        return a / b;  // División entera
    }

    int POTENCIA(int a, int b) {
        int result = 1;
        for (int i = 0; i < b; i++) {
            result *= a;
        }
        return result;
    }

    int AZAR(int n) {
        return rand() % (n + 1);
    }


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
    //Icono
    QGraphicsPixmapItem* m_turtleIcon = nullptr;
    bool m_usarIcono = false;
    double m_unitSize = 50.0;
};



#endif //LOGOTEC_TURTLESCENE_H