cmake_minimum_required (VERSION 2.8)

set (CMAKE_OSX_DEPLOYMENT_TARGET "10.10")

set (CMAKE_PREFIX_PATH ~/Qt/5.8/clang_64)
set (CMAKE_CXX_STANDARD 11)
set (QMAKE_MACOSX_DEPLOYMENT_TARGET 10.10)

set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTORCC ON)

if (APPLE)
	set(CMAKE_MACOSX_RPATH FALSE)
endif()

#fixes warning for app name
cmake_policy(SET CMP0037 OLD)

project(tilde~)

find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Widgets REQUIRED)

add_definitions(-DWITH_PYTHON)
add_definitions(-DQTCOLORPICKER_LIBRARY)

set (SOURCES
	controller/main.cpp
#### UI objects
    	objects/UIArray.cpp 
    	objects/UIBox.cpp 
    	objects/UIMessage.cpp 
    	objects/UIFloat.cpp 
    	objects/UIToggle.cpp 
    	objects/UIBang.cpp 
    	objects/UIText.cpp 
    	oopd/OOPD.cpp 
    	oopd/UIClass.cpp 
    	oopd/UIInstance.cpp 
    	oopd/UIMethod.cpp 
    	oopd/UIProperty.cpp 
    	oopd/OPInstance.cpp 
    	oopd/OPClass.cpp 
    	objects/UIDSP.cpp 
    	objects/UILink.cpp 
    	objects/UISlider.cpp 
    	oopd/UISignal.cpp 
    	objects/UIMatrix.cpp 
#### graphic objects
    	graphicobjects/Port.cpp 
    	graphicobjects/SizeBox.cpp 
    	graphicobjects/UIItem.cpp 
    	graphicobjects/Grid.cpp 
    	graphicobjects/SelectionRect.cpp 
    	graphicobjects/UIObject.cpp 
    	graphicobjects/LinkLine.cpp 
    	graphicobjects/UINewPatchcord.cpp 
    	graphicobjects/UIPatchcord.cpp 
    	graphicobjects/CanvasView.cpp 
#### UI widgets
    	widgets/UIArrayEditor.cpp 
    	widgets/ObjectMaker.cpp 
    	widgets/UITextEditor.cpp 
#### data models
    	datamodels/FileParser.cpp 
    	datamodels/CanvasData.cpp 
    	datamodels/Clipboard.cpp 
    	datamodels/FileSaver.cpp 
    	datamodels/ArrangeObjects.cpp 
    	datamodels/UIObjectData.cpp 
    	datamodels/ObjectLoader.cpp 
#### windows
    	window/PatchWindow.cpp 
    	window/PdWindow.cpp 
    	window/BaseWindow.cpp 
    	window/PropertiesWindow.cpp 
#### controller
    	controller/patchObserver.cpp 
    	controller/objectObserver.cpp 
    	controller/copyobject.cpp 
    	controller/PatchWindowController.cpp 
    	controller/pdWindowConsoleObserver.cpp 
    	controller/ApplicationController.cpp  
#### properties
    	properties/Property.cpp 
    	properties/PropertyList.cpp 
    	properties/QtColorPicker/src/color_dialog.cpp 
    	properties/QtColorPicker/src/color_preview.cpp 
    	properties/QtColorPicker/src/color_selector.cpp 
    	properties/QtColorPicker/src/abstract_widget_list.cpp 
    	properties/QtColorPicker/src/bound_color_selector.cpp 
    	properties/QtColorPicker/src/color_delegate.cpp 
    	properties/QtColorPicker/src/color_list_widget.cpp 
    	properties/QtColorPicker/src/color_wheel.cpp 
    	properties/QtColorPicker/src/gradient_slider.cpp 
    	properties/QtColorPicker/src/hue_slider.cpp 
	properties/QtColorPicker/src/paint_border.hpp
    properties/QtColorPicker/include/color_dialog.hpp 
    properties/QtColorPicker/include/color_preview.hpp 
    properties/QtColorPicker/include/color_selector.hpp 
    properties/QtColorPicker/include/colorpicker_global.hpp 
    properties/QtColorPicker/include/abstract_widget_list.hpp 
    properties/QtColorPicker/include/bound_color_selector.hpp 
    properties/QtColorPicker/include/color_delegate.hpp 
    properties/QtColorPicker/include/color_list_widget.hpp 
    properties/QtColorPicker/include/color_wheel.hpp 
    properties/QtColorPicker/include/gradient_slider.hpp 
    properties/QtColorPicker/include/hue_slider.hpp
    	undo/undocommands.cpp 
    	datamodels/recentfiles.cpp 
    	datamodels/filepaths.cpp 
    	datamodels/fileparserconverter.cpp 
    	datamodels/scriptrunner.cpp
)

set (PYTHON_SOURCES
	python/PythonQtScriptingConsole.cpp 
    	python/wrappers/py_wrappers.cpp 
    	objects/UIScript.cpp 
    	objects/UIScriptBox.cpp 
    	widgets/UIScriptTextEdit.cpp 
    	widgets/UIScriptEditor.cpp 
    	widgets/UIScriptCommon.cpp 
)

