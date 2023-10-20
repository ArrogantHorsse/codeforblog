cmake_minimum_required(VERSION 3.5)

project(CreateXml)

set(SOURCES
    src/main.cpp
    include/tinyxml2.cpp
)

add_executable(CreateXml ${SOURCES})

target_include_directories(CreateXml PRIVATE
    include
)
