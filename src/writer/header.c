#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "header.h"

int faillist_writer_header(struct faillist_validated_data_header *data, int fd) {
    if (write(fd, "FAILURE REPORT \n", 16) == -1) {
        perror("Can't write here");
        return EXIT_FAILURE;
    }
    if (write(fd, data->id_plane, strlen(data->id_plane)) == -1) {
        perror("Can't write here");
        return EXIT_FAILURE;
    }
    if (write(fd, "\n", 1) == -1) {
        perror("Can't write here");
        return EXIT_FAILURE;
    }
    if (write(fd, data->type_plane, strlen(data->type_plane)) == -1) {
        perror("Can't write here");
        return EXIT_FAILURE;
    }
    if (write(fd, "\n", 1) == -1) {
        perror("Can't write here");
        return EXIT_FAILURE;
    }
    if (write(fd, "PLANE NATIONALITY: ", 19) == -1) {
        perror("Can't write here");
        return EXIT_FAILURE;
    }
    if (write(fd, data->nationality, strlen(data->nationality)) == -1) {
        perror("Can't write here");
        return EXIT_FAILURE;
    }
    if (write(fd, "\n", 1) == -1) {
        perror("Can't write here");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}