#-------------------------------------------------
#
# Project created by QtCreator 2017-04-06T22:13:21
#
#-------------------------------------------------

QT       -= core gui

TARGET = qtpd_ceammc_lib
TEMPLATE = lib
CONFIG += staticlib

DEFINES += QT_DEPRECATED_WARNINGS


unix {
    target.path = /usr/local/lib
    INSTALLS += target
}


HEADERS += \
    src/ceammc.h \
    src/ceammc.hpp \
    src/ceammc_atom.h \
    src/ceammc_atomlist.h \
    src/ceammc_bpf.h \
    src/ceammc_factory.h \
    src/ceammc_faust.h \
    src/ceammc_fn_list.h \
    src/ceammc_fn_vector.h \
    src/ceammc_format.h \
    src/ceammc_global.h \
    src/ceammc_globaldata.h \
    src/ceammc_gui.h \
    src/ceammc_impl.h \
    src/ceammc_log.h \
    src/ceammc_message.h \
    src/ceammc_object.h \
    src/ceammc_property.h \
    src/ceammc_timeline.h \
    src/memrss.h \
    src/memsize.h \
    ../qtpd_lib/src/m_pd.h

SOURCES += \
    src/ceammc.cpp \
    src/ceammc_atom.cpp \
    src/ceammc_atomlist.cpp \
    src/ceammc_fn_list.cpp \
    src/ceammc_fn_vector.cpp \
    src/ceammc_format.cpp \
    src/ceammc_impl.cpp \
    src/ceammc_log.cpp \
    src/ceammc_message.cpp \
    src/ceammc_object.cpp \
    src/ceammc_property.cpp \
    src/ceammc_timeline.cpp \
    src/ceammc.c

INCLUDEPATH += ../qtpd_lib/src/
