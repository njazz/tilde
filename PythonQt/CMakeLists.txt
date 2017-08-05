cmake_minimum_required (VERSION 2.8)

set (CMAKE_OSX_DEPLOYMENT_TARGET "10.10")
set (QMAKE_MACOSX_DEPLOYMENT_TARGET 10.10)

add_subdirectory(src)
add_subdirectory(extensions)
