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
        src/writing/open_file.c
        src/writing/failure.c
        src/writing/header.c
        src/parsing/failure/comment_failure.c
        src/parsing/failure/comment_failure_size.c
        src/parsing/failure/date.c
        src/parsing/failure.c
        src/parsing/header.c
        src/parsing/failure/id_component.c
        src/parsing/failure/id_failure.c
        src/parsing/header/id_plane.c
        src/parsing/failure/level_criticity.c
        src/parsing/header/nb_failures.c
        src/parsing/header/type_plane.c
        )