#include "newaccount.h"
#include "ui_newaccount.h"
#include "mainwindow.h"

NewAccount::NewAccount(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewAccount)
{
    ui->setupUi(this);
}

NewAccount::~NewAccount()
{
    delete ui;
}

void NewAccount::on_pushButton_clicked()
{
    MainWindow *k=new MainWindow;
    k->show();
    this->close();
}
