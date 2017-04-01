TEMPLATE = subdirs

CONFIG += static
CONFIG += ordered

PYTHONQT_STATIC = true

SUBDIRS += $$PWD/PythonQt \
    $$PWD/qtpd_lib \
    $$PWD/qtpd_gui \

#    qtpd_gui_autotest/qtpd_gui_autotest
#    qtpd_lib/ceammc-lib/ceammc
