#include "failist_parse_header.h"
#include "failist_parse_failure.h"
#include "failist_string_to_array.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*
    char* test2[9];

    test2[0] = "YA-ABC";
    test2[1] = "0x0140";
    test2[2] = "0x0240";

    test2[3] = "0x0540";
    test2[4] = "0x0040";
    test2[5] = "5";
    test2[6] = "3";

    test2[7] = "XZF";

    test2[8] = "1499445395929";

    failist_data_header res = failist_parse_header(test2);
    failist_data_failure res2 = failist_parse_failure(test2);

    printf("%s\n", res.id_plane);
    printf("%u\n", res.type_plane);
    printf("%u\n", res.nb_failures);

    printf("%u\n", res2.id_failure);
    printf("%u\n", res2.id_component_failure);
    printf("%u\n", res2.level_criticity_failure);
    printf("%u\n", res2.comment_failure_size);

    printf("%s\n", res2.comment_failure);
    printf("%u\n", res2.datetime_failure); */

    char**res;
    res = failist_string_to_array("YA-ABC\n0x0140\n0x0240\n0x0540\n1499445395929\n0x0040\n5\n3\nXZF\n", "\n");



    printf("%s\n",res[0]);
    printf("%s\n",res[1]);
    printf("%s\n",res[2]);
    printf("%s\n",res[3]);
    printf("%s\n",res[4]);
    printf("%s\n",res[5]);
    printf("%s\n",res[6]);
    printf("%s\n",res[7]);
    printf("%s\n",res[8]);

    return EXIT_SUCCESS;
}
