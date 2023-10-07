#ifndef DATABASE_H
#define DATABASE_H
#include<QtSql>
#include<QSqlDatabase>
#include<QSqlError>
#include<QString>
class Database
{
private:
    static QSqlDatabase db;
    static QString dbName;
public:
    Database();
    static QSqlDatabase DEFAULT_DATABASE();
};
#endif // DATABASE_H
