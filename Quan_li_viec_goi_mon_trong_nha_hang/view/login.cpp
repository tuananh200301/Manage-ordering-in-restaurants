#include "login.h"
#include "ui_login.h"
#include<QMessageBox>
#include<database.h>
#include "view/quanly.h"
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_btnLogin_clicked()
{
    QString username=ui->txtUserName->text();
    QString password=ui->txtPassWord->text();
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QSqlQuery query;
        query.prepare("SELECT [username],[password] FROM [QuanTri] WHERE [username]=:username");
        query.bindValue(":username",username);
        if(query.exec()){
            while(query.next()){
                if(username==query.value(0).toString() && password==query.value(1).toString()){
                    qDebug()<<"1";
                    QuanLy* ql=new QuanLy(this);
                    ql->setWindowTitle("Chào mừng "+query.value(0).toString());
                    ql->show();
                    this->hide();
                }else{
                    QMessageBox::warning(this,"Đăng nhập thất bại","Tài khoản hoặc Mật khẩu không đúng");
                }
                break;
            }
        }
        else{
            QMessageBox::warning(this,"Đăng nhập thất bại","Tài khoản hoặc Mật khẩu không đúng");
        }
    }
    else{
        QMessageBox::warning(this,"Đăng nhập thất bại","Không thể kết nối tới cơ sở dữ liệu");
    }
}

