/********************************************************************************
** Form generated from reading UI file 'schedule.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULE_H
#define UI_SCHEDULE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_schedule
{
public:
    QListWidget *studentList;
    QListWidget *classList;
    QPushButton *leftButton;
    QPushButton *rightButton;
    QPushButton *saveButton;
    QLabel *classLabel;
    QLabel *studentLabel;

    void setupUi(QWidget *schedule)
    {
        if (schedule->objectName().isEmpty())
            schedule->setObjectName(QString::fromUtf8("schedule"));
        schedule->resize(1024, 768);
        studentList = new QListWidget(schedule);
        studentList->setObjectName(QString::fromUtf8("studentList"));
        studentList->setGeometry(QRect(560, 70, 400, 400));
        classList = new QListWidget(schedule);
        classList->setObjectName(QString::fromUtf8("classList"));
        classList->setGeometry(QRect(60, 70, 400, 400));
        leftButton = new QPushButton(schedule);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(470, 230, 75, 23));
        rightButton = new QPushButton(schedule);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(470, 270, 75, 23));
        saveButton = new QPushButton(schedule);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(740, 490, 75, 23));
        classLabel = new QLabel(schedule);
        classLabel->setObjectName(QString::fromUtf8("classLabel"));
        classLabel->setGeometry(QRect(60, 40, 401, 21));
        classLabel->setAlignment(Qt::AlignCenter);
        studentLabel = new QLabel(schedule);
        studentLabel->setObjectName(QString::fromUtf8("studentLabel"));
        studentLabel->setGeometry(QRect(560, 40, 401, 21));
        studentLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(schedule);

        QMetaObject::connectSlotsByName(schedule);
    } // setupUi

    void retranslateUi(QWidget *schedule)
    {
        schedule->setWindowTitle(QApplication::translate("schedule", "Form", 0, QApplication::UnicodeUTF8));
        leftButton->setText(QApplication::translate("schedule", "Add Class", 0, QApplication::UnicodeUTF8));
        rightButton->setText(QApplication::translate("schedule", "Remove Class", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("schedule", "Save", 0, QApplication::UnicodeUTF8));
        classLabel->setText(QApplication::translate("schedule", "List of Classes", 0, QApplication::UnicodeUTF8));
        studentLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class schedule: public Ui_schedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULE_H
