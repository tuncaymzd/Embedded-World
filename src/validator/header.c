#include <stdlib.h>
#include "header.h"

#include "validator/header/id_plane.h"
#include "validator/header/type_plane.h"
#include "validator/header/nb_failures.h"

int faillist_valid_header(
        faillist_validated_data_header_t *validated_header,
        faillist_parsed_data_header_t *parsed_header
) {
    if (validated_header == NULL || parsed_header == NULL) {
        return EXIT_FAILURE;
    }

    /// ID PLANE

    if (faillist_valid_header_id_plane(validated_header, parsed_header->id_plane) == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }

    /// TYPE PLANE

    if (faillist_valid_header_type_plane(validated_header, parsed_header->type_plane) == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }

    /// NB FAILURES

    if (faillist_valid_header_nb_failures(parsed_header->nb_failures) == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
