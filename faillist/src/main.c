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
    error[2] = strdup("0x00000002");
    error[3] = strdup("0x00001000");
    error[4] = strdup("0x5c862eec");
    error[5] = strdup("0x00002004");
    error[6] = strdup("0x00000003");
    error[7] = strdup("0x0000000c");
    error[8] = strdup("ABCDEFGHIXYZ");
    error[9] = strdup("0x00001004");
    error[10] = strdup("0x5c862eec");
    error[11] = strdup("0x00002004");
    error[12] = strdup("0x00000003");
    error[13] = strdup("0x0000000c");
    error[14] = strdup("ABCDEFGHIXYZ");
    error_report(error);
    return 0;
}
