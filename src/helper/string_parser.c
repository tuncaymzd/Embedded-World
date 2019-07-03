#include <stdlib.h>
#include "string_parser.h"

int faillist_helper_string_parser(
        char **error,
        unsigned char dest[],
        int max
) {
    if (error == NULL || *error == NULL || dest == NULL || max <= 0) {
        return EXIT_FAILURE;
    }

    if (**error != '[') {
        return EXIT_FAILURE;
    }
    (*error)++;
    int i = 0;
    while (i < max && **error != ']' && **error != '\0') {
        dest[i] = **error;
        i++;
        (*error)++;
    }
    dest[i] = '\0';
    if (i >= max || **error != ']') {
        return EXIT_FAILURE;
    }
    (*error)++;
    return EXIT_SUCCESS;
}