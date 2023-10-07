#ifndef DATMON_H
#define DATMON_H

#include <QDialog>
#include "model/danhmuc.h"
#include "model/monan.h"
#include "model/thucdon.h"
#include "mainwindow.h"
#include<QList>

namespace Ui {
class DatMon;
}

class DatMon : public QDialog
{
    Q_OBJECT

public:
    explicit DatMon(QWidget *parent = nullptr);
    ~DatMon();

    int getIdBan() const;
    void setIdBan(int newIdBan);
    void setTitle(QString title);

private slots:

    void on_tblDanhMuc_activated(const QModelIndex &index);

    void on_btnLuuMonAn_clicked();

    void on_btnXoaMonAn_clicked();

    void on_btnDatMonAn_clicked();

private:
    Ui::DatMon *ui;
    DanhMuc dm;
    MonAn ma;
    ThucDon td;
    int idBan;
};

#endif // DATMON_H
