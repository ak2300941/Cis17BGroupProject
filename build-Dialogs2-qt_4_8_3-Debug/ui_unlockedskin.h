/********************************************************************************
** Form generated from reading UI file 'unlockedskin.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNLOCKEDSKIN_H
#define UI_UNLOCKEDSKIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_unlockedSkin
{
public:
    QLabel *label;

    void setupUi(QDialog *unlockedSkin)
    {
        if (unlockedSkin->objectName().isEmpty())
            unlockedSkin->setObjectName(QString::fromUtf8("unlockedSkin"));
        unlockedSkin->resize(400, 300);
        label = new QLabel(unlockedSkin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 80, 311, 111));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);

        retranslateUi(unlockedSkin);

        QMetaObject::connectSlotsByName(unlockedSkin);
    } // setupUi

    void retranslateUi(QDialog *unlockedSkin)
    {
        unlockedSkin->setWindowTitle(QApplication::translate("unlockedSkin", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("unlockedSkin", "You Unlocked a Skin", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class unlockedSkin: public Ui_unlockedSkin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNLOCKEDSKIN_H
