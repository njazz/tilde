#!/bin/bash
# runs from tilde~

echo "creating build number..."

var=$(git rev-list --count master)
cd tilde~/controller
rm buildNumber.h 
echo "#define TILDE_BUILD_NUMBER 0$var" > "buildNumber.h"

echo "done"
exit 0

