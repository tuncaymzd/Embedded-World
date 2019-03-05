#include "failist_data_header.h"
#include "failist_parse_id_plane.h"
#include "failist_parse_type_plane.h"
#include "failist_parse_id_component.h"

/**
 * \file failist_parse_failure.h
 * \author Turkoglu Tuncay
 * \brief this function parse and initialise failure
 * \fn failist_data_header failist_parse_header(char **failist_ptr)
 * \param failist_ptr represent index of pointer in input
 * \return if the parsing fails result equals 0 else result equals 1
 *
 * This function initilialise the structure failist_data_header.
 *
 */
failist_data_header failist_parse_header(char **failist_ptr);