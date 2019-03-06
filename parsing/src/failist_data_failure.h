#ifndef FAILIST_DATA_FAILURE
#define FAILIST_DATA_FAILURE

#include "max_comment_size.h"

typedef struct
{
    unsigned int id_failure;
    unsigned int datetime_failure;
    unsigned int id_component_failure;
    unsigned int level_criticity_failure;
    unsigned int comment_failure_size;
    unsigned char comment_failure[MAX_COMMENT_SIZE];

} failist_data_failure;

#endif