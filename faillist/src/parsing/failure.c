#include "failure.h"

#include "parsing/failure/id_failure.h"
#include "parsing/failure/id_component.h"
#include "parsing/failure/level_criticity.h"
#include "parsing/failure/comment_failure_size.h"
#include "parsing/failure/comment_failure.h"
#include "parsing/failure/date.h"

faillist_parsed_data_failure_t faillist_parse_failure(char **faillist_ptr) {
    faillist_parsed_data_failure_t failure;

    failure.id_failure = faillist_parse_id_failure(faillist_ptr[3]);
    failure.datetime = faillist_parse_date(faillist_ptr[4]);
    failure.id_component = faillist_parse_id_component(faillist_ptr[5]);
    failure.level_criticity = faillist_parse_level_criticity(faillist_ptr[6]);
    failure.comment_failure_size = faillist_parse_comment_failure_size(faillist_ptr[7]);
    faillist_parse_comment_failure(failure.comment_failure, faillist_ptr[7]);

    return failure;
}

