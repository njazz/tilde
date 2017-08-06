#!/bin/bash

echo "copying bundle.."
cd tilde~.app/Contents/Resources
mkdir Help
cd ./Help
cp -R ../../../../../../tilde~/bundle/macos/Help/* ./
cd ../Libraries
cp -R ../../../../../../tilde~/bundle/macos/Libraries/* ./
echo "...done"

exit 0





