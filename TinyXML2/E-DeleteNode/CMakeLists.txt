cmake_minimum_required(VERSION 3.5)

project(DeleteNode)

set(SOURCES
    src/main.cpp
    include/tinyxml2.cpp
)

add_executable(DeleteNode ${SOURCES})

target_include_directories(DeleteNode PRIVATE
    include
)
