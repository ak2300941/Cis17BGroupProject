/********************************************************************************
** Form generated from reading UI file 'clubs.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLUBS_H
#define UI_CLUBS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Clubs
{
public:

    void setupUi(QWidget *Clubs)
    {
        if (Clubs->objectName().isEmpty())
            Clubs->setObjectName(QString::fromUtf8("Clubs"));
        Clubs->resize(1024, 768);

        retranslateUi(Clubs);

        QMetaObject::connectSlotsByName(Clubs);
    } // setupUi

    void retranslateUi(QWidget *Clubs)
    {
        Clubs->setWindowTitle(QApplication::translate("Clubs", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Clubs: public Ui_Clubs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLUBS_H
