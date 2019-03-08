#ifndef WRITE_FAILURE_H
#define WRITE_FAILURE_H

#include "../data/validated_data_failure.h"

int write_failure(struct faillist_validated_data_failure* data, int fd);

#endif //WRITE_FAILURE_H