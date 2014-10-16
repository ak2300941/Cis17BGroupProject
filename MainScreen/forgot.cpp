#include "forgot.h"
#include "ui_forgot.h"
#include "mainwindow.h"

Forgot::Forgot(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Forgot)
{
    ui->setupUi(this);
}

Forgot::~Forgot()
{
    delete ui;
}

void Forgot::on_pushButton_clicked()
{
    MainWindow *k=new MainWindow;
    k->show();
    this->close();
}
