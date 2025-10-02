#ifndef PARSETREEWINDOW_H
#define PARSETREEWINDOW_H

#include <QWidget>
#include <QTreeWidgetItem>
#include <QGraphicsScene>

namespace Ui {
class parsetreewindow;
}


class parsetreewindow : public QWidget
{
    Q_OBJECT

public:
    explicit parsetreewindow(QWidget *parent = nullptr);
    ~parsetreewindow();

    void drawTestTree();


private:
    Ui::parsetreewindow *ui;
    QGraphicsScene* scene;
};

#endif // PARSETREEWINDOW_H
