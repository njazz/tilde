#!/bin/bash
# runs from tilde~

echo "creating build number..."

cd ../..
var=$(git rev-list --count master)
cd tilde~/controller
rm buildNumber.h 
echo "#define TILDE_BUILD_NUMBER $var" > "buildNumber.h"

echo "done"
exit 0

