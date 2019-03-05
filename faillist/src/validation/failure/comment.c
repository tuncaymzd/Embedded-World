#include <stdlib.h>
#include <memory.h>
#include "comment.h"

int faillist_valid_failure_comment(faillist_validated_data_failure_t *failure,
                                   unsigned int length,
                                   unsigned char comment[]) {
    if (failure == NULL) {
        return EXIT_FAILURE;
    }

    if (length > FAILLIST_VALIDATED_FAILURE_COMMENT_MAX_SIZE) {
        return EXIT_FAILURE;
    }

    strncpy(failure->comment_failure, (const char *) comment, length);

    return EXIT_SUCCESS;
}
