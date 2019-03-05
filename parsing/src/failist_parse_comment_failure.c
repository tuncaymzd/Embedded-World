#include "failist_parse_comment_failure.h"

int failist_parse_comment_failure(unsigned char elem[MAX_COMMENT_SIZE], char failist_ptr[]){
    int i = 0;

    while (failist_ptr[i] != '\0') {
        if (i == 999) {
            return 0;
        }
        elem[i] = failist_ptr[i];
        i++;
    }
    return 1;
}