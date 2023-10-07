#include "datmon.h"
#include "ui_datmon.h"
#include "view/hoadon.h"
DatMon::DatMon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DatMon)
{
    ui->setupUi(this);
    ui->tblDanhMuc->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tblMonAn->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tblThucDon->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tblDanhMuc->setModel(DanhMuc::findAll());
}

DatMon::~DatMon()
{
    delete ui;
}


void DatMon::on_tblDanhMuc_activated(const QModelIndex &index)
{
    int id=ui->tblDanhMuc->model()->index(index.row(),0).data().toInt();
    this->dm=DanhMuc::findOne(id);
    ui->tblMonAn->setModel(dm.findMonAn());
}


void DatMon::on_btnLuuMonAn_clicked()
{
    QModelIndexList rows =ui->tblMonAn->selectionModel()->selectedRows();
    for (int i = 0; i < rows.count(); ++i)
    {
        int index = rows.at(i).row();
        int id=ui->tblMonAn->model()->index(index,0).data().toInt();
        td.ThemMonAn(id);
        ui->tblThucDon->setModel(td.findMonAn());

    }
}


void DatMon::on_btnXoaMonAn_clicked()
{
    QModelIndexList rows =ui->tblThucDon->selectionModel()->selectedRows();
    for (int i = 0; i < rows.count(); ++i)
    {
        int index = rows.at(i).row();
        int id=ui->tblThucDon->model()->index(index,0).data().toInt();
        td.XoaMonAn(id);
        ui->tblThucDon->setModel(td.findMonAn());

    }
}

int DatMon::getIdBan() const
{
    return idBan;
}

void DatMon::setIdBan(int newIdBan)
{
    idBan = newIdBan;
    this->td=ThucDon::findByIdBan(this->idBan);
    ui->tblThucDon->setModel(td.findMonAn());
}

void DatMon::setTitle(QString title)
{
    this->setWindowTitle(title);
    ui->lblTitle->setText(title);
}


void DatMon::on_btnDatMonAn_clicked()
{
    hide();
    HoaDon* hd=new HoaDon(this);
    hd->setIdThucDon(this->td.getId());
    hd->setWindowTitle("Hóa đơn bàn số "+QString::number(this->idBan));
    hd->show();
}

