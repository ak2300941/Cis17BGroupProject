#include "dialoguegalore.h"
#include "ui_dialoguegalore.h"
#include "mainwindow.h"
#include "Logout.h"
#include "forgotpassword.h"
#include "forgotusername.h"
#include "areyousure.h"
#include "incorrectpw.h"
#include "timedate.h"
#include "createaccount.h"
DialogueGalore::DialogueGalore(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DialogueGalore)
{
    ui->setupUi(this);
}

DialogueGalore::~DialogueGalore()
{
    delete ui;
}

void DialogueGalore::on_pushButton_clicked()
{
    MainWindow *k=new MainWindow;
    k->show();
}

void DialogueGalore::on_pushButton_3_clicked()
{
    ForgotPassword *k=new ForgotPassword;
    k->show();
}

void DialogueGalore::on_pushButton_8_clicked()
{
    ForgotUsername *k=new ForgotUsername;
    k->show();
}

void DialogueGalore::on_pushButton_7_clicked()
{
    AreYouSure *k=new AreYouSure;
    k->show();
}

void DialogueGalore::on_pushButton_4_clicked()
{
    IncorrectPW *k=new IncorrectPW;
    k->show();
}

void DialogueGalore::on_pushButton_5_clicked()
{
    TimeDate *k=new TimeDate;
    k->show();
}

void DialogueGalore::on_pushButton_6_clicked()
{
    CreateAccount *k=new CreateAccount;
    k->show();
}

void DialogueGalore::on_pushButton_2_clicked()
{
    Logout *k=new Logout;
    k->show();
}
