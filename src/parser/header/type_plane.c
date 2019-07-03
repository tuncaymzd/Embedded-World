#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "helper/hexa_parser.h"
#include "type_plane.h"

int faillist_parse_type_plane(
        char **error,
        unsigned int *type_plane
) {
    if (error == NULL || *error == NULL || type_plane == NULL) {
        return EXIT_FAILURE;
    }
    return faillist_helper_hexa_parser(error, type_plane);
}