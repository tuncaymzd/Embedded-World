#ifndef FAILLIST_PARSING_FAILURE_ID_COMPONENT_H_
#define FAILLIST_PARSING_FAILURE_ID_COMPONENT_H_

/**
 * \file faillist_parse_id_component.h
 * \author Turkoglu Tuncay
 * \brief this function parse and initialise id_component
 * \fn unsigned int faillist_parse_id_component(char faillist_ptr[])
 * \param faillist_ptr represent input
 * \return if the parsing fails result equals 0 else result equals id_component
 *
 * This function is used by faillist_parse_failure. He take id_component and initilialise the structure faillist_data_failure.
 *
 */
int faillist_parse_id_component(unsigned int res, char hex[]);

#endif //FAILLIST_PARSING_FAILURE_ID_COMPONENT_H_