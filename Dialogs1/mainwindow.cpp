#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialoguegalore.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    DialogueGalore *window = new DialogueGalore;
        window->show();
    //DialogueGalore k;
    //k.show();
}

void MainWindow::on_pushButton_2_clicked()
{
    DialogueGalore *window = new DialogueGalore;
        window->show();
    //DialogueGalore k;
    //k.show();
}
