#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "helper/hexa_parser.h"
#include "date.h"

int faillist_parse_date(char **error, unsigned int *date) {
    if (error == NULL || *error == NULL || date == NULL) {
        return EXIT_FAILURE;
    }
    return faillist_helper_hexa_parser(error, date);
}
