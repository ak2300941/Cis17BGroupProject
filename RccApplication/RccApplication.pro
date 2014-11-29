#-------------------------------------------------
#
# Project created by QtCreator 2014-11-16T02:38:32
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RccApplication
TEMPLATE = app


SOURCES += main.cpp\
        loginpage.cpp \
    csplashscreen.cpp \
    homescreen.cpp \
    sha1.cpp \
    pages.cpp \
    configdialog.cpp \
    settings.cpp \
    io.cpp \
    database.cpp \
    createaccount.cpp \
    user.cpp

HEADERS  += loginpage.h \
    csplashscreen.h \
    homescreen.h \
    sha1.h \
    pages.h \
    configdialog.h \
    setting.h \
    io.h \
    database.h \
    createaccount.h \
    user.h

FORMS    += loginpage.ui \
    homescreen.ui \
    createaccount.ui

RESOURCES += \
    Images.qrc
