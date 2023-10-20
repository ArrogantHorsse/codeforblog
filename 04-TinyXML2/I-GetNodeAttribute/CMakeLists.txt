cmake_minimum_required(VERSION 3.5)

project(GetNodeAttribute)

set(SOURCES
    src/main.cpp
    include/tinyxml2.cpp
)

add_executable(GetNodeAttribute ${SOURCES})

target_include_directories(GetNodeAttribute PRIVATE
    include
)
