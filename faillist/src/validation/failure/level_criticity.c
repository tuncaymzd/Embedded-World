#include <stdlib.h>
#include "level_criticity.h"

int faillist_valid_failure_level_criticity(faillist_validated_data_failure_t *failure, unsigned int level_criticity) {
    if (failure == NULL) {
        return EXIT_FAILURE;
    }

    if (level_criticity > 10) { // level_criticity can't be < 0 since it's an unsigned
        return EXIT_FAILURE;
    }

    failure->level_criticity = level_criticity;

    return EXIT_SUCCESS;
}
