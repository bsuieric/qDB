#-------------------------------------------------
#
# Project created by QtCreator 2014-07-31T00:47:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qDB
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tornei.cpp \
    sitandgo.cpp \
    cash.cpp \
    elencotornei.cpp \
    searchwindow.cpp

HEADERS  += mainwindow.h \
    Container.h \
    tornei.h \
    sitandgo.h \
    cash.h \
    elencotornei.h \
    searchwindow.h

FORMS    += mainwindow.ui \
    searchwindow.ui
