TEMPLATE = subdirs

macx:DEFINES += WITH_PYTHON

CONFIG += static
CONFIG += ordered

PYTHONQT_STATIC = true

defined(WITH_PYTHON)
{
SUBDIRS += $$PWD/PythonQt \
}

SUBDIRS += $$PWD/qtpd_lib \
    $$PWD/qtpd_gui \

#    qtpd_gui_autotest/qtpd_gui_autotest
#    qtpd_lib/ceammc-lib/ceammc
