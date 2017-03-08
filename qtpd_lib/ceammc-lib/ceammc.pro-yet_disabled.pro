#-------------------------------------------------
#
# Project created by QtCreator 2017-03-08T14:39:38
#
#-------------------------------------------------

QT       -= core gui

TARGET = ceammc
TEMPLATE = lib

DEFINES += CEAMMC_LIBRARY

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
    ceammc_atom.cpp \
    ceammc_atomlist.cpp \
    ceammc_fn_list.cpp \
    ceammc_fn_vector.cpp \
    ceammc_format.cpp \
    ceammc_impl.cpp \
    ceammc_log.cpp \
    ceammc_message.cpp \
    ceammc_object.cpp \
    ceammc_property.cpp \
    ceammc_timeline.cpp \
    ceammc.cpp \
    ceammc.c

HEADERS += \
    ceammc_global.h \
    ceammc_atom.h \
    ceammc_atomlist.h \
    ceammc_bpf.h \
    ceammc_factory.h \
    ceammc_faust.h \
    ceammc_fn_list.h \
    ceammc_fn_vector.h \
    ceammc_format.h \
    ceammc_globaldata.h \
    ceammc_gui.h \
    ceammc_impl.h \
    ceammc_log.h \
    ceammc_message.h \
    ceammc_object.h \
    ceammc_property.h \
    ceammc_timeline.h \
    ceammc.h \
    ceammc.hpp \
    memrss.h \
    memsize.h \
    ../src/m_pd.h

INCLUDEPATH += ../src/

unix {
    target.path = /usr/lib
    INSTALLS += target
}
