#ifndef FAILLIST_WRITING_HEADER_H
#define FAILLIST_WRITING_HEADER_H

#include "data/validated_data_header.h"

/**
 * Used to write the header in the given file
 *
 * @param data Should be filled with the input error
 * @param fd The file
 * @return EXIT_SUCCESS | EXIT_FAILURE
 */
int faillist_writer_header(struct faillist_validated_data_header *data, int fd);

#endif //FAILLIST_WRITING_HEADER_H