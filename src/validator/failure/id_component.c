#include <stdlib.h>
#include <memory.h>
#include "id_component.h"

struct id_component {
    unsigned int id;
    char name[FAILLIST_VALIDATED_FAILURE_ID_FAILURE_MAX_SIZE];
};

static const struct id_component id_components[] = {
        {0x2000, "Cockpit"},
        {0x2001, "Fuselage"},
        {0x2002, "Turbine engine"},
        {0x2003, "Wing"},
        {0x2004, "Winglet"},
        {0x2005, "Horizontal Stabilizer"},
        {0x2006, "Vertical Stabilizer"},
        {0x2007, "Rudder Winglet"},
        {0x2008, "Rudder"},
        {0x2009, "Elevator"},
        {0x200A, "Flaps"},
        {0x200B, "Aileron"},
        {0x200C, "Spoiler"},
        {0x200D, "Slats"},
};

int faillist_valid_failure_id_component(
        faillist_validated_data_failure_t *failure,
        unsigned int id_component
) {
    if (failure == NULL) {
        return EXIT_FAILURE;
    }

    for (unsigned int i = 0; i < 17; i++) { // loop over all id_components elements
        if (id_components[i].id == id_component) {

            // the id_component is valid and the matching component name will be copied to the header structure
            strcpy(failure->component_failure, id_components[i].name);

            return EXIT_SUCCESS;
        }
    }

    return EXIT_FAILURE;
}
