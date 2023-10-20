cmake_minimum_required(VERSION 3.5)

project(ModifyNode)

set(SOURCES
    src/main.cpp
    include/tinyxml2.cpp
)

add_executable(ModifyNode ${SOURCES})

target_include_directories(ModifyNode PRIVATE
    include
)
