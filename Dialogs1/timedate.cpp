#include "timedate.h"
#include "ui_timedate.h"

TimeDate::TimeDate(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TimeDate)
{
    ui->setupUi(this);
}

TimeDate::~TimeDate()
{
    delete ui;
}
