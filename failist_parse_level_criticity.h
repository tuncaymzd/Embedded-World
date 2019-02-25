/**
 * \file failist_parse_level_criticity.h
 * \author Turkoglu Tuncay
 * \brief this function parse and initialise level_criticity
 * \fn unsigned int failist_parse_level_criticity(char failist_ptr[])
 * \param failist_ptr represent input
 * \return if the parsing fails result equals 0 else result equals level_criticity
 *
 * This function is used by failist_parse_failure. He take level criticity and initilialise the structure failist_data_failure.
 *
 */
unsigned int failist_parse_level_criticity(char failist_ptr[]);
