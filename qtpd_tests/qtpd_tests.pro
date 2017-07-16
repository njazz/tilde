#-------------------------------------------------
#
# Project created by QtCreator 2017-07-09T08:17:29
#
#-------------------------------------------------

QT       += testlib core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtpd_tests

CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app
DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        qtpd_tests.cpp \
#### properties
        ../qtpd_gui/properties/Property.cpp \
        ../qtpd_gui/properties/PropertyList.cpp \
#### graphic objects
#    ../qtpd_gui/graphicobjects/Port.cpp \
#    ../qtpd_gui/graphicobjects/SizeBox.cpp \
#    ../qtpd_gui/graphicobjects/UIItem.cpp \
#    ../qtpd_gui/graphicobjects/Grid.cpp \
#    ../qtpd_gui/graphicobjects/SelectionRect.cpp \
#    ../qtpd_gui/graphicobjects/UIObject.cpp \
#    ../qtpd_gui/graphicobjects/LinkLine.cpp \
#    ../qtpd_gui/graphicobjects/UINewPatchcord.cpp \
#    ../qtpd_gui/graphicobjects/UIPatchcord.cpp \
#    ../qtpd_gui/graphicobjects/CanvasView.cpp \
##### UI widgets
##### data models
    ../qtpd_gui/datamodels/fileparserconverter.cpp \
#    ../qtpd_gui/datamodels/CanvasData.cpp \
#    ../qtpd_gui/datamodels/Clipboard.cpp \
#    ../qtpd_gui/datamodels/FileSaver.cpp \
#    ../qtpd_gui/datamodels/ArrangeObjects.cpp \
#    ../qtpd_gui/datamodels/UIObjectData.cpp \
##### windows
#    ../qtpd_gui/window/PatchWindow.cpp \
#    ../qtpd_gui/window/BaseWindow.cpp \
#    ../qtpd_gui/window/PropertiesWindow.cpp \
##### controller
#    ../qtpd_gui/controller/patchObserver.cpp \
#    ../qtpd_gui/controller/objectObserver.cpp \
#    ../qtpd_gui/controller/copyobject.cpp \
#    ../qtpd_gui/controller/PatchWindowController.cpp \
#    ../qtpd_gui/controller/pdWindowConsoleObserver.cpp \
#    ../qtpd_gui/controller/ApplicationController.cpp \
#    ../qtpd_gui/controller/ServerWorker.cpp \

HEADERS += ../qtpd_gui/properties/Property.h \
        ../qtpd_gui/properties/PropertyList.h \
#### window
#    ../qtpd_gui/window/BaseWindow.h \
#    ../qtpd_gui/window/PatchWindow.h \
#    ../qtpd_gui/window/PropertiesWindow.h \
##### data models
    ../qtpd_gui/datamodels/fileparserconverter.h \
#    ../qtpd_gui/datamodels/FileSaver.h \
#    ../qtpd_gui/datamodels/Clipboard.h \
#    ../qtpd_gui/datamodels/CanvasData.h \
#    ../qtpd_gui/datamodels/UIObjectData.h \
#    ../qtpd_gui/datamodels/ArrangeObjects.h \
##### graphicobjects
#    ../qtpd_gui/graphicobjects/Port.h \
#    ../qtpd_gui/graphicobjects/SizeBox.h \
#    ../qtpd_gui/graphicobjects/UIItem.h \
#    ../qtpd_gui/graphicobjects/Grid.h \
#    ../qtpd_gui/graphicobjects/SelectionRect.h \
#    ../qtpd_gui/graphicobjects/UIObject.h \
#    ../qtpd_gui/graphicobjects/LinkLine.h \
#    ../qtpd_gui/graphicobjects/CommonTypes.h \
#    ../qtpd_gui/graphicobjects/UIPatchcord.h \
#    ../qtpd_gui/graphicobjects/UINewPatchcord.h \
#    ../qtpd_gui/graphicobjects/CanvasView.h \
##### lib headers
#    ../qtpd_gui/lib_headers/g_canvas.h \
#    ../qtpd_gui/lib_headers/m_pd.h \
#    ../qtpd_gui/lib_headers/ceammc_atomlist.h \
#    ../qtpd_gui/lib_headers/ceammc_atom.h \
##### controller
#    ../qtpd_gui/controller/ApplicationController.h \
#    ../qtpd_gui/controller/PatchWindowController.h \
#    ../qtpd_gui/controller/ControllerObserver.h \
#    ../qtpd_gui/controller/ServerWorker.h \
#    ../qtpd_gui/controller/pdWindowConsoleObserver.h \
#    ../qtpd_gui/controller/patchObserver.h \
#    ../qtpd_gui/controller/objectObserver.h \

INCLUDEPATH += \
#    ../qtpd_gui/lib_headers/ \
    ../qtpd_gui/window/ \
#    ../qtpd_gui/objects/ \
#    ../qtpd_gui/widgets/ \
    ../qtpd_gui/properties/ \
#    ../qtpd_gui/graphicobjects/ \
    ../qtpd_gui/datamodels/ \
#    ../qtpd_gui/controller/ \
#    ../../pd-server/src/ \

#FORMS +=     ../qtpd_gui/window/cm_basewindow.ui \

DEFINES += SRCDIR=\\\"$$PWD/\\\"

#macx: {
#    LIBS += -L"/usr/local/lib/" -lportaudio
#    LIBS += -L$$OUT_PWD/../../pd-server/src/qt-creator-project -lpd-server
#    LIBS += -L$$OUT_PWD/../qtpd_ceammc_lib/ -lqtpd_ceammc_lib
#}



