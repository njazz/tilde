cmake_minimum_required (VERSION 2.8)

set (CMAKE_OSX_DEPLOYMENT_TARGET "10.10")

set (CMAKE_PREFIX_PATH ~/Qt/5.8/clang_64)
set (CMAKE_CXX_STANDARD 11)
set (QMAKE_MACOSX_DEPLOYMENT_TARGET 10.10)

set(CMAKE_AUTOMOC ON)

project(PythonQt)

find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Widgets REQUIRED)

find_package( PythonLibs 2.7 REQUIRED )

if (APPLE)
	set(CMAKE_MACOSX_RPATH FALSE)
endif()

##############
# src.pri

set (SOURCES                   
  PythonQtStdDecorators.cpp   
  PythonQt.cpp                
  PythonQtClassInfo.cpp       
  PythonQtImporter.cpp        
  PythonQtObjectPtr.cpp       
  PythonQtProperty.cpp        
  PythonQtStdIn.cpp           
  PythonQtStdOut.cpp          
  PythonQtSignal.cpp          
  PythonQtSlot.cpp            
  PythonQtSlotDecorator.cpp   
  PythonQtMisc.cpp            
  PythonQtMethodInfo.cpp      
  PythonQtConversion.cpp      
  PythonQtSignalReceiver.cpp  
  PythonQtInstanceWrapper.cpp 
  PythonQtQFileImporter.cpp   
  PythonQtClassWrapper.cpp    
  PythonQtBoolResult.cpp      
  gui/PythonQtScriptingConsole.cpp 
)

set (HEADERS
  PythonQt.h                  
  PythonQtStdDecorators.h     
  PythonQtClassInfo.h         
  PythonQtImporter.h          
  PythonQtObjectPtr.h         
  PythonQtProperty.h          
  PythonQtSignal.h            
  PythonQtSlot.h              
  PythonQtSlotDecorator.h     
  PythonQtStdIn.h             
  PythonQtStdOut.h            
  PythonQtMisc.h              
  PythonQtMethodInfo.h        
  PythonQtImportFileInterface.h 
  PythonQtConversion.h        
  PythonQtSignalReceiver.h    
  PythonQtInstanceWrapper.h   
  PythonQtClassWrapper.h 
  PythonQtCppWrapperFactory.h 
  PythonQtQFileImporter.h     
  PythonQtQFileImporter.h     
  PythonQtVariants.h          
  gui/PythonQtScriptingConsole.h    
  PythonQtSystem.h 
  PythonQtUtils.h 
  PythonQtBoolResult.h

)

include_directories( ${CMAKE_BINARY_DIR} )
include_directories(.)
include_directories(./gui)

file(GLOB CoreBuiltIn
    "../generated_cpp_56/com_trolltech_qt_core_builtin/*.h"
    "../generated_cpp_56/com_trolltech_qt_core_builtin/*.cpp"
)

file(GLOB GUIBuiltIn
    "../generated_cpp_56/com_trolltech_qt_gui_builtin/*.h"
    "../generated_cpp_56/com_trolltech_qt_gui_builtin/*.cpp"
)

file(GLOB CoreBuiltInH
    "../generated_cpp_56/com_trolltech_qt_core_builtin/*.h"
)

file(GLOB GUIBuiltInH
    "../generated_cpp_56/com_trolltech_qt_gui_builtin/*.h"
)

include_directories(${Qt5Core_PRIVATE_INCLUDE_DIRS})

#include_directories(../generated_cpp_56/com_trolltech_qt_gui_builtin/)
#include_directories(../generated_cpp_56/com_trolltech_qt_core_builtin/)


#qt5_wrap_cpp(MOC_SOURCES ${HEADERS})

qt5_wrap_cpp(moc_core ${CoreBuiltInH})
qt5_wrap_cpp(moc_gui ${GUIBuiltInH})

##############

add_definitions(-DPYTHONQT_EXPORTS)

# ?
# set (QMAKE_CXXFLAGS_RELEASE -= -Zc:strictStrings)

add_library(PythonQt SHARED ${SOURCES} ${HEADERS} ${moc_core} ${moc_gui} ${CoreBuiltIn} ${GUIBuiltIn} )
qt5_use_modules(PythonQt Core Gui Widgets)

target_link_libraries(PythonQt Python ${Qt5Core_LIBRARIES} ${Qt5Gui_LIBRARIES}  ${Qt5Widgets_LIBRARIES} Qt5::Core Qt5::Gui)

install(TARGETS PythonQt LIBRARY DESTINATION ${CMAKE_BINARY_DIR}/../bin)
