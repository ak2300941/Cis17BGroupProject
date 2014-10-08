#include "createaccount.h"
#include "ui_createaccount.h"
#include "dialoguegalore.h"

CreateAccount::CreateAccount(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreateAccount)
{
    ui->setupUi(this);
}

CreateAccount::~CreateAccount()
{
    delete ui;
}

void CreateAccount::on_pushButton_clicked()
{
    DialogueGalore *window = new DialogueGalore;
        window->show();
}
