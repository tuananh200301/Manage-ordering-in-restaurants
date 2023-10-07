#include "thucdon.h"

int ThucDon::getId() const
{
    return id;
}

void ThucDon::setId(int newId)
{
    id = newId;
}

int ThucDon::getTong() const
{
    return tong;
}

void ThucDon::setTong(int newTong)
{
    tong = newTong;
}

const QDateTime &ThucDon::getNgayTao() const
{
    return ngayTao;
}

void ThucDon::setNgayTao(const QDateTime &newNgayTao)
{
    ngayTao = newNgayTao;
}

int ThucDon::getIdBan() const
{
    return idBan;
}

void ThucDon::setIdBan(int newIdBan)
{
    idBan = newIdBan;
}

bool ThucDon::getDaThanhToan() const
{
    return daThanhToan;
}

void ThucDon::setDaThanhToan(bool newDaThanhToan)
{
    daThanhToan = newDaThanhToan;
}

ThucDon::ThucDon()
{
    id=0;
}

bool ThucDon::isValid()
{
    return this->id!=0;
}

ThucDon ThucDon::findByIdBan(int idBan)
{
    ThucDon result;
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QSqlQuery query;
        query.prepare("SELECT [id],[TongGiaCa],[NgayTao],[IdBan],[DaThanhToan] FROM [ThucDon] WHERE [DaThanhToan]=0 AND [IdBan]=:idBan");
        query.bindValue(":idBan",idBan);
        if(query.exec()){
            while(query.next()){
                result.setId(query.value(0).toInt());
                result.setTong(query.value(1).toInt());
                result.setNgayTao(query.value(2).toDateTime());
                result.setIdBan(query.value(3).toInt());
                result.setDaThanhToan(query.value(4).toBool());
                break;
            }
        }
    }
    if(result.isValid()){
        return result;
    }
    else{
        ThucDon::TaoThuDonMoi(idBan);
        return ThucDon::findByIdBan(idBan);
    }
}

ThucDon ThucDon::findOne(int id)
{
    ThucDon result;
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QSqlQuery query;
        query.prepare("SELECT [id],[TongGiaCa],[NgayTao],[IdBan],[DaThanhToan] FROM [ThucDon] WHERE [id]=:id");
        query.bindValue(":id",id);
        if(query.exec()){
            while(query.next()){
                result.setId(query.value(0).toInt());
                result.setTong(query.value(1).toInt());
                result.setNgayTao(query.value(2).toDateTime());
                result.setIdBan(query.value(3).toInt());
                result.setDaThanhToan(query.value(4).toBool());
                break;
            }
        }
    }
    return result;
}

QSqlQueryModel *ThucDon::findMonAn()
{
    QSqlQueryModel* result=new QSqlQueryModel();
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QSqlQuery* query=new QSqlQuery(db);
        query->prepare("select mt.id as[ID], ma.TenMonAn as [Tên Món Ăn], ma.GiaCa as [Giá Cả], mt.SoLuong as [Số Lượng] from MonAn ma inner join MonAn_ThucDon mt on mt.IdMonAn = ma.id inner join ThucDon td on td.id = mt.IdThucDon where td.id = :id");
        query->bindValue(":id",this->id);
        if(query->exec()){
            result->setQuery(*query);
        }
    }
    return result;
}

bool ThucDon::ThemMonAn(int idMonAn)
{
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QSqlQuery query;
        query.prepare("SELECT [SoLuong] FROM [MonAn_ThucDon] WHERE [IdThucDon]=:idThucDon AND [IdMonAn]=:idMonAn");
        query.bindValue(":idThucDon",this->id);
        query.bindValue(":idMonAn",idMonAn);
        if(query.exec()){
            bool flag=true;
            while(query.next()){
                flag=false;
                int soLuong=query.value(0).toInt();
                QSqlQuery qry;
                qry.prepare("UPDATE [MonAn_ThucDon] SET [SoLuong] = :soLuong WHERE [IdThucDon]=:idThucDon AND [IdMonAn]=:idMonAn");
                qry.bindValue(":soLuong",soLuong+1);
                qry.bindValue(":idThucDon",this->id);
                qry.bindValue(":idMonAn",idMonAn);
                if(qry.exec()){
                    return true;
                }

            }
            if(flag){
                QSqlQuery qry;
                qry.prepare("INSERT INTO [MonAn_ThucDon] ([IdThucDon],[IdMonAn],[SoLuong]) VALUES (:idThucDon,:idMonAn,:soLuong)");
                qry.bindValue(":idThucDon",this->id);
                qry.bindValue(":idMonAn",idMonAn);
                qry.bindValue(":soLuong",1);
                if(qry.exec()){
                    return true;
                }
            }
        }
    }
    return false;
}

bool ThucDon::XoaMonAn(int id)
{
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QSqlQuery query;
        query.prepare("DELETE FROM [MonAn_ThucDon] WHERE [id]=:id");
        query.bindValue(":id",id);
        if(query.exec()){
            return true;
        }

    }
    return false;
}

bool ThucDon::TaoThuDonMoi(int idBan)
{
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QSqlQuery query;
        query.prepare("INSERT INTO [ThucDon] ([TongGiaCa],[NgayTao],[IdBan],[DaThanhToan]) VALUES (:tongGiaCa,:ngayTao,:idBan,:daThanhToan)");
        query.bindValue(":tongGiaCa",0);
        query.bindValue(":ngayTao",QDateTime::currentDateTime());
        query.bindValue(":idBan",idBan);
        query.bindValue(":daThanhToan",false);
        if(query.exec()){
            return true;
        }
    }
    return false;
}

QSqlQueryModel *ThucDon::ChuaThanhToan()
{
    QSqlQueryModel* result=new QSqlQueryModel();
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QSqlQuery* query=new QSqlQuery(db);
        query->prepare("SELECT [id] as [ID],[NgayTao] as [Ngày tạo],[IdBan] as [Số Bàn],[TongGiaCa] as [Tổng tiền] FROM [ThucDon] WHERE [DaThanhToan]=0");
        if(query->exec()){
            result->setQuery(*query);
        }
    }
    return result;
}

QSqlQueryModel *ThucDon::DaThanhToan()
{
    QSqlQueryModel* result=new QSqlQueryModel();
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QSqlQuery* query=new QSqlQuery(db);
        query->prepare("SELECT [id] as [ID],[NgayTao] as [Ngày tạo],[IdBan] as [Số Bàn],[TongGiaCa] as [Tổng tiền] FROM [ThucDon] WHERE [DaThanhToan]=1");
        if(query->exec()){
            result->setQuery(*query);
        }
    }
    return result;
}
