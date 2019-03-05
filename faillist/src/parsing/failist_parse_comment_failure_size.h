/**
 * \file failist_parse_comment_failure_size.h
 * \author Turkoglu Tuncay
 * \brief this function parse and initialise comment_failure_size
 * \fn unsigned int failist_parse_level_criticity(char failist_ptr[])
 * \param failist_ptr represent input
 * \return if the parsing fails result equals 0 else result equals comment_failure_size
 *
 * This function is used by failist_parse_failure. He take comment_failure_size and initilialise the structure failist_data_failure.
 *
 */
unsigned int failist_parse_level_criticity(char failist_ptr[]);