#ifndef FAILLIST_PARSED_DATA_HEADER_H
#define FAILLIST_PARSED_DATA_HEADER_H

struct faillist_parsed_data_header {
    unsigned char id_plane[12];
    unsigned int type_plane;
    unsigned int nb_failures;
};

typedef struct faillist_parsed_data_header faillist_parsed_data_header_t;

#endif //FAILLIST_PARSED_DATA_HEADER_H
