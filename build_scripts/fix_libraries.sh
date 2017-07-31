#!/bin/bash

# $1 - full app path

install_name_tool -change libPythonQt_QtAll_d.1.dylib /usr/local/lib/libPythonQt_QtAll_d.1.dylib $1
install_name_tool -change libPythonQt_d.1.dylib /usr/local/lib/libPythonQt_d.1.dylib $1

install_name_tool -change libPythonQt_QtAll.1.dylib /usr/local/lib/libPythonQt_QtAll.1.dylib $1
install_name_tool -change libPythonQt.1.dylib /usr/local/lib/libPythonQt.1.dylib $1

install_name_tool -change libpd-server.1.dylib  /usr/local/lib/libpd-server.1.dylib $1

#@loader_path/