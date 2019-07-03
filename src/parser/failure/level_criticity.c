#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "helper/hexa_parser.h"
#include "level_criticity.h"

int faillist_parse_level_criticity(
        char **error,
        unsigned int *id_failure
) {
    if (error == NULL || *error == NULL || id_failure == NULL) {
        return EXIT_FAILURE;
    }
    return faillist_helper_hexa_parser(error, id_failure);
}
