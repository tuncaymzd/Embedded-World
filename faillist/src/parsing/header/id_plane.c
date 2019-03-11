#include <stddef.h>
#include <stdlib.h>
#include "id_plane.h"

int faillist_parse_id_plane(unsigned char elem[12], char faillist_ptr[]) {
    int i = 0;

    if (elem == NULL) {
        return EXIT_FAILURE;
    }
    while (faillist_ptr[i] != '\0') {
        if (i == 11) {
            return EXIT_FAILURE;
        }
        elem[i] = faillist_ptr[i];
        i++;
    }
    return EXIT_SUCCESS;
}
