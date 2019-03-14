cmake_minimum_required(VERSION 3.0)
project(20190314_clion_qt)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Widgets REQUIRED)

include_directories(./inc)
set(SOURCE_CODE
    src/main.cpp
    src/mainwindow.cpp
    src/deal.cpp)
add_executable(${PROJECT_NAME} ${SOURCE_CODE})

target_link_libraries(${PROJECT_NAME} -pthread Qt5::Core)
target_link_libraries(${PROJECT_NAME} Qt5::Gui)
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)