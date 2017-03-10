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
    cm_port.cpp \
    cm_canvas.cpp \
    window/cm_basewindow.cpp \
    window/cm_pdwindow.cpp \
    window/cm_patchwindow.cpp \
    cm_menu.cpp \
    cm_objectmaker.cpp \
    cm_widget.cpp \
    cm_patchcord.cpp \
    objects/cmo_msg.cpp \
    objects/cmo_box.cpp \
    objects/cmo_float.cpp \
    objects/cmo_text.cpp \
    cm_fileparser.cpp \
    cm_object.cpp \
    cm_sizebox.cpp \
    properties/cm_property.cpp \
    properties/cm_propertylist.cpp \
    objects/cmo_bang.cpp \
    objects/cmo_toggle.cpp

HEADERS  += \
    cm_port.h \
    cm_canvas.h \
    window/cm_basewindow.h \
    window/cm_pdwindow.h \
    window/cm_patchwindow.h \
    cm_menu.h \
    cm_objectmaker.h \
    cm_widget.h \
    cm_patchcord.h \
    objects/cmo_msg.h \
    objects/cmo_box.h \
    objects/cmo_float.h \
    objects/cmo_text.h \
    cm_fileparser.h \
    cm_object.h \
    cm_preferences.h \
    cm_filesaver.h \
    cm_pdlink.h \
    cm_clipboard.h \
    cm_objectloader.h \
    cm_sizebox.h \
    properties/cm_property.h \
    properties/cm_propertylist.h \
    objects/cmo_bang.h \
    objects/cmo_toggle.h

FORMS    += \
    window/cm_basewindow.ui \
    window/cm_pdwindow.ui

LIBS += "../qtpd_lib/libqtpd.a"
LIBS += "/usr/local/lib/libportaudio.dylib"

DISTFILES += \
    pd_ceammc.ico \
    pd_ceammc.png

win32:RC_ICONS += your_icon.ico

INCLUDEPATH += \
    "../qtpd_lib/src/" \
    window/ \
    objects/ \
    properties/

