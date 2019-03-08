/**
 * \file failist_parse_failure.h
 * \author Turkoglu Tuncay
 * \brief this function parse and initialise type_plane
 * \fn int failist_parse_failure(struct failist_data_header*, char **failist_ptr)
 * \param failist_data_header represent pointer of structure and he contains id_plane, type_plane and nb_failures
 * \param failist_ptr represent index of pointer in input
 * \return if the parsing fails result equals 0 else result equals 1
 *
 * This function is used by failist_parse_header. He take type_plane and initilialise the structure failist_data_header.
 *
 */
int failist_parse_header(struct failist_data_header*, char **failist_ptr);
