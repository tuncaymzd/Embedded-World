cmake_minimum_required(VERSION 3.13)
project(faillist C)

set(CMAKE_C_STANDARD 11)

include_directories(src)

add_executable(faillist
        src/main.c
        src/external/slre.c
        src/validation/header.c
        src/validation/id_plane.c
        src/validation/type_plane.c
        )