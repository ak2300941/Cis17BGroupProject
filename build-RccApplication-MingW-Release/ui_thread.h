/********************************************************************************
** Form generated from reading UI file 'thread.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THREAD_H
#define UI_THREAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Thread
{
public:
    QTableWidget *tableWidget;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *Thread)
    {
        if (Thread->objectName().isEmpty())
            Thread->setObjectName(QString::fromUtf8("Thread"));
        Thread->resize(800, 600);
        tableWidget = new QTableWidget(Thread);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 70, 781, 521));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setRowCount(10);
        tableWidget->setColumnCount(1);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setDefaultSectionSize(60);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setStretchLastSection(false);
        label = new QLabel(Thread);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 20, 101, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        pushButton = new QPushButton(Thread);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(690, 30, 75, 23));

        retranslateUi(Thread);

        QMetaObject::connectSlotsByName(Thread);
    } // setupUi

    void retranslateUi(QWidget *Thread)
    {
        Thread->setWindowTitle(QApplication::translate("Thread", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Thread", "Title Here", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Thread", "Respond", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Thread: public Ui_Thread {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREAD_H
