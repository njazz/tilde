TEMPLATE = subdirs

CONFIG += static
CONFIG += ordered
macx: CONFIG -= withPython
win32: CONFIG -= WithPython



SUBDIRS = \
    #$$PWD/qtpd_lib \
    $$PWD/../pd-server/src/qt-creator-project/pd-server.pro \
    $$PWD/qtpd_ceammc_lib \
    $$PWD/qtpd_gui \
    $$PWD/qtpd_ui_library \
    #API_prototype/API_prototype
    qtpd_tests


WithPython {
    DEFINES += WITH_PYTHON

    SUBDIRS = $$PWD/PythonQt \
}

#    qtpd_gui_autotest/qtpd_gui_autotest
#    qtpd_lib/ceammc-lib/ceammc
