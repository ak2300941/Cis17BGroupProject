/********************************************************************************
** Form generated from reading UI file 'Forums.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORUMS_H
#define UI_FORUMS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Forums
{
public:

    void setupUi(QWidget *Forums)
    {
        if (Forums->objectName().isEmpty())
            Forums->setObjectName(QString::fromUtf8("Forums"));
        Forums->resize(1024, 768);

        retranslateUi(Forums);

        QMetaObject::connectSlotsByName(Forums);
    } // setupUi

    void retranslateUi(QWidget *Forums)
    {
        Forums->setWindowTitle(QApplication::translate("Forums", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Forums: public Ui_Forums {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORUMS_H
