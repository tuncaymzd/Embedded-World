#ifndef FAILLIST_VALIDATION_HEADER_TYPE_PLANE_H
#define FAILLIST_VALIDATION_HEADER_TYPE_PLANE_H

#include "data/validated_data_header.h"

/**
 * Validate the `type_plane` of the `faillist_parsed_data_header` structure.
 * The parameter should be a valid type plane id known by our process.
 *
 * The `header` parameter must not be null.
 * In case of success, `type_plane` field of `header` will be the matching type plane name of `type_plane`.
 *
 * Return EXIT_SUCCESS in case of success and EXIT_FAILURE otherwise.
 *
 * @see `Faillist - Request for proposal V2.pdf` document for the specification
 * @see `Embedded_World-Request_for_proposal-Annex1.xlsx`, in the `TYPE_PLANE` sheet for the valid `type_plane` values
 *
 * @param header the header to fill if the `type_plane` is valid
 * @param type_plane the `type_plane` found in the `faillist_parsed_data_header` structure
 * @return EXIT_SUCCESS | EXIT_FAILURE
 */
int faillist_valid_header_type_plane(faillist_validated_data_header_t *header, unsigned int type_plane);

#endif //FAILLIST_VALIDATION_HEADER_TYPE_PLANE_H
