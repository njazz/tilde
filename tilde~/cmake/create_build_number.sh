#!/bin/bash
# runs from tilde~

echo "creating build number..."

cd ../..
var=$(git rev-list --count master)
cd tilde~/controller
rm buildNumber.c
#echo "#define TILDE_BUILD_NUMBER $var" > "buildNumber.h"
echo "extern int buildNumber(){return $var;}" > "buildNumber.cpp"

echo "done"
exit 0

