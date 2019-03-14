cmake_minimum_required(VERSION 3.0)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_CXX_STANDARD 11)

project(clion_qt_test)

find_package(Qt5Widgets REQUIRED)
qt5_wrap_ui(${PROJECT_NAME} mainwindow.ui)

include_directories(inc)
set(SOURCE_CODE
    src/main.cpp
    src/MainWindow.cpp
    src/deal.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_CODE})
qt5_use_modules(clion_qt_test Widgets)

target_link_libraries(${PROJECT_NAME} -pthread)
