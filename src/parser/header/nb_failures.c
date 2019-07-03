#include <stdlib.h>
#include <string.h>
#include <tgmath.h>
#include "helper/hexa_parser.h"
#include "nb_failures.h"

int faillist_parse_nb_failures(
        char **error,
        unsigned int *nb_failure
) {
    if (error == NULL || *error == NULL || nb_failure == NULL) {
        return EXIT_FAILURE;
    }
    return faillist_helper_hexa_parser(error, nb_failure);
}
