#include "delaccount.h"
#include "ui_delaccount.h"

delAccount::delAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delAccount)
{
    ui->setupUi(this);
}

delAccount::~delAccount()
{
    delete ui;
}
