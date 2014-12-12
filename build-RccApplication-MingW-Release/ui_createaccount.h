/********************************************************************************
** Form generated from reading UI file 'createaccount.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEACCOUNT_H
#define UI_CREATEACCOUNT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateAccount
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *emailLabel;
    QLineEdit *email;
    QGroupBox *groupBox_2;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *passwordLabel;
    QLineEdit *password;
    QLabel *confPassLabel;
    QLineEdit *confirmPassword;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *createButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *CreateAccount)
    {
        if (CreateAccount->objectName().isEmpty())
            CreateAccount->setObjectName(QString::fromUtf8("CreateAccount"));
        CreateAccount->resize(309, 280);
        groupBox = new QGroupBox(CreateAccount);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 261, 80));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 30, 221, 40));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(10, 10, 10, 10);
        emailLabel = new QLabel(widget);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));

        gridLayout_2->addWidget(emailLabel, 0, 0, 1, 1);

        email = new QLineEdit(widget);
        email->setObjectName(QString::fromUtf8("email"));

        gridLayout_2->addWidget(email, 0, 1, 1, 1);

        email->raise();
        groupBox_2 = new QGroupBox(CreateAccount);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 100, 261, 101));
        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 30, 227, 66));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 10);
        passwordLabel = new QLabel(widget1);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));

        gridLayout->addWidget(passwordLabel, 0, 0, 1, 1);

        password = new QLineEdit(widget1);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 0, 1, 1, 1);

        confPassLabel = new QLabel(widget1);
        confPassLabel->setObjectName(QString::fromUtf8("confPassLabel"));

        gridLayout->addWidget(confPassLabel, 1, 0, 1, 1);

        confirmPassword = new QLineEdit(widget1);
        confirmPassword->setObjectName(QString::fromUtf8("confirmPassword"));
        confirmPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(confirmPassword, 1, 1, 1, 1);

        widget2 = new QWidget(CreateAccount);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(110, 230, 166, 31));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        createButton = new QPushButton(widget2);
        createButton->setObjectName(QString::fromUtf8("createButton"));

        horizontalLayout->addWidget(createButton);

        cancelButton = new QPushButton(widget2);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

#ifndef QT_NO_SHORTCUT
        emailLabel->setBuddy(email);
        passwordLabel->setBuddy(password);
        confPassLabel->setBuddy(confirmPassword);
#endif // QT_NO_SHORTCUT

        retranslateUi(CreateAccount);

        QMetaObject::connectSlotsByName(CreateAccount);
    } // setupUi

    void retranslateUi(QDialog *CreateAccount)
    {
        CreateAccount->setWindowTitle(QApplication::translate("CreateAccount", "Create Account", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("CreateAccount", "Email", 0, QApplication::UnicodeUTF8));
        emailLabel->setText(QApplication::translate("CreateAccount", "Email", 0, QApplication::UnicodeUTF8));
        email->setPlaceholderText(QApplication::translate("CreateAccount", "Email", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("CreateAccount", "Password", 0, QApplication::UnicodeUTF8));
        passwordLabel->setText(QApplication::translate("CreateAccount", "Password", 0, QApplication::UnicodeUTF8));
        password->setPlaceholderText(QApplication::translate("CreateAccount", "Password", 0, QApplication::UnicodeUTF8));
        confPassLabel->setText(QApplication::translate("CreateAccount", "Confirm Password", 0, QApplication::UnicodeUTF8));
        confirmPassword->setPlaceholderText(QApplication::translate("CreateAccount", "Password", 0, QApplication::UnicodeUTF8));
        createButton->setText(QApplication::translate("CreateAccount", "Create Account", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("CreateAccount", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CreateAccount: public Ui_CreateAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEACCOUNT_H
