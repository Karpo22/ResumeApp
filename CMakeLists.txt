cmake_mimimum_required( VERSION 2.8)

project( MyProject )

find_package( Qt4 COMPONENTS QtGui <insert components you need> REQUIRED)
include( ${QT_USE_FILE} )

# Qt's includes are already taken care of by the previous command
# add any additionaly include directories if required
# include "binary" dir to make sure the automatically generated files (eg for gui class) are found
include_directories( ${CMAKE_CURRENT_BINARY_DIR} )

# assuming MyProject contains a Q_OBJECT that needs to be processed by moc
QT4_WRAP_CPP( MOCS MyProject.h )   

QT4_WRAP_UI( UI MyGui.ui )

add_executable( MyProject 
      main.cpp
      mainwindow.cpp
      mainwindow.h
      ${MOCS}
      ${UI}
)

target_link_libraries( MyProject ${QT_LIBRARIES} )