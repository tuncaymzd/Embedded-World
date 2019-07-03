#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include "helper/hexa_parser.h"
#include "id_failure.h"

int faillist_parse_id_failure(
        char **error,
        unsigned int *id_failure
) {
    if (error == NULL || *error == NULL || id_failure == NULL) {
        return EXIT_FAILURE;
    }
    return faillist_helper_hexa_parser(error, id_failure);
}
