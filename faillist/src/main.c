#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validation/header.h"
#include "error_report.h"

int main() {
    char **error;
    error = malloc(100 * sizeof(char *));
    memset(error, '\0', 100 * sizeof(char *));
    error[0] = strdup("YA-AAA");
    error[1] = strdup("0x00000140");
    error[2] = strdup("0x00000001");
    error[3] = strdup("0x00001000");
    error[4] = strdup("0x5c862eec");
    error[5] = strdup("0x00002004");
    error[6] = strdup("0x00000003");
    error[7] = strdup("0x0000000b");
    error[8] = strdup("ABCDEFGHIXYZ");
    error_report(error);
    return 0;
}
