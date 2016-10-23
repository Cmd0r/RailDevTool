#-------------------------------------------------
#
# Project created by QtCreator 2016-10-23T18:50:13
#
#-------------------------------------------------

QT       += core gui bluetooth

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RailDevTool
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    settings.cpp \
    btcommunication.cpp

HEADERS  += mainwindow.h \
    settings.h \
    btcommunication.h

FORMS    +=

RESOURCES += \
    recources.qrc
