#include "confirm.h"
#include "ui_confirm.h"
#include "mainwindow.h"
#include "afterloginmenu.h"
Confirm::Confirm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Confirm)
{
    ui->setupUi(this);
}

Confirm::~Confirm()
{
    delete ui;
}

void Confirm::on_pushButton_clicked()
{
    MainWindow *k=new MainWindow;
    k->show();
    this->close();
}

void Confirm::on_pushButton_2_clicked()
{
    AfterLoginMenu *k=new AfterLoginMenu;
    k->show();
    this->close();
}
