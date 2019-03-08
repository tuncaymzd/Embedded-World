#include <stdlib.h>
#include <memory.h>
#include "id_failure.h"

struct id_failure {
    unsigned int id;
    char name[FAILLIST_VALIDATED_FAILURE_ID_FAILURE_MAX_SIZE];
};

static const struct id_failure id_failures[] = {
        {0x1000, "Null pointer error"},
        {0x1001, "Buffer overflow error"},
        {0x1002, "Resource leak error"},
        {0x1003, "Short circuiting error"},
        {0x1004, "Too_High voltage error"},
        {0x1005, "Mechanical failure error"},
        {0x1006, "Too_Hot temperature error"},
        {0x1007, "Too_Cold temperature error"},
        {0x1008, "Corrosion error"},
        {0x1009, "Engine fire error"},
        {0x100A, "Fuel fire error"},
        {0x100B, "Fuel leak error"},
        {0x100C, "Explosion explosion error"},
        {0x100D, "Hijacking hijacking error"},
        {0x100E, "Weather storm error"},
        {0x100F, "Sabotage sabotage error"},
        {0x1010, "Pilot error"}
};

int faillist_valid_failure_id_failure(faillist_validated_data_failure_t *failure, unsigned int id_failure) {
    if (failure == NULL) {
        return EXIT_FAILURE;
    }

    for (unsigned int i = 0; i < 17; i++) { // loop over all id_failures elements
        if (id_failures[i].id == id_failure) {

            // the id_failure is valid and the matching failure name will be copied to the header structure
            strcpy(failure->id_failure, id_failures[i].name);

            return EXIT_SUCCESS;
        }
    }

    return EXIT_FAILURE;
}
