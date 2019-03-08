#include <stdlib.h>
#include "header.h"

#include "validation/header/id_plane.h"
#include "validation/header/type_plane.h"
#include "validation/header/nb_failures.h"

int faillist_valid_header(faillist_validated_data_header_t *validated_header,
                          faillist_parsed_data_header_t *parsed_header) {
    /// ID PLANE

#ifdef VALID_ID_PLANE_DEBUG
    printf("Validating id plane...\n");
#endif //VALID_ID_PLANE_DEBUG
    if (faillist_valid_header_id_plane(validated_header, parsed_header->id_plane) == EXIT_FAILURE) {
#ifdef VALID_ID_PLANE_DEBUG
        printf("Id plane: KO\n");
#endif //VALID_ID_PLANE_DEBUG
        return EXIT_FAILURE;
    }
#ifdef VALID_ID_PLANE_DEBUG
    else {
        printf("Id plane: OK\n");
    }
#endif //VALID_ID_PLANE_DEBUG

    /// TYPE PLANE

#ifdef VALID_TYPE_PLANE_DEBUG
    printf("Validating type plane...\n");
#endif //VALID_TYPE_PLANE_DEBUG
    if (faillist_valid_header_type_plane(validated_header, parsed_header->type_plane) == EXIT_FAILURE) {
#ifdef VALID_TYPE_PLANE_DEBUG
        printf("Type plane: KO\n");
#endif //VALID_TYPE_PLANE_DEBUG
        return EXIT_FAILURE;
    }
#ifdef VALID_TYPE_PLANE_DEBUG
    else {
        printf("Id plane: OK\n");
    }
#endif //VALID_TYPE_PLANE_DEBUG

    /// NB FAILURES

#ifdef VALID_NB_FAILURES_DEBUG
    printf("Validating nb failures...\n");
#endif //VALID_TYPE_PLANE_DEBUG
    if (faillist_valid_header_nb_failures(parsed_header->nb_failures) == EXIT_FAILURE) {
#ifdef VALID_NB_FAILURES_DEBUG
        printf("Nb failures: KO\n");
#endif //VALID_TYPE_PLANE_DEBUG
        return EXIT_FAILURE;
    }
#ifdef VALID_TYPE_PLANE_DEBUG
    else {
        printf("Nb failures: OK\n");
    }
#endif //VALID_TYPE_PLANE_DEBUG

    return EXIT_SUCCESS;
}
