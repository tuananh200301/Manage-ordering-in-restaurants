/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QLineEdit *txtUserName;
    QLabel *label_2;
    QLineEdit *txtPassWord;
    QLabel *label_3;
    QPushButton *btnLogin;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(400, 300);
        label = new QLabel(Login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 100, 120, 40));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        txtUserName = new QLineEdit(Login);
        txtUserName->setObjectName(QString::fromUtf8("txtUserName"));
        txtUserName->setGeometry(QRect(160, 100, 210, 40));
        txtUserName->setMinimumSize(QSize(0, 22));
        txtUserName->setFont(font);
        label_2 = new QLabel(Login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 150, 120, 40));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        txtPassWord = new QLineEdit(Login);
        txtPassWord->setObjectName(QString::fromUtf8("txtPassWord"));
        txtPassWord->setGeometry(QRect(160, 150, 210, 40));
        txtPassWord->setFont(font);
        txtPassWord->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(Login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 20, 361, 40));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        btnLogin = new QPushButton(Login);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(250, 220, 120, 40));
        btnLogin->setFont(font);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "\304\220\304\203ng Nh\341\272\255p", nullptr));
        label->setText(QCoreApplication::translate("Login", "User Name", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Password", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "\304\220\304\203ng Nh\341\272\255p", nullptr));
        btnLogin->setText(QCoreApplication::translate("Login", "\304\220\304\203ng Nh\341\272\255p", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
