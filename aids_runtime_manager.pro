#-------------------------------------------------
#
# Project created by QtCreator 2020-09-19T07:01:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets webkitwidgets

TARGET = aids_runtime_manager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    scenario_check.cpp

HEADERS  += mainwindow.h \
    scenario_check.h

FORMS    += mainwindow.ui \
    scenario_check.ui
