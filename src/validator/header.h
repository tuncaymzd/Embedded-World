#ifndef FAILLIST_VALIDATION_HEADER_H
#define FAILLIST_VALIDATION_HEADER_H

#include "data/parsed_data_header.h"
#include "data/validated_data_header.h"

/**
 * Validate all fields of a `validated_header` structure.
 * Will call `faillist_valid_header_id_plane`, `faillist_valid_header_type_plane`
 * and `faillist_valid_header_nb_failures`.
 *
 * If one field is invalid, the others will not be validated and EXIT_FAILURE will be returned
 * otherwise return EXIT_SUCCESS.
 *
 * @param validated_header The date to fill and validate
 * @param parsed_header The data previously filled by the parser
 * @return EXIT_SUCCESS | EXIT_FAILURE
 */
int faillist_valid_header(faillist_validated_data_header_t *validated_header,
                          faillist_parsed_data_header_t *parsed_header);

#endif //FAILLIST_VALIDATION_HEADER_H
