#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "helper/hexa_parser.h"
#include "comment_failure_size.h"

int faillist_parse_comment_failure_size(
        char **error,
        unsigned int *comment_size
) {
    if (error == NULL || *error == NULL || comment_size == NULL) {
        return EXIT_FAILURE;
    }
    return faillist_helper_hexa_parser(error, comment_size);
}