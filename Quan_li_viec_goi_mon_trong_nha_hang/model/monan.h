#ifndef MONAN_H
#define MONAN_H
#include<QSqlDatabase>
#include<QSqlQueryModel>
#include<QtDebug>
#include<QSqlQuery>
#include<QString>
#include<database.h>

class MonAn
{
private:
    int id;
    QString ten;
    int gia;
    int idDanhMuc;
public:
    MonAn();
    MonAn(int id,QString ten,int gia,int idDanhMuc);
    bool isValid();
    static MonAn findOne(int id);
    static QSqlQueryModel* findAll();
    static bool Update(MonAn monAn);
    static bool Insert(MonAn monAn);
    static bool Delete(MonAn monAn);
    int getId() const;
    void setId(int newId);
    const QString &getTen() const;
    void setTen(const QString &newTen);
    int getGia() const;
    void setGia(int newGia);
    int getIdDanhMuc() const;
    void setIdDanhMuc(int newIdDanhMuc);
};

#endif // MONAN_H
