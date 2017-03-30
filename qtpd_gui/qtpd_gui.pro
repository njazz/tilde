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
  LIBS += -F/System/Library/Frameworks -framework Python

SOURCES += main.cpp\
    cm_port.cpp \
    cm_canvas.cpp \
    window/cm_basewindow.cpp \
    window/cm_pdwindow.cpp \
    window/cm_patchwindow.cpp \
    cm_menu.cpp \
    cm_objectmaker.cpp \
    cm_widget.cpp \
    cm_patchcord.cpp \
    cm_fileparser.cpp \
    cm_object.cpp \
    cm_sizebox.cpp \
    properties/cm_property.cpp \
    properties/cm_propertylist.cpp \
    python/PythonQtScriptingConsole.cpp \
    cm_objectloader.cpp \
    cm_openfileproxy.cpp \
    window/cm_propertieswindow.cpp \
    python/wrappers/py_wrappers.cpp \
    objects/UIArray.cpp \
    objects/UIBang.cpp \
    objects/UIBox.cpp \
    objects/UIFloat.cpp \
    objects/UIMessage.cpp \
    objects/UIToggle.cpp \
    objects/UIText.cpp \
    objects/UIScript.cpp \
    oopd/OOPD.cpp \
    oopd/UIClass.cpp \
    objects/UIArrayEditor.cpp


HEADERS  += \
    cm_port.h \
    cm_canvas.h \
    cm_menu.h \
    cm_objectmaker.h \
    cm_widget.h \
    cm_patchcord.h \
    cm_fileparser.h \
    cm_object.h \
    cm_filesaver.h \
    cm_pdlink.h \
    cm_clipboard.h \
    cm_objectloader.h \
    cm_sizebox.h \
    properties/cm_property.h \
    properties/cm_propertylist.h \
    properties/cm_preferences.h \
    cm_headers.h \
    cm_canvas_types.h \
    #
    python/PythonQtScriptingConsole.h \
    python/headers/PythonQtStdDecorators.h \
    python/headers/PythonQtDoc.h \
    python/headers/PythonQt.h \
    python/headers/PythonQtClassInfo.h \
    python/headers/PythonQtClassWrapper.h \
    python/headers/PythonQtConversion.h \
    python/headers/PythonQtInstanceWrapper.h \
    python/headers/PythonQtProperty.h \
    python/headers/PythonQtSignal.h \
    python/headers/PythonQtSlotDecorator.h \
    python/headers/PythonQtImporter.h \
    python/headers/PythonQtMethodInfo.h \
    python/headers/PythonQtSlot.h \
    python/headers/PythonQtBoolResult.h \
    python/headers/PythonQtUtils.h \
    python/headers/PythonQtPythonInclude.h \
    python/headers/PythonQtMisc.h \
    python/headers/PythonQtObjectPtr.h \
    python/headers/PythonQtSignalReceiver.h \
    python/headers/PythonQtImportFileInterface.h \
    python/headers/PythonQtCppWrapperFactory.h \
    python/headers/PythonQtStdIn.h \
    python/headers/PythonQtStdOut.h \
    python/headers/PythonQt_QtAll.h \
    python/headers/PythonQtQFileImporter.h \
    python/headers/PythonQtSystem.h \
    python/headers/PythonQtVariants.h \
    python/wrappers/py_qtpd.h \
    cm_openfileproxy.h \
    python/wrappers/py_wrappers.h \
    objects/UIBang.h \
    objects/UIArray.h \
    objects/UIToggle.h \
    objects/UIText.h \
    objects/UIScript.h \
    objects/UIFloat.h \
    objects/UIBox.h \
    objects/UIMessage.h \
    #
    oopd/OOPD.h \
    oopd/UIClass.h \
    objects/UIArrayEditor.h \
    window/BaseWindow.h \
    window/PatchWindow.h \
    window/PdWindow.h \
    window/PropertiesWindow.h


FORMS    += \
    window/cm_basewindow.ui \
    window/cm_pdwindow.ui \
    canvasmenu.ui

LIBS += "../qtpd_lib/libqtpd.a"
LIBS += "/usr/local/lib/libportaudio.dylib"


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
    python/headers/

PRECOMPILED_HEADER = cm_headers.h

#$$PWD

CONFIG += static

LIBS += -L$$PWD/python/lib/ -lPythonQt_QtAll.1.0.0
LIBS += -L$$PWD/python/lib/ -lPythonQt.1.0.0

#LIBS += -L../qtpd_lib/python/lib/ -lPythonQt_QtAll.1
#LIBS += -L../qtpd_lib/python/lib/ -lPythonQt.1

DEPENDPATH += $$PWD/python/lib

INCLUDEPATH += $$PWD/python/headers
DEPENDPATH += $$PWD/python/headers



