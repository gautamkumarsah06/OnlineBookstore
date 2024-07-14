cmake_minimum_required(VERSION 3.10)

project(Frontend)

find_package(Qt5Widgets REQUIRED)

add_executable(frontend main.cpp GUI.cpp)
target_link_libraries(frontend Qt5::Widgets)
