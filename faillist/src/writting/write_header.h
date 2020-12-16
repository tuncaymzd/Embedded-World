#ifndef WRITE_HEADER_H
#define WRITE_HEADER_H

#include "../data/faillist_validated_data_header.h"

int write_header(struct faillist_validated_data_header* data, int fd);

#endif //WRITE_HEADER_H
