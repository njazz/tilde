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

# check if debug or release
CONFIG(debug, debug|release) {
  DEBUG_EXT = _d
} else {
  DEBUG_EXT =
}

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += static

win32: CONFIG -= WithPython
macx: CONFIG += WithPython

WithPython {
#include(python/build/python.prf)
    DEFINES += WITH_PYTHON
  INCLUDEPATH += python/py2.7headers/
  macx: LIBS += -F/System/Library/Frameworks -framework Python

SOURCES += python/PythonQtScriptingConsole.cpp \
    python/wrappers/py_wrappers.cpp \
    objects/UIScript.cpp \
    objects/UIScriptBox.cpp


HEADERS += \
    python/PythonQtScriptingConsole.h \
    python/headers/PythonQtStdDecorators.h \
    #python/headers/PythonQtDoc.h \ #??
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
    python/wrappers/py_wrappers.h \
    objects/UIScript.h \
    objects/UIScriptBox.h


    LIBS += -L$$PWD/../PythonQt/lib/ -lPythonQt_QtAll$${DEBUG_EXT}.1.0.0
    LIBS += -L$$PWD/../PythonQt/lib/ -lPythonQt$${DEBUG_EXT}.1.0.0

    LIBS += -L$$PWD/../PythonQt/lib/ -lPythonQt_QtAll$${DEBUG_EXT}.1
    LIBS += -L$$PWD/../PythonQt/lib/ -lPythonQt$${DEBUG_EXT}.1

    DEPENDPATH += $$PWD/../PythonQt/lib/

    INCLUDEPATH += $$PWD/python/headers
    DEPENDPATH += $$PWD/python/headers

    INCLUDEPATH +=     python/headers/

}

macx:PRECOMPILED_HEADER = _headers.h
#macx:CONFIG += precompile_header

SOURCES += main.cpp\
#
    objects/UIArray.cpp \
    objects/UIBox.cpp \
    objects/UIMessage.cpp \
    objects/UIFloat.cpp \
    objects/UIToggle.cpp \
    objects/UIBang.cpp \
    objects/UIText.cpp \
    oopd/OOPD.cpp \
    oopd/UIClass.cpp \
    oopd/UIInstance.cpp \
    oopd/UIMethod.cpp \
    oopd/UIProperty.cpp \
    oopd/OPInstance.cpp \
    oopd/OPClass.cpp \
#
    widgets/UIArrayEditor.cpp \
#
    datamodels/FileParser.cpp \
    datamodels/CanvasData.cpp \
#
    ObjectLoader.cpp \
    widgets/ObjectMaker.cpp \
    window/PatchWindow.cpp \
    window/PdWindow.cpp \
    window/BaseWindow.cpp \
    window/PropertiesWindow.cpp \
    properties/Property.cpp \
    properties/PropertyList.cpp \
    objects/UIDSP.cpp \
    graphicobjects/Port.cpp \
    graphicobjects/SizeBox.cpp \
    graphicobjects/UIItem.cpp \
    graphicobjects/Grid.cpp \
    graphicobjects/SelectionRect.cpp \
#
    objects/UISubpatch.cpp \
    graphicobjects/UIObject.cpp \
    datamodels/Clipboard.cpp \
    objects/UILink.cpp \
    graphicobjects/LinkLine.cpp \
    widgets/UITextEditor.cpp \
    objects/UISlider.cpp \
#
    datamodels/UIObjectData.cpp \
#
    widgets/UIScriptTextEdit.cpp \
    widgets/UIScriptEditor.cpp \
    widgets/UIScriptCommon.cpp \
    oopd/UISignal.cpp \
    objects/UIMatrix.cpp \
    objects/UISubCanvas.cpp \
    CanvasView.cpp \
    controller/PatchWindowController.cpp \
    datamodels/FileSaver.cpp \
    controller/ApplicationController.cpp \
    ServerWorker.cpp \
    controller/pdWindowConsoleObserver.cpp \
    graphicobjects/UINewPatchcord.cpp \
    graphicobjects/UIPatchcord.cpp \
    properties/QtColorPicker/src/color_dialog.cpp \
    properties/QtColorPicker/src/color_preview.cpp \
    properties/QtColorPicker/src/color_selector.cpp \
    properties/QtColorPicker/src/abstract_widget_list.cpp \
    properties/QtColorPicker/src/bound_color_selector.cpp \
    properties/QtColorPicker/src/color_delegate.cpp \
    properties/QtColorPicker/src/color_list_widget.cpp \
    properties/QtColorPicker/src/color_wheel.cpp \
    properties/QtColorPicker/src/gradient_slider.cpp \
    properties/QtColorPicker/src/hue_slider.cpp \
    datamodels/ArrangeObjects.cpp
#
#    serverAPIPrototype.cpp \




