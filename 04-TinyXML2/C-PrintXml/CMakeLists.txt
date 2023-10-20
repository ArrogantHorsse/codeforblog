cmake_minimum_required(VERSION 3.5)

project(PrintXml)

set(SOURCES
    src/main.cpp
    include/tinyxml2.cpp
)

add_executable(PrintXml ${SOURCES})

target_include_directories(PrintXml PRIVATE
    include
)
