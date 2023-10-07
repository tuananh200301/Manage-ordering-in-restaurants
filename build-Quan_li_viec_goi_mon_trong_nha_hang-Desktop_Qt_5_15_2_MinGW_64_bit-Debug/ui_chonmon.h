/********************************************************************************
** Form generated from reading UI file 'chonmon.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHONMON_H
#define UI_CHONMON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ChonMon
{
public:
    QLabel *label_tieude;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QTableView *tableView_dsmonan;
    QPushButton *pushButton_luu;

    void setupUi(QDialog *ChonMon)
    {
        if (ChonMon->objectName().isEmpty())
            ChonMon->setObjectName(QString::fromUtf8("ChonMon"));
        ChonMon->resize(839, 436);
        ChonMon->setStyleSheet(QString::fromUtf8("background-image: url(:/img/img/bkgr1.jpg);"));
        label_tieude = new QLabel(ChonMon);
        label_tieude->setObjectName(QString::fromUtf8("label_tieude"));
        label_tieude->setGeometry(QRect(200, 10, 401, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        label_tieude->setFont(font);
        comboBox = new QComboBox(ChonMon);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(690, 120, 131, 22));
        label = new QLabel(ChonMon);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(500, 120, 111, 20));
        QFont font1;
        font1.setBold(true);
        label->setFont(font1);
        label_2 = new QLabel(ChonMon);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(500, 180, 131, 16));
        label_2->setFont(font1);
        label_3 = new QLabel(ChonMon);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(500, 240, 141, 16));
        label_3->setFont(font1);
        label_4 = new QLabel(ChonMon);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(500, 300, 161, 16));
        label_4->setFont(font1);
        comboBox_2 = new QComboBox(ChonMon);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(690, 180, 131, 22));
        comboBox_3 = new QComboBox(ChonMon);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(690, 240, 131, 22));
        comboBox_4 = new QComboBox(ChonMon);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(690, 300, 131, 22));
        tableView_dsmonan = new QTableView(ChonMon);
        tableView_dsmonan->setObjectName(QString::fromUtf8("tableView_dsmonan"));
        tableView_dsmonan->setGeometry(QRect(100, 100, 281, 241));
        pushButton_luu = new QPushButton(ChonMon);
        pushButton_luu->setObjectName(QString::fromUtf8("pushButton_luu"));
        pushButton_luu->setGeometry(QRect(570, 370, 161, 31));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        pushButton_luu->setFont(font2);

        retranslateUi(ChonMon);

        QMetaObject::connectSlotsByName(ChonMon);
    } // setupUi

    void retranslateUi(QDialog *ChonMon)
    {
        ChonMon->setWindowTitle(QCoreApplication::translate("ChonMon", "Qu\341\272\243n l\303\255 g\341\273\215i m\303\263n", nullptr));
        label_tieude->setText(QCoreApplication::translate("ChonMon", "Xin khach hang click vao nhung mon an can goi", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("ChonMon", "C\303\240 ph\303\252 \304\221en", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("ChonMon", "C\303\240 ph\303\252 s\341\273\257a ", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("ChonMon", "Chanh tuy\341\272\277t ", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("ChonMon", "Soda b\341\272\241c h\303\240 ", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("ChonMon", "Soda kiwi ", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("ChonMon", "Sinh t\341\273\221 xo\303\240i ", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("ChonMon", "Sinh t\341\273\221 b\306\241 ", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("ChonMon", "Sinh t\341\273\221 d\303\242u", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("ChonMon", "Coca Cola", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("ChonMon", "N\306\260\341\273\233c kho\303\241ng", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("ChonMon", "Bia", nullptr));

        label->setText(QCoreApplication::translate("ChonMon", "Danh s\303\241ch \304\221\341\273\223 u\341\273\221ng", nullptr));
        label_2->setText(QCoreApplication::translate("ChonMon", "Danh s\303\241ch m\303\263n khai v\341\273\213", nullptr));
        label_3->setText(QCoreApplication::translate("ChonMon", "Danh s\303\241ch m\303\263n \304\203n ch\303\255nh", nullptr));
        label_4->setText(QCoreApplication::translate("ChonMon", "Danh s\303\241ch m\303\263n tr\303\241ng mi\341\273\207ng", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("ChonMon", "Khoai lang chi\303\252n b\306\241", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("ChonMon", "Salat hoa qu\341\272\243", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("ChonMon", "Nem chua", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("ChonMon", "S\303\272p h\341\272\243i s\341\272\243n", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("ChonMon", "S\303\272p g\303\240", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("ChonMon", "N\341\273\231m hoa chu\341\273\221i", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("ChonMon", "N\341\273\231m s\341\273\251a xo\303\240i xanh", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("ChonMon", "L\306\260\341\273\241i b\303\262 h\341\272\247m s\341\273\221t", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("ChonMon", "B\303\262 s\341\273\221t ti\303\252u xanh", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("ChonMon", "B\303\262 b\341\272\257p t\341\273\251 xuyen", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("ChonMon", "M\341\273\261c chi\303\252n gi\303\262n", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("ChonMon", "M\341\273\261c x\303\240o b\303\264ng c\341\272\243i", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("ChonMon", "M\341\273\261c h\341\272\245p h\303\240nh g\341\273\253ng", nullptr));
        comboBox_3->setItemText(6, QCoreApplication::translate("ChonMon", "Cua h\341\272\245p bia", nullptr));
        comboBox_3->setItemText(7, QCoreApplication::translate("ChonMon", "Cua rang me", nullptr));
        comboBox_3->setItemText(8, QCoreApplication::translate("ChonMon", "Cua l\341\273\231t Phong Sa", nullptr));
        comboBox_3->setItemText(9, QCoreApplication::translate("ChonMon", "T\303\264m c\303\240ng n\306\260\341\273\233ng", nullptr));
        comboBox_3->setItemText(10, QCoreApplication::translate("ChonMon", "T\303\264m s\303\272 h\341\272\245p n\306\260\341\273\233c d\341\273\253a", nullptr));
        comboBox_3->setItemText(11, QCoreApplication::translate("ChonMon", "G\303\240 h\341\272\245p l\303\241 chanh", nullptr));
        comboBox_3->setItemText(12, QCoreApplication::translate("ChonMon", "G\303\240 \341\273\247 mu\341\273\221i", nullptr));
        comboBox_3->setItemText(13, QCoreApplication::translate("ChonMon", "C\306\241m chi\303\252n h\341\272\243i s\341\272\243n", nullptr));

        comboBox_4->setItemText(0, QCoreApplication::translate("ChonMon", "S\341\273\257a chua d\341\272\247m hoa qu\341\272\243", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("ChonMon", "Ch\303\250 sen", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("ChonMon", "B\303\241nh ng\341\273\215t", nullptr));
        comboBox_4->setItemText(3, QCoreApplication::translate("ChonMon", "D\341\273\253a d\341\272\247m", nullptr));
        comboBox_4->setItemText(4, QCoreApplication::translate("ChonMon", "Hoa qu\341\272\243 c\303\241c lo\341\272\241i", nullptr));

        pushButton_luu->setText(QCoreApplication::translate("ChonMon", "L\306\260u danh s\303\241ch m\303\263n \304\203n ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChonMon: public Ui_ChonMon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHONMON_H
