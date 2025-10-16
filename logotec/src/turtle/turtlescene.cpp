#include "turtlescene.h"
#include <QtMath>
#include <QEventLoop>
#include <QTimer>
#include <QPen>
#include <QBrush>

TurtleScene::TurtleScene(QObject *parent)
    : QGraphicsScene(parent),
      m_pos(0,0),
      m_angleDeg(0),
      m_penDown(true),
      m_penColor(Qt::black),
      m_animado(false),
      m_velocidad(5),
      m_turtle(nullptr)
{
    setSceneRect(0,0,800,600);
    m_center = sceneRect().center();

    // crear tortuga por primera vez
    ensureTurtleExists();
    m_turtle->setPos(m_center);
    m_pos = m_center;
    updateTurtle();
}

void TurtleScene::ensureTurtleExists()
{
    if (m_turtle) return;

    QPolygonF shape;
    shape << QPointF(10,0) << QPointF(-7,6) << QPointF(-7,-6);
    m_turtle = addPolygon(shape, QPen(Qt::black), QBrush(Qt::gray));
    m_turtle->setZValue(10); // siempre encima
    m_turtle->setVisible(true);
    m_turtle->setOpacity(1.0);
}

void TurtleScene::setAnimado(bool animado){
    m_animado = animado;
}

void TurtleScene::velocidad(const QString &modo){
    QString m = modo.toLower();
    if (m == "slow" || m == "lento") m_velocidad = 2;
    else if (m == "normal") m_velocidad = 5;
    else if (m == "fast" || m == "rápido" || m == "rapido") m_velocidad = 10;
    else {
        // si le pasaron un número con string intenta parsear
        bool ok = false;
        int v = m.toInt(&ok);
        if (ok) {
            if (v < 1) v = 1;
            if (v > 10) v = 10;
            m_velocidad = v;
        }
    }
}

void TurtleScene::limpiar(){
    // clear borra todos los items incluido m_turtle,
    // así que guardamos pos/angle y re-creamos la tortuga
    QPointF oldCenter = m_center;
    double oldAngle = m_angleDeg;
    bool oldPen = m_penDown;
    QColor oldColor = m_penColor;
    clear();
    m_turtle = nullptr;
    ensureTurtleExists();

    // posicionar en el centro guardado
    m_center = oldCenter;
    m_pos = m_center;
    m_angleDeg = 0;
    updateTurtle();

    // si queremos animar la aparición (fade-in)
    if (m_animado) {
        m_turtle->setOpacity(0.0);
        m_turtle->setVisible(true);
        int pasos = 8;
        for (int i = 0; i <= pasos; ++i) {
            qreal o = qreal(i) / pasos;
            m_turtle->setOpacity(o);
            animarDelay();
        }
    } else {
        m_turtle->setOpacity(1.0);
        m_turtle->setVisible(true);
    }

    // restaurar estado visual (pen/color)
    m_penDown = oldPen;
    m_penColor = oldColor;
    updateTurtle();
}

void TurtleScene::updateTurtle(){
    ensureTurtleExists();
    m_turtle->setRotation(m_angleDeg);
    m_turtle->setPos(m_pos);
    // asegurar visible y opacidad
    if (!m_turtle->isVisible()) m_turtle->setVisible(true);
    if (m_turtle->opacity() <= 0.0) m_turtle->setOpacity(1.0);
}

void TurtleScene::animarDelay(){
    if (!m_animado) return;
    // base: 50 ms / velocidad (1..10) -> rango aproximadamente 50..5ms
    int base = 50;
    int delay = base / qMax(1, m_velocidad);
    QEventLoop loop;
    QTimer::singleShot(delay, &loop, &QEventLoop::quit);
    loop.exec();
}

// Metodos para controlar tortuga

void TurtleScene::avanza(double n){
    double rad = qDegreesToRadians(m_angleDeg);
    QPointF dest = m_pos + QPointF(n*qCos(rad), n*qSin(rad));

    // calculamos pasos para animacion (dependiente del tamaño del desplazamiento)
    if (m_animado) {
        int pasos = qMax(1, int(qAbs(n) / 3)); // paso ~3px
        QPointF pasoVec = (dest - m_pos) / pasos;

        for (int i = 0; i < pasos; ++i) {
            QPointF siguiente = m_pos + pasoVec;
            if (m_penDown) {
                // dibujar segmento
                addLine(QLineF(m_pos, siguiente), QPen(m_penColor, 2, Qt::SolidLine, Qt::RoundCap));
            }
            m_pos = siguiente;
            updateTurtle();
            animarDelay();
        }
        // asegurar posición final exacta
        if (m_pos != dest) {
            if (m_penDown) addLine(QLineF(m_pos, dest), QPen(m_penColor, 2, Qt::SolidLine, Qt::RoundCap));
            m_pos = dest;
            updateTurtle();
        }
    } else {
        // instantáneo
        if (m_penDown) addLine(QLineF(m_pos, dest), QPen(m_penColor, 2, Qt::SolidLine, Qt::RoundCap));
        m_pos = dest;
        updateTurtle();
    }
}

void TurtleScene::retrocede(double n){ avanza(-n); }

