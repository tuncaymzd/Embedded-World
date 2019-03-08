#ifndef FAILLIST_PARSING_FAILURE_COMMENT_FAILURE_H_
#define FAILLIST_PARSING_FAILURE_COMMENT_FAILURE_H_

/**
* \file faillist_parse_comment_failure.h
* \author Turkoglu Tuncay
* \brief this function parse and initialise comment_failure
* \fn int faillist_parse_comment_failure(unsigned char elem[MAX_COMMENT_SIZE], char faillist_ptr[])
* \param unsigned char elem[12] represent comment_failure
* \param faillist_ptr represent input
* \return if the parsing fails result equals 0 else result equals 1
*
* This function is used by faillist_parse_failure. He take comment_failure and initilialise the structure faillist_data_failure.
*
*/
int faillist_parse_comment_failure(unsigned char *elem, char *faillist_ptr);

#endif //FAILLIST_PARSING_FAILURE_COMMENT_FAILURE_H_