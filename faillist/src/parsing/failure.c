#include "failure.h"

#include "parsing/failure/id_failure.h"
#include "parsing/failure/id_component.h"
#include "parsing/failure/level_criticity.h"
#include "parsing/failure/comment_failure_size.h"
#include "parsing/failure/comment_failure.h"
#include "parsing/failure/date.h"

faillist_parsed_data_failure_t faillist_parse_failure(char **faillist_ptr, int i) {
    faillist_parsed_data_failure_t failure;

    failure.id_failure = faillist_parse_id_failure(i, faillist_ptr[i * 6 + 3]);
    failure.datetime = faillist_parse_date(i, faillist_ptr[i * 6 + 3 + 1]);
    failure.id_component = faillist_parse_id_component(i, faillist_ptr[i * 6 + 3 + 2]);
    failure.level_criticity = faillist_parse_level_criticity(i, faillist_ptr[i * 6 + 3 + 3]);
    failure.comment_failure_size = faillist_parse_comment_failure_size(i, faillist_ptr[i * 6 + 3 + 4]);
    faillist_parse_comment_failure(failure.comment_failure, faillist_ptr[i * 6 + 3 + 5]);
    return failure;
}

