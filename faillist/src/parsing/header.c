#include <stddef.h>
#include "parsing/header/nb_failures.h"
#include "parsing/header/type_plane.h"
#include "parsing/header/id_plane.h"
#include "header.h"

faillist_parsed_data_header_t faillist_parse_header(char **faillist_ptr){
    faillist_parsed_data_header_t elem;

    faillist_parse_id_plane(elem.id_plane, faillist_ptr[0]);
    elem.type_plane = faillist_parse_type_plane(faillist_ptr[1]);
    elem.nb_failures = faillist_parse_nb_failures(faillist_ptr[2]);
    return elem;
}