#ifndef THUCDON_H
#define THUCDON_H
#include<QSqlDatabase>
#include<QSqlQueryModel>
#include<QtDebug>
#include<QSqlQuery>
#include<QString>
#include<database.h>
#include<QDateTime>
class ThucDon
{
private:
    int id;
    int tong;
    QDateTime ngayTao;
    int idBan;
    bool daThanhToan;
public:
    ThucDon();
    bool isValid();
    static ThucDon findByIdBan(int idBan);
    static ThucDon findOne(int id);
    QSqlQueryModel* findMonAn();
    bool ThemMonAn(int idMonAn);
    bool XoaMonAn(int id);
    static bool TaoThuDonMoi(int idBan);
    static QSqlQueryModel *ChuaThanhToan();
    static QSqlQueryModel *DaThanhToan();
    int getId() const;
    void setId(int newId);
    int getTong() const;
    void setTong(int newTong);
    const QDateTime &getNgayTao() const;
    void setNgayTao(const QDateTime &newNgayTao);
    int getIdBan() const;
    void setIdBan(int newIdBan);
    bool getDaThanhToan() const;
    void setDaThanhToan(bool newDaThanhToan);
};

#endif // THUCDON_H
