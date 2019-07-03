#include <stdlib.h>
#include <string.h>
#include "error_report.h"

int main() {
    char error[] = "[YA-AAA][0x00000140][0x00000002][0x00001000][0x5c862eec][0x00002004][0x00000003][0x0000000c][ABCDEFGHIXYZ][0x00001004][0x5c862eec][0x00002004][0x00000003][0x0000000c][BITEBITEBITE]";
    error_report(error);
    return EXIT_SUCCESS;
}
