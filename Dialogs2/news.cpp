#include "news.h"
#include "ui_news.h"

news::news(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::news)
{
    ui->setupUi(this);
}

news::~news()
{
    delete ui;
}
