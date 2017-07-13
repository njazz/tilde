#!/bin/bash

#cd qtpd.app/Contents/
#mkdir Frameworks
#cd Frameworks
#cp /usr/local/lib/libPythonQt.1.0.0.dylib ./libPythonQt.1.dylib
#cp /usr/local/lib/libPythonQt_QtAll.1.0.0.dylib ./libPythonQt_QtAll.1.dylib
#cp /usr/local/lib/libpd-server.1.0.0.dylib ./libpd-server.1.dylib

sudo cp /usr/local/lib/libPythonQt.1.0.0.dylib /usr/lib/libPythonQt.1.dylib
sudo cp /usr/local/lib/libPythonQt_QtAll.1.0.0.dylib /usr/lib/libPythonQt_QtAll.1.dylib
sudo cp /usr/local/lib/libpd-server.1.0.0.dylib /usr/lib/libpd-server.1.dylib
