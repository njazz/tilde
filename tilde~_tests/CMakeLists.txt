cmake_minimum_required (VERSION 2.8)

set (CMAKE_OSX_DEPLOYMENT_TARGET "10.10")

set (CMAKE_PREFIX_PATH ~/Qt/5.8/clang_64)
set (CMAKE_CXX_STANDARD 11)
set (QMAKE_MACOSX_DEPLOYMENT_TARGET 10.10)

set(CMAKE_AUTOMOC ON)

project(tilde~_tests)

find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Test REQUIRED)


#fixes warning for app name
cmake_policy(SET CMP0037 OLD)



set (SOURCES
        tilde~_tests.cpp 
#### properties
        ../tilde~/properties/Property.cpp 
        ../tilde~/properties/PropertyList.cpp 
#### graphic objects
#    ../tilde~/graphicobjects/Port.cpp 
#    ../tilde~/graphicobjects/SizeBox.cpp 
#    ../tilde~/graphicobjects/UIItem.cpp 
#    ../tilde~/graphicobjects/Grid.cpp 
#    ../tilde~/graphicobjects/SelectionRect.cpp 
#    ../tilde~/graphicobjects/UIObject.cpp 
#    ../tilde~/graphicobjects/LinkLine.cpp 
#    ../tilde~/graphicobjects/UINewPatchcord.cpp 
#    ../tilde~/graphicobjects/UIPatchcord.cpp 
#    ../tilde~/graphicobjects/CanvasView.cpp 
##### UI widgets
##### data models
    ../tilde~/datamodels/fileparserconverter.cpp 
#    ../tilde~/datamodels/CanvasData.cpp 
#    ../tilde~/datamodels/Clipboard.cpp 
#    ../tilde~/datamodels/FileSaver.cpp 
#    ../tilde~/datamodels/ArrangeObjects.cpp 
#    ../tilde~/datamodels/UIObjectData.cpp 
##### windows
#    ../tilde~/window/PatchWindow.cpp 
#    ../tilde~/window/BaseWindow.cpp 
#    ../tilde~/window/PropertiesWindow.cpp 
##### controller
#    ../tilde~/controller/patchObserver.cpp 
#    ../tilde~/controller/objectObserver.cpp 
#    ../tilde~/controller/copyobject.cpp 
#    ../tilde~/controller/PatchWindowController.cpp 
#    ../tilde~/controller/pdWindowConsoleObserver.cpp 
#    ../tilde~/controller/ApplicationController.cpp 
#    ../tilde~/controller/ServerWorker.cpp 

)

set (HEADERS ../tilde~/properties/Property.h 
        ../tilde~/properties/PropertyList.h 
#### window
#    ../tilde~/window/BaseWindow.h 
#    ../tilde~/window/PatchWindow.h 
#    ../tilde~/window/PropertiesWindow.h 
##### data models
    ../tilde~/datamodels/fileparserconverter.h 
#    ../tilde~/datamodels/FileSaver.h 
#    ../tilde~/datamodels/Clipboard.h 
#    ../tilde~/datamodels/CanvasData.h 
#    ../tilde~/datamodels/UIObjectData.h 
#    ../tilde~/datamodels/ArrangeObjects.h 
##### graphicobjects
#    ../tilde~/graphicobjects/Port.h 
#    ../tilde~/graphicobjects/SizeBox.h 
#    ../tilde~/graphicobjects/UIItem.h 
#    ../tilde~/graphicobjects/Grid.h 
#    ../tilde~/graphicobjects/SelectionRect.h 
#    ../tilde~/graphicobjects/UIObject.h 
#    ../tilde~/graphicobjects/LinkLine.h 
#    ../tilde~/graphicobjects/CommonTypes.h 
#    ../tilde~/graphicobjects/UIPatchcord.h 
#    ../tilde~/graphicobjects/UINewPatchcord.h 
#    ../tilde~/graphicobjects/CanvasView.h 
##### lib headers
#    ../tilde~/lib_headers/g_canvas.h 
#    ../tilde~/lib_headers/m_pd.h 
#    ../tilde~/lib_headers/ceammc_atomlist.h 
#    ../tilde~/lib_headers/ceammc_atom.h 
##### controller
#    ../tilde~/controller/ApplicationController.h 
#    ../tilde~/controller/PatchWindowController.h 
#    ../tilde~/controller/ControllerObserver.h 
#    ../tilde~/controller/ServerWorker.h 
#    ../tilde~/controller/pdWindowConsoleObserver.h 
#    ../tilde~/controller/patchObserver.h 
#    ../tilde~/controller/objectObserver.h 

)

include_directories( ${CMAKE_BINARY_DIR} )

include_directories(.)
include_directories(../tilde~)
include_directories(../tilde~/lib_headers/)
include_directories(../tilde~/window/)
include_directories(../tilde~/objects/)
include_directories(../tilde~/widgets/)
include_directories(../tilde~/properties/)
include_directories(../tilde~/graphicobjects/)
include_directories(../tilde~/datamodels/)
include_directories(../tilde~/controller/)
include_directories(../tilde~/undo/)
include_directories(../../pd-server/src/)
include_directories(../tilde~/properties/QtColorPicker/include)


add_executable(tilde~_tests ${SOURCES})

qt5_use_modules(tilde~_tests Core Gui Widgets Test)


set( TEST_LIBRARIES${QT_QTTEST_LIBRARY} ${QT_LIBRARIES} )
TARGET_LINK_LIBRARIES( tilde~_tests ${TEST_LIBRARIES} )

ADD_TEST( NAME tilde~_test COMMAND tilde~_test )
