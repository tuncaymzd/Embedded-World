#include "failist_parse_header.h"
#include "failist_parse_failure.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* test2[9];
    test2[0] = "totogfd";
    test2[1] = "123";
    test2[2] = "59600";

    test2[3] = "0001";
    test2[4] = "5002";
    test2[5] = "7003";
    test2[6] = "3";

    test2[7] = "un";

    test2[8] = "143424543965459";

    failist_data_header res = failist_parse_header(test2);
    failist_data_failure res2 = failist_parse_failure(test2);

    printf("%s", res.id_plane);
    printf("%u", res.type_plane);
    printf("%u", res.nb_failures);

    printf("%u", res2.id_failure);
    printf("%u", res2.id_component_failure);
    printf("%u", res2.level_criticity_failure);
    printf("%u", res2.comment_failure_size);

    printf("%s", res2.comment_failure);
    printf("%u", res2.datetime_failure);

    return EXIT_SUCCESS;
}
