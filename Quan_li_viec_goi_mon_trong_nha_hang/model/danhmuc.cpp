#include "danhmuc.h"

int DanhMuc::getId() const
{
    return id;
}

void DanhMuc::setId(int newId)
{
    id = newId;
}

const QString &DanhMuc::getTen() const
{
    return ten;
}

void DanhMuc::setTen(const QString &newTen)
{
    ten = newTen;
}

DanhMuc::DanhMuc()
{
    id=0;
    ten="";
}

DanhMuc::DanhMuc(int id, QString ten)
{
    this->id=id;
    this->ten=ten;
}

bool DanhMuc::isValid()
{
    return id!=0;
}

QSqlQueryModel* DanhMuc::findAll()
{
    QSqlQueryModel* result=new QSqlQueryModel();
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QSqlQuery* query=new QSqlQuery(db);
        query->prepare("SELECT [id] as [ID],[Ten] as [Tên Danh Mục] FROM [DanhMuc]");
        if(query->exec()){
            result->setQuery(*query);
        }
    }
    return result;
}

DanhMuc DanhMuc::findOne(int id)
{
    DanhMuc result;
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QSqlQuery query;
        query.prepare("SELECT * FROM [DanhMuc] WHERE [id]=:id");
        query.bindValue(":id",id);
        if(query.exec()){
            while(query.next()){
                result.setId(query.value(0).toInt());
                result.setTen(query.value(1).toString());
                break;
            }
        }
    }
    return result;
}

bool DanhMuc::Update(DanhMuc dm)
{
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QString queryString="UPDATE [DanhMuc] SET [Ten] = :ten WHERE [id]=:id";
        QSqlQuery query;
        query.prepare(queryString);
        query.bindValue(":ten",dm.getTen());
        query.bindValue(":id",dm.getId());
        if(query.exec()){
            return true;
        }
    }
    return false;
}

bool DanhMuc::Insert(DanhMuc dm)
{
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QString queryString="INSERT INTO [DanhMuc] ([Ten]) VALUES (:ten)";
        QSqlQuery query;
        query.prepare(queryString);
        query.bindValue(":ten",dm.getTen());
        if(query.exec()){
            return true;
        }
    }
    return false;
}

bool DanhMuc::Delete(DanhMuc dm)
{
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QSqlQuery query;
        query.prepare("DELETE FROM [DanhMuc] WHERE [id]=:id");
        query.bindValue(":id",dm.getId());
        if(query.exec()){
            return true;
        }
    }
    return false;
}

QSqlQueryModel* DanhMuc::findMonAn()
{
    QSqlQueryModel* result=new QSqlQueryModel();
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QSqlQuery* query=new QSqlQuery(db);
        query->prepare("SELECT [id] as [ID],[TenMonAn] as [Tên Món Ăn],[GiaCa] as [Giá Cả] FROM [MonAn] WHERE [IdDanhMuc]=:idDanhMuc");
        query->bindValue(":idDanhMuc",this->id);
        if(query->exec()){
            result->setQuery(*query);
        }
    }
    return result;
}
