#ifndef QUANTRI_H
#define QUANTRI_H

#include <QDialog>

namespace Ui {
class Quantri;
}

class Quantri : public QDialog
{
    Q_OBJECT

public:
    explicit Quantri(QWidget *parent = nullptr);
    ~Quantri();

private:
    Ui::Quantri *ui;

};

#endif // QUANTRI_H
