#-------------------------------------------------
#
# Project created by QtCreator 2017-02-25T12:50:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtpd
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


SOURCES += main.cpp\
    cm_box.cpp \
    cm_port.cpp \
    cm_canvas.cpp \
    cm_basewindow.cpp \
    cm_gui.cpp \
    cm_menu.cpp \
    cm_pdwindow.cpp \
    cm_patchwindow.cpp \
    cm_objectmaker.cpp

HEADERS  += \
    cm_box.h \
    cm_port.h \
    cm_canvas.h \
    cm_basewindow.h \
    cm_gui.h \
    cm_menu.h \
    cm_pdwindow.h \
    cm_patchwindow.h \
    cm_objectmaker.h

FORMS    += \
    cm_basewindow.ui \
    cm_pdwindow.ui
