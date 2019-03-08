#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "../data/validated_data_failure.h"

int write_failure(struct faillist_validated_data_failure* data, int fd) {
    int fw;
    fw = write(fd, "---------\n", 10);
    if (!fw) {
      perror("Can't write here");
      return EXIT_FAILURE;
    }
    fw = write(fd, "FAILURE", 7);
    if (!fw) {
      perror("Can't write here");
      return EXIT_FAILURE;
    }
    char buffer[20];
    snprintf(buffer , 10, "%d", data->nb_failure);
    fw = write(fd, buffer, strlen(buffer));
    if (!fw) {
      perror("Can't write here");
      return EXIT_FAILURE;
    } 
    fw = write(fd, ": ", 2);
    if (!fw) {
      perror("Can't write here");
      return EXIT_FAILURE;
    } 
    char buffer2[20];
    snprintf(buffer2 , 10, "%d", data->id_failure);
    fw = write(fd, buffer2, strlen(buffer2));
    if (!fw) {
      perror("Can't write here");
      return EXIT_FAILURE;
    }
    fw = write(fd, "\n", 1);
    if (!fw) {
      perror("Can't write here");
      return EXIT_FAILURE;
    }

    fw = write(fd, "TIME: ", 6);
    if (!fw) {
      perror("Can't write here");
      return EXIT_FAILURE;
    }
    fw = write(fd, data->datetime, strlen(data->datetime));
    if (!fw) {
      perror("Can't write here");
      return EXIT_FAILURE;
    }
    fw = write(fd, "\n", 1);
    if (!fw) {
      perror("Can't write here");
      return EXIT_FAILURE;
    }

    fw = write(fd, "COMPENENT FAILURE: ", 19);
    if (!fw) {
      perror("Can't write here");
      return EXIT_FAILURE;
    }
    fw = write(fd, data->component_failure, strlen(data->component_failure));
    if (!fw) {
      perror("Can't write here");
      return EXIT_FAILURE;
    }
    fw = write(fd, "\n", 1);
    if (!fw) {
      perror("Can't write here");
      return EXIT_FAILURE;
    }

    fw = write(fd, "LEVEL CRITICITY: ", 17);
    if (!fw) {
      perror("Can't write here");
      return EXIT_FAILURE;
    }
    char buffer3[20];
    snprintf(buffer3 , 10, "%d", data->level_criticity);
    fw = write(fd, buffer3, strlen(buffer3));
    if (!fw) {
      perror("Can't write here");
      return EXIT_FAILURE;
    }
    fw = write(fd, "\n", 1);
    if (!fw) {
      perror("Can't write here");
      return EXIT_FAILURE;
    }

    fw = write(fd, "COMMENT: ", 9);
    if (!fw) {
      perror("Can't write here");
      return EXIT_FAILURE;
    }
    fw = write(fd, data->comment_failure, strlen(data->comment_failure));
    if (!fw) {
      perror("Can't write here");
      return EXIT_FAILURE;
    }
    fw = write(fd, "\n", 1);
    if (!fw) {
      perror("Can't write here");
      return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}