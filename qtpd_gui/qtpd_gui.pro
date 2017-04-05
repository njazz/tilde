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

CONFIG += static

#include(python/build/python.prf)
  INCLUDEPATH += python/py2.7headers/
  macx: LIBS += -F/System/Library/Frameworks -framework Python

SOURCES += main.cpp\
#
#    python/PythonQtScriptingConsole.cpp \
#    python/wrappers/py_wrappers.cpp \
#
#    objects/UIArray.cpp \
#    objects/UIBang.cpp \
    objects/UIBox.cpp \
#    objects/UIFloat.cpp \
#    objects/UIMessage.cpp \
#    objects/UIToggle.cpp \
#    objects/UIText.cpp \
#    objects/UIScript.cpp \
#    oopd/OOPD.cpp \
#    oopd/UIClass.cpp \
#    oopd/UIInstance.cpp \
#    objects/UIArrayEditor.cpp \
    Canvas.cpp \
    #UIObject.cpp \
    #UIWidget.cpp \
    Patchcord.cpp \
    #Port.cpp \
    #SizeBox.cpp \
    FileParser.cpp \
    ObjectLoader.cpp \
    ObjectMaker.cpp \
    BaseMenu.cpp \
    OpenFileProxy.cpp \
    window/PatchWindow.cpp \
    window/PdWindow.cpp \
    window/BaseWindow.cpp \
    window/PropertiesWindow.cpp \
    properties/Property.cpp \
    properties/PropertyList.cpp \
#    objects/UIDSP.cpp \
#    oopd/UIMethod.cpp \
#    oopd/UIProperty.cpp \
#    oopd/OPInstance.cpp \
#    oopd/OPClass.cpp \
    graphicobjects/Port.cpp \
    graphicobjects/SizeBox.cpp \
    graphicobjects/UIItem.cpp \
    graphicobjects/Grid.cpp \
    graphicobjects/SelectionRect.cpp \
    graphicobjects/NewLine.cpp \
    objects/UISubpatch.cpp \
    graphicobjects/UIObject.cpp


HEADERS  += \
    #cm_clipboard.h \
    #
#    python/PythonQtScriptingConsole.h \
#    python/headers/PythonQtStdDecorators.h \
#    python/headers/PythonQtDoc.h \
#    python/headers/PythonQt.h \
#    python/headers/PythonQtClassInfo.h \
#    python/headers/PythonQtClassWrapper.h \
#    python/headers/PythonQtConversion.h \
#    python/headers/PythonQtInstanceWrapper.h \
#    python/headers/PythonQtProperty.h \
#    python/headers/PythonQtSignal.h \
#    python/headers/PythonQtSlotDecorator.h \
#    python/headers/PythonQtImporter.h \
#    python/headers/PythonQtMethodInfo.h \
#    python/headers/PythonQtSlot.h \
#    python/headers/PythonQtBoolResult.h \
#    python/headers/PythonQtUtils.h \
#    python/headers/PythonQtPythonInclude.h \
#    python/headers/PythonQtMisc.h \
#    python/headers/PythonQtObjectPtr.h \
#    python/headers/PythonQtSignalReceiver.h \
#    python/headers/PythonQtImportFileInterface.h \
#    python/headers/PythonQtCppWrapperFactory.h \
#    python/headers/PythonQtStdIn.h \
#    python/headers/PythonQtStdOut.h \
#    python/headers/PythonQt_QtAll.h \
#    python/headers/PythonQtQFileImporter.h \
#    python/headers/PythonQtSystem.h \
#    python/headers/PythonQtVariants.h \
    #python/wrappers/py_qtpd.h \
    #python/wrappers/py_wrappers.h \
#    objects/UIBang.h \
#    objects/UIArray.h \
#    objects/UIToggle.h \
#    objects/UIText.h \
#    objects/UIScript.h \
#    objects/UIFloat.h \
    objects/UIBox.h \
#    objects/UIMessage.h \
    #
#    oopd/OOPD.h \
#    oopd/UIClass.h \
#    oopd/UIInstance.h \
    #
#    objects/UIArrayEditor.h \
    window/BaseWindow.h \
    window/PatchWindow.h \
    window/PdWindow.h \
    window/PropertiesWindow.h \
    Canvas.h \
    CanvasDatas.h \
    #UIObject.h \
    #UIWidget.h \
    Patchcord.h \
    #Port.h \
    #SizeBox.h \
#
    FileParser.h \
    FileSaver.h \
    ObjectLoader.h \
    ObjectMaker.h \
    PdLink.h \
    OpenFileProxy.h \
    _headers.h \
    BaseMenu.h \
    properties/Preferences.h \
    properties/Property.h \
    properties/PropertyList.h \
#    objects/UIDSP.h \
#    oopd/UIMethod.h \
#    oopd/UIProperty.h \
#    oopd/OPClass.h \
#    oopd/OPInstance.h \
#    oopd/OOPDClassBase.h \
#    oopd/OOPDHeaders.h \
    graphicobjects/common_types.h \
    graphicobjects/Port.h \
    graphicobjects/SizeBox.h \
    graphicobjects/UIItem.h \
    graphicobjects/Grid.h \
    graphicobjects/SelectionRect.h \
    graphicobjects/NewLine.h \
    objects/UISubpatch.h \
    graphicobjects/UIObject.h


FORMS    += \
    window/cm_pdwindow.ui \
    canvasmenu.ui \
    window/cm_basewindow.ui

macx: LIBS += "../qtpd_lib/libqtpd.a"
macx: LIBS += "/usr/local/lib/libportaudio.dylib"


DISTFILES += \
    pd_ceammc.ico \
    pd_ceammc.png \



#include(python/build/common.prf)
#include(python/build/PythonQt_QtAll.prf)
#include(python/build/PythonQt.prf)

win32:RC_ICONS += your_icon.ico

INCLUDEPATH += \
    "../qtpd_lib/src/" \
    window/ \
    objects/ \
    properties/ \
    python/headers/ \
    graphicobjects/

PRECOMPILED_HEADER =

#$$PWD

CONFIG += static

# check if debug or release
CONFIG(debug, debug|release) {
  DEBUG_EXT = _d
} else {
  DEBUG_EXT =
}

LIBS += -L$$PWD/../PythonQt/lib/ -lPythonQt_QtAll$${DEBUG_EXT}.1.0.0
LIBS += -L$$PWD/../PythonQt/lib/ -lPythonQt$${DEBUG_EXT}.1.0.0

LIBS += -L$$PWD/../PythonQt/lib/ -lPythonQt_QtAll$${DEBUG_EXT}.1
LIBS += -L$$PWD/../PythonQt/lib/ -lPythonQt$${DEBUG_EXT}.1

#DISTFILES += $$PWD/../PythonQt/lib/libPythonQt_QtAll$${DEBUG_EXT}.1.0.0.dylib
#DISTFILES += $$PWD/../PythonQt/lib/libPythonQt$${DEBUG_EXT}.1.0.0.dylib

DEPENDPATH += $$PWD/../PythonQt/lib/

INCLUDEPATH += $$PWD/python/headers
DEPENDPATH += $$PWD/python/headers



