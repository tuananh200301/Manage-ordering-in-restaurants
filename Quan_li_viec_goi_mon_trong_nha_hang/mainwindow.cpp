#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include <QSqlDatabase>
#include <QSqlQuery>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase db=Database::DEFAULT_DATABASE();
    if(db.open()){
        QSqlQueryModel* model=new QSqlQueryModel();
        QSqlQuery* query=new QSqlQuery(db);
        query->prepare("SELECT [Id] FROM [Ban]");
        if(query->exec()){
            model->setQuery(*query);
            ui->cbBan->setModel(model);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    hide();
    DatMon* dm=new DatMon(this);
    dm->setIdBan(ui->cbBan->currentText().toInt());
    dm->setTitle("Bàn "+ui->cbBan->currentText());
    dm->show();
}


void MainWindow::on_btnAdmin_clicked()
{
    hide();
    Login* lg=new Login(this);
    lg->show();
}

