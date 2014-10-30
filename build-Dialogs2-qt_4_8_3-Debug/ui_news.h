/********************************************************************************
** Form generated from reading UI file 'news.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWS_H
#define UI_NEWS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_news
{
public:
    QLabel *label;

    void setupUi(QDialog *news)
    {
        if (news->objectName().isEmpty())
            news->setObjectName(QString::fromUtf8("news"));
        news->resize(400, 300);
        label = new QLabel(news);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 90, 301, 101));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);

        retranslateUi(news);

        QMetaObject::connectSlotsByName(news);
    } // setupUi

    void retranslateUi(QDialog *news)
    {
        news->setWindowTitle(QApplication::translate("news", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("news", "News Goes Here", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class news: public Ui_news {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWS_H
