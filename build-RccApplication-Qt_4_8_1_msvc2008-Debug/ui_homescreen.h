/********************************************************************************
** Form generated from reading UI file 'homescreen.ui'
**
** Created: Wed Dec 3 18:14:03 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMESCREEN_H
#define UI_HOMESCREEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeScreen
{
public:
    QStackedWidget *stackedWidget;
    QWidget *News;
    QGraphicsView *NewsDisplay;
    QWidget *Forums;
    QWidget *Schedule;
    QWidget *BusSchedule;
    QWidget *SchoolInfo;
    QWidget *Appointments;
    QWidget *About;
    QListView *listView;
    QToolButton *Settings;
    QPushButton *NewsButton;
    QPushButton *ForumsButton;
    QPushButton *SchedulingButton;
    QPushButton *BusButton;
    QPushButton *AppointmentsButton;
    QPushButton *SchoolInfoButton;
    QPushButton *AboutButton;

    void setupUi(QWidget *HomeScreen)
    {
        if (HomeScreen->objectName().isEmpty())
            HomeScreen->setObjectName(QString::fromUtf8("HomeScreen"));
        HomeScreen->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HomeScreen->sizePolicy().hasHeightForWidth());
        HomeScreen->setSizePolicy(sizePolicy);
        HomeScreen->setMinimumSize(QSize(0, 0));
        stackedWidget = new QStackedWidget(HomeScreen);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(200, 0, 600, 600));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        News = new QWidget();
        News->setObjectName(QString::fromUtf8("News"));
        sizePolicy.setHeightForWidth(News->sizePolicy().hasHeightForWidth());
        News->setSizePolicy(sizePolicy);
        NewsDisplay = new QGraphicsView(News);
        NewsDisplay->setObjectName(QString::fromUtf8("NewsDisplay"));
        NewsDisplay->setGeometry(QRect(70, 160, 256, 192));
        stackedWidget->addWidget(News);
        Forums = new QWidget();
        Forums->setObjectName(QString::fromUtf8("Forums"));
        sizePolicy.setHeightForWidth(Forums->sizePolicy().hasHeightForWidth());
        Forums->setSizePolicy(sizePolicy);
        stackedWidget->addWidget(Forums);
        Schedule = new QWidget();
        Schedule->setObjectName(QString::fromUtf8("Schedule"));
        sizePolicy.setHeightForWidth(Schedule->sizePolicy().hasHeightForWidth());
        Schedule->setSizePolicy(sizePolicy);
        stackedWidget->addWidget(Schedule);
        BusSchedule = new QWidget();
        BusSchedule->setObjectName(QString::fromUtf8("BusSchedule"));
        sizePolicy.setHeightForWidth(BusSchedule->sizePolicy().hasHeightForWidth());
        BusSchedule->setSizePolicy(sizePolicy);
        stackedWidget->addWidget(BusSchedule);
        SchoolInfo = new QWidget();
        SchoolInfo->setObjectName(QString::fromUtf8("SchoolInfo"));
        sizePolicy.setHeightForWidth(SchoolInfo->sizePolicy().hasHeightForWidth());
        SchoolInfo->setSizePolicy(sizePolicy);
        stackedWidget->addWidget(SchoolInfo);
        Appointments = new QWidget();
        Appointments->setObjectName(QString::fromUtf8("Appointments"));
        sizePolicy.setHeightForWidth(Appointments->sizePolicy().hasHeightForWidth());
        Appointments->setSizePolicy(sizePolicy);
        stackedWidget->addWidget(Appointments);
        About = new QWidget();
        About->setObjectName(QString::fromUtf8("About"));
        sizePolicy.setHeightForWidth(About->sizePolicy().hasHeightForWidth());
        About->setSizePolicy(sizePolicy);
        stackedWidget->addWidget(About);
        listView = new QListView(HomeScreen);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(0, 0, 200, 600));
        sizePolicy.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy);
        Settings = new QToolButton(HomeScreen);
        Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->setGeometry(QRect(150, 10, 25, 19));
        NewsButton = new QPushButton(HomeScreen);
        NewsButton->setObjectName(QString::fromUtf8("NewsButton"));
        NewsButton->setGeometry(QRect(0, 80, 201, 23));
        sizePolicy.setHeightForWidth(NewsButton->sizePolicy().hasHeightForWidth());
        NewsButton->setSizePolicy(sizePolicy);
        ForumsButton = new QPushButton(HomeScreen);
        ForumsButton->setObjectName(QString::fromUtf8("ForumsButton"));
        ForumsButton->setGeometry(QRect(0, 110, 201, 23));
        sizePolicy.setHeightForWidth(ForumsButton->sizePolicy().hasHeightForWidth());
        ForumsButton->setSizePolicy(sizePolicy);
        SchedulingButton = new QPushButton(HomeScreen);
        SchedulingButton->setObjectName(QString::fromUtf8("SchedulingButton"));
        SchedulingButton->setGeometry(QRect(0, 140, 201, 23));
        sizePolicy.setHeightForWidth(SchedulingButton->sizePolicy().hasHeightForWidth());
        SchedulingButton->setSizePolicy(sizePolicy);
        BusButton = new QPushButton(HomeScreen);
        BusButton->setObjectName(QString::fromUtf8("BusButton"));
        BusButton->setGeometry(QRect(0, 170, 201, 23));
        sizePolicy.setHeightForWidth(BusButton->sizePolicy().hasHeightForWidth());
        BusButton->setSizePolicy(sizePolicy);
        AppointmentsButton = new QPushButton(HomeScreen);
        AppointmentsButton->setObjectName(QString::fromUtf8("AppointmentsButton"));
        AppointmentsButton->setGeometry(QRect(0, 230, 201, 23));
        sizePolicy.setHeightForWidth(AppointmentsButton->sizePolicy().hasHeightForWidth());
        AppointmentsButton->setSizePolicy(sizePolicy);
        SchoolInfoButton = new QPushButton(HomeScreen);
        SchoolInfoButton->setObjectName(QString::fromUtf8("SchoolInfoButton"));
        SchoolInfoButton->setGeometry(QRect(0, 200, 201, 23));
        sizePolicy.setHeightForWidth(SchoolInfoButton->sizePolicy().hasHeightForWidth());
        SchoolInfoButton->setSizePolicy(sizePolicy);
        AboutButton = new QPushButton(HomeScreen);
        AboutButton->setObjectName(QString::fromUtf8("AboutButton"));
        AboutButton->setGeometry(QRect(0, 260, 201, 23));
        sizePolicy.setHeightForWidth(AboutButton->sizePolicy().hasHeightForWidth());
        AboutButton->setSizePolicy(sizePolicy);

        retranslateUi(HomeScreen);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(HomeScreen);
    } // setupUi

    void retranslateUi(QWidget *HomeScreen)
    {
        HomeScreen->setWindowTitle(QApplication::translate("HomeScreen", "Form", 0, QApplication::UnicodeUTF8));
        Settings->setText(QApplication::translate("HomeScreen", "...", 0, QApplication::UnicodeUTF8));
        NewsButton->setText(QApplication::translate("HomeScreen", "News", 0, QApplication::UnicodeUTF8));
        ForumsButton->setText(QApplication::translate("HomeScreen", "Forums", 0, QApplication::UnicodeUTF8));
        SchedulingButton->setText(QApplication::translate("HomeScreen", "Scheduling", 0, QApplication::UnicodeUTF8));
        BusButton->setText(QApplication::translate("HomeScreen", "Bus Schedule", 0, QApplication::UnicodeUTF8));
        AppointmentsButton->setText(QApplication::translate("HomeScreen", "Appointments", 0, QApplication::UnicodeUTF8));
        SchoolInfoButton->setText(QApplication::translate("HomeScreen", "School Information", 0, QApplication::UnicodeUTF8));
        AboutButton->setText(QApplication::translate("HomeScreen", "About", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HomeScreen: public Ui_HomeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMESCREEN_H
