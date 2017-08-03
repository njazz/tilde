#-------------------------------------------------
#
# Project created by QtCreator 2017-02-25T12:50:40
#
#-------------------------------------------------

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tilde~
#include("target_name.pri")
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG(debug, debug|release) {
  DEBUG_EXT = _d
} else {
  DEBUG_EXT =
}

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
    objects/UIScriptBox.cpp \
    widgets/UIScriptTextEdit.cpp \
    widgets/UIScriptEditor.cpp \
    widgets/UIScriptCommon.cpp \

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
    objects/UIScriptBox.h \
    widgets/UIScriptTextEdit.h \
    widgets/UIScriptEditor.h \
    widgets/UIScriptCommon.h \

#    LIBS += -L$$PWD/../PythonQt/lib/ -lPythonQt_QtAll$${DEBUG_EXT}.1.0.0
#    LIBS += -L$$PWD/../PythonQt/lib/ -lPythonQt$${DEBUG_EXT}.1.0.0

#    LIBS += -L$$PWD/../PythonQt/lib/ -lPythonQt_QtAll$${DEBUG_EXT}.1
#    LIBS += -L$$PWD/../PythonQt/lib/ -lPythonQt$${DEBUG_EXT}.1

    LIBS += -L"/usr/local/lib" -lPythonQt_QtAll$${DEBUG_EXT}.1.0.0
    LIBS += -L"/usr/local/lib" -lPythonQt$${DEBUG_EXT}.1.0.0

    #LIBS += -L"/usr/local/lib" -lPythonQt_QtAll$${DEBUG_EXT}.1
    #LIBS += -L"/usr/local/lib" -lPythonQt$${DEBUG_EXT}.1

    #DEPENDPATH += $$PWD/../PythonQt/lib/

    INCLUDEPATH += $$PWD/python/headers
    DEPENDPATH += $$PWD/python/headers

    INCLUDEPATH +=     python/headers/
}

SOURCES += controller/main.cpp\
#### UI objects
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
    objects/UIDSP.cpp \
    objects/UILink.cpp \
    objects/UISlider.cpp \
    oopd/UISignal.cpp \
    objects/UIMatrix.cpp \
#### graphic objects
    graphicobjects/Port.cpp \
    graphicobjects/SizeBox.cpp \
    graphicobjects/UIItem.cpp \
    graphicobjects/Grid.cpp \
    graphicobjects/SelectionRect.cpp \
    graphicobjects/UIObject.cpp \
    graphicobjects/LinkLine.cpp \
    graphicobjects/UINewPatchcord.cpp \
    graphicobjects/UIPatchcord.cpp \
    graphicobjects/CanvasView.cpp \
#### UI widgets
    widgets/UIArrayEditor.cpp \
    widgets/ObjectMaker.cpp \
    widgets/UITextEditor.cpp \
#### data models
    datamodels/FileParser.cpp \
    datamodels/CanvasData.cpp \
    datamodels/Clipboard.cpp \
    datamodels/FileSaver.cpp \
    datamodels/ArrangeObjects.cpp \
    datamodels/UIObjectData.cpp \
    datamodels/ObjectLoader.cpp \
#### windows
    window/PatchWindow.cpp \
    window/PdWindow.cpp \
    window/BaseWindow.cpp \
    window/PropertiesWindow.cpp \
#### controller
    controller/patchObserver.cpp \
    controller/objectObserver.cpp \
    controller/copyobject.cpp \
    controller/PatchWindowController.cpp \
    controller/pdWindowConsoleObserver.cpp \
    controller/ApplicationController.cpp \
    controller/ServerWorker.cpp \
#### properties
    properties/Property.cpp \
    properties/PropertyList.cpp \
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
    undo/undocommands.cpp \
    datamodels/recentfiles.cpp \
    datamodels/filepaths.cpp \
    datamodels/fileparserconverter.cpp \
    datamodels/scriptrunner.cpp


#


HEADERS  += \
#### objects
    objects/UIBang.h \
    objects/UIArray.h \
    objects/UIToggle.h \
    objects/UIText.h \
    objects/UIFloat.h \
    objects/UIBox.h \
    objects/UIMessage.h \
    objects/UIDSP.h \
    oopd/OOPD.h \
    oopd/OOPDClassBase.h \
    oopd/OOPDHeaders.h \
    oopd/UIClass.h \
    oopd/UIInstance.h \
    oopd/OPClass.h \
    oopd/OPInstance.h \
    oopd/UIMethod.h \
    oopd/UIProperty.h \
    objects/UILink.h \
    objects/UISlider.h \
    oopd/UISignal.h \
    objects/UIMatrix.h \
