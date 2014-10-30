/********************************************************************************
** Form generated from reading UI file 'delaccount.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELACCOUNT_H
#define UI_DELACCOUNT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_delAccount
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *delAccount)
    {
        if (delAccount->objectName().isEmpty())
            delAccount->setObjectName(QString::fromUtf8("delAccount"));
        delAccount->resize(400, 300);
        lineEdit = new QLineEdit(delAccount);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 70, 113, 20));
        label = new QLabel(delAccount);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 131, 16));
        label_2 = new QLabel(delAccount);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 131, 16));
        lineEdit_2 = new QLineEdit(delAccount);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 100, 113, 20));
        label_3 = new QLabel(delAccount);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 130, 91, 21));
        lineEdit_3 = new QLineEdit(delAccount);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(190, 130, 161, 51));

        retranslateUi(delAccount);

        QMetaObject::connectSlotsByName(delAccount);
    } // setupUi

    void retranslateUi(QDialog *delAccount)
    {
        delAccount->setWindowTitle(QApplication::translate("delAccount", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("delAccount", "User Name/Emai Address", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("delAccount", "Password", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("delAccount", "Reason (optional)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class delAccount: public Ui_delAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELACCOUNT_H
