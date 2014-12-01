#-------------------------------------------------
#
# Project created by QtCreator 2014-11-22T10:49:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = forums
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    current_new.cpp \
    newthread.cpp

HEADERS  += mainwindow.h \
    current_new.h \
    newthread.h

FORMS    += mainwindow.ui \
    current_new.ui \
    newthread.ui
