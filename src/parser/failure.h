#ifndef FAILLIST_PARSING_FAILURE_H_
#define FAILLIST_PARSING_FAILURE_H_

#include "data/parsed_data_failure.h"

/**
* \file faillist_parse_failure.h
* \author Turkoglu Tuncay
* \brief this function parse and initialise failure
* \fn faillist_data_failure faillist_parse_failure(char **faillist_ptr);
* \param faillist_data_header represent pointer of structure and he contains id_plane, type_plane and nb_failures
* \param faillist_ptr represent index of pointer in input
* \return if the parsing fails result equals 0 else result equals 1
*
* This function initilialise the structure faillist_data_failure.
*
*/
int faillist_parse_failure(
        faillist_parsed_data_failure_t *header,
        char **error
);

#endif //FAILLIST_PARSING_FAILURE_H_