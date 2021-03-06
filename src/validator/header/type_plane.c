#include <stdlib.h>
#include <memory.h>
#include "type_plane.h"

struct type_plane {
    unsigned int id;
    char name[FAILLIST_VALIDATED_HEADER_TYPE_PLANE_MAX_SIZE];
};

static const struct type_plane type_planes[] = {
        {0x0140, "Airbus A320"},
        {0x014A, "Airbus A330"},
        {0x015E, "Airbus A350"},
        {0x017C, "Airbus A380"},
        {0x0190, "Airbus A400M"},
        {0x0127, "Airbus CASA C-295"},
        {0x02E1, "Boeing 737"},
        {0x02EB, "Boeing 747"},
        {0x02FF, "Boeing 767"},
        {0x0309, "Boeing 777"},
        {0x0313, "Boeing 787"}
};

int faillist_valid_header_type_plane(
        faillist_validated_data_header_t *header,
        unsigned int type_plane
) {
    if (header == NULL) {
        return EXIT_FAILURE;
    }

    for (unsigned int i = 0; i < 11; i++) { // loop over all type_planes element

        if (type_planes[i].id == type_plane) {

            // the type_plane is valid and the matching type plane name will be copied to the header structure
            strcpy(header->type_plane, type_planes[i].name);

            return EXIT_SUCCESS;
        }
    }
    return EXIT_FAILURE;
}
