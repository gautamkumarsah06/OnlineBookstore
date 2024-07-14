cmake_minimum_required(VERSION 3.10)

project(Backend)

find_package(Pistache REQUIRED)
find_package(SQLite3 REQUIRED)

add_executable(backend main.cpp Book.cpp Database.cpp Server.cpp)
target_link_libraries(backend Pistache::Pistache SQLite::SQLite3)
