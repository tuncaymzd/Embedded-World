#include <stdlib.h>
#include "hexa_parser.h"

int faillist_helper_hexa_parser(
        char **error,
        unsigned int *nb
) {
    if (error == NULL || *error == NULL || nb == NULL) {
        return EXIT_FAILURE;
    }

    if (**error != '[') {
        return EXIT_FAILURE;
    }
    (*error)++;
    if (**error != '0') {
        return EXIT_FAILURE;
    }
    (*error)++;
    if (**error != 'x') {
        return EXIT_FAILURE;
    }
    (*error)++;
    uint32_t val = 0;
    int i = 0;
    while (i < 9 && **error != ']' && **error != '\0') {
        uint8_t byte = (**error)++;

        if (byte >= '0' && byte <= '9') byte = byte - '0';
        else if (byte >= 'a' && byte <= 'f') byte = byte - 'a' + 10;
        else if (byte >= 'A' && byte <= 'F') byte = byte - 'A' + 10;
        else return EXIT_FAILURE;
        val = (val << 4) | (byte & 0xF);

        i++;
        (*error)++;
    }
    if (i >= 9 || **error != ']') {
        return EXIT_FAILURE;
    }
    *nb = val;
    (*error)++;
    return EXIT_SUCCESS;
}