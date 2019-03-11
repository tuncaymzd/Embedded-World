#include "failure.h"

#include "parsing/failure/id_failure.h"
#include "parsing/failure/id_component.h"
#include "parsing/failure/level_criticity.h"
#include "parsing/failure/comment_failure_size.h"
#include "parsing/failure/comment_failure.h"
#include "parsing/failure/date.h"

faillist_parsed_data_failure_t faillist_parse_failure(char **faillist_ptr, int i) {
    faillist_parsed_data_failure_t failure;

    faillist_parse_id_failure(failure.id_failure, faillist_ptr[i * 6 + 3]);
    faillist_parse_date(failure.datetime, faillist_ptr[i * 6 + 3 + 1]);
    faillist_parse_id_component(failure.id_component, faillist_ptr[i * 6 + 3 + 2]);
    faillist_parse_level_criticity(failure.level_criticity, faillist_ptr[i * 6 + 3 + 3]);
    faillist_parse_comment_failure_size(failure.comment_failure_size, faillist_ptr[i * 6 + 3 + 4]);
    faillist_parse_comment_failure(failure.comment_failure, faillist_ptr[i * 6 + 3 + 5]);
    return failure;
}

