#ifndef FAILLIST_VALIDATION_HEADER_H
#define FAILLIST_VALIDATION_HEADER_H

#include "data/parsed_data_header.h"
#include "data/validated_data_header.h"

int faillist_valid_header(faillist_validated_data_header_t *validated_header,
                          faillist_parsed_data_header_t *parsed_header);

#endif //FAILLIST_VALIDATION_HEADER_H
