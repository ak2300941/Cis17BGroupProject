#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "afterloginmenu.h"
#include "forgot.h"
#include "newaccount.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd(":/rccTiger.jpg");
    //bkgnd=bkgnd.scaled(this->size(), Qt::KeepAspectRatio);
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
    AfterLoginMenu *k=new AfterLoginMenu;
    k->show();
    this->close();
}

void MainWindow::on_pushButton_2_clicked()
{
    NewAccount *k=new NewAccount;
    k->show();
    this->close();
}

void MainWindow::on_actionExit_triggered()
{
    this->close();
}
