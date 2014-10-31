#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include "mainwindow.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_6_clicked()
{
    QMessageBox::StandardButton  reply;
   reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout",QMessageBox::Yes | QMessageBox::No);
   if (reply == QMessageBox::Yes)
   {
       MainWindow *back = new MainWindow;
       back->show();
       this->close();
   }


}

void Login::on_pushButton_5_clicked()
{
    QMessageBox::StandardButton  reply;
   reply = QMessageBox::question(this, "Delete your Account", "Are you sure you want to Delete your account",QMessageBox::Yes | QMessageBox::No);
   if (reply == QMessageBox::Yes)
   {
       MainWindow *back = new MainWindow;
       back->show();
       this->close();
   }
}
