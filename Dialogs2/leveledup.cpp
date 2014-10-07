#include "leveledup.h"
#include "ui_leveledup.h"

leveledUp::leveledUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::leveledUp)
{
    ui->setupUi(this);
}

leveledUp::~leveledUp()
{
    delete ui;
}
