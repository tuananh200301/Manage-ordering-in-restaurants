#include "quanly.h"
#include "ui_quanly.h"

QStringList GetDanhMuc(){
    QStringList result;
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QSqlQuery query;
        query.prepare("SELECT * FROM [DanhMuc]");
        if(query.exec()){
            while(query.next()){
                result<<query.value(0).toString()+" | "+query.value(1).toString();
            }
        }
    }
    return result;
}
int Index(int id,QComboBox* cb){
    int tmp=-1;
    for(int i=0;i<cb->count();++i){
        tmp=cb->itemText(i).split("|").at(0).toInt();
        if(tmp==id){
            return i;
        }
    }
    return -1;
}
QuanLy::QuanLy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuanLy)
{
    ui->setupUi(this);

    ui->tblDanhMuc->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tblHoaDon->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tblMonAn->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tblThucDon->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    QStringList filter;
    filter<<"Chưa thanh toán"<<"Đã thanh toán";
    ui->cbLocThucDon->addItems(filter);
    ui->tblMonAn->setModel(MonAn::findAll());
    ui->cbDanhMuc->addItems(GetDanhMuc());

    ui->tblDanhMuc->setModel(DanhMuc::findAll());

    on_cbLocThucDon_activated(0);
}

QuanLy::~QuanLy()
{
    delete ui;
}

void QuanLy::on_tblMonAn_clicked(const QModelIndex &index)
{
    int id=ui->tblMonAn->model()->index(index.row(),0).data().toInt();
    this->ma=MonAn::findOne(id);
    ui->txtIdMonAn->setText(QString::number(ma.getId()));
    ui->txtTenMonAn->setText(ma.getTen());
    ui->txtGiaMonAn->setText(QString::number(ma.getGia()));
    ui->cbDanhMuc->setCurrentIndex(Index(this->ma.getIdDanhMuc(),ui->cbDanhMuc));

}


void QuanLy::on_btnLoadDanhMuc_clicked()
{
    ui->cbDanhMuc->clear();
    ui->cbDanhMuc->addItems(GetDanhMuc());
}


void QuanLy::on_btnThemMonAn_clicked()
{
    this->ma.setId(ui->txtIdMonAn->text().toInt());
    this->ma.setTen(ui->txtTenMonAn->text());
    this->ma.setGia(ui->txtGiaMonAn->text().toInt());
    this->ma.setIdDanhMuc(ui->cbDanhMuc->currentText().split("|").at(0).toInt());
    if(!MonAn::Insert(this->ma)){
        qDebug()<<"Khong them mon an duoc";
    }
    on_loadTblMonAn_clicked();
}


void QuanLy::on_loadTblMonAn_clicked()
{
    ui->tblMonAn->setModel(MonAn::findAll());
}


void QuanLy::on_btnSuaMonAn_clicked()
{
    this->ma.setId(ui->txtIdMonAn->text().toInt());
    this->ma.setTen(ui->txtTenMonAn->text());
    this->ma.setGia(ui->txtGiaMonAn->text().toInt());
    this->ma.setIdDanhMuc(ui->cbDanhMuc->currentText().split("|").at(0).toInt());
    if(!MonAn::Update(this->ma)){
        qDebug()<<"Khong sua mon an duoc";
    }
    on_loadTblMonAn_clicked();
}


void QuanLy::on_btnXoaMonAn_clicked()
{
    this->ma.setId(ui->txtIdMonAn->text().toInt());
    this->ma.setTen(ui->txtTenMonAn->text());
    this->ma.setGia(ui->txtGiaMonAn->text().toInt());
    this->ma.setIdDanhMuc(ui->cbDanhMuc->currentText().split("|").at(0).toInt());
    if(!MonAn::Delete(this->ma)){
        qDebug()<<"Khong xoa mon an duoc";
    }
    on_loadTblMonAn_clicked();
}


