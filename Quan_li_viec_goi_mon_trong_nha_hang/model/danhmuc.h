#ifndef DANHMUC_H
#define DANHMUC_H
#include<QSqlDatabase>
#include<QSqlQueryModel>
#include<QtDebug>
#include<QSqlQuery>
#include<QString>
#include<database.h>
#include "model/monan.h"
class DanhMuc
{
private:
    int id;
    QString ten;
public:
    DanhMuc();
    DanhMuc(int id, QString ten);
    bool isValid();
    QSqlQueryModel* findMonAn();
    static QSqlQueryModel* findAll();
    static DanhMuc findOne(int id);
    static bool Update(DanhMuc dm);
    static bool Insert(DanhMuc dm);
    static bool Delete(DanhMuc dm);

    int getId() const;
    void setId(int newId);
    const QString &getTen() const;
    void setTen(const QString &newTen);
};

#endif // DANHMUC_H
