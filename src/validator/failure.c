#include <stdlib.h>
#include "failure.h"

#include "validator/failure/id_failure.h"
#include "validator/failure/datetime.h"
#include "validator/failure/id_component.h"
#include "validator/failure/level_criticity.h"
#include "validator/failure/comment.h"

int faillist_valid_failure(
        faillist_validated_data_failure_t *validated_failure,
        faillist_parsed_data_failure_t *parsed_failure
) {
    if (validated_failure == NULL || parsed_failure == NULL) {
        return EXIT_FAILURE;
    }

    /// ID FAILURE

    if (faillist_valid_failure_id_failure(validated_failure, parsed_failure->id_failure) == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }

    /// DATETIME

    if (faillist_valid_failure_datetime(validated_failure, parsed_failure->datetime) == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }

    /// ID COMPONENT

    if (faillist_valid_failure_id_component(validated_failure, parsed_failure->id_component) == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }

    /// LEVEL CRITICITY

    if (faillist_valid_failure_level_criticity(validated_failure, parsed_failure->level_criticity) == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }

    /// COMMENT

    if (faillist_valid_failure_comment(validated_failure, parsed_failure->comment_failure_size,
                                       parsed_failure->comment_failure) == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

