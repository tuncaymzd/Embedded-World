#ifndef FAILLIST_VALIDATION_FAILURE_H
#define FAILLIST_VALIDATION_FAILURE_H

#include "data/parsed_data_failure.h"
#include "data/validated_data_failure.h"

int faillist_valid_failure(faillist_validated_data_failure_t *validated_failure,
                           faillist_parsed_data_failure_t *parsed_failure);

#endif //FAILLIST_VALIDATION_FAILURE_H
