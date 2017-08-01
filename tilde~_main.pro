TEMPLATE = subdirs

CONFIG += static
CONFIG += ordered
macx: CONFIG += withPython
win32: CONFIG -= WithPython

#macx:{

#target_name_script.commands = append_build_number.sh
#QMAKE_EXTRA_TARGETS += target_name_script

#}

QMAKE_MAC_SDK = macosx10.12


SUBDIRS = \
    $$PWD/../pd-server/src/qt-creator-project/pd-server.pro \
    $$PWD/../pd-server/src/qt-creator-project/pd-server-tests.pro \
    $$PWD/tilde~ \
    $$PWD/tilde~_ui_library \
    $$PWD/tilde~_tests


WithPython {
    DEFINES += WITH_PYTHON

    SUBDIRS = $$PWD/PythonQt \
}


