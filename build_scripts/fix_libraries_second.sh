#!/bin/bash

# $1 - full app path

cp /usr/local/lib/libPythonQt_QtAll_d.1.dylib $1/../Frameworks
cp /usr/local/lib/libPythonQt_d.1.dylib $1/../Frameworks
cp /usr/local/lib/libPythonQt_QtAll.1.dylib $1/../Frameworks
cp /usr/local/lib/libPythonQt.1.dylib $1/../Frameworks

install_name_tool -change /usr/local/lib/libPythonQt_QtAll_d.1.dylib @executable_path/../Frameworks/libPythonQt_QtAll_d.1.dylib $1
install_name_tool -change /usr/local/lib/libPythonQt_d.1.dylib @executable_path/../Frameworks/libPythonQt_d.1.dylib $1

install_name_tool -change /usr/local/lib/libPythonQt_QtAll.1.dylib @executable_path/../Frameworks/libPythonQt_QtAll.1.dylib $1
install_name_tool -change /usr/local/lib/libPythonQt.1.dylib @executable_path/../Frameworks/libPythonQt.1.dylib $1

install_name_tool -change /usr/local/lib/libpd-server.1.dylib  @executable_path/../Frameworks/libpd-server.1.dylib $1

install_name_tool -change @rpath/QtWidgets.framework/Versions/5/QtWidgets @executable_path/../Frameworks/QtWidgets.framework/Versions/5/QtWidgets $1
install_name_tool -change @rpath/QtGui.framework/Versions/5/QtGui @executable_path/../Frameworks/QtGui.framework/Versions/5/QtGui $1
install_name_tool -change @rpath/QtCore.framework/Versions/5/QtCore @executable_path/../Frameworks/QtCore.framework/Versions/5/QtCore $1

#@loader_path/