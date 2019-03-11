#ifndef FAILLIST_PARSING_FAILURE_COMMENT_FAILURE_SIZE_H_
#define FAILLIST_PARSING_FAILURE_COMMENT_FAILURE_SIZE_H_

/**
 * \file faillist_parse_comment_failure_size.h
 * \author Turkoglu Tuncay
 * \brief this function parse and initialise comment_failure_size
 * \fn unsigned int faillist_parse_level_criticity(char faillist_ptr[])
 * \param faillist_ptr represent input
 * \return if the parsing fails result equals 0 else result equals comment_failure_size
 *
 * This function is used by faillist_parse_failure. He take comment_failure_size and initilialise the structure faillist_data_failure.
 *
 */
int faillist_parse_comment_failure_size(unsigned int res, char hex[]);

#endif //FAILLIST_PARSING_FAILURE_COMMENT_FAILURE_SIZE_H_