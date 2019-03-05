#include <stdlib.h>
#include "header.h"

#include "validation/header/id_plane.h"
#include "validation/header/type_plane.h"

int faillist_valid_header(faillist_validated_data_header_t *validated_header,
                          faillist_parsed_data_header_t *parsed_header) {
    if (faillist_valid_id_plane(validated_header, parsed_header->id_plane) == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }
    if (faillist_valid_type_plane(validated_header, parsed_header->type_plane) == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
