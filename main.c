#include "failist_data_header.h"
#include "failist_data_failure.h"
#include "failist_parse_id_plane.h"
#include "failist_parse_type_plane.h"
#include "failist_parse_id_component.h"
#include "failist_parse_level_criticity.h"
#include "failist_parse_comment_failure_size.h"
//#include "failist_parse_comment_failure.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    failist_data_header elem;
    char test[] = "toto";
    char test2[] = "123333";
    char test3[] = "59600";

    failist_data_failure failure;
    char fail[] = "401";
    char fail2[] = "40002";
    char fail3[] = "333333";
    char fail4[] = "555905";

    //unsigned char fail5[] = "123";
    unsigned char fail6[] = "456";

    failist_parse_id_plane(elem.id_plane, test);
    elem.type_plane = failist_parse_type_plane(test2);
    elem.nb_failures = failist_parse_nb_failures(test3);

    failure.id_failure = failist_parse_id_failure(fail);
    failure.id_component_failure = failist_parse_id_component(fail2);
    failure.level_criticity_failure = failist_parse_level_criticity(fail3);
    failure.comment_failure_size = failist_parse_comment_failure_size(fail4);
    //failist_parse_comment_failure(fail.comment_failure, fail5[0]);
    //failist_parse_comment_failure(fail.comment_failure, fail5[1]);

    printf("%s", elem.id_plane);
    printf("%u", elem.type_plane);
    printf("%u", elem.nb_failures);

    printf("%u", failure.id_failure);
    printf("%u", failure.id_component_failure);
    printf("%u", failure.level_criticity_failure);
    printf("%u", failure.comment_failure_size);

    //printf("%s", fail.comment_failure[0]);
    //printf("%s", fail.comment_failure[1]);

   return EXIT_SUCCESS;
}
