#ifndef FAILLIST_VALIDATION_FAILURE_COMMENT_H
#define FAILLIST_VALIDATION_FAILURE_COMMENT_H

#include "data/validated_data_failure.h"

int faillist_valid_failure_comment(
        faillist_validated_data_failure_t *failure,
        unsigned int length,
        unsigned char comment[]
);

#endif //FAILLIST_VALIDATION_FAILURE_COMMENT_H
