#include "dialog.h"
#include "ui_dialog.h"
#include "leveledup.h"
#include "unlockedskin.h"
#include "unlockedhat.h"
#include "feelinglucky.h"
#include "weather.h"
#include "news.h"
#include "delaccount.h"
#include "admincontact.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    leveledUp *window = new leveledUp;
    window->setWindowTitle("Congratulations");
    window->show();
}

void Dialog::on_pushButton_2_clicked()
{
    unlockedSkin *window = new unlockedSkin;
    window->setWindowTitle("Congratulations");
    window->show();
}

void Dialog::on_pushButton_3_clicked()
{
    unlockedHat *window = new unlockedHat;
    window->setWindowTitle("Congratulations");
    window->show();
}

void Dialog::on_pushButton_4_clicked()
{
    feelingLucky *window = new feelingLucky;
    window->setWindowTitle("You're Feeling Lucky");
    window->show();
}

void Dialog::on_pushButton_5_clicked()
{
    weather *window = new weather;
    window->setWindowTitle("Weather");
    window->show();
}

void Dialog::on_pushButton_6_clicked()
{
    news *window = new news;
    window->setWindowTitle("News");
    window->show();
}

void Dialog::on_pushButton_7_clicked()
{
    delAccount *window = new delAccount;
    window->setWindowTitle("Delete Account");
    window->show();
}

void Dialog::on_commandLinkButton_clicked()
{
    adminContact *window = new adminContact;
    window->setWindowTitle("Admin Contact");
    window->show();
}
