/********************************************************************************
** Form generated from reading UI file 'unlockedhat.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNLOCKEDHAT_H
#define UI_UNLOCKEDHAT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_unlockedHat
{
public:
    QLabel *label;

    void setupUi(QDialog *unlockedHat)
    {
        if (unlockedHat->objectName().isEmpty())
            unlockedHat->setObjectName(QString::fromUtf8("unlockedHat"));
        unlockedHat->resize(400, 300);
        label = new QLabel(unlockedHat);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 90, 301, 111));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);

        retranslateUi(unlockedHat);

        QMetaObject::connectSlotsByName(unlockedHat);
    } // setupUi

    void retranslateUi(QDialog *unlockedHat)
    {
        unlockedHat->setWindowTitle(QApplication::translate("unlockedHat", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("unlockedHat", "You Unlocked a Hat", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class unlockedHat: public Ui_unlockedHat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNLOCKEDHAT_H
