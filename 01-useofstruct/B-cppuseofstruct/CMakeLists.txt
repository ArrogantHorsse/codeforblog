cmake_minimum_required(VERSION 3.5)

project(cppusestruct)

set(SOURCES
    src/main.cpp
)

add_executable(cpp_use_struct ${SOURCES})


target_include_directories(cpp_use_struct
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)