#ifndef FAILLIST_VALIDATION_FAILURE_DATETIME_H
#define FAILLIST_VALIDATION_FAILURE_DATETIME_H

#include "data/validated_data_failure.h"

/**
 * Validate the `datetime` field of the `faillist_parsed_data_failure` structure.
 * The parameter should be greater than 0 and lower or equal than the actual system datetime.
 *
 * The parameter `failure` must not be NULL.
 * In case of success `datetime` field in the `failure` structure will be filled
 * with the human readable `datetime` parameter.
 *
 * Return EXIT_SUCCESS in case of success and EXIT_FAILURE otherwise.
 *
 * @see `Faillist - Request for proposal V2.pdf` document for the specification
 *
 * @param failure the header to fill if the `datetime` is valid
 * @param datetime the timestamp the failure was thrown
 * @return EXIT_SUCCESS | EXIT_FAILURE
 */
int faillist_valid_failure_datetime(faillist_validated_data_failure_t *failure, unsigned int datetime);

#endif //FAILLIST_VALIDATION_FAILURE_DATETIME_H
