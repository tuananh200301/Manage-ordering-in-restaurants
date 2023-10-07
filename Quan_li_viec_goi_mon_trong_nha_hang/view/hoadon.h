#ifndef HOADON_H
#define HOADON_H

#include <QDialog>

namespace Ui {
class HoaDon;
}

class HoaDon : public QDialog
{
    Q_OBJECT

public:
    explicit HoaDon(QWidget *parent = nullptr);
    ~HoaDon();

    void setIdThucDon(int newIdThucDon);

private:
    Ui::HoaDon *ui;
    int idThucDon;
};

#endif // HOADON_H
