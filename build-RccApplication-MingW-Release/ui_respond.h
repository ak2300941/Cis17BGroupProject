/********************************************************************************
** Form generated from reading UI file 'respond.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESPOND_H
#define UI_RESPOND_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Respond
{
public:
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *Respond)
    {
        if (Respond->objectName().isEmpty())
            Respond->setObjectName(QString::fromUtf8("Respond"));
        Respond->resize(500, 400);
        textEdit = new QTextEdit(Respond);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 20, 461, 291));
        pushButton = new QPushButton(Respond);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 340, 75, 23));

        retranslateUi(Respond);

        QMetaObject::connectSlotsByName(Respond);
    } // setupUi

    void retranslateUi(QWidget *Respond)
    {
        Respond->setWindowTitle(QApplication::translate("Respond", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Respond", "Post", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Respond: public Ui_Respond {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESPOND_H
