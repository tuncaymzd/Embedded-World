#ifndef FAILLIST_WRITING_FAILURE_H
#define FAILLIST_WRITING_FAILURE_H

#include "data/validated_data_failure.h"

/**
 * Used to write (append) one failure in the given file
 *
 * @param data Should be filled with the input error
 * @param fd The file
 * @return EXIT_SUCCESS | EXIT_FAILURE
 */
int faillist_writer_failure(struct faillist_validated_data_failure *data, int fd);

#endif //FAILLIST_WRITING_FAILURE_H