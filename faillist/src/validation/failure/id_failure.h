#ifndef FAILLIST_VALIDATION_FAILURE_ID_FAILURE_H
#define FAILLIST_VALIDATION_FAILURE_ID_FAILURE_H

#include "data/validated_data_failure.h"

/**
 * Validate the `id_failure` of the `faillist_parsed_data_failure` structure.
 *
 * The parameter `failure` must not be NULL.
 *
 * Return EXIT_SUCCESS in case of success and EXIT_FAILURE otherwise.
 *
 * @param failure
 * @param id_failure
 * @return EXIT_SUCCESS | EXIT_FAILURE
 */
int faillist_valid_failure_id_failure(faillist_validated_data_failure_t *failure, unsigned int id_failure);

#endif //FAILLIST_VALIDATION_FAILURE_ID_FAILURE_H
