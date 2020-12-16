#ifndef FAILLIST_VALIDATED_DATA_FAILURE_H
#define FAILLIST_VALIDATED_DATA_FAILURE_H

#define FAILLIST_VALIDATED_FAILURE_DATETIME_MAX_SIZE 100
#define FAILLIST_VALIDATED_FAILURE_COMPONENT_MAX_SIZE 100
#define FAILLIST_VALIDATED_FAILURE_COMMENT_MAX_SIZE 1000

struct faillist_validated_data_failure {
    unsigned int nb_failure;
    unsigned int id_failure;
    char datetime[FAILLIST_VALIDATED_FAILURE_DATETIME_MAX_SIZE];
    char component_failure[FAILLIST_VALIDATED_FAILURE_COMPONENT_MAX_SIZE];
    unsigned int level_criticity;
    char comment_failure[FAILLIST_VALIDATED_FAILURE_COMMENT_MAX_SIZE];
};

typedef struct faillist_validated_data_failure faillist_validated_data_failure_t;

#endif //FAILLIST_VALIDATED_DATA_FAILURE_H
