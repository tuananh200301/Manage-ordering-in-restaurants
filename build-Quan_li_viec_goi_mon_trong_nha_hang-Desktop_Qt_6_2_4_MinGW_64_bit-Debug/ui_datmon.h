/********************************************************************************
** Form generated from reading UI file 'datmon.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATMON_H
#define UI_DATMON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DatMon
{
public:
    QTableView *tblMonAn;
    QLabel *label;
    QLabel *label_2;
    QTableView *tblThucDon;
    QLabel *lblTitle;
    QLabel *label_4;
    QPushButton *btnLuuMonAn;
    QPushButton *btnXoaMonAn;
    QPushButton *btnDatMonAn;
    QTableView *tblDanhMuc;

    void setupUi(QDialog *DatMon)
    {
        if (DatMon->objectName().isEmpty())
            DatMon->setObjectName(QString::fromUtf8("DatMon"));
        DatMon->resize(1280, 720);
        tblMonAn = new QTableView(DatMon);
        tblMonAn->setObjectName(QString::fromUtf8("tblMonAn"));
        tblMonAn->setGeometry(QRect(20, 90, 450, 530));
        QFont font;
        font.setPointSize(11);
        tblMonAn->setFont(font);
        tblMonAn->setSelectionBehavior(QAbstractItemView::SelectRows);
        label = new QLabel(DatMon);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 400, 40));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(DatMon);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(850, 50, 400, 40));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        tblThucDon = new QTableView(DatMon);
        tblThucDon->setObjectName(QString::fromUtf8("tblThucDon"));
        tblThucDon->setGeometry(QRect(800, 90, 450, 530));
        tblThucDon->setFont(font);
        tblThucDon->setSelectionBehavior(QAbstractItemView::SelectRows);
        lblTitle = new QLabel(DatMon);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(10, 10, 1261, 40));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        lblTitle->setFont(font2);
        lblTitle->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(DatMon);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(440, 50, 400, 40));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);
        btnLuuMonAn = new QPushButton(DatMon);
        btnLuuMonAn->setObjectName(QString::fromUtf8("btnLuuMonAn"));
        btnLuuMonAn->setGeometry(QRect(180, 640, 130, 40));
        btnLuuMonAn->setFont(font1);
        btnXoaMonAn = new QPushButton(DatMon);
        btnXoaMonAn->setObjectName(QString::fromUtf8("btnXoaMonAn"));
        btnXoaMonAn->setGeometry(QRect(800, 640, 130, 40));
        btnXoaMonAn->setFont(font1);
        btnDatMonAn = new QPushButton(DatMon);
        btnDatMonAn->setObjectName(QString::fromUtf8("btnDatMonAn"));
        btnDatMonAn->setGeometry(QRect(1120, 640, 130, 40));
        btnDatMonAn->setFont(font1);
        tblDanhMuc = new QTableView(DatMon);
        tblDanhMuc->setObjectName(QString::fromUtf8("tblDanhMuc"));
        tblDanhMuc->setGeometry(QRect(490, 90, 291, 531));
        tblDanhMuc->setFont(font);
        tblDanhMuc->setSelectionBehavior(QAbstractItemView::SelectRows);

        retranslateUi(DatMon);

        QMetaObject::connectSlotsByName(DatMon);
    } // setupUi

    void retranslateUi(QDialog *DatMon)
    {
        DatMon->setWindowTitle(QCoreApplication::translate("DatMon", "\304\220\341\272\267t M\303\263n \304\202n", nullptr));
        label->setText(QCoreApplication::translate("DatMon", "M\303\263n \304\202n", nullptr));
        label_2->setText(QCoreApplication::translate("DatMon", "Th\341\273\261c \304\221\306\241n c\341\273\247a b\341\272\241n", nullptr));
        lblTitle->setText(QCoreApplication::translate("DatMon", "B\303\240n", nullptr));
        label_4->setText(QCoreApplication::translate("DatMon", "Danh M\341\273\245c M\303\263n \304\202n", nullptr));
        btnLuuMonAn->setText(QCoreApplication::translate("DatMon", "L\306\260u M\303\263n \304\202n", nullptr));
        btnXoaMonAn->setText(QCoreApplication::translate("DatMon", "X\303\263a M\303\263n \304\202n", nullptr));
        btnDatMonAn->setText(QCoreApplication::translate("DatMon", "\304\220\341\272\267t M\303\263n \304\202n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DatMon: public Ui_DatMon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATMON_H
