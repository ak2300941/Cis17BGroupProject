#include "admincontact.h"
#include "ui_admincontact.h"

adminContact::adminContact(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminContact)
{
    ui->setupUi(this);
}

adminContact::~adminContact()
{
    delete ui;
}
