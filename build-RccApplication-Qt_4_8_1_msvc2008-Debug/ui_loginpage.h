/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created: Wed Dec 3 20:04:46 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QWidget *centralWidget;
    QLineEdit *Email;
    QLineEdit *Password;
    QPushButton *Login;
    QPushButton *CreateAcc;
    QMenuBar *menuBar;
    QMenu *menuHelp;

    void setupUi(QMainWindow *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        LoginPage->resize(400, 300);
        LoginPage->setMinimumSize(QSize(400, 300));
        LoginPage->setMaximumSize(QSize(400, 300));
        LoginPage->setAutoFillBackground(true);
        LoginPage->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        centralWidget = new QWidget(LoginPage);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("background:url(./tigerbg.png);\n"
"background-repeat: no-repeat;\n"
"background-color:rgb(36, 36, 36);"));
        Email = new QLineEdit(centralWidget);
        Email->setObjectName(QString::fromUtf8("Email"));
        Email->setGeometry(QRect(80, 120, 241, 31));
        Email->setFocusPolicy(Qt::ClickFocus);
        Email->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(255, 255, 255);\n"
"background:rgb(255, 255, 255);\n"
""));
        Email->setMaxLength(30);
        Email->setAlignment(Qt::AlignCenter);
        Password = new QLineEdit(centralWidget);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setGeometry(QRect(80, 160, 241, 31));
        Password->setFocusPolicy(Qt::ClickFocus);
        Password->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(255, 255, 255);\n"
"background:rgb(255, 255, 255);\n"
""));
        Password->setMaxLength(16);
        Password->setEchoMode(QLineEdit::Password);
        Password->setAlignment(Qt::AlignCenter);
        Login = new QPushButton(centralWidget);
        Login->setObjectName(QString::fromUtf8("Login"));
        Login->setGeometry(QRect(80, 200, 111, 31));
        Login->setFocusPolicy(Qt::ClickFocus);
        Login->setAutoFillBackground(false);
        Login->setStyleSheet(QString::fromUtf8("background:white;\n"
""));
        CreateAcc = new QPushButton(centralWidget);
        CreateAcc->setObjectName(QString::fromUtf8("CreateAcc"));
        CreateAcc->setGeometry(QRect(200, 200, 121, 31));
        CreateAcc->setAutoFillBackground(false);
        CreateAcc->setStyleSheet(QString::fromUtf8("background:white;\n"
""));
        LoginPage->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LoginPage);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 24));
        menuBar->setLayoutDirection(Qt::RightToLeft);
        menuBar->setAutoFillBackground(false);
        menuBar->setStyleSheet(QString::fromUtf8("/*background:rgb(255, 137, 41);*/\n"
"QMenuBar::item {\n"
"    spacing: 3px; /* spacing between menu bar items */\n"
"    padding: 1px 4px;\n"
"    background: transparent;\n"
"    border-radius: 4px;\n"
"}\n"
"QMenuBar {\n"
"    background-color: rgb(255, 137, 41);\n"
"}"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        menuHelp->setFont(font);
        menuHelp->setLayoutDirection(Qt::LeftToRight);
        menuHelp->setAutoFillBackground(false);
        menuHelp->setStyleSheet(QString::fromUtf8("background:rgb(255, 137, 41);\n"
"border:0px;\n"
""));
        LoginPage->setMenuBar(menuBar);
        QWidget::setTabOrder(Email, Password);
        QWidget::setTabOrder(Password, Login);
        QWidget::setTabOrder(Login, CreateAcc);

        menuBar->addAction(menuHelp->menuAction());

        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QMainWindow *LoginPage)
    {
        LoginPage->setWindowTitle(QApplication::translate("LoginPage", "LoginPage", 0, QApplication::UnicodeUTF8));
        Email->setPlaceholderText(QApplication::translate("LoginPage", "E-mail", 0, QApplication::UnicodeUTF8));
        Password->setPlaceholderText(QApplication::translate("LoginPage", "Password", 0, QApplication::UnicodeUTF8));
        Login->setText(QApplication::translate("LoginPage", "Login", 0, QApplication::UnicodeUTF8));
        CreateAcc->setText(QApplication::translate("LoginPage", "Create Account", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("LoginPage", "X ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
