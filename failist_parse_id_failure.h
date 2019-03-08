/**
 * \file failist_parse_id_failure.h
 * \author Turkoglu Tuncay
 * \brief this function parse and initialise id_plane
 * \fn unsigned int failist_parse_id_failure(char failist_ptr[])
 * \param failist_ptr represent input
 * \return if the parsing fails result equals 0 else result equals id_failure
 *
 * This function is used by failist_parse_failure. He take id_failure and initilialise the structure failist_data_failure.
 *
 */
unsigned int failist_parse_id_failure(char failist_ptr[]);