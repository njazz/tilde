cmake_minimum_required (VERSION 2.8)

set (CMAKE_OSX_DEPLOYMENT_TARGET "10.10")
set (QMAKE_MACOSX_DEPLOYMENT_TARGET 10.10)

set(CMAKE_AUTOMOC ON)

include_directories( ${CMAKE_BINARY_DIR}/tilde~ )

add_subdirectory(tilde~_ui_library)
add_subdirectory(tilde~)