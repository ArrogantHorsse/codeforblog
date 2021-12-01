cmake_minimum_required(VERSION 3.5)

project(cusestruct)

set(SOURCES
    src/main.c
)

add_executable(c_use_struct ${SOURCES})


target_include_directories(c_use_struct
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)