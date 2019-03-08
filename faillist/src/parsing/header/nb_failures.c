#include <stdlib.h>
#include "nb_failures.h"

unsigned int faillist_parse_nb_failures(char faillist_ptr[]) {
    return atoi(faillist_ptr);
}
