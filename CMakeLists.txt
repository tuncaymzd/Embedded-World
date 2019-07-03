cmake_minimum_required(VERSION 3.12)
project(faillist C)

set(CMAKE_C_STANDARD 11)

include_directories(src)

add_library(faillist SHARED
        # src/main.c
        src/error_report.c
        src/external/slre.c
        src/helper/hexa_parser.c
        src/helper/string_parser.c
        src/parser/failure/comment_failure.c
        src/parser/failure/comment_failure_size.c
        src/parser/failure/date.c
        src/parser/failure.c
        src/parser/header.c
        src/parser/failure/id_component.c
        src/parser/failure/id_failure.c
        src/parser/header/id_plane.c
        src/parser/failure/level_criticity.c
        src/parser/header/nb_failures.c
        src/parser/header/type_plane.c
        src/validator/header.c
        src/validator/header/id_plane.c
        src/validator/header/type_plane.c
        src/validator/header/nb_failures.c
        src/validator/failure.c
        src/validator/failure/id_failure.c
        src/validator/failure/datetime.c
        src/validator/failure/id_component.c
        src/validator/failure/level_criticity.c
        src/validator/failure/comment.c
        src/writer/open_file.c
        src/writer/failure.c
        src/writer/header.c
        )