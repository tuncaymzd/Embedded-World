#include <stdio.h>
#include <stdlib.h>
#include "max_comment_size.h"

/**
* \file failist_parse_comment_failure.h
* \author Turkoglu Tuncay
* \brief this function parse and initialise comment_failure
* \fn int failist_parse_comment_failure(unsigned char elem[MAX_COMMENT_SIZE], char failist_ptr[])
* \param unsigned char elem[12] represent comment_failure
* \param failist_ptr represent input
* \return if the parsing fails result equals 0 else result equals 1
*
* This function is used by failist_parse_failure. He take comment_failure and initilialise the structure failist_data_failure.
*
*/
int failist_parse_comment_failure(unsigned char elem[MAX_COMMENT_SIZE], char failist_ptr[]);