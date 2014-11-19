#-------------------------------------------------
#
# Project created by QtCreator 2014-10-09T22:37:34
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MainScreen
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    confirm.cpp \
    afterloginmenu.cpp \
    forgot.cpp \
    newaccount.cpp \
    sha1.cpp \
    database.cpp \
    settings.cpp

HEADERS  += mainwindow.h \
    confirm.h \
    afterloginmenu.h \
    forgot.h \
    newaccount.h \
    sha1.h \
    database.h \
    settings.h

FORMS    += mainwindow.ui \
    confirm.ui \
    afterloginmenu.ui \
    forgot.ui \
    newaccount.ui

OTHER_FILES +=

RESOURCES += \
    images.qrc
