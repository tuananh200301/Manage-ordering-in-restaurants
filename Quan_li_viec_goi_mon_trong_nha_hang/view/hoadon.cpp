#include "hoadon.h"
#include "ui_hoadon.h"
#include "database.h"
#include<QSqlDatabase>
HoaDon::HoaDon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HoaDon)
{
    ui->setupUi(this);
    ui->tblHoaDon->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

HoaDon::~HoaDon()
{
    delete ui;
}

void HoaDon::setIdThucDon(int newIdThucDon)
{
    idThucDon = newIdThucDon;
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QSqlQueryModel*model=new QSqlQueryModel();
        QSqlQuery* query=new QSqlQuery(db);
        query->prepare("select mt.id as[ID], ma.TenMonAn as [Tên Món Ăn], ma.GiaCa as [Giá Cả], mt.SoLuong as [Số Lượng] from MonAn ma inner join MonAn_ThucDon mt on mt.IdMonAn = ma.id inner join ThucDon td on td.id = mt.IdThucDon where td.id = :id");
        query->bindValue(":id",idThucDon);
        if(query->exec()){
            model->setQuery(*query);
            ui->tblHoaDon->setModel(model);
        }
        int tongTien=0;
        if(query->exec()){
            while(query->next()){
                int gia=query->value(2).toInt();
                int soLuong=query->value(3).toInt();
                tongTien+=gia*soLuong;
            }
            ui->lblTongTien->setText("Tổng tiền: "+QString::number(tongTien)+" đ");
        }
        query->prepare("UPDATE [ThucDon] SET [TongGiaCa] = :tongTien WHERE [id]=:id");
        query->bindValue(":tongTien",tongTien);
        query->bindValue(":id",newIdThucDon);
        if(!query->exec()){
            qDebug()<<"Khong luu hoa don duoc";
        }
    }
}
