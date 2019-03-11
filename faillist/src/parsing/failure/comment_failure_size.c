#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "comment_failure_size.h"

unsigned int faillist_parse_comment_failure_size(char hex[]) {
    long long decimal, place;
    int i = 0, val, len;
    decimal = 0;
    place = 1;

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