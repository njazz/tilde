cmake_minimum_required (VERSION 2.8)

set (CMAKE_OSX_DEPLOYMENT_TARGET "10.10")

set (CMAKE_PREFIX_PATH ~/Qt/5.8/clang_64)
set (CMAKE_CXX_STANDARD 11)
set (QMAKE_MACOSX_DEPLOYMENT_TARGET 10.10)

set(CMAKE_AUTOMOC ON)

include_directories( py27headers )

find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Widgets REQUIRED)

add_subdirectory(src)
# add_subdirectory(extensions)


