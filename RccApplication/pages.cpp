#include <QtGui>

#include "pages.h"

News::News(QWidget *parent)
    : QWidget(parent)
{
    QGroupBox *configGroup = new QGroupBox(tr("Server configuration"));

    QLabel *serverLabel = new QLabel(tr("Server:"));
    QComboBox *serverCombo = new QComboBox;
    serverCombo->addItem(tr("Qt (Australia)"));
    serverCombo->addItem(tr("Qt (Germany)"));
    serverCombo->addItem(tr("Qt (Norway)"));
    serverCombo->addItem(tr("Qt (People's Republic of China)"));
    serverCombo->addItem(tr("Qt (USA)"));

    QHBoxLayout *serverLayout = new QHBoxLayout;
    serverLayout->addWidget(serverLabel);
    serverLayout->addWidget(serverCombo);

    QVBoxLayout *configLayout = new QVBoxLayout;
    configLayout->addLayout(serverLayout);
    configGroup->setLayout(configLayout);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(configGroup);
    mainLayout->addStretch(1);
    setLayout(mainLayout);
}

Forums::Forums(QWidget *parent)
    : QWidget(parent)
{

    threadType->addItem("Link");
    threadType->addItem("Text");


    forumButton->addWidget(threadType);
    forumButton->addWidget(title);
    forumButton->addWidget(titleInput);
    forumButton->addWidget(urlLabel);
    forumButton->addWidget(urlInput);
    forumButton->addWidget(text);
    text->hide();
    forumButton->addWidget(choose);
    forumButton->addWidget(sub);

    forums->setLayout(forumButton);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(forums);
    mainLayout->addSpacing(12);
    mainLayout->addStretch(1);
    setLayout(mainLayout);

}
void Forums::on_threadType_activated(const QString &arg1){

    if(threadType->currentText()=="Link"){
        urlInput->show();
        urlLabel->setText("Url");
        text->hide();
    }
    else if(threadType->currentText()=="Text"){
        urlInput->hide();
        urlLabel->setText("Url");
        text->show();
    }


    /*
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
    */
}

Schedule::Schedule(QWidget *parent)
    : QWidget(parent)
{
    QGroupBox *packagesGroup = new QGroupBox(tr("Look for packages"));

    QLabel *nameLabel = new QLabel(tr("Name:"));
    QLineEdit *nameEdit = new QLineEdit;

    QLabel *dateLabel = new QLabel(tr("Released after:"));
    QDateTimeEdit *dateEdit = new QDateTimeEdit(QDate::currentDate());

    QCheckBox *releasesCheckBox = new QCheckBox(tr("Releases"));
    QCheckBox *upgradesCheckBox = new QCheckBox(tr("Upgrades"));

    QSpinBox *hitsSpinBox = new QSpinBox;
    hitsSpinBox->setPrefix(tr("Return up to "));
    hitsSpinBox->setSuffix(tr(" results"));
    hitsSpinBox->setSpecialValueText(tr("Return only the first result"));
    hitsSpinBox->setMinimum(1);
    hitsSpinBox->setMaximum(100);
    hitsSpinBox->setSingleStep(10);

    QPushButton *startQueryButton = new QPushButton(tr("Start query"));

    QGridLayout *packagesLayout = new QGridLayout;
    packagesLayout->addWidget(nameLabel, 0, 0);
    packagesLayout->addWidget(nameEdit, 0, 1);
    packagesLayout->addWidget(dateLabel, 1, 0);
    packagesLayout->addWidget(dateEdit, 1, 1);
    packagesLayout->addWidget(releasesCheckBox, 2, 0);
    packagesLayout->addWidget(upgradesCheckBox, 3, 0);
    packagesLayout->addWidget(hitsSpinBox, 4, 0, 1, 2);
    packagesGroup->setLayout(packagesLayout);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(packagesGroup);
    mainLayout->addSpacing(12);
    mainLayout->addWidget(startQueryButton);
    mainLayout->addStretch(1);
    setLayout(mainLayout);
}


SchoolInfo::SchoolInfo(QWidget *parent)
{

}


Appointments::Appointments(QWidget *parent)
{

}


BusSchedule::BusSchedule(QWidget *parent)
{

}


About::About(QWidget *parent)
{

}
