#include <stddef.h>
#include <stdlib.h>
#include <printf.h>
#include "header/nb_failures.h"
#include "header/type_plane.h"
#include "header/id_plane.h"
#include "header.h"

int faillist_parse_header(
        faillist_parsed_data_header_t *header,
        char **error
) {
    if (header == NULL || error == NULL || *error == NULL) {
        return EXIT_FAILURE;
    }
    if (faillist_parse_id_plane(error, header->id_plane) == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }
    if (faillist_parse_type_plane(error, &header->type_plane) == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }
    if (faillist_parse_type_plane(error, &header->nb_failures) == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}