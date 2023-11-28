cmake_minimum_required(VERSION 3.5)

project(QueryNode)

set(SOURCES
    src/main.cpp
    include/tinyxml2.cpp
)

add_executable(QueryNode ${SOURCES})

target_include_directories(QueryNode PRIVATE
    include
)
