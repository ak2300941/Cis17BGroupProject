/********************************************************************************
** Form generated from reading UI file 'weather.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHER_H
#define UI_WEATHER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_weather
{
public:
    QLabel *label;

    void setupUi(QDialog *weather)
    {
        if (weather->objectName().isEmpty())
            weather->setObjectName(QString::fromUtf8("weather"));
        weather->resize(400, 300);
        label = new QLabel(weather);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 100, 141, 71));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);

        retranslateUi(weather);

        QMetaObject::connectSlotsByName(weather);
    } // setupUi

    void retranslateUi(QDialog *weather)
    {
        weather->setWindowTitle(QApplication::translate("weather", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("weather", "It's Hot", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class weather: public Ui_weather {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHER_H
