#ifndef FAILLIST_VALIDATION_FAILURE_LEVEL_CRITICITY_H
#define FAILLIST_VALIDATION_FAILURE_LEVEL_CRITICITY_H

#include "data/validated_data_failure.h"

/**
 * Validate the `id_failure` of the `faillist_parsed_data_failure` structure.
 *
 * The parameter `level_criticity` must be between 1 and 10.
 *
 * Return EXIT_SUCCESS in case of success and EXIT_FAILURE otherwise.
 *
 * @param failure
 * @param level_criticity
 * @return
 */
int faillist_valid_failure_level_criticity(
        faillist_validated_data_failure_t *failure,
        unsigned int level_criticity
);

#endif //FAILLIST_VALIDATION_FAILURE_LEVEL_CRITICITY_H
