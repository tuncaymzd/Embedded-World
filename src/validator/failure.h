#ifndef FAILLIST_VALIDATION_FAILURE_H
#define FAILLIST_VALIDATION_FAILURE_H

#include "data/parsed_data_failure.h"
#include "data/validated_data_failure.h"

/**
 * Validate all fields of a `faillist_validated_data_header` structure.
 * Will call `faillist_valid_failure_id_failure`, `faillist_valid_failure_datetime`
 * `faillist_valid_failure_id_component`, `faillist_valid_failure_level_criticity`
 * and `faillist_valid_failure_comment`.
 *
 * If one field is invalid, the others will not be validated and EXIT_FAILURE will be returned
 * otherwise return EXIT_SUCCESS.
 *
 * @param validated_failure The date to fill and validate
 * @param parsed_failure The data previously filled by the parser
 * @return EXIT_SUCCESS | EXIT_FAILURE
 */
int faillist_valid_failure(faillist_validated_data_failure_t *validated_failure,
                           faillist_parsed_data_failure_t *parsed_failure);

#endif //FAILLIST_VALIDATION_FAILURE_H
