#include "newthread.h"
#include "ui_newthread.h"
#include <qfile.h>
#include <qtextstream.h>

newThread::newThread(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newThread)
{
    ui->setupUi(this);
    ui->selectType->addItem("Link");
    ui->selectType->addItem("Text");
    ui->urlInput->show();
    ui->typeLabel->setText("URL");
    ui->textInput->hide();

}

newThread::~newThread()
{
    delete ui;
}

void newThread::on_selectType_currentTextChanged(const QString &arg1)
{

}

void newThread::on_selectType_activated(const QString &arg1)
{
    if(ui->selectType->currentText()=="Link"){
        ui->urlInput->show();
        ui->typeLabel->setText("URL");
        ui->textInput->hide();
    }
    else if(ui->selectType->currentText()=="Text"){
        ui->urlInput->hide();
        ui->typeLabel->setText("Text");
        ui->textInput->show();
    }
}

void newThread::on_checkBox_clicked()
{

}

void newThread::on_pushButton_clicked()
{
    //Here we submit all of our data
    //To wherever we choose
    //After we close the app
    QString currentThread = ui->titleInput->text();


}
void newThread::write(QString fileName){


}
