/********************************************************************************
** Form generated from reading UI file 'schoolInfo.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHOOLINFO_H
#define UI_SCHOOLINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_schoolInfo
{
public:

    void setupUi(QWidget *schoolInfo)
    {
        if (schoolInfo->objectName().isEmpty())
            schoolInfo->setObjectName(QString::fromUtf8("schoolInfo"));
        schoolInfo->resize(1024, 768);

        retranslateUi(schoolInfo);

        QMetaObject::connectSlotsByName(schoolInfo);
    } // setupUi

    void retranslateUi(QWidget *schoolInfo)
    {
        schoolInfo->setWindowTitle(QApplication::translate("schoolInfo", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class schoolInfo: public Ui_schoolInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHOOLINFO_H
