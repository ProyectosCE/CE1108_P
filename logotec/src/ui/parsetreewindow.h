#ifndef PARSETREEWINDOW_H
#define PARSETREEWINDOW_H

#include <QTreeWidgetItem>
#include <QWidget>
#include <QGraphicsScene>
#include <QJsonObject>
#include <QWheelEvent>

namespace Ui {
    class parsetreewindow;
}

/* Class: parsetreewindow
   Descripción:
     Ventana para visualizar el árbol sintáctico (Parse Tree) generado a partir
     de un archivo JSON. Utiliza QGraphicsScene para dibujar nodos y líneas
     conectando padres con hijos.

   Responsabilidades:
     - Cargar un archivo JSON que representa un árbol sintáctico.
     - Dibujar nodos y líneas jerárquicas con QGraphicsScene.
     - Permitir zoom centrado en el cursor y desplazamiento con arrastre del mouse.
*/
class parsetreewindow : public QWidget
{
    Q_OBJECT

public:
    explicit parsetreewindow(QWidget *parent = nullptr);
    ~parsetreewindow();

    void drawTreeFromJsonFile(const QString &filename);

protected:
    bool eventFilter(QObject *obj, QEvent *event) override;

private:
    Ui::parsetreewindow *ui;
    QGraphicsScene* scene;
    int calculateSubtreeWidth(const QJsonObject &node);
    void drawJsonNode(const QJsonObject &node, int x, int y, int yOffset);
    double zoomFactor = 1.15;
};

#endif // PARSETREEWINDOW_H