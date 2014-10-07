#include "unlockedhat.h"
#include "ui_unlockedhat.h"

unlockedHat::unlockedHat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::unlockedHat)
{
    ui->setupUi(this);
}

unlockedHat::~unlockedHat()
{
    delete ui;
}
