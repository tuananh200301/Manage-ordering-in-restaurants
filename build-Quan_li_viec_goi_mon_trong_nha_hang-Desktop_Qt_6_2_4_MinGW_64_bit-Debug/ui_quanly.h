/********************************************************************************
** Form generated from reading UI file 'quanly.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUANLY_H
#define UI_QUANLY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuanLy
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tblMonAn;
    QLabel *label;
    QLineEdit *txtIdMonAn;
    QLineEdit *txtTenMonAn;
    QLabel *label_2;
    QLineEdit *txtGiaMonAn;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *cbDanhMuc;
    QPushButton *btnThemMonAn;
    QPushButton *btnXoaMonAn;
    QPushButton *btnSuaMonAn;
    QPushButton *btnLoadDanhMuc;
    QPushButton *loadTblMonAn;
    QWidget *tab_2;
    QLineEdit *txtIdDanhMuc;
    QPushButton *btnThemDanhMuc;
    QPushButton *btnXoaDanhMuc;
    QLineEdit *txtTenDanhMuc;
    QPushButton *btnSuaDanhMuc;
    QLabel *label_9;
    QLabel *label_10;
    QTableView *tblDanhMuc;
    QPushButton *loadTblDanhMuc;
    QWidget *tab_3;
    QTableView *tblThucDon;
    QPushButton *btnLuu;
    QLabel *label_11;
    QLabel *label_12;
    QTableView *tblHoaDon;
    QLabel *lblTongTienHoaDon;
    QComboBox *cbLocThucDon;

    void setupUi(QDialog *QuanLy)
    {
        if (QuanLy->objectName().isEmpty())
            QuanLy->setObjectName(QString::fromUtf8("QuanLy"));
        QuanLy->resize(1280, 720);
        tabWidget = new QTabWidget(QuanLy);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(4, 4, 1270, 710));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tblMonAn = new QTableView(tab);
        tblMonAn->setObjectName(QString::fromUtf8("tblMonAn"));
        tblMonAn->setGeometry(QRect(20, 20, 791, 651));
        QFont font;
        font.setPointSize(11);
        tblMonAn->setFont(font);
        tblMonAn->setSelectionBehavior(QAbstractItemView::SelectRows);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(840, 20, 111, 30));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        txtIdMonAn = new QLineEdit(tab);
        txtIdMonAn->setObjectName(QString::fromUtf8("txtIdMonAn"));
        txtIdMonAn->setGeometry(QRect(990, 20, 250, 30));
        txtIdMonAn->setFont(font1);
        txtTenMonAn = new QLineEdit(tab);
        txtTenMonAn->setObjectName(QString::fromUtf8("txtTenMonAn"));
        txtTenMonAn->setGeometry(QRect(990, 70, 250, 30));
        txtTenMonAn->setFont(font1);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(840, 70, 111, 30));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        txtGiaMonAn = new QLineEdit(tab);
        txtGiaMonAn->setObjectName(QString::fromUtf8("txtGiaMonAn"));
        txtGiaMonAn->setGeometry(QRect(990, 120, 250, 30));
        txtGiaMonAn->setFont(font1);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(840, 120, 111, 30));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(840, 170, 111, 30));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);
        cbDanhMuc = new QComboBox(tab);
        cbDanhMuc->setObjectName(QString::fromUtf8("cbDanhMuc"));
        cbDanhMuc->setGeometry(QRect(990, 170, 250, 30));
        cbDanhMuc->setFont(font1);
        btnThemMonAn = new QPushButton(tab);
        btnThemMonAn->setObjectName(QString::fromUtf8("btnThemMonAn"));
        btnThemMonAn->setGeometry(QRect(850, 280, 100, 35));
        btnThemMonAn->setFont(font1);
        btnXoaMonAn = new QPushButton(tab);
        btnXoaMonAn->setObjectName(QString::fromUtf8("btnXoaMonAn"));
        btnXoaMonAn->setGeometry(QRect(1140, 280, 100, 35));
        btnXoaMonAn->setFont(font1);
        btnSuaMonAn = new QPushButton(tab);
        btnSuaMonAn->setObjectName(QString::fromUtf8("btnSuaMonAn"));
        btnSuaMonAn->setGeometry(QRect(1000, 280, 100, 35));
        btnSuaMonAn->setFont(font1);
        btnLoadDanhMuc = new QPushButton(tab);
        btnLoadDanhMuc->setObjectName(QString::fromUtf8("btnLoadDanhMuc"));
        btnLoadDanhMuc->setGeometry(QRect(1090, 220, 150, 35));
        btnLoadDanhMuc->setFont(font1);
        loadTblMonAn = new QPushButton(tab);
        loadTblMonAn->setObjectName(QString::fromUtf8("loadTblMonAn"));
        loadTblMonAn->setGeometry(QRect(820, 640, 75, 30));
        loadTblMonAn->setFont(font1);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        txtIdDanhMuc = new QLineEdit(tab_2);
        txtIdDanhMuc->setObjectName(QString::fromUtf8("txtIdDanhMuc"));
        txtIdDanhMuc->setGeometry(QRect(990, 20, 250, 30));
        txtIdDanhMuc->setFont(font1);
        btnThemDanhMuc = new QPushButton(tab_2);
        btnThemDanhMuc->setObjectName(QString::fromUtf8("btnThemDanhMuc"));
        btnThemDanhMuc->setGeometry(QRect(850, 140, 100, 35));
        btnThemDanhMuc->setFont(font1);
        btnXoaDanhMuc = new QPushButton(tab_2);
        btnXoaDanhMuc->setObjectName(QString::fromUtf8("btnXoaDanhMuc"));
        btnXoaDanhMuc->setGeometry(QRect(1140, 140, 100, 35));
        btnXoaDanhMuc->setFont(font1);
        txtTenDanhMuc = new QLineEdit(tab_2);
        txtTenDanhMuc->setObjectName(QString::fromUtf8("txtTenDanhMuc"));
        txtTenDanhMuc->setGeometry(QRect(990, 70, 250, 30));
        txtTenDanhMuc->setFont(font1);
        btnSuaDanhMuc = new QPushButton(tab_2);
        btnSuaDanhMuc->setObjectName(QString::fromUtf8("btnSuaDanhMuc"));
        btnSuaDanhMuc->setGeometry(QRect(1000, 140, 100, 35));
        btnSuaDanhMuc->setFont(font1);
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(840, 20, 111, 30));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(840, 70, 130, 30));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);
        tblDanhMuc = new QTableView(tab_2);
        tblDanhMuc->setObjectName(QString::fromUtf8("tblDanhMuc"));
        tblDanhMuc->setGeometry(QRect(20, 20, 791, 651));
        tblDanhMuc->setSelectionBehavior(QAbstractItemView::SelectRows);
        loadTblDanhMuc = new QPushButton(tab_2);
        loadTblDanhMuc->setObjectName(QString::fromUtf8("loadTblDanhMuc"));
        loadTblDanhMuc->setGeometry(QRect(820, 640, 75, 30));
        loadTblDanhMuc->setFont(font1);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tblThucDon = new QTableView(tab_3);
        tblThucDon->setObjectName(QString::fromUtf8("tblThucDon"));
        tblThucDon->setGeometry(QRect(20, 70, 581, 541));
        tblThucDon->setFont(font);
        tblThucDon->setSelectionBehavior(QAbstractItemView::SelectRows);
        btnLuu = new QPushButton(tab_3);
        btnLuu->setObjectName(QString::fromUtf8("btnLuu"));
        btnLuu->setGeometry(QRect(350, 630, 250, 35));
        btnLuu->setFont(font1);
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 20, 131, 40));
        QFont font2;
        font2.setPointSize(20);
        label_11->setFont(font2);
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(660, 20, 581, 40));
        label_12->setFont(font2);
        label_12->setAlignment(Qt::AlignCenter);
        tblHoaDon = new QTableView(tab_3);
        tblHoaDon->setObjectName(QString::fromUtf8("tblHoaDon"));
        tblHoaDon->setGeometry(QRect(660, 70, 581, 541));
        tblHoaDon->setFont(font);
        tblHoaDon->setSelectionBehavior(QAbstractItemView::SelectRows);
        lblTongTienHoaDon = new QLabel(tab_3);
        lblTongTienHoaDon->setObjectName(QString::fromUtf8("lblTongTienHoaDon"));
        lblTongTienHoaDon->setGeometry(QRect(660, 620, 581, 40));
        QFont font3;
        font3.setPointSize(18);
        lblTongTienHoaDon->setFont(font3);
        lblTongTienHoaDon->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cbLocThucDon = new QComboBox(tab_3);
        cbLocThucDon->setObjectName(QString::fromUtf8("cbLocThucDon"));
        cbLocThucDon->setGeometry(QRect(170, 20, 431, 40));
        QFont font4;
        font4.setPointSize(15);
        cbLocThucDon->setFont(font4);
        tabWidget->addTab(tab_3, QString());

        retranslateUi(QuanLy);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(QuanLy);
    } // setupUi

    void retranslateUi(QDialog *QuanLy)
    {
        QuanLy->setWindowTitle(QCoreApplication::translate("QuanLy", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("QuanLy", "Id", nullptr));
        label_2->setText(QCoreApplication::translate("QuanLy", "T\303\252n m\303\263n \304\203n", nullptr));
        label_3->setText(QCoreApplication::translate("QuanLy", "Gi\303\241 c\341\272\243", nullptr));
        label_4->setText(QCoreApplication::translate("QuanLy", "Danh M\341\273\245c", nullptr));
        btnThemMonAn->setText(QCoreApplication::translate("QuanLy", "Th\303\252m", nullptr));
        btnXoaMonAn->setText(QCoreApplication::translate("QuanLy", "X\303\263a", nullptr));
        btnSuaMonAn->setText(QCoreApplication::translate("QuanLy", "S\341\273\255a", nullptr));
        btnLoadDanhMuc->setText(QCoreApplication::translate("QuanLy", "T\341\272\243i l\341\272\241i danh m\341\273\245c", nullptr));
        loadTblMonAn->setText(QCoreApplication::translate("QuanLy", "T\341\272\243i l\341\272\241i", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("QuanLy", "Qu\341\272\243n l\303\275 m\303\263n \304\203n", nullptr));
        btnThemDanhMuc->setText(QCoreApplication::translate("QuanLy", "Th\303\252m", nullptr));
        btnXoaDanhMuc->setText(QCoreApplication::translate("QuanLy", "X\303\263a", nullptr));
        btnSuaDanhMuc->setText(QCoreApplication::translate("QuanLy", "S\341\273\255a", nullptr));
        label_9->setText(QCoreApplication::translate("QuanLy", "Id", nullptr));
        label_10->setText(QCoreApplication::translate("QuanLy", "T\303\252n danh m\341\273\245c", nullptr));
        loadTblDanhMuc->setText(QCoreApplication::translate("QuanLy", "T\341\272\243i l\341\272\241i", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("QuanLy", "Qu\341\272\243n l\303\275 danh m\341\273\245c", nullptr));
        btnLuu->setText(QCoreApplication::translate("QuanLy", "L\306\260u l\303\240 \304\221\303\243 thanh to\303\241n", nullptr));
        label_11->setText(QCoreApplication::translate("QuanLy", "Th\341\273\261c \304\221\306\241n", nullptr));
        label_12->setText(QCoreApplication::translate("QuanLy", "H\303\263a \304\221\306\241n", nullptr));
        lblTongTienHoaDon->setText(QCoreApplication::translate("QuanLy", "T\341\273\225ng ti\341\273\201n: ", nullptr));
#if QT_CONFIG(tooltip)
        cbLocThucDon->setToolTip(QCoreApplication::translate("QuanLy", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("QuanLy", "Qu\341\272\243n l\303\275 h\303\263a \304\221\306\241n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuanLy: public Ui_QuanLy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUANLY_H
