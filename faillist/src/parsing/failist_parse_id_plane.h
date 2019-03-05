#include <stdio.h>
#include <stdlib.h>

 /**
 * \file failist_parse_id_plane.h
 * \author Turkoglu Tuncay
 * \brief this function parse and initialise id_plane
 * \fn int failist_parse_id_plane(struct failist_data_header*, char **failist_ptr)
 * \param unsigned char elem[12] represent id_plane
 * \param failist_ptr represent input
 * \return if the parsing fails result equals 0 else result equals 1
 *
 * This function is used by failist_parse_header. He take id_plane and initilialise the structure failist_data_header.
 *
 */
int failist_parse_id_plane(unsigned char elem[12], char failist_ptr[]);
