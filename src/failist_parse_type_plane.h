/**
 * \file failist_parse_type_plane.h
 * \author Turkoglu Tuncay
 * \brief this function parse and initialise type_plane
 * \fn unsigned int failist_parse_type_plane(char failist_ptr[])
 * \param failist_ptr represent input
 * \return if the parsing fails result equals 0 else result equals type_plane
 *
 * This function is used by failist_parse_header. He take type_plane and initilialise the structure failist_data_header.
 *
 */
unsigned int failist_parse_type_plane(char failist_ptr[]);

