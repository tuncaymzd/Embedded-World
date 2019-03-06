//
// Created by Tuncay Turkoglu on 06/03/2019.
//

#ifndef EMBEDDED_WORLD_FAILIST_STRING_TO_ARRAY_H
#define EMBEDDED_WORLD_FAILIST_STRING_TO_ARRAY_H

#include <string.h>
/**
* \file failist_string_to_array.h
* \author Turkoglu Tuncay
* \brief this function convert string to char**
* \fn int failist_string_to_array(char* entry)
* \param char* entry represent input of program
* \return if the parsing fails result equals 0 else result equals 1
*
*/

char **failist_string_to_array(char *string, const char delimiter);
#endif //EMBEDDED_WORLD_FAILIST_STRING_TO_ARRAY_H
