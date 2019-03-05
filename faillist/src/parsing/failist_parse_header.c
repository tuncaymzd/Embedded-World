#include "failist_parse_header.h"

failist_data_header failist_parse_header(char **failist_ptr){
    failist_data_header elem;

    failist_parse_id_plane(elem.id_plane, failist_ptr[0]);
    elem.type_plane = failist_parse_type_plane(failist_ptr[1]);
    elem.nb_failures = failist_parse_nb_failures(failist_ptr[2]);
    return elem;
}