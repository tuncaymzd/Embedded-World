#include <stddef.h>
#include <stdlib.h>
#include "helper/string_parser.h"
#include "id_plane.h"

int faillist_parse_id_plane(
        char **error,
        unsigned char id_plane[]
) {
    if (error == NULL || *error == NULL || id_plane == NULL) {
        return EXIT_FAILURE;
    }
    return faillist_helper_string_parser(error, id_plane, 12);
}