HEADERS  += \
    #
    objects/UIBang.h \
    objects/UIArray.h \
    objects/UIToggle.h \
    objects/UIText.h \
    objects/UIFloat.h \
    objects/UIBox.h \
    objects/UIMessage.h \
    #
    oopd/OOPD.h \
    oopd/OOPDClassBase.h \
    oopd/OOPDHeaders.h \
    oopd/UIClass.h \
    oopd/UIInstance.h \
    oopd/OPClass.h \
    oopd/OPInstance.h \
    oopd/UIMethod.h \
    oopd/UIProperty.h \
    #
    widgets/UIArrayEditor.h \
    #
    window/BaseWindow.h \
    window/PatchWindow.h \
    window/PdWindow.h \
    window/PropertiesWindow.h \
#
    datamodels/FileParser.h \
    datamodels/FileSaver.h \
#
    ObjectLoader.h \
    widgets/ObjectMaker.h \
    #PdLink.h \
    _headers.h \
    properties/Preferences.h \
    properties/Property.h \
    properties/PropertyList.h \
    objects/UIDSP.h \
    graphicobjects/Port.h \
    graphicobjects/SizeBox.h \
    graphicobjects/UIItem.h \
    graphicobjects/Grid.h \
    graphicobjects/SelectionRect.h \
    objects/UISubpatch.h \
#
    graphicobjects/UIObject.h \
    datamodels/Clipboard.h \
    datamodels/CanvasData.h \
    lib_headers/g_canvas.h \
    lib_headers/m_pd.h \
    lib_headers/ceammc_atomlist.h \
    lib_headers/ceammc_atom.h \
    objects/UILink.h \
    properties/AudioSettings.h \
    graphicobjects/LinkLine.h \
    widgets/UITextEditor.h \
    graphicobjects/CommonTypes.h \
    objects/UISlider.h \
    datamodels/UIObjectData.h \
#
    widgets/UIScriptTextEdit.h \
    widgets/UIScriptEditor.h \
    widgets/UIScriptCommon.h \
    oopd/UISignal.h \
    objects/UIMatrix.h \
    objects/UISubCanvas.h \
    controller/ApplicationController.h \
    controller/PatchWindowController.h \
    controller/ControllerObserver.h \
    graphicobjects/UIPatchcord.h \
    graphicobjects/UINewPatchcord.h \
    CanvasView.h \
    ServerWorker.h \
    controller/pdWindowConsoleObserver.h \
    properties/QtColorPicker/include/color_dialog.hpp \
    properties/QtColorPicker/include/color_preview.hpp \
    properties/QtColorPicker/include/color_selector.hpp \
    properties/QtColorPicker/include/colorpicker_global.hpp \
    properties/QtColorPicker/include/abstract_widget_list.hpp \
    properties/QtColorPicker/include/bound_color_selector.hpp \
    properties/QtColorPicker/include/color_delegate.hpp \
    properties/QtColorPicker/include/color_list_widget.hpp \
    properties/QtColorPicker/include/color_wheel.hpp \
    properties/QtColorPicker/include/gradient_slider.hpp \
    properties/QtColorPicker/include/hue_slider.hpp \
    properties/QtColorPicker/src/paint_border.hpp \
    datamodels/ArrangeObjects.h




FORMS    += \
    window/cm_pdwindow.ui \
    canvasmenu.ui \
    window/cm_basewindow.ui \
    properties/QtColorPicker/src/color_dialog.ui

#CONFIG += static

#linking

win32: {
    DEFINES += PD_INTERNAL WINVER=0x502
    #LIBS += $$OUT_PWD/../qtpd_lib/debug/libqtpd.a
}

macx: {
    LIBS += -L"/usr/local/lib/" -lportaudio
    LIBS += -L$$OUT_PWD/../../pd-server/src/qt-creator-project -lpd-server
    LIBS += -L$$OUT_PWD/../qtpd_ceammc_lib/ -lqtpd_ceammc_lib
}

unix: {
    #LIBS += -L"../qtpd_lib/" -lqtpd
    LIBS += -L"/usr/local/lib/" -lportaudio
    LIBS += -L$$OUT_PWD/../../pd-server/src/qt-creator-project -lpd-server
    LIBS += -L$$OUT_PWD/../qtpd_ceammc_lib/ -lqtpd_ceammc_lib
}



DISTFILES += \
    pd_ceammc.ico \
    pd_ceammc.png \
    qtpd.icns \
    properties/QtColorPicker/src/alphaback.png

#include(python/build/common.prf)
#include(python/build/PythonQt_QtAll.prf)
#include(python/build/PythonQt.prf)

win32:RC_ICONS += pd_ceammc.ico
macx:ICON = qtpd.icns

INCLUDEPATH += \
    lib_headers/ \
    window/ \
    objects/ \
    widgets/ \
    properties/ \
    graphicobjects/ \
    datamodels/ \
    controller/ \
    ../../pd-server/src/ \
    properties/QtColorPicker/include



#$$PWD

RESOURCES += \
    properties/QtColorPicker/src/pattern.qrc









