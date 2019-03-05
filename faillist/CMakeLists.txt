cmake_minimum_required(VERSION 3.13)
project(faillist C)

set(CMAKE_C_STANDARD 11)

include_directories(src)

add_executable(faillist
        src/main.c
        src/external/slre.c
        src/validation/header.c
        src/validation/header/id_plane.c
        src/validation/header/type_plane.c
        src/validation/header/nb_failures.c
        src/validation/failure.c
        src/validation/failure/id_failure.c
        src/validation/failure/datetime.c
        src/validation/failure/id_component.c
        src/validation/failure/level_criticity.c
        src/validation/failure/comment.c
        )