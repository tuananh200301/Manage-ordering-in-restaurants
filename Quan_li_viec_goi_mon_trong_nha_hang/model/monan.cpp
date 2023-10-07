#include "monan.h"

int MonAn::getId() const
{
    return id;
}

void MonAn::setId(int newId)
{
    id = newId;
}

const QString &MonAn::getTen() const
{
    return ten;
}

void MonAn::setTen(const QString &newTen)
{
    ten = newTen;
}

int MonAn::getGia() const
{
    return gia;
}

void MonAn::setGia(int newGia)
{
    gia = newGia;
}

int MonAn::getIdDanhMuc() const
{
    return idDanhMuc;
}

void MonAn::setIdDanhMuc(int newIdDanhMuc)
{
    idDanhMuc = newIdDanhMuc;
}

MonAn::MonAn()
{
    id=0;
    ten="";
    gia=0;
}

MonAn::MonAn(int id, QString ten, int gia, int idDanhMuc)
{
    this->id=id;
    this->ten=ten;
    this->gia=gia;
    this->idDanhMuc=idDanhMuc;
}

bool MonAn::isValid()
{
    return id!=0;
}

//QList<MonAn> MonAn::findAll()
//{
//    QList<MonAn> result;
//    QSqlDatabase db=Database::DEFAULT_DATABASE();
//    if(db.open()){
//        QSqlQuery query;
//        query.prepare("SELECT * FROM [MonAn]");
//        if(query.exec()){
//            while(query.next()){

//                result.append(MonAn(query.value(0).toInt(),query.value(1).toString(),query.value(2).toInt(),query.value(3).toInt()));
//            }
//        }
//    }
//    return result;
//}

MonAn MonAn::findOne(int id)
{
    MonAn result;
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QSqlQuery query;
        query.prepare("SELECT * FROM [MonAn] WHERE [id]=:id");
        query.bindValue(":id",id);
        if(query.exec()){
            while(query.next()){
                result=MonAn(query.value(0).toInt(),query.value(1).toString(),query.value(2).toInt(),query.value(3).toInt());
                break;
            }
        }
    }
    return result;
}

QSqlQueryModel *MonAn::findAll()
{
    QSqlQueryModel* result=new QSqlQueryModel();
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QSqlQuery* query=new QSqlQuery(db);
        query->prepare("SELECT ma.[id] as [ID],ma.[TenMonAn] as [Tên Món Ăn],ma.[GiaCa] as [Giá Cả],dm.[Ten] as [Danh Mục] FROM [MonAn] ma LEFT JOIN [DanhMuc] dm ON ma.IdDanhMuc=dm.id");
        if(query->exec()){
            result->setQuery(*query);
        }
    }
    return result;
}

bool MonAn::Update(MonAn monAn)
{
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QString queryString="UPDATE [MonAn] SET [TenMonAn]=:ten, [GiaCa]=:gia, [IdDanhMuc]=:idDanhMuc WHERE [id]=:id";
        QSqlQuery query;
        query.prepare(queryString);
        query.bindValue(":ten",monAn.getTen());
        query.bindValue(":gia",monAn.getGia());
        query.bindValue(":idDanhMuc",monAn.getIdDanhMuc());
        query.bindValue(":id",monAn.getId());
        if(query.exec()){
            return true;
        }
    }
    return false;
}

bool MonAn::Insert(MonAn monAn)
{
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QString queryString="INSERT INTO [MonAn] ([TenMonAn] ,[GiaCa] ,[IdDanhMuc]) VALUES (:ten,:gia,:idDanhMuc)";
        QSqlQuery query;
        query.prepare(queryString);
        query.bindValue(":ten",monAn.getTen());
        query.bindValue(":gia",monAn.getGia());
        query.bindValue(":idDanhMuc",monAn.getIdDanhMuc());
        if(query.exec()){
            return true;
        }
    }
    return false;
}

bool MonAn::Delete(MonAn monAn)
{
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QSqlQuery query;
        query.prepare("DELETE FROM [MonAn] WHERE [id]=:id");
        query.bindValue(":id",monAn.getId());
        if(query.exec()){
            return true;
        }
    }
    return false;
}
