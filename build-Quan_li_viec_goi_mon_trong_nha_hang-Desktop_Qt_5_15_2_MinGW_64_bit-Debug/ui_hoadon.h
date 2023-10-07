/********************************************************************************
** Form generated from reading UI file 'hoadon.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOADON_H
#define UI_HOADON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_HoaDon
{
public:
    QTableView *tblHoaDon;
    QLabel *label;
    QLabel *lblTongTien;

    void setupUi(QDialog *HoaDon)
    {
        if (HoaDon->objectName().isEmpty())
            HoaDon->setObjectName(QString::fromUtf8("HoaDon"));
        HoaDon->resize(800, 600);
        tblHoaDon = new QTableView(HoaDon);
        tblHoaDon->setObjectName(QString::fromUtf8("tblHoaDon"));
        tblHoaDon->setGeometry(QRect(40, 90, 721, 411));
        QFont font;
        font.setPointSize(11);
        tblHoaDon->setFont(font);
        label = new QLabel(HoaDon);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 721, 40));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        lblTongTien = new QLabel(HoaDon);
        lblTongTien->setObjectName(QString::fromUtf8("lblTongTien"));
        lblTongTien->setGeometry(QRect(40, 525, 721, 40));
        QFont font2;
        font2.setPointSize(16);
        lblTongTien->setFont(font2);
        lblTongTien->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(HoaDon);

        QMetaObject::connectSlotsByName(HoaDon);
    } // setupUi

    void retranslateUi(QDialog *HoaDon)
    {
        HoaDon->setWindowTitle(QCoreApplication::translate("HoaDon", "H\303\263a \304\221\306\241n", nullptr));
        label->setText(QCoreApplication::translate("HoaDon", "H\303\263a \304\221\306\241n c\341\273\247a b\341\272\241n", nullptr));
        lblTongTien->setText(QCoreApplication::translate("HoaDon", "T\341\273\225ng ti\341\273\201n: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HoaDon: public Ui_HoaDon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOADON_H
