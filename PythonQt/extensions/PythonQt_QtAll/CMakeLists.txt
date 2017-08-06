cmake_minimum_required (VERSION 2.8)

set (CMAKE_OSX_DEPLOYMENT_TARGET "10.10")

set (CMAKE_PREFIX_PATH ~/Qt/5.8/clang_64)
set (CMAKE_CXX_STANDARD 11)
set (QMAKE_MACOSX_DEPLOYMENT_TARGET 10.10)

set(CMAKE_AUTOMOC ON)

project(PythonQtExtensions)

find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Widgets REQUIRED)

#
find_package(Qt5Network REQUIRED)
find_package(Qt5Xml REQUIRED)
find_package(Qt5XmlPatterns REQUIRED)
find_package(Qt5OpenGL REQUIRED)
find_package(Qt5OpenGLExtensions REQUIRED)
find_package(Qt5PrintSupport REQUIRED)
find_package(Qt5UiTools REQUIRED)

find_package( PythonLibs 2.7 REQUIRED )

find_library(OpenGL_LIB OpenGL)
find_library(GLUT_LIB GLUT)

if (APPLE)
	set(CMAKE_MACOSX_RPATH FALSE)
endif()

##########
file(GLOB eCore
    "../../generated_cpp_56/com_trolltech_qt_core/*.cpp"
)

file(GLOB eGUI
    "../../generated_cpp_56/com_trolltech_qt_gui/*.cpp"
)

file(GLOB eNetwork
    "../../generated_cpp_56/com_trolltech_qt_network/*.cpp"
)

file(GLOB eOpenGL
    "../../generated_cpp_56/com_trolltech_qt_opengl/*.cpp"
)

file(GLOB eXML
    "../../generated_cpp_56/com_trolltech_qt_xml/*.cpp"
)

file(GLOB eXMLPatterns
    "../../generated_cpp_56/com_trolltech_qt_xmlpatterns/*.cpp"
)

file(GLOB eUItools
    "../../generated_cpp_56/com_trolltech_qt_uitools/*.cpp"
)

#######

file(GLOB eCoreH
    "../../generated_cpp_56/com_trolltech_qt_core/*.h"
    
)

file(GLOB eGUIH
    "../../generated_cpp_56/com_trolltech_qt_gui/*.h"
    
)

file(GLOB eNetworkH
    "../../generated_cpp_56/com_trolltech_qt_network/*.h"
    
)

file(GLOB eOpenGLH
    "../../generated_cpp_56/com_trolltech_qt_opengl/*.h"
    
)

file(GLOB eXMLH
    "../../generated_cpp_56/com_trolltech_qt_xml/*.h"
    
)

file(GLOB eXMLPatternsH
    "../../generated_cpp_56/com_trolltech_qt_xmlpatterns/*.h"
    
)

file(GLOB eUItoolsH
    "../../generated_cpp_56/com_trolltech_qt_uitools/*.h"
    
)

set (SOURCES
${eCore} 
${eGUI} 
${eNetwork} 
${eOpenGL} 
${eXML} 
${eXMLPatterns}
${eUItools}
	PythonQt_QtAll.cpp
)

qt5_wrap_cpp(eMOC ${eCoreH} ${eGUIH} ${eNetworkH} ${eOpenGLH} ${eXMLH} ${eXMLPatternsH} ${eUItoolsH} PythonQt_QtAll.h)

add_library(PythonQtExtensions SHARED ${SOURCES} ${eMOC})
qt5_use_modules(PythonQtExtensions Core Gui Widgets Network Xml XmlPatterns OpenGL UiTools PrintSupport OpenGLExtensions)

target_link_libraries(PythonQtExtensions Python PythonQt ${OpenGL_LIB} ${GLUT})

#install(TARGETS PythonQtExtensions LIBRARY DESTINATION ${CMAKE_BINARY_DIR}/../../bin)
