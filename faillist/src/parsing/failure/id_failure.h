#ifndef FAILLIST_PARSING_FAILURE_ID_FAILURE_H_
#define FAILLIST_PARSING_FAILURE_ID_FAILURE_H_

/**
 * \file faillist_parse_id_failure.h
 * \author Turkoglu Tuncay
 * \brief this function parse and initialise id_plane
 * \fn unsigned int faillist_parse_id_failure(char faillist_ptr[])
 * \param faillist_ptr represent input
 * \return if the parsing fails result equals 0 else result equals id_failure
 *
 * This function is used by faillist_parse_failure. He take id_failure and initilialise the structure faillist_data_failure.
 *
 */
unsigned int faillist_parse_id_failure(char faillist_ptr[]);

#endif //FAILLIST_PARSING_FAILURE_ID_FAILURE_H_