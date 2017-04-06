TEMPLATE = subdirs

CONFIG += static
CONFIG += ordered
macx: CONFIG += withPython
win32: CONFIG -= WithPython


SUBDIRS = \
    $$PWD/qtpd_lib \
    $$PWD/qtpd_gui \
    ceammc_lib/ceammc_lib


WithPython {
    DEFINES += WITH_PYTHON
    PYTHONQT_STATIC = true
    SUBDIRS = $$PWD/PythonQt \
}

#    qtpd_gui_autotest/qtpd_gui_autotest
#    qtpd_lib/ceammc-lib/ceammc
