/********************************************************************************
** Form generated from reading UI file 'Appointments.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPOINTMENTS_H
#define UI_APPOINTMENTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_appointments
{
public:

    void setupUi(QWidget *appointments)
    {
        if (appointments->objectName().isEmpty())
            appointments->setObjectName(QString::fromUtf8("appointments"));
        appointments->resize(1024, 768);

        retranslateUi(appointments);

        QMetaObject::connectSlotsByName(appointments);
    } // setupUi

    void retranslateUi(QWidget *appointments)
    {
        appointments->setWindowTitle(QApplication::translate("appointments", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class appointments: public Ui_appointments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPOINTMENTS_H
