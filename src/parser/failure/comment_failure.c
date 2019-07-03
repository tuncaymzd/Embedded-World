#include <stddef.h>
#include <stdlib.h>
#include "data/parsed_data_failure.h"
#include "helper/string_parser.h"
#include "comment_failure.h"

int faillist_parse_comment_failure(
        char **error,
        unsigned char comment_failure[]
) {
    if (error == NULL || *error == NULL || comment_failure == NULL) {
        return EXIT_FAILURE;
    }
    return faillist_helper_string_parser(error, comment_failure, FAILLIST_PARSED_DATA_FAILURE_COMMENT_MAX_SIZE);
}