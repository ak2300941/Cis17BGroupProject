/********************************************************************************
** Form generated from reading UI file 'feelinglucky.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEELINGLUCKY_H
#define UI_FEELINGLUCKY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_feelingLucky
{
public:
    QLabel *label;

    void setupUi(QDialog *feelingLucky)
    {
        if (feelingLucky->objectName().isEmpty())
            feelingLucky->setObjectName(QString::fromUtf8("feelingLucky"));
        feelingLucky->resize(400, 300);
        label = new QLabel(feelingLucky);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 130, 91, 101));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);

        retranslateUi(feelingLucky);

        QMetaObject::connectSlotsByName(feelingLucky);
    } // setupUi

    void retranslateUi(QDialog *feelingLucky)
    {
        feelingLucky->setWindowTitle(QApplication::translate("feelingLucky", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("feelingLucky", ";)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class feelingLucky: public Ui_feelingLucky {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEELINGLUCKY_H
