cmake_minimum_required(VERSION 3.5)

project(SetNodeAttribute)

set(SOURCES
    src/main.cpp
    include/tinyxml2.cpp
)

add_executable(SetNodeAttribute ${SOURCES})

target_include_directories(SetNodeAttribute PRIVATE
    include
)
