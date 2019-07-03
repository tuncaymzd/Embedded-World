#include <stdlib.h>
#include <printf.h>
#include "failure.h"

#include "parser/failure/id_failure.h"
#include "parser/failure/id_component.h"
#include "parser/failure/level_criticity.h"
#include "parser/failure/comment_failure_size.h"
#include "parser/failure/comment_failure.h"
#include "parser/failure/date.h"

int faillist_parse_failure(
        faillist_parsed_data_failure_t *failure,
        char **error
) {
    if (failure == NULL || error == NULL || *error == NULL) {
        return EXIT_FAILURE;
    }
    if (faillist_parse_id_failure(error, &failure->id_failure) == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }
    if (faillist_parse_date(error, &failure->datetime) == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }
    if (faillist_parse_id_component(error, &failure->id_component) == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }
    if (faillist_parse_level_criticity(error, &failure->level_criticity) == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }
    if (faillist_parse_comment_failure_size(error, &failure->comment_failure_size) == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }
    if (faillist_parse_comment_failure(error, failure->comment_failure) == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

