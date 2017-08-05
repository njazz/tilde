project(PythonQt)

find_package(Qt5Core REQUIRED)
find_package(Qt5Core-private REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Widgets REQUIRED)

# ?
# set (QMAKE_CXXFLAGS_RELEASE -= -Zc:strictStrings)

add_library(PythonQt SHARED ${SOURCES} ${HEADERS})