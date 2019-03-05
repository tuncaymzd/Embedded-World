#include <stdio.h>
#include <stdlib.h>

int write_header(struct data_header*, int fd) {
  fprintf(fd, "%s\n","FAILURE REPORT \n" );
  fprintf(fd, "%s\n",data_header.id_plane);
  fprintf(fd, "%s\n",data_header.type_plane);
  fprintf(fd, "%s\n",data_header.nationality);
}
