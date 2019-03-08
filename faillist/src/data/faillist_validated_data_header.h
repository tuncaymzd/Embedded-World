#ifndef FAILLIST_VALIDATED_DATA_HEADER_H
#define FAILLIST_VALIDATED_DATA_HEADER_H

#define FAILLIST_VALIDATED_HEADER_TYPE_PLANE_MAX_SIZE 50
#define FAILLIST_VALIDATED_HEADER_NATIONALITY_MAX_SIZE 50

struct faillist_validated_data_header {
    char id_plane[12];
    char type_plane[FAILLIST_VALIDATED_HEADER_TYPE_PLANE_MAX_SIZE];
    char nationality[FAILLIST_VALIDATED_HEADER_NATIONALITY_MAX_SIZE];
};

typedef struct faillist_validated_data_header faillist_validated_data_header_t;

#endif //FAILLIST_VALIDATED_DATA_HEADER_H
