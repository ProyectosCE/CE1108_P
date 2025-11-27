#include "turtlescene.h"
#include <QtMath>
#include <QEventLoop>
#include <QTimer>
#include <QPen>
#include <QBrush>


/* Function: TurtleScene
   Descripción:
     Constructor de la clase. Inicializa los valores predeterminados
     de posición, rumbo, color del lápiz y velocidad de animación.

   Detalles:
     - Crea una escena de 10,000x10,000 unidades centrada en el origen.
     - Instancia la figura de la tortuga (flecha) al centro.
*/
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
    setSceneRect(-5000, -5000, 10000, 10000);
    // crear tortuga por primera vez
    ensureTurtleExists();
    m_turtle->setPos(QPointF(0,0)); // inicializar en 0,0
    m_pos = QPointF(0,0);
    updateTurtle();
}


/* Function: ensureTurtleExists
   Descripción:
     Verifica si la figura de la tortuga ya fue creada en la escena.
     Si no existe, la genera con forma de triángulo (flecha gris).
*/
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


/* Function: setAnimado
   Descripción:
     Activa o desactiva el modo animado para los movimientos de la tortuga.

   Params:
     - animado: Valor booleano que indica si los movimientos deben animarse.
*/
void TurtleScene::setAnimado(bool animado){
    m_animado = animado;
}

/* Function: velocidad
   Descripción:
     Ajusta la velocidad de animación según un modo textual o valor numérico.

   Params:
     - modo: Puede ser “slow/lento”, “normal”, “fast/rápido”, o un número entre 1 y 10.
*/
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

/* Function: limpiar
   Descripción:
     Borra todos los dibujos y reinicia el estado de la escena y la tortuga.
     Restaura la posición central, rumbo, color y velocidad por defecto.
*/
void TurtleScene::limpiar() {
    // Limpiar todos los items (dibujos, tortuga, icono)
    clear();
    setSceneRect(-5000, -5000, 10000, 10000);
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

/* Function: updateTurtle
   Descripción:
     Actualiza visualmente la posición y orientación de la tortuga en la escena.
     Se encarga de mantener la visibilidad y opacidad correctas del ícono o flecha.
*/
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

/* Function: animarDelay
   Descripción:
     Aplica una pausa breve proporcional a la velocidad configurada,
     para suavizar las animaciones paso a paso.
*/
void TurtleScene::animarDelay(){
    if (!m_animado) return;
    // base: 50 ms / velocidad (1..10) -> rango aproximadamente 50..5ms
    int base = 50;
    int delay = base / qMax(1, m_velocidad);
    QEventLoop loop;
    QTimer::singleShot(delay, &loop, &QEventLoop::quit);
    loop.exec();
}

/* Function: usarIcono
   Descripción:
     Cambia la representación visual de la tortuga de una flecha a un ícono personalizado.

   Params:
     - pixmap: Imagen que se usará para representar la tortuga.
*/
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

/* Function: usarFlecha
   Descripción:
     Restaura la tortuga al modo visual por defecto (flecha).
*/
void TurtleScene::usarFlecha() {
    // Ocultar ícono
    if (m_turtleIcon) m_turtleIcon->setVisible(false);
    // Mostrar flecha
    if (m_turtle) m_turtle->setVisible(true);
    m_usarIcono = false;
    updateTurtle();
}


/* Function: avanzaTortuga
   Descripción:
     Mueve la tortuga hacia adelante la cantidad de unidades especificadas.
     Si el lápiz está abajo, se dibuja una línea en el trayecto.

   Params:
     - n: Distancia a avanzar, en unidades del sistema de dibujo.
*/
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


/* Function: retrocedeTortuga
   Descripción:
     Mueve la tortuga hacia atrás la cantidad de unidades especificadas.

   Params:
     - n: Distancia a retroceder.
*/
void TurtleScene::retrocedeTortuga(double n){ avanzaTortuga(-n); }


/* Function: giraDerecha
   Descripción:
     Rota la tortuga hacia la derecha (en sentido horario) un número dado de grados.

   Params:
     - grados: Cantidad de grados de rotación.
*/
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

/* Function: giraIzquierda
   Descripción:
     Rota la tortuga hacia la izquierda (en sentido antihorario) un número dado de grados.

   Params:
     - grados: Cantidad de grados de rotación.
*/
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


/* Function: ocultaTortuga
   Descripción:
     Oculta la tortuga con un efecto de desvanecimiento si está en modo animado,
     y la reposiciona en el centro con rumbo cero.
*/
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

/* Function: ponPos
   Descripción:
     Posiciona la tortuga en las coordenadas especificadas (x, y), sin dejar trazo.

   Params:
     - x: Coordenada horizontal (en unidades de tortuga).
     - y: Coordenada vertical (en unidades de tortuga).
*/
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

/* Function: ponX
   Descripción:
     Mueve la tortuga a la posición X especificada, manteniendo su coordenada Y actual.

   Params:
     - x: Nueva coordenada horizontal.
*/
void TurtleScene::ponX(double x){
    ponPos(x, -m_pos.y() / m_unitSize);
}


/* Function: ponY
   Descripción:
     Mueve la tortuga a la posición Y especificada, manteniendo su coordenada X actual.

   Params:
     - y: Nueva coordenada vertical.
*/
void TurtleScene::ponY(double y){
    ponPos(m_pos.x() / m_unitSize, y);
}

/* Function: ponRumbo
   Descripción:
     Ajusta el rumbo absoluto de la tortuga a un ángulo determinado (0–360°).
     Si el modo animado está activado, el giro se realiza gradualmente.

   Params:
     - grados: Rumbo absoluto deseado en grados.
*/
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

/* Function: bajaLapiz
   Descripción:
     Activa el lápiz para que los movimientos futuros dejen líneas en la escena.
*/
void TurtleScene::bajaLapiz(){ m_penDown = true; }


/* Function: subeLapiz
   Descripción:
     Desactiva el lápiz para que los movimientos no dibujen líneas.
*/
void TurtleScene::subeLapiz(){ m_penDown = false; }

/* Function: ponColorLapiz
   Descripción:
     Cambia el color actual del lápiz de dibujo.

   Params:
     - color: Nombre del color en texto (“rojo”, “azul”, “negro”, etc.),
              o cualquier valor reconocido por QColor.
*/
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

/* Function: centro
   Descripción:
     Mueve la tortuga al centro de la escena manteniendo el rumbo actual.
*/
void TurtleScene::centro(){
    ponPos(m_center.x(), m_center.y());
}


/* Function: esperar
   Descripción:
     Pausa la ejecución durante una cantidad de frames equivalentes a 60 FPS.

   Params:
     - n: Cantidad de frames a esperar.
*/
void TurtleScene::esperar(int n){
    // n en frames de 60 FPS (como tenías)
    int ms = int(n * (1000.0 / 60.0));
    QEventLoop loop;
    QTimer::singleShot(ms, &loop, &QEventLoop::quit);
    loop.exec();
}