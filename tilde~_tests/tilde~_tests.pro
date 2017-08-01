#-------------------------------------------------
#
# Project created by QtCreator 2017-07-09T08:17:29
#
#-------------------------------------------------

QT       += testlib core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tilde~_tests

CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app
DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        tilde~_tests.cpp \
#### properties
        ../tilde~/properties/Property.cpp \
        ../tilde~/properties/PropertyList.cpp \
#### graphic objects
#    ../tilde~/graphicobjects/Port.cpp \
#    ../tilde~/graphicobjects/SizeBox.cpp \
#    ../tilde~/graphicobjects/UIItem.cpp \
#    ../tilde~/graphicobjects/Grid.cpp \
#    ../tilde~/graphicobjects/SelectionRect.cpp \
#    ../tilde~/graphicobjects/UIObject.cpp \
#    ../tilde~/graphicobjects/LinkLine.cpp \
#    ../tilde~/graphicobjects/UINewPatchcord.cpp \
#    ../tilde~/graphicobjects/UIPatchcord.cpp \
#    ../tilde~/graphicobjects/CanvasView.cpp \
##### UI widgets
##### data models
    ../tilde~/datamodels/fileparserconverter.cpp \
#    ../tilde~/datamodels/CanvasData.cpp \
#    ../tilde~/datamodels/Clipboard.cpp \
#    ../tilde~/datamodels/FileSaver.cpp \
#    ../tilde~/datamodels/ArrangeObjects.cpp \
#    ../tilde~/datamodels/UIObjectData.cpp \
##### windows
#    ../tilde~/window/PatchWindow.cpp \
#    ../tilde~/window/BaseWindow.cpp \
#    ../tilde~/window/PropertiesWindow.cpp \
##### controller
#    ../tilde~/controller/patchObserver.cpp \
#    ../tilde~/controller/objectObserver.cpp \
#    ../tilde~/controller/copyobject.cpp \
#    ../tilde~/controller/PatchWindowController.cpp \
#    ../tilde~/controller/pdWindowConsoleObserver.cpp \
#    ../tilde~/controller/ApplicationController.cpp \
#    ../tilde~/controller/ServerWorker.cpp \

HEADERS += ../tilde~/properties/Property.h \
        ../tilde~/properties/PropertyList.h \
#### window
#    ../tilde~/window/BaseWindow.h \
#    ../tilde~/window/PatchWindow.h \
#    ../tilde~/window/PropertiesWindow.h \
##### data models
    ../tilde~/datamodels/fileparserconverter.h \
#    ../tilde~/datamodels/FileSaver.h \
#    ../tilde~/datamodels/Clipboard.h \
#    ../tilde~/datamodels/CanvasData.h \
#    ../tilde~/datamodels/UIObjectData.h \
#    ../tilde~/datamodels/ArrangeObjects.h \
##### graphicobjects
#    ../tilde~/graphicobjects/Port.h \
#    ../tilde~/graphicobjects/SizeBox.h \
#    ../tilde~/graphicobjects/UIItem.h \
#    ../tilde~/graphicobjects/Grid.h \
#    ../tilde~/graphicobjects/SelectionRect.h \
#    ../tilde~/graphicobjects/UIObject.h \
#    ../tilde~/graphicobjects/LinkLine.h \
#    ../tilde~/graphicobjects/CommonTypes.h \
#    ../tilde~/graphicobjects/UIPatchcord.h \
#    ../tilde~/graphicobjects/UINewPatchcord.h \
#    ../tilde~/graphicobjects/CanvasView.h \
##### lib headers
#    ../tilde~/lib_headers/g_canvas.h \
#    ../tilde~/lib_headers/m_pd.h \
#    ../tilde~/lib_headers/ceammc_atomlist.h \
#    ../tilde~/lib_headers/ceammc_atom.h \
##### controller
#    ../tilde~/controller/ApplicationController.h \
#    ../tilde~/controller/PatchWindowController.h \
#    ../tilde~/controller/ControllerObserver.h \
#    ../tilde~/controller/ServerWorker.h \
#    ../tilde~/controller/pdWindowConsoleObserver.h \
#    ../tilde~/controller/patchObserver.h \
#    ../tilde~/controller/objectObserver.h \

INCLUDEPATH += \
#    ../tilde~/lib_headers/ \
    ../tilde~/window/ \
#    ../tilde~/objects/ \
#    ../tilde~/widgets/ \
    ../tilde~/properties/ \
#    ../tilde~/graphicobjects/ \
    ../tilde~/datamodels/ \
#    ../tilde~/controller/ \
#    ../../pd-server/src/ \

#FORMS +=     ../tilde~/window/cm_basewindow.ui \

DEFINES += SRCDIR=\\\"$$PWD/\\\"





