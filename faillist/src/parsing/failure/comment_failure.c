#include "comment_failure.h"

int faillist_parse_comment_failure(unsigned char *elem, char *faillist_ptr){
    int i = 0;

    while (faillist_ptr[i] != '\0') {
        if (i == 999) {
            return 0;
        }
        elem[i] = faillist_ptr[i];
        i++;
    }
    return 1;
}