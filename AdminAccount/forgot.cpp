#include "forgot.h"
#include "ui_forgot.h"
#include <QMessageBox>
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

void Forgot::on_pushButton_2_clicked()
{
    QMessageBox::information(this, "Comfirmation", "An Email has been sent to you containing your username or password ");
    MainWindow *home = new MainWindow;
    home->show();
    this->close();
}
