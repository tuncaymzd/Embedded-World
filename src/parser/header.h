#ifndef FAILLIST_PARSING_HEADER_H_
#define FAILLIST_PARSING_HEADER_H_

#include "data/parsed_data_header.h"

/**
 * \file faillist_parse_failure.h
 * \author Turkoglu Tuncay
 * \brief this function parse and initialise failure
 * \fn faillist_data_header faillist_parse_header(char **faillist_ptr)
 * \param faillist_ptr represent index of pointer in input
 * \return if the parsing fails result equals 0 else result equals 1
 *
 * This function initilialise the structure faillist_data_header.
 *
 */
int faillist_parse_header(
        faillist_parsed_data_header_t *header,
        char **error
);

#endif //FAILLIST_PARSING_HEADER_H_