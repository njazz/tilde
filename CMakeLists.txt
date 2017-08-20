cmake_minimum_required (VERSION 2.8)

set (CMAKE_OSX_DEPLOYMENT_TARGET "10.10")
set (QMAKE_MACOSX_DEPLOYMENT_TARGET 10.10)

set(CMAKE_AUTOMOC ON)

project(tilde-main)

include_directories( ${CMAKE_BINARY_DIR}/tilde~ )
include_directories( ${CMAKE_BINARY_DIR}/tilde~_tests )

add_subdirectory(PythonQt)
add_subdirectory(tilde~_ui_library)
add_subdirectory(tilde~)
add_subdirectory(tilde~_tests)
#add_subdirectory(xpd)


add_custom_target( tilde-main DEPENDS tilde~ tilde~_ui PythonQt)

add_custom_command(
	TARGET tilde-main	
    	COMMAND ${CMAKE_SOURCE_DIR}/cmake/copy_to_bin.sh
	WORKING_DIR ${CMAKE_BINARY_DIR}
)

