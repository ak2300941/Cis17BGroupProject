/********************************************************************************
** Form generated from reading UI file 'current_new.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURRENT_NEW_H
#define UI_CURRENT_NEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_current_New
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *current_New)
    {
        if (current_New->objectName().isEmpty())
            current_New->setObjectName(QString::fromUtf8("current_New"));
        current_New->resize(358, 363);
        pushButton = new QPushButton(current_New);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 20, 121, 31));

        retranslateUi(current_New);

        QMetaObject::connectSlotsByName(current_New);
    } // setupUi

    void retranslateUi(QDialog *current_New)
    {
        current_New->setWindowTitle(QApplication::translate("current_New", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("current_New", "Submit New", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class current_New: public Ui_current_New {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRENT_NEW_H
