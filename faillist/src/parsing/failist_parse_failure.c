#include "failist_parse_failure.h"

failist_data_failure failist_parse_failure(char **failist_ptr) {
    failist_data_failure failure;

    failure.id_failure = failist_parse_id_failure(failist_ptr[3]);
    failure.datetime_failure = failist_parse_date(failist_ptr[4]);
    failure.id_component_failure = failist_parse_id_component(failist_ptr[5]);
    failure.level_criticity_failure = failist_parse_level_criticity(failist_ptr[6]);
    failure.comment_failure_size = failist_parse_comment_failure_size(failist_ptr[7]);
    failist_parse_comment_failure(failure.comment_failure, failist_ptr[7]);

    return failure;
}

