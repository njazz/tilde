#-------------------------------------------------
#
# Project created by QtCreator 2017-06-24T23:05:14
#
#-------------------------------------------------

QT       -= core gui

TARGET = qtpd_ui

TEMPLATE = lib

QMAKE_LFLAGS += -undefined dynamic_lookup

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += qtpd_ui_library/qtpd_ui_library.cpp \
    ../qtpd_ceammc_lib/src/ceammc_atomlist.cpp \
    ../qtpd_ceammc_lib/src/ceammc_atom.cpp \
    ../qtpd_ceammc_lib/src/ceammc_log.cpp \
    ../qtpd_ceammc_lib/src/ceammc_object.cpp \
    ../qtpd_ceammc_lib/src/ceammc_property.cpp \
    ../qtpd_ceammc_lib/src/ceammc_format.cpp \
    ../qtpd_ceammc_lib/src/ceammc_message.cpp \
    src/ui_bang.cpp
#    src/ui_sliders.cpp \
#    src/ui_matrix.cpp \
#    src/ui_float.cpp \
#    src/ui_msg.cpp \
#    src/ui_script.cpp \
#    src/ui_toggle.cpp

HEADERS += qtpd_ui_library/qtpd_ui_library.h\
    ../../pd-server/pure-data-src/src/m_pd.h \
    ../qtpd_ceammc_lib/src/ceammc_object.h \
    ../qtpd_ceammc_lib/src/ceammc_factory.h \
    ../qtpd_ceammc_lib/src/ceammc_format.h \
    ../qtpd_ceammc_lib/src/ceammc_log.h \
    ../qtpd_ceammc_lib/src/ceammc_property.h \
    src/ui_bang.h

INCLUDEPATH += ../qtpd_ceammc_lib/src/ \
    ../../pd-server/pure-data-src/src/ \
    ../../pd-server/src/

unix {
    target.path = $$PWD/bin #/usr/local/lib
    target.path = ~/Documents/Qtpd/Libraries
    INSTALLS += target
}