void QuanLy::on_tblDanhMuc_clicked(const QModelIndex &index)
{
    int id=ui->tblDanhMuc->model()->index(index.row(),0).data().toInt();
    this->dm=DanhMuc::findOne(id);
    ui->txtIdDanhMuc->setText(QString::number(dm.getId()));
    ui->txtTenDanhMuc->setText(dm.getTen());
}


void QuanLy::on_loadTblDanhMuc_clicked()
{
    ui->tblDanhMuc->setModel(DanhMuc::findAll());
}


void QuanLy::on_btnThemDanhMuc_clicked()
{
    this->dm.setId(ui->txtIdDanhMuc->text().toInt());
    this->dm.setTen(ui->txtTenDanhMuc->text());
    if(!DanhMuc::Insert(dm)){
        qDebug()<<"Khong them danh muc duoc";
    }
    on_loadTblDanhMuc_clicked();
}


void QuanLy::on_btnSuaDanhMuc_clicked()
{
    this->dm.setId(ui->txtIdDanhMuc->text().toInt());
    this->dm.setTen(ui->txtTenDanhMuc->text());
    if(!DanhMuc::Update(dm)){
        qDebug()<<"Khong sua danh muc duoc";
    }
    on_loadTblDanhMuc_clicked();
}


void QuanLy::on_btnXoaDanhMuc_clicked()
{
    this->dm.setId(ui->txtIdDanhMuc->text().toInt());
    this->dm.setTen(ui->txtTenDanhMuc->text());
    if(!DanhMuc::Delete(dm)){
        qDebug()<<"Khong xoa danh muc duoc";
    }
    on_loadTblDanhMuc_clicked();
}


void QuanLy::on_cbLocThucDon_activated(int index)
{
    if(index==0){
        ui->tblThucDon->setModel(ThucDon::ChuaThanhToan());
        ui->btnLuu->setText("Lưu là đã thanh toán");
    }
    else{
        ui->tblThucDon->setModel(ThucDon::DaThanhToan());
        ui->btnLuu->setText("Lưu là chưa thanh toán");
    }
}


void QuanLy::on_tblThucDon_clicked(const QModelIndex &index)
{
    int id=ui->tblThucDon->model()->index(index.row(),0).data().toInt();
    this->td=ThucDon::findOne(id);
    ui->tblHoaDon->setModel(this->td.findMonAn());
    ui->lblTongTienHoaDon->setText("Tổng tiền: "+QString::number(this->td.getTong())+"đ");
}


void QuanLy::on_btnLuu_clicked()
{
    int index=ui->cbLocThucDon->currentIndex();
    if(index==0){
        QModelIndexList rows =ui->tblThucDon->selectionModel()->selectedRows();
        for (int i = 0; i < rows.count(); ++i)
        {
            int index = rows.at(i).row();
            int id=ui->tblMonAn->model()->index(index,0).data().toInt();
            QSqlDatabase db=Database::DEFAULT_DATABASE();
            if(db.open()){
                QSqlQuery query;
                query.prepare("UPDATE [ThucDon] SET [DaThanhToan] = 1 WHERE [id]=:id");
                query.bindValue(":id",id);
                if(!query.exec()){
                    qDebug()<<"Khong luu duoc";
                }
            }

        }
    }
    else{
        QModelIndexList rows =ui->tblThucDon->selectionModel()->selectedRows();
        for (int i = 0; i < rows.count(); ++i)
        {
            int index = rows.at(i).row();
            int id=ui->tblMonAn->model()->index(index,0).data().toInt();
            QSqlDatabase db=Database::DEFAULT_DATABASE();
            if(db.open()){
                QSqlQuery query;
                query.prepare("UPDATE [ThucDon] SET [DaThanhToan] = 0 WHERE [id]=:id");
                query.bindValue(":id",id);
                if(!query.exec()){
                    qDebug()<<"Khong luu duoc";
                }
            }
        }
    }
    on_cbLocThucDon_activated(index);

}

