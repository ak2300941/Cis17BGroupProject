#include "current_new.h"
#include "ui_current_new.h"

current_New::current_New(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::current_New)
{
    ui->setupUi(this);
}

current_New::~current_New()
{
    delete ui;
}

void current_New::on_pushButton_clicked()
{

}
