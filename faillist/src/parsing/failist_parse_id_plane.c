#include "failist_parse_id_plane.h"

int failist_parse_id_plane(unsigned char elem[12], char failist_ptr[]) {
    int i = 0;

    while (failist_ptr[i] != '\0') {
        if (i == 11) {
            return 0;
        }
        elem[i] = failist_ptr[i];
        i++;
    }
    return 1;
}
