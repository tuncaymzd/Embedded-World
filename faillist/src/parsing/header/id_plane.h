#ifndef FAILLIST_PARSING_HEADER_ID_PLANE_H_
#define FAILLIST_PARSING_HEADER_ID_PLANE_H_

 /**
 * \file faillist_parse_id_plane.h
 * \author Turkoglu Tuncay
 * \brief this function parse and initialise id_plane
 * \fn int faillist_parse_id_plane(struct faillist_data_header*, char **faillist_ptr)
 * \param unsigned char elem[12] represent id_plane
 * \param faillist_ptr represent input
 * \return if the parsing fails result equals 0 else result equals 1
 *
 * This function is used by faillist_parse_header. He take id_plane and initilialise the structure faillist_data_header.
 *
 */
int faillist_parse_id_plane(unsigned char elem[12], char faillist_ptr[]);

#endif //FAILLIST_PARSING_HEADER_ID_PLANE_H_