#include "feelinglucky.h"
#include "ui_feelinglucky.h"

feelingLucky::feelingLucky(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::feelingLucky)
{
    ui->setupUi(this);
}

feelingLucky::~feelingLucky()
{
    delete ui;
}
