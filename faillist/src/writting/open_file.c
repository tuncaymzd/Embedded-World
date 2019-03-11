#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include "../data/validated_data_header.h"

int open_file(struct faillist_validated_data_header* data) {
  char buf[1024];
  int fd;

  time_t now = time(NULL);
  if (now == -1) { 
    return EXIT_FAILURE;
  }
  char buf_date[50];
  strftime(buf_date, 50, "%Y_%m_%d_%H_%M_%S", gmtime(&now));

  strcpy(buf, "Extract_report_");
  strcat(buf, data->id_plane);
  strcat(buf, "_");
  strcat(buf, buf_date);
  strcat(buf, ".txt");

  fd = open(buf, O_CREAT | O_WRONLY, 777);
  if (fd == -1) {
    perror("Can't open the file");  
  }
  return fd;
}