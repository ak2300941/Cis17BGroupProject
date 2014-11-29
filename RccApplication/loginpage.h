#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QMainWindow>
#include "configdialog.h"

namespace Ui {
class LoginPage;
}

class LoginPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = 0);
    ~LoginPage();

private slots:
    void on_Login_clicked();

private:
    Ui::LoginPage *ui;

    void splashInit();

    QString email,password;

    bool checke, checkp;
};

#endif // LOGINPAGE_H
