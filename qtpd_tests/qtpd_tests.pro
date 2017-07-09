#-------------------------------------------------
#
# Project created by QtCreator 2017-07-09T08:17:29
#
#-------------------------------------------------

QT       += testlib core gui

TARGET = qtpd_tests

CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        qtpd_tests.cpp \
        ../qtpd_gui/properties/Property.cpp \
        ../qtpd_gui/properties/PropertyList.cpp \

HEADERS += ../qtpd_gui/properties/Property.h \
        ../qtpd_gui/properties/PropertyList.h \


DEFINES += SRCDIR=\\\"$$PWD/\\\"
