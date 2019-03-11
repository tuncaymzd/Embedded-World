#ifndef OPEN_FILE_H
#define OPEN_FILE_H

#include "../data/validated_data_header.h"
/**
 * Open or create a file with a specific format using the information of the `validated_data_header` and the current date
 *
 * The parameter `validated_data_header` must not be null.
 *
 * Return fd in case of success and -1 otherwise.
 *
 * @param fd
 * @param data
 * @return fd | -1
 */
int open_file(struct faillist_validated_data_header* data);

#endif //OPEN_FILE_H