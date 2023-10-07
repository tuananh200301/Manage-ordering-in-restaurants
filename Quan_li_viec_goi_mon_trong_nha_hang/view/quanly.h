#ifndef QUANLY_H
#define QUANLY_H

#include <QDialog>
#include "model/monan.h"
#include "model/danhmuc.h"
#include "model/thucdon.h"

namespace Ui {
class QuanLy;
}

class QuanLy : public QDialog
{
    Q_OBJECT

public:
    explicit QuanLy(QWidget *parent = nullptr);
    ~QuanLy();

private slots:
    void on_tblMonAn_clicked(const QModelIndex &index);

    void on_btnLoadDanhMuc_clicked();

    void on_btnThemMonAn_clicked();

    void on_loadTblMonAn_clicked();

    void on_btnSuaMonAn_clicked();

    void on_btnXoaMonAn_clicked();

    void on_tblDanhMuc_clicked(const QModelIndex &index);

    void on_loadTblDanhMuc_clicked();

    void on_btnThemDanhMuc_clicked();

    void on_btnSuaDanhMuc_clicked();

    void on_btnXoaDanhMuc_clicked();

    void on_cbLocThucDon_activated(int index);

    void on_tblThucDon_clicked(const QModelIndex &index);

    void on_btnLuu_clicked();

private:
    Ui::QuanLy *ui;
    MonAn ma;
    DanhMuc dm;
    ThucDon td;
};

#endif // QUANLY_H
