#ifndef FAILLIST_VALIDATION_HEADER_ID_PLANE_H
#define FAILLIST_VALIDATION_HEADER_ID_PLANE_H

#include "../../data/validated_data_header.h"
#include "../../external/slre.h"

/**
 * Validate the `id_plane` of of the `faillist_parsed_data_header` structure.
 * The parameter should be an `id_plane` known by our process.
 *
 * The parameter `header` must not be null.
 * In case of success, `id_plane` field of the `header` is a copy of the `id_plane` parameter
 * and `nationality` field of the `header` match the `id_plane` parameter.
 *
 * Return EXIT_SUCCESS in case of success and EXIT_FAILURE otherwise.
 *
 * @see `Faillist - Request for proposal V2.pdf` document for the specification
 * @see `Embedded_World-Request_for_proposal-Annex1.xlsx`, in the `ID_PLANES` sheet for the valid `type_plane` values
 *
 * @param header
 * @param id_plane
 * @return EXIT_SUCCESS | EXIT_FAILURE
 */
int faillist_valid_header_id_plane(faillist_validated_data_header_t *header, unsigned char id_plane[]);

#endif //FAILLIST_VALIDATION_HEADER_ID_PLANE_H
