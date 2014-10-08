#include "areyousure.h"
#include "ui_areyousure.h"
#include "dialoguegalore.h"
AreYouSure::AreYouSure(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AreYouSure)
{
    ui->setupUi(this);
}

AreYouSure::~AreYouSure()
{
    delete ui;
}

void AreYouSure::on_pushButton_clicked()
{
    DialogueGalore *window = new DialogueGalore;
        window->show();
    //DialogueGalore k;
    //k.show();
}
