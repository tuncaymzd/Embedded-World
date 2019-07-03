#ifndef FAILLIST_PARSED_DATA_FAILURE_H
#define FAILLIST_PARSED_DATA_FAILURE_H

#define FAILLIST_PARSED_DATA_FAILURE_COMMENT_MAX_SIZE 1000

struct faillist_parsed_data_failure {
    unsigned int id_failure;
    unsigned int datetime;
    unsigned int id_component;
    unsigned int level_criticity;
    unsigned int comment_failure_size;
    unsigned char comment_failure[FAILLIST_PARSED_DATA_FAILURE_COMMENT_MAX_SIZE];
};

typedef struct faillist_parsed_data_failure faillist_parsed_data_failure_t;

#endif //FAILLIST_PARSED_DATA_FAILURE_H
