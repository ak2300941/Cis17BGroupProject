#-------------------------------------------------
#
# Project created by QtCreator 2014-10-29T10:46:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AdminAccount
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    newaccount.cpp \
    forgot.cpp

HEADERS  += mainwindow.h \
    login.h \
    newaccount.h \
    forgot.h

FORMS    += mainwindow.ui \
    login.ui \
    newaccount.ui \
    forgot.ui

RESOURCES += \
    tiger.qrc
