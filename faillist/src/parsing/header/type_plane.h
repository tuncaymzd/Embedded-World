#ifndef FAILLIST_PARSING_HEADER_TYPE_PLANE_H_
#define FAILLIST_PARSING_HEADER_TYPE_PLANE_H_

/**
 * \file faillist_parse_type_plane.h
 * \author Turkoglu Tuncay
 * \brief this function parse and initialise type_plane
 * \fn unsigned int faillist_parse_type_plane(char faillist_ptr[])
 * \param faillist_ptr represent input
 * \return if the parsing fails result equals 0 else result equals type_plane
 *
 * This function is used by faillist_parse_header. He take type_plane and initilialise the structure faillist_data_header.
 *
 */
int faillist_parse_type_plane(unsigned int res, char hex[]);

#endif //FAILLIST_PARSING_HEADER_TYPE_PLANE_H_