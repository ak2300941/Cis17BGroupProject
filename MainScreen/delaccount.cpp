#include "delaccount.h"
#include "ui_delaccount.h"
#include "mainwindow.h"

DelAccount::DelAccount(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DelAccount)
{
    ui->setupUi(this);
}

DelAccount::~DelAccount()
{
    delete ui;
}

void DelAccount::on_Delete_clicked()
{
    MainWindow *k=new MainWindow;
    k->show();
    this->close();
}
