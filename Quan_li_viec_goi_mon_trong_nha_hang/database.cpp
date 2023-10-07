#include "database.h"

QSqlDatabase Database::db=QSqlDatabase::addDatabase( "QSQLITE" );
QString Database::dbName="C:/Users/TUANANH/Desktop/dataKhachHang.db";
Database::Database()
{

}

QSqlDatabase Database::DEFAULT_DATABASE()
{

    if(db.databaseName()!=""){
        return db;
    }
    else{
        db.setDatabaseName(dbName);
        return db;
    }
}

