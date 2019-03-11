#include <stddef.h>
#include <stdlib.h>
#include "comment_failure.h"

int faillist_parse_comment_failure(unsigned char *elem, char *faillist_ptr){
    int i = 0;

    if (faillist_ptr == NULL || elem == NULL) {
        return EXIT_FAILURE;
    }
    while (faillist_ptr[i] != '\0') {
        if (i == 999) {
            return 0;
        }
        elem[i] = faillist_ptr[i];
        i++;
    }
    return 1;
}