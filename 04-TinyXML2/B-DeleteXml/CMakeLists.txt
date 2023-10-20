cmake_minimum_required(VERSION 3.5)

project(DeleteXml)

set(SOURCES
    src/main.cpp
    include/tinyxml2.cpp
)

add_executable(DeleteXml ${SOURCES})

target_include_directories(DeleteXml PRIVATE
    include
)
