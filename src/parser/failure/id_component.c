#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include "helper/hexa_parser.h"
#include "id_component.h"

int faillist_parse_id_component(
        char **error,
        unsigned int *id_component
) {
    if (error == NULL || *error == NULL || id_component == NULL) {
        return EXIT_FAILURE;
    }
    return faillist_helper_hexa_parser(error, id_component);
}
