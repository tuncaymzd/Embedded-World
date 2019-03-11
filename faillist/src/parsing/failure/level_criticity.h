#ifndef FAILLIST_PARSING_FAILURE_LEVEL_CRITICITY_H_
#define FAILLIST_PARSING_FAILURE_LEVEL_CRITICITY_H_

/**
 * \file faillist_parse_level_criticity.h
 * \author Turkoglu Tuncay
 * \brief this function parse and initialise level_criticity
 * \fn unsigned int faillist_parse_level_criticity(char faillist_ptr[])
 * \param faillist_ptr represent input
 * \return if the parsing fails result equals 0 else result equals level_criticity
 *
 * This function is used by faillist_parse_failure. He take level criticity and initilialise the structure faillist_data_failure.
 *
 */
int faillist_parse_level_criticity(unsigned int res, char hex[]);

#endif //FAILLIST_PARSING_FAILURE_LEVEL_CRITICITY_H_
