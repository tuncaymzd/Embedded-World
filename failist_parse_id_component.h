/**
 * \file failist_parse_id_component.h
 * \author Turkoglu Tuncay
 * \brief this function parse and initialise id_component
 * \fn unsigned int failist_parse_id_component(char failist_ptr[])
 * \param failist_ptr represent input
 * \return if the parsing fails result equals 0 else result equals id_component
 *
 * This function is used by failist_parse_failure. He take id_component and initilialise the structure failist_data_failure.
 *
 */
unsigned int failist_parse_id_component(char failist_ptr[]);