void TurtleScene::giraderecha(double grados) {
    if (m_animado) {
        int pasos = qMax(1, int(qAbs(grados) / 3));
        double paso = grados / pasos;

        for (int i = 0; i < pasos; ++i) {
            m_angleDeg += paso;
            updateTurtle();
            animarDelay();
        }

        // Normaliza solo al final
        m_angleDeg = fmod(m_angleDeg, 360.0);
        if (m_angleDeg < 0) m_angleDeg += 360.0;
        updateTurtle();

    } else {
        m_angleDeg += grados;
        m_angleDeg = fmod(m_angleDeg, 360.0);
        if (m_angleDeg < 0) m_angleDeg += 360.0;
        updateTurtle();
    }
}

void TurtleScene::giraizquierda(double grados) {
    if (m_animado) {
        int pasos = qMax(1, int(qAbs(grados) / 3));
        double paso = grados / pasos;

        for (int i = 0; i < pasos; ++i) {
            m_angleDeg -= paso;
            updateTurtle();
            animarDelay();
        }

        // Normaliza solo al final
        m_angleDeg = fmod(m_angleDeg, 360.0);
        if (m_angleDeg < 0) m_angleDeg += 360.0;
        updateTurtle();

    } else {
        m_angleDeg -= grados;
        m_angleDeg = fmod(m_angleDeg, 360.0);
        if (m_angleDeg < 0) m_angleDeg += 360.0;
        updateTurtle();
    }
}


void TurtleScene::ocultaTortuga() {
    if (!m_turtle)
        return;

    // Si está animado, hace un fade-out suave
    if (m_animado && m_turtle->isVisible()) {
        int pasos = 10;
        for (int i = 0; i < pasos; ++i) {
            qreal o = 1.0 - qreal(i) / pasos;
            m_turtle->setOpacity(o);
            animarDelay();
        }
    }

    // Ocultar la tortuga
    m_turtle->setVisible(false);
    m_turtle->setOpacity(1.0); // restaurar opacidad por si se muestra luego

    // Mover al centro (posición inicial) y reiniciar rumbo
    m_pos = m_center;
    m_angleDeg = 0;
    updateTurtle();

    // Si está animado, esperar un poquito después de mover
    if (m_animado)
        animarDelay();
}


void TurtleScene::ponpos(double x, double y){
    QPointF dest(x, y);
    m_penDown = false;
    if (m_animado) {
        int pasos = 30;
        QPointF pasoVec = (dest - m_pos) / pasos;
        for (int i = 0; i < pasos; ++i) {
            QPointF siguiente = m_pos + pasoVec;
            if (m_penDown) {
                addLine(QLineF(m_pos, siguiente), QPen(m_penColor, 2, Qt::SolidLine, Qt::RoundCap));
            }
            m_pos = siguiente;
            updateTurtle();
            animarDelay();
        }
        // asegurar posicion final exacta
        if (m_pos != dest) {
            if (m_penDown) addLine(QLineF(m_pos, dest), QPen(m_penColor, 2, Qt::SolidLine, Qt::RoundCap));
            m_pos = dest;
            updateTurtle();
        }
    } else {
        m_pos = dest;
        updateTurtle();
    }
    m_penDown = true;
}

void TurtleScene::ponrumbo(double grados){
    // ajusta rumbo absoluto al angulo especificado (0..360)
    double target = fmod(grados, 360.0);
    if (target < 0) target += 360.0;

    // calcular diferencia (en sentido positivo)
    double diff = target - m_angleDeg;
    // normalizar diff a [-180,180) para animacion más corta.
    if (diff > 180.0) diff -= 360.0;
    if (diff <= -180.0) diff += 360.0;

    if (m_animado) {
        int pasos = qMax(1, int(qAbs(diff) / 3));
        double paso = diff / pasos;
        for (int i = 0; i < pasos; ++i) {
            m_angleDeg += paso;
            m_angleDeg = fmod(m_angleDeg, 360.0);
            if (m_angleDeg < 0) m_angleDeg += 360.0;
            updateTurtle();
            animarDelay();
        }
    }
    m_angleDeg = target;
    updateTurtle();
}

void TurtleScene::ponx(double x){
    ponpos(x, m_pos.y());
}

void TurtleScene::pony(double y){
    ponpos(m_pos.x(), y);
}

void TurtleScene::bajalapiz(){ m_penDown = true; }
void TurtleScene::subelapiz(){ m_penDown = false; }

void TurtleScene::poncolorlapiz(const QString &color){
    QString c = color.toLower();
    if (c == "rojo" || c == "red") m_penColor = Qt::red;
    else if (c == "azul" || c == "blue") m_penColor = Qt::blue;
    else if (c == "negro" || c == "black") m_penColor = Qt::black;
    else {
        QColor custom(c);
        if (custom.isValid()) m_penColor = custom;
    }
}

void TurtleScene::centro(){
    ponpos(m_center.x(), m_center.y());
}

void TurtleScene::espera(int n){
    // n en frames de 60 FPS (como tenías)
    int ms = int(n * (1000.0 / 60.0));
    QEventLoop loop;
    QTimer::singleShot(ms, &loop, &QEventLoop::quit);
    loop.exec();
}
