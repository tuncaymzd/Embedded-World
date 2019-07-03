#ifndef FAILLIST_WRITING_OPEN_FILE_H
#define FAILLIST_WRITING_OPEN_FILE_H

#include "data/validated_data_header.h"

/**
 * Use to open the file with the expected name file
 *
 * @param data Should be filled up with the input error
 * @return The file descriptor or -1 on error
 */
int faillist_writer_open_file(struct faillist_validated_data_header *data);

#endif //FAILLIST_WRITING_OPEN_FILE_H