set (PYTHON_HEADERS
    python/PythonQtScriptingConsole.h 
    python/headers/PythonQtStdDecorators.h 
    #python/headers/PythonQtDoc.h  #??
    python/headers/PythonQt.h 
    python/headers/PythonQtClassInfo.h 
    python/headers/PythonQtClassWrapper.h 
    python/headers/PythonQtConversion.h 
    python/headers/PythonQtInstanceWrapper.h 
    python/headers/PythonQtProperty.h 
    python/headers/PythonQtSignal.h 
    python/headers/PythonQtSlotDecorator.h 
    python/headers/PythonQtImporter.h 
    python/headers/PythonQtMethodInfo.h 
    python/headers/PythonQtSlot.h 
    python/headers/PythonQtBoolResult.h 
    python/headers/PythonQtUtils.h 
    python/headers/PythonQtPythonInclude.h 
    python/headers/PythonQtMisc.h 
    python/headers/PythonQtObjectPtr.h 
    python/headers/PythonQtSignalReceiver.h 
    python/headers/PythonQtImportFileInterface.h 
    python/headers/PythonQtCppWrapperFactory.h 
    python/headers/PythonQtStdIn.h 
    python/headers/PythonQtStdOut.h 
    python/headers/PythonQt_QtAll.h 
    python/headers/PythonQtQFileImporter.h 
    python/headers/PythonQtSystem.h 
    python/headers/PythonQtVariants.h 
    python/wrappers/py_qtpd.h 
    python/wrappers/py_wrappers.h 
    objects/UIScript.h 
    objects/UIScriptBox.h 
    widgets/UIScriptTextEdit.h 
    widgets/UIScriptEditor.h 
    widgets/UIScriptCommon.h 
)

set (HEADERS  
#### objects
    objects/UIBang.h 
    objects/UIArray.h 
    objects/UIToggle.h 
    objects/UIText.h 
    objects/UIFloat.h 
    objects/UIBox.h 
    objects/UIMessage.h 
    objects/UIDSP.h 
    oopd/OOPD.h 
    oopd/OOPDClassBase.h 
    oopd/OOPDHeaders.h 
    oopd/UIClass.h 
    oopd/UIInstance.h 
    oopd/OPClass.h 
    oopd/OPInstance.h 
    oopd/UIMethod.h 
    oopd/UIProperty.h 
    objects/UILink.h 
    objects/UISlider.h 
    oopd/UISignal.h 
    objects/UIMatrix.h 
#### widgets
    widgets/UIArrayEditor.h 
    widgets/ObjectMaker.h 
    widgets/UITextEditor.h 
#### window
    window/BaseWindow.h 
    window/PatchWindow.h 
    window/PdWindow.h 
    window/PropertiesWindow.h 
#### data models
    datamodels/FileParser.h 
    datamodels/FileSaver.h 
    datamodels/ObjectLoader.h 
    datamodels/Clipboard.h 
    datamodels/CanvasData.h 
    datamodels/UIObjectData.h 
    datamodels/ArrangeObjects.h 
#### properties
    properties/Preferences.h 
    properties/Property.h 
    properties/PropertyList.h 
    properties/AudioSettings.h   
#### graphicobjects
    graphicobjects/Port.h 
    graphicobjects/SizeBox.h 
    graphicobjects/UIItem.h 
    graphicobjects/Grid.h 
    graphicobjects/SelectionRect.h 
    graphicobjects/UIObject.h 
    graphicobjects/LinkLine.h 
    graphicobjects/CommonTypes.h 
    graphicobjects/UIPatchcord.h 
    graphicobjects/UINewPatchcord.h 
    graphicobjects/CanvasView.h 
#### lib headers
    lib_headers/g_canvas.h 
    lib_headers/m_pd.h 
    lib_headers/ceammc_atomlist.h 
    lib_headers/ceammc_atom.h 
#### controller
    controller/ApplicationController.h 
    controller/PatchWindowController.h 
    controller/ControllerObserver.h 
    controller/ServerWorker.h 
    controller/pdWindowConsoleObserver.h 
    controller/patchObserver.h 
    controller/objectObserver.h 
    undo/undocommands.h 
    datamodels/recentfiles.h 
    datamodels/filepaths.h 
    datamodels/fileparserconverter.h 
    datamodels/scriptrunner.h

#    widgets/UIScriptTextEdit.h 
#    widgets/UIScriptEditor.h 
#    widgets/UIScriptCommon.h 
)

set (UIS
    window/cm_pdwindow.ui 
#   window/canvasmenu.ui 
    window/cm_basewindow.ui 
    properties/QtColorPicker/src/color_dialog.ui
)

set ( MOC_HEADERS
	window/PdWindow.h
)

set (RESOURCES
    	properties/QtColorPicker/src/pattern.qrc
	font/tilde.qrc
)

find_library(PA_LIB portaudio)

