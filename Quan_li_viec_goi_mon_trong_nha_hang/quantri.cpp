#include "quantri.h"
#include "ui_quantri.h"

Quantri::Quantri(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Quantri)
{
    ui->setupUi(this);
}

Quantri::~Quantri()
{
    delete ui;
}
