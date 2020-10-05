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
    scenario_check.cpp \
    rotate_image.cpp \
    find_closest_waypoint.cpp

HEADERS  += mainwindow.h \
    scenario_check.h \
    rotate_image.h \
    find_closest_waypoint.h

FORMS    += mainwindow.ui \
    scenario_check.ui \
    rotate_image.ui \
    find_closest_waypoint.ui
