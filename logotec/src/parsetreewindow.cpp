#include "parsetreewindow.h"
#include "ui_parsetreewindow.h"


parsetreewindow::parsetreewindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::parsetreewindow)
{
    ui->setupUi(this);
}

parsetreewindow::~parsetreewindow()
{
    delete ui;
}