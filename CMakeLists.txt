cmake_minimum_required (VERSION 2.8)

set (CMAKE_OSX_DEPLOYMENT_TARGET "10.10")
set (QMAKE_MACOSX_DEPLOYMENT_TARGET 10.10)

set(CMAKE_AUTOMOC ON)

project(tilde-main)

include_directories( ${CMAKE_BINARY_DIR}/tilde~ )

add_subdirectory(tilde~_ui_library)
add_subdirectory(tilde~)

add_custom_target( tilde-main DEPENDS tilde~ tilde~_ui )
# add_dependencies( tilde-main tilde~ tilde~_ui)

add_custom_command(
	TARGET tilde-main	
    	COMMAND ${CMAKE_SOURCE_DIR}/cmake/copy_to_bin.sh
	WORKING_DIR ${CMAKE_BINARY_DIR}
)