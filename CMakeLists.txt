
cmake_minimum_required(VERSION 3.29)
project(untitled)

find_package(ZLIB REQUIRED)



set(CMAKE_CXX_STANDARD 20)

add_executable(untitled 1_7.cpp)
target_link_libraries(${PROJECT_NAME} ZLIB::ZLIB)