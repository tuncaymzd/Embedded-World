#include <stdlib.h>
#include "nb_failures.h"

int faillist_valid_header_nb_failures(
        unsigned int nb_failures
) {
    if (nb_failures <= 999) { // nb_failures can't be < 0 since it's an unsigned
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}
