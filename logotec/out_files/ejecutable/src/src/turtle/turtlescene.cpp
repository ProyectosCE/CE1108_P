#include "turtlescene.h"
#include <QtMath>
#include <QEventLoop>
#include <QTimer>
#include <QPen>
#include <QBrush>

TurtleScene::TurtleScene(QObject *parent)
    : QGraphicsScene(parent),
      m_pos(0,0),          // posición inicial en 0,0
      m_angleDeg(0),
      m_penDown(true),
      m_penColor(Qt::black),
      m_animado(false),
      m_velocidad(5),
      m_turtle(nullptr),
      m_unitSize(50)       // default de unidad de 50 px
{
    setSceneRect(-400, -300, 800, 600);
    // crear tortuga por primera vez
    ensureTurtleExists();
    m_turtle->setPos(QPointF(0,0)); // inicializar en 0,0
    m_pos = QPointF(0,0);
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

void TurtleScene::limpiar() {
    // Limpiar todos los items (dibujos, tortuga, icono)
    clear();

    // Borrar referencias a la tortuga e icono
    m_turtle = nullptr;
    m_turtleIcon = nullptr;
    m_usarIcono = false;

    // Resetear estado inicial
    m_pos = sceneRect().center(); // aparece centrada en la escena
    m_angleDeg = 0;
    m_penDown = true;
    m_penColor = Qt::black;
    m_animado = false;
    m_velocidad = 5;

    // Crear la flecha por defecto
    ensureTurtleExists();

    // Actualizar visual
    updateTurtle();
}



void TurtleScene::updateTurtle() {
    if (m_usarIcono && m_turtleIcon) {
        QRectF rect = m_turtleIcon->boundingRect();
        QPointF centro = rect.center();

        // Posicionar el centro del pixmap en m_pos
        m_turtleIcon->setPos(m_pos - centro);

        // Rotación: sumamos 90° a la derecha
        m_turtleIcon->setRotation(m_angleDeg + 90.0);

        if (!m_turtleIcon->isVisible()) m_turtleIcon->setVisible(true);
        if (m_turtleIcon->opacity() <= 0.0) m_turtleIcon->setOpacity(1.0);
    } else {
        ensureTurtleExists();
        m_turtle->setRotation(m_angleDeg);
        m_turtle->setPos(m_pos);
        if (!m_turtle->isVisible()) m_turtle->setVisible(true);
        if (m_turtle->opacity() <= 0.0) m_turtle->setOpacity(1.0);
    }
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

void TurtleScene::usarIcono(const QPixmap &pixmap) {
    // Ocultar la flecha
    if (m_turtle) m_turtle->setVisible(false);

    // Tamaño base de la flecha
    QRectF bbox = QRectF(-7, -6, 17, 12); // ancho = 17, alto = 12
    QSizeF targetSize = bbox.size() * 2.5; // agrandar 1.5x

    // Escalar pixmap al tamaño deseado
    QPixmap scaled = pixmap.scaled(targetSize.width(), targetSize.height(),
                                   Qt::KeepAspectRatio, Qt::SmoothTransformation);

    // Crear QGraphicsPixmapItem si no existe
    if (!m_turtleIcon) {
        m_turtleIcon = addPixmap(scaled);
        m_turtleIcon->setZValue(10);
    } else {
        m_turtleIcon->setPixmap(scaled);
        m_turtleIcon->setVisible(true);
    }

    // Ajustar el centro de la imagen al centro real
    QRectF rect = m_turtleIcon->boundingRect();
    m_turtleIcon->setTransformOriginPoint(rect.center());

    // Rotación inicial de 90° a la derecha
    m_turtleIcon->setRotation(90.0);

    m_usarIcono = true;
    updateTurtle();
}



void TurtleScene::usarFlecha() {
    // Ocultar ícono
    if (m_turtleIcon) m_turtleIcon->setVisible(false);
    // Mostrar flecha
    if (m_turtle) m_turtle->setVisible(true);
    m_usarIcono = false;
    updateTurtle();
}


// Metodos para controlar tortuga

void TurtleScene::avanzaTortuga(double n){
    double distancia = n * m_unitSize;
    double rad = qDegreesToRadians(m_angleDeg);
    QPointF dest = m_pos + QPointF(distancia*qCos(rad), distancia*qSin(rad));

    // calculamos pasos para animacion (dependiente del tamaño del desplazamiento)
    if (m_animado) {
        int pasos = qMax(1, int(qAbs(distancia) / 3)); // usar distancia en px
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
        if (m_pos != dest) {
            if (m_penDown) addLine(QLineF(m_pos, dest), QPen(m_penColor, 2, Qt::SolidLine, Qt::RoundCap));
            m_pos = dest;
            updateTurtle();
        }
    } else {
        if (m_penDown) addLine(QLineF(m_pos, dest), QPen(m_penColor, 2, Qt::SolidLine, Qt::RoundCap));
        m_pos = dest;
        updateTurtle();
    }
}


void TurtleScene::retrocedeTortuga(double n){ avanzaTortuga(-n); }

void TurtleScene::giraDerecha(double grados) {
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

void TurtleScene::giraIzquierda(double grados) {
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


void TurtleScene::ponPos(double x, double y){
    // Convertir unidades a pixeles, eje Y positivo hacia arriba
    QPointF dest(x * m_unitSize, -y * m_unitSize);

    bool penOriginal = m_penDown;
    m_penDown = false;

    if (m_animado) {
        int pasos = qMax(1, int((dest - m_pos).manhattanLength() / 3));
        QPointF pasoVec = (dest - m_pos) / pasos;
        for (int i = 0; i < pasos; ++i) {
            m_pos += pasoVec;
            updateTurtle();
            animarDelay();
        }
    }

    m_pos = dest;
    updateTurtle();
    m_penDown = penOriginal;
}

void TurtleScene::ponX(double x){
    ponPos(x, -m_pos.y() / m_unitSize);
}

void TurtleScene::ponY(double y){
    ponPos(m_pos.x() / m_unitSize, y);
}



void TurtleScene::ponRumbo(double grados){
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

void TurtleScene::bajaLapiz(){ m_penDown = true; }
void TurtleScene::subeLapiz(){ m_penDown = false; }

void TurtleScene::ponColorLapiz(const QString &color){
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
    ponPos(m_center.x(), m_center.y());
}

void TurtleScene::esperar(int n){
    // n en frames de 60 FPS (como tenías)
    int ms = int(n * (1000.0 / 60.0));
    QEventLoop loop;
    QTimer::singleShot(ms, &loop, &QEventLoop::quit);
    loop.exec();
}
