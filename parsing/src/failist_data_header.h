#ifndef FAILIST_DATA_HEADER
#define FAILIST_DATA_HEADER

typedef struct
{
    unsigned char id_plane[12];
    unsigned int type_plane;
    unsigned int nb_failures;
} failist_data_header;

#endif