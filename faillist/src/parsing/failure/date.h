#ifndef FAILLIST_PARSING_FAILURE_DATE_H_
#define FAILLIST_PARSING_FAILURE_DATE_H_

/**
 * \file faillist_parse_nb_failures.h
 * \author Turkoglu Tuncay
 * \brief this function parse and initialise nb_failures
 * \fn unsigned int faillist_parse_date(char faillist_ptr[])
 * \param faillist_ptr represent input
 * \return if the parsing fails result equals 0 else result equals nb_failures
 *
 * This function is used by faillist_parse_header. He take type_plane and initilialise the structure faillist_data_header.
 *
 */
int faillist_parse_date(unsigned int res, char hex[]);

#endif //FAILLIST_PARSING_FAILURE_DATE_H_
