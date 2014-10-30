/********************************************************************************
** Form generated from reading UI file 'leveledup.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVELEDUP_H
#define UI_LEVELEDUP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_leveledUp
{
public:
    QLabel *label;

    void setupUi(QDialog *leveledUp)
    {
        if (leveledUp->objectName().isEmpty())
            leveledUp->setObjectName(QString::fromUtf8("leveledUp"));
        leveledUp->resize(400, 300);
        label = new QLabel(leveledUp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 80, 251, 111));
        QFont font;
        font.setPointSize(28);
        label->setFont(font);

        retranslateUi(leveledUp);

        QMetaObject::connectSlotsByName(leveledUp);
    } // setupUi

    void retranslateUi(QDialog *leveledUp)
    {
        leveledUp->setWindowTitle(QApplication::translate("leveledUp", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("leveledUp", "You Leveled Up", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class leveledUp: public Ui_leveledUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVELEDUP_H
