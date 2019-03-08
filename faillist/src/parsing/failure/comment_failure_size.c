#include <stdlib.h>
#include "comment_failure_size.h"

unsigned int faillist_parse_comment_failure_size(char faillist_ptr[]) {
    return atoi(faillist_ptr);
}