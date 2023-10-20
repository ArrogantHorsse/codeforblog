cmake_minimum_required(VERSION 3.5)

project(CreateElement)

set(SOURCES
    src/main.cpp
    include/tinyxml2.cpp
)

add_executable(CreateElement ${SOURCES})

target_include_directories(CreateElement PRIVATE
    include
)
