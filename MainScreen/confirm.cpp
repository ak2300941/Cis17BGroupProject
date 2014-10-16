#include "confirm.h"
#include "ui_confirm.h"
#include "mainwindow.h"

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
