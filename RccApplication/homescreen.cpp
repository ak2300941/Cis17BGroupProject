#include "homescreen.h"
#include "ui_homescreen.h"
#include <QListWidgetItem>

HomeScreen::HomeScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomeScreen)
{
    ui->setupUi(this);
    connect(ui->NewsButton,SIGNAL(clicked()),this, SLOT(changePage("News")));
    connect(ui->ForumsButton,SIGNAL(clicked()),ui->stackedWidget, SLOT(changePage("Forums")));
    connect(ui->SchedulingButton,SIGNAL(clicked()),ui->stackedWidget, SLOT(changePage("Schedule")));
    //connect(ui->AboutButton,SIGNAL(clicked()),ui->stackedWidget, SLOT(changePage(QListWidgetItem*,QListWidgetItem*)));
    //connect(ui->AppointmentsButton,SIGNAL(clicked()),ui->stackedWidget, SLOT(changePage(QListWidgetItem*,QListWidgetItem*)));
    //connect(ui->SchoolInfoButton,SIGNAL(clicked()),ui->stackedWidget, SLOT(changePage(QListWidgetItem*,QListWidgetItem*)));
    //connect(ui->BusButton,SIGNAL(clicked()),ui->stackedWidget, SLOT(changePage(QListWidgetItem*,QListWidgetItem*)));


           /* connect(contentsWidget,
                    SIGNAL(currentItemChanged(QListWidgetItem*,QListWidgetItem*)),
                    this, SLOT(changePage(QListWidgetItem*,QListWidgetItem*)));*/
}

HomeScreen::~HomeScreen()
{
    delete ui;
}

void HomeScreen::changePage(std::string theString){
    if(theString=="News"){
        ui->stackedWidget->setCurrentWidget(ui->News);
    }
    else if(theString=="Forums"){
        ui->stackedWidget->setCurrentWidget(ui->Forums);
    }
    else if(theString=="Schedule"){
        ui->stackedWidget->setCurrentWidget(ui->Schedule);
    }

}
