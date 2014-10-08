#include "forgotusername.h"
#include "ui_forgotusername.h"
#include "dialoguegalore.h"
ForgotUsername::ForgotUsername(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ForgotUsername)
{
    ui->setupUi(this);
}

ForgotUsername::~ForgotUsername()
{
    delete ui;
}

void ForgotUsername::on_pushButton_clicked()
{
    DialogueGalore *k=new DialogueGalore;
    k->show();
}
