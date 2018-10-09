cmake_minimum_required(VERSION 3.5)
project(opaque VERSION 0.0.1 LANGUAGES C)

add_library(lib_void lib_void.c)
add_library(lib_struct lib_struct.c)

add_executable(main main.c)

target_link_libraries(main
    PRIVATE lib_struct
    PRIVATE lib_void
)
