#include "id_plane.h"

int faillist_parse_id_plane(unsigned char elem[12], char faillist_ptr[]) {
    int i = 0;

    while (faillist_ptr[i] != '\0') {
        if (i == 11) {
            return 0;
        }
        elem[i] = faillist_ptr[i];
        i++;
    }
    return 1;
}