# find_library(PDSERVER_LIB pd-server)
# find_library(PDSERVER_LIB pd-server)

set (XPD_SHARED 
	"${CMAKE_BINARY_DIR}/xpd/src/libxpd_shared.dylib"
)

set (PD_CORE_SHARED 
	"${CMAKE_BINARY_DIR}/xpd/pd/libpd_core_shared.dylib"
)

set (LIBS
	${PA_LIB}
	${PDSERVER_LIB}
	${XPD_SHARED}
	${PD_CORE_SHARED}
)

find_library(PYTHON27 Python)

#find_library(PYQT PythonQt)
#find_library(PYQTALL PythonQtExtensions)

set (PYQT
	"${CMAKE_BINARY_DIR}/PythonQt/src/LibPythonQt.dylib"
)
set (PYQTALL
	"${CMAKE_BINARY_DIR}/PythonQt/extensions/PythonQt_QtAll/LibPythonQtExtensions.dylib"
)

set (PYTHON_LIBS
	${PYTHON27}
	${PYQT}
    	${PYQTALL}
)

include_directories( ${CMAKE_BINARY_DIR} )
include_directories(.)
include_directories(./lib_headers/)
include_directories(./window/)
include_directories(./objects/)
include_directories(./widgets/)
include_directories(./properties/)
include_directories(./graphicobjects/)
include_directories(./datamodels/)
include_directories(./controller/)
include_directories(./undo/)
include_directories(./../../pd-server/src/)
include_directories(./properties/QtColorPicker/include)

include_directories(./python)
include_directories(./python/headers)
include_directories(./python/py2.7headers)
include_directories(./xpd-transition/)

include_directories(./../xpd/distrib/variant/include/)
include_directories(./../xpd/distrib/spdlog/include/)
include_directories(./../xpd/pd/)

QT5_ADD_RESOURCES( RES_SOURCES ${RESOURCES} )
QT5_WRAP_UI( UI_HEADERS ${UIS} )
QT5_WRAP_CPP( MOC_SRCS ${MOC_HEADERS} )

##############

set(MACOSX_BUNDLE_ICON_FILE tilde~.icns)

set(myApp_ICON ${CMAKE_CURRENT_SOURCE_DIR}/icons/tilde~.icns)
set_source_files_properties(${myApp_ICON} PROPERTIES
       MACOSX_PACKAGE_LOCATION "Resources")

##############

add_custom_target(buildNumber	
    	COMMAND ${PROJECT_SOURCE_DIR}/cmake/create_build_number.sh
        WORKING_DIR ${PROJECT_SOURCE_DIR}/
)




##############

add_executable(tilde~ ${SOURCES} ${RES_SOURCES} ${UI_HEADERS} ${PYTHON_SOURCES} ${PYTHON_HEADERS} ${RESOURCES} ${myApp_ICON})

add_dependencies(tilde~ buildNumber)

qt5_use_modules(tilde~ Core Gui Widgets)

LINK_DIRECTORIES(
	${CMAKE_BINARY_DIR}/res
	/usr/local/lib
)

target_link_libraries(tilde~ ${QT_LIBRARIES} ${LIBS} ${PYTHON_LIBS})

if (APPLE)
    set_target_properties(tilde~ PROPERTIES MACOSX_BUNDLE_INFO_PLIST ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Info.plist.in)
endif ()

###############

add_custom_command(
	TARGET tilde~	
    	COMMAND ${CMAKE_SOURCE_DIR}/cmake/deploy_script.sh
	WORKING_DIR ${CMAKE_BINARY_DIR}
)

add_custom_command(
	TARGET tilde~	
    	COMMAND ${CMAKE_SOURCE_DIR}/cmake/copy_ui_library.sh
	WORKING_DIR ${CMAKE_BINARY_DIR}
)

add_custom_command(
	TARGET tilde~	
    	COMMAND ${CMAKE_SOURCE_DIR}/cmake/copy_bundle.sh
	WORKING_DIR ${CMAKE_BINARY_DIR}
)



###############

# generate proper GUI program on specified platform
if(WIN32) # Check if we are on Windows
	if(MSVC) # Check if we are using the Visual Studio compiler
		set_target_properties(${PROJECT_NAME} PROPERTIES
			WIN32_EXECUTABLE YES
			LINK_FLAGS "/ENTRY:mainCRTStartup"
		)
	elseif(CMAKE_COMPILER_IS_GNUCXX)
			# SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -mwindows") # Not tested
	else()
		message(SEND_ERROR "You are using an unsupported Windows compiler! (Not MSVC or GCC)")
	endif(MSVC)
elseif(APPLE)
	set_target_properties(${PROJECT_NAME} PROPERTIES
			MACOSX_BUNDLE YES
	)
elseif(UNIX)
	# Nothing special required
else()
	message(SEND_ERROR "You are on an unsupported platform! (Not Win32, Mac OS X or Unix)")
endif(WIN32)


install(TARGETS tilde~ DESTINATION ${CMAKE_BINARY_DIR}/../bin)



