cmake_minimum_required(VERSION 3.22)
project(src)

set(CMAKE_CXX_STANDARD 20)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)  # necesario para .qrc

add_executable(logotec
        src/main.cpp
        src/ui/mainwindow.cpp
        src/ui/mainwindow.h
        src/turtle/turtlescene.cpp
        src/turtle/turtlescene.h
        src/turtle/turtleview.cpp
        src/turtle/turtleview.h
        src/ui/resources.qrc
        src/turtle_program.cpp
        src/turtle_program.h
)

target_link_libraries(logotec PRIVATE Qt5::Widgets)
