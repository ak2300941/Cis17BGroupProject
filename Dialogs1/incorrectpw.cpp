#include "incorrectpw.h"
#include "ui_incorrectpw.h"
#include "dialoguegalore.h"
IncorrectPW::IncorrectPW(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IncorrectPW)
{
    ui->setupUi(this);
}

IncorrectPW::~IncorrectPW()
{
    delete ui;
}

void IncorrectPW::on_pushButton_clicked()
{
    DialogueGalore *k=new DialogueGalore;
    k->show();
}
