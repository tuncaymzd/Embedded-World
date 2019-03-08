#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "header.h"

int faillist_writing_header(struct faillist_validated_data_header* data, int fd) {
  ssize_t fw;
  fw = write(fd, "FAILURE REPORT \n", 16);
  if (!fw) {
    perror("Can't write here");
    return EXIT_FAILURE;
  }
  fw = write(fd, data->id_plane, strlen(data->id_plane));
  fw = write(fd, "\n", 1);
  if (!fw) {
    perror("Can't write here");
    return EXIT_FAILURE;
  }
  fw = write(fd, data->type_plane, strlen(data->type_plane));
  fw = write(fd, "\n", 1);
  if (!fw) {
    perror("Can't write here");
    return EXIT_FAILURE;
  }
  fw = write(fd, "PLANE NATIONALITY: ", 19);
  if (!fw) {
    perror("Can't write here");
    return EXIT_FAILURE;
  }
  fw = write(fd, data->nationality, strlen(data->nationality));
  fw = write(fd, "\n", 1);
  if (!fw) {
    perror("Can't write here");
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}