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
    MainWindow *b = new MainWindow;
    b->show();
    this->close();
}
void NewAccount::on_pushButton_2_clicked()
{
    MainWindow *home = new MainWindow;
    home->show();
    this->close();
}
