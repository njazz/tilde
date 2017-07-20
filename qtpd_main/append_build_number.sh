#!/bin/bash

# runs from qtpd_main

cd ..
var=$(git rev-list --count master)
echo $var
cd qtpd_gui
ls
rm target_name.pri
echo "TARGET = qtpd-build$var" > "target_name.pri"

