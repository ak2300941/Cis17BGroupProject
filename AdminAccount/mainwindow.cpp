#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "forgot.h"
#include "login.h"
#include "newaccount.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd(":/rccTiger.jpg");
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Login *account = new Login;
    account->show();
    this->close();
}

void MainWindow::on_pushButton_4_clicked()
{
    Forgot *f = new Forgot;
    f->show();
    this->close();
}

void MainWindow::on_pushButton_2_clicked()
{
    NewAccount *create = new NewAccount;
    create->show();
    this->close();
}

void MainWindow::on_actionExit_triggered()
{
    this->close();
}