#### widgets
    widgets/UIArrayEditor.h \
    widgets/ObjectMaker.h \
    widgets/UITextEditor.h \
#### window
    window/BaseWindow.h \
    window/PatchWindow.h \
    window/PdWindow.h \
    window/PropertiesWindow.h \
#### data models
    datamodels/FileParser.h \
    datamodels/FileSaver.h \
    datamodels/ObjectLoader.h \
    datamodels/Clipboard.h \
    datamodels/CanvasData.h \
    datamodels/UIObjectData.h \
    datamodels/ArrangeObjects.h \
#### properties
    properties/Preferences.h \
    properties/Property.h \
    properties/PropertyList.h \
    properties/AudioSettings.h \
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
#### graphicobjects
    graphicobjects/Port.h \
    graphicobjects/SizeBox.h \
    graphicobjects/UIItem.h \
    graphicobjects/Grid.h \
    graphicobjects/SelectionRect.h \
    graphicobjects/UIObject.h \
    graphicobjects/LinkLine.h \
    graphicobjects/CommonTypes.h \
    graphicobjects/UIPatchcord.h \
    graphicobjects/UINewPatchcord.h \
    graphicobjects/CanvasView.h \
#### lib headers
    lib_headers/g_canvas.h \
    lib_headers/m_pd.h \
    lib_headers/ceammc_atomlist.h \
    lib_headers/ceammc_atom.h \
#### controller
    controller/ApplicationController.h \
    controller/PatchWindowController.h \
    controller/ControllerObserver.h \
    controller/ServerWorker.h \
    controller/pdWindowConsoleObserver.h \
    controller/patchObserver.h \
    controller/objectObserver.h \
    undo/undocommands.h \
    datamodels/recentfiles.h \
    datamodels/filepaths.h \
    datamodels/fileparserconverter.h \
    datamodels/scriptrunner.h

#    widgets/UIScriptTextEdit.h \
#    widgets/UIScriptEditor.h \
#    widgets/UIScriptCommon.h \



FORMS    += \
    window/cm_pdwindow.ui \
#   window/canvasmenu.ui \
    window/cm_basewindow.ui \
    properties/QtColorPicker/src/color_dialog.ui

#CONFIG += static

#linking

win32: {
    DEFINES += \
# PD_INTERNAL \
    WINVER=0x502 \
    QTCOLORPICKER_LIBRARY

    #LIBS += $$OUT_PWD/../qtpd_lib/debug/libqtpd.a
    LIBS += -L$$OUT_PWD/../../pd-server/src/qt-creator-project/debug -lpd-server
    #LIBS += -L$$OUT_PWD/../qtpd_ceammc_lib/debug -lqtpd_ceammc_lib
}

macx: {
    LIBS += -L"/usr/local/lib/" -lportaudio
    LIBS += -L"/usr/local/lib/" -lpd-server

    #LIBS += -L$$OUT_PWD/../../pd-server/src/qt-creator-project -lpd-server
    #LIBS += -L$$OUT_PWD/../qtpd_ceammc_lib/ -lqtpd_ceammc_lib
    
}

unix: {
    
    LIBS += -L"/usr/local/lib/" -lportaudio
    LIBS += -L"/usr/local/lib/" -lpd-server

    #LIBS += -L"../qtpd_lib/" -lqtpd
    #LIBS += -L$$OUT_PWD/../../pd-server/src/qt-creator-project -lpd-server
    #LIBS += -L$$OUT_PWD/../qtpd_ceammc_lib/ -lqtpd_ceammc_lib
    

}

DISTFILES += \
    pd_ceammc.ico \
    pd_ceammc.png \
    qtpd.icns \
    properties/QtColorPicker/src/alphaback.png

#include(python/build/common.prf)
#include(python/build/PythonQt_QtAll.prf)
#include(python/build/PythonQt.prf)

win32:RC_ICONS += icons/tilde~.ico
macx:ICON = icons/tilde~.icns

INCLUDEPATH += \
    lib_headers/ \
    window/ \
    objects/ \
    widgets/ \
    properties/ \
    graphicobjects/ \
    datamodels/ \
    controller/ \
    undo/ \
    ../../pd-server/src/ \
    properties/QtColorPicker/include

RESOURCES += \
    properties/QtColorPicker/src/pattern.qrc \
    font/tilde.qrc


QMAKE_MAC_SDK = macosx10.12


#QMAKE_LIBDIR += /usr/local/lib \
#QMAKE_RPATHDIR += /~/Qt/5.8/clang_64/lib

#LIBS += \
QMAKE_LFLAGS += '-Wl,-rpath,/users/njazz/Qt/5.8/clang_64/lib' \
#-Wl,-rpath-link,~/Qt/5.8/clang_64/lib \







