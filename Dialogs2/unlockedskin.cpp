#include "unlockedskin.h"
#include "ui_unlockedskin.h"

unlockedSkin::unlockedSkin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::unlockedSkin)
{
    ui->setupUi(this);
}

unlockedSkin::~unlockedSkin()
{
    delete ui;
}
