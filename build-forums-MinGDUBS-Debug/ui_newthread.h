/********************************************************************************
** Form generated from reading UI file 'newthread.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTHREAD_H
#define UI_NEWTHREAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_newThread
{
public:
    QLabel *label;
    QLineEdit *urlInput;
    QLabel *typeLabel;
    QComboBox *selectType;
    QPushButton *pushButton;
    QLineEdit *titleInput_2;
    QLabel *label_2;
    QLabel *typeLabel_2;
    QCheckBox *checkBox;
    QTextEdit *textInput;
    QLineEdit *titleInput;

    void setupUi(QDialog *newThread)
    {
        if (newThread->objectName().isEmpty())
            newThread->setObjectName(QString::fromUtf8("newThread"));
        newThread->resize(400, 483);
        label = new QLabel(newThread);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 51, 21));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        urlInput = new QLineEdit(newThread);
        urlInput->setObjectName(QString::fromUtf8("urlInput"));
        urlInput->setGeometry(QRect(40, 130, 261, 31));
        typeLabel = new QLabel(newThread);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));
        typeLabel->setGeometry(QRect(40, 90, 51, 21));
        typeLabel->setFont(font);
        selectType = new QComboBox(newThread);
        selectType->setObjectName(QString::fromUtf8("selectType"));
        selectType->setGeometry(QRect(150, 10, 91, 22));
        pushButton = new QPushButton(newThread);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 420, 75, 23));
        titleInput_2 = new QLineEdit(newThread);
        titleInput_2->setObjectName(QString::fromUtf8("titleInput_2"));
        titleInput_2->setGeometry(QRect(40, 250, 261, 21));
        label_2 = new QLabel(newThread);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 220, 201, 21));
        label_2->setFont(font);
        typeLabel_2 = new QLabel(newThread);
        typeLabel_2->setObjectName(QString::fromUtf8("typeLabel_2"));
        typeLabel_2->setGeometry(QRect(50, 360, 71, 21));
        typeLabel_2->setFont(font);
        checkBox = new QCheckBox(newThread);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(50, 390, 141, 17));
        textInput = new QTextEdit(newThread);
        textInput->setObjectName(QString::fromUtf8("textInput"));
        textInput->setGeometry(QRect(40, 120, 261, 91));
        titleInput = new QLineEdit(newThread);
        titleInput->setObjectName(QString::fromUtf8("titleInput"));
        titleInput->setGeometry(QRect(40, 60, 261, 21));

        retranslateUi(newThread);
        QObject::connect(pushButton, SIGNAL(clicked()), newThread, SLOT(close()));

        QMetaObject::connectSlotsByName(newThread);
    } // setupUi

    void retranslateUi(QDialog *newThread)
    {
        newThread->setWindowTitle(QApplication::translate("newThread", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("newThread", "Title", 0, QApplication::UnicodeUTF8));
        typeLabel->setText(QApplication::translate("newThread", "URL", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("newThread", "submit", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("newThread", "Choose a sub-forum", 0, QApplication::UnicodeUTF8));
        typeLabel_2->setText(QApplication::translate("newThread", "options", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("newThread", "send replies to my inbox", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class newThread: public Ui_newThread {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTHREAD_H
