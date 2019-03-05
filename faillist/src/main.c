#include <stdio.h>
#include <stdlib.h>
#include "validation/header.h"

int main() {
    faillist_parsed_data_header_t parsed_header = {
            "7T-BED", 0x140, 0
    };
    faillist_validated_data_header_t validated_header;

    if (faillist_valid_header(&validated_header, &parsed_header) == EXIT_SUCCESS) {
        printf("Header is valid\n");
        printf("%s\n%s\n%s\n", validated_header.id_plane, validated_header.type_plane, validated_header.nationality);
    } else {
        printf("Header is invalid");
    }
    return 0;
}
