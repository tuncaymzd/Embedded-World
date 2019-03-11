#include <math.h>
#include <string.h>
#include "type_plane.h"

unsigned int faillist_parse_type_plane(char hex[]) {
    unsigned int decimal;
    int i = 0, val, len;
    decimal = 0;

    len = strlen(hex);
    len--;

    for(i=0; hex[i]!='\0'; i++)
    {

        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(16, len);
        len--;
    }
    return decimal;
}