/********************************************************************************
** Form generated from reading UI file 'busSchedule.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSSCHEDULE_H
#define UI_BUSSCHEDULE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BusSchedule
{
public:

    void setupUi(QWidget *BusSchedule)
    {
        if (BusSchedule->objectName().isEmpty())
            BusSchedule->setObjectName(QString::fromUtf8("BusSchedule"));
        BusSchedule->resize(1024, 768);

        retranslateUi(BusSchedule);

        QMetaObject::connectSlotsByName(BusSchedule);
    } // setupUi

    void retranslateUi(QWidget *BusSchedule)
    {
        BusSchedule->setWindowTitle(QApplication::translate("BusSchedule", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BusSchedule: public Ui_BusSchedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSSCHEDULE_H
