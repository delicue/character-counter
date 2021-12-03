cmake_minimum_required(VERSION 3.16.3)

project(char_counter)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory("lib/counter")

target_link_libraries(${PROJECT_NAME} "counter")