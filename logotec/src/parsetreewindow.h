#ifndef PARSETREEWINDOW_H
#define PARSETREEWINDOW_H

#include <QWidget>
#include <QTreeWidgetItem>


namespace Ui {
class parsetreewindow;
}


class parsetreewindow : public QWidget
{
    Q_OBJECT

public:
    explicit parsetreewindow(QWidget *parent = nullptr);
    ~parsetreewindow();

private:
    Ui::parsetreewindow *ui;

};

#endif // PARSETREEWINDOW_H
