#include "afterloginmenu.h"
#include "ui_afterloginmenu.h"
#include "mainwindow.h"
#include "Confirm.h"

AfterLoginMenu::AfterLoginMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AfterLoginMenu)
{
    ui->setupUi(this);
}

AfterLoginMenu::~AfterLoginMenu()
{
    delete ui;
}

void AfterLoginMenu::on_pushButton_2_clicked()
{
    Confirm *k=new Confirm;
    k->show();
    this->close();
}

void AfterLoginMenu::on_pushButton_6_clicked()
{
    Confirm *k=new Confirm;
    k->show();
    this->close();
}
