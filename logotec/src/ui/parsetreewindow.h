#ifndef PARSETREEWINDOW_H
#define PARSETREEWINDOW_H


#include <QTreeWidgetItem>
#include <QWidget>
#include <QGraphicsScene>
#include <QJsonObject>

namespace Ui {
class parsetreewindow;
}


class parsetreewindow : public QWidget
{
    Q_OBJECT

public:
    explicit parsetreewindow(QWidget *parent = nullptr);
    ~parsetreewindow();

    void drawTreeFromJsonFile(const QString &filename);


private:
    Ui::parsetreewindow *ui;
    QGraphicsScene* scene;
    int calculateSubtreeWidth(const QJsonObject &node);
    void drawJsonNode(const QJsonObject &node, int x, int y, int yOffset);
};

#endif // PARSETREEWINDOW_H
