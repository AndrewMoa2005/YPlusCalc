CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(ypcalc)
SET(SRC_LIST gui.cpp gui.h yp.cpp yp.h app.cpp app.h ypdialog.cpp ypdialog.h resource.rc)
ADD_EXECUTABLE(${PROJECT_NAME} ${SRC_LIST})
FIND_PACKAGE(wxWidgets REQUIRED)
INCLUDE(${wxWidgets_USE_FILE})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${wxWidgets_LIBRARIES})