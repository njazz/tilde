TEMPLATE = subdirs

#CONFIG += static
CONFIG += ordered
macx: CONFIG += withPython
win32: CONFIG -= WithPython


SUBDIRS = \
    $$PWD/qtpd_lib \
    $$PWD/qtpd_ceammc_lib \
    $$PWD/qtpd_gui \
    API_prototype/API_prototype


WithPython {
    DEFINES += WITH_PYTHON

    SUBDIRS = $$PWD/PythonQt \
}

#    qtpd_gui_autotest/qtpd_gui_autotest
#    qtpd_lib/ceammc-lib/ceammc
