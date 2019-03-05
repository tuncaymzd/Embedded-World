#include "failist_data_failure.h"
#include "failist_parse_id_failure.h"
#include "failist_parse_level_criticity.h"
#include "failist_parse_comment_failure_size.h"
#include "failist_parse_comment_failure.h"
#include "failist_parse_date.h"

 /**
 * \file failist_parse_failure.h
 * \author Turkoglu Tuncay
 * \brief this function parse and initialise failure
 * \fn failist_data_failure failist_parse_failure(char **failist_ptr);
 * \param failist_data_header represent pointer of structure and he contains id_plane, type_plane and nb_failures
 * \param failist_ptr represent index of pointer in input
 * \return if the parsing fails result equals 0 else result equals 1
 *
 * This function initilialise the structure failist_data_failure.
 *
 */
failist_data_failure failist_parse_failure(char **failist_ptr);
