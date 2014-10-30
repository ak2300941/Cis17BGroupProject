/********************************************************************************
** Form generated from reading UI file 'admincontact.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINCONTACT_H
#define UI_ADMINCONTACT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_adminContact
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *adminContact)
    {
        if (adminContact->objectName().isEmpty())
            adminContact->setObjectName(QString::fromUtf8("adminContact"));
        adminContact->resize(400, 300);
        label = new QLabel(adminContact);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 60, 81, 16));
        label_2 = new QLabel(adminContact);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 80, 81, 16));
        label_3 = new QLabel(adminContact);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 100, 81, 16));
        label_4 = new QLabel(adminContact);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 120, 81, 16));
        label_5 = new QLabel(adminContact);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 140, 81, 16));
        label_6 = new QLabel(adminContact);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 160, 81, 16));

        retranslateUi(adminContact);

        QMetaObject::connectSlotsByName(adminContact);
    } // setupUi

    void retranslateUi(QDialog *adminContact)
    {
        adminContact->setWindowTitle(QApplication::translate("adminContact", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("adminContact", "Andrew Kim", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("adminContact", "Javier Garduno", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("adminContact", "David Patrick", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("adminContact", "Luis Pe\303\261a", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("adminContact", "Michael Risher", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("adminContact", "David Silva", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class adminContact: public Ui_adminContact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCONTACT_H
