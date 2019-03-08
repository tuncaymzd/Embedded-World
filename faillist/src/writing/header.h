#ifndef FAILLIST_WRITING_HEADER_H
#define FAILLIST_WRITING_HEADER_H

#include "data/validated_data_header.h"

int faillist_writing_header(struct faillist_validated_data_header* data, int fd);

#endif //FAILLIST_WRITING_HEADER_H