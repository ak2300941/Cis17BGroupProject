#include "forgotpassword.h"
#include "ui_forgotpassword.h"
#include "dialoguegalore.h"
ForgotPassword::ForgotPassword(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ForgotPassword)
{
    ui->setupUi(this);
}

ForgotPassword::~ForgotPassword()
{
    delete ui;
}

void ForgotPassword::on_pushButton_clicked()
{
    DialogueGalore *k=new DialogueGalore;
    k->show();
}
