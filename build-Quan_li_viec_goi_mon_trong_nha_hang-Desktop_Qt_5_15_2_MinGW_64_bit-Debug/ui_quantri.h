/********************************************************************************
** Form generated from reading UI file 'quantri.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUANTRI_H
#define UI_QUANTRI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Quantri
{
public:

    void setupUi(QDialog *Quantri)
    {
        if (Quantri->objectName().isEmpty())
            Quantri->setObjectName(QString::fromUtf8("Quantri"));
        Quantri->resize(742, 371);

        retranslateUi(Quantri);

        QMetaObject::connectSlotsByName(Quantri);
    } // setupUi

    void retranslateUi(QDialog *Quantri)
    {
        Quantri->setWindowTitle(QCoreApplication::translate("Quantri", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Quantri: public Ui_Quantri {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUANTRI_H
