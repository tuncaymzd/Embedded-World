#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <time.h>
#include "open_file.h"

int faillist_writer_open_file(struct faillist_validated_data_header *data) {
    char buf[1024];
    char dateBuf[100];
    int fd;

    sprintf(dateBuf, "%ld", time(NULL));

    strcpy(buf, "Extract_report_");
    strcat(buf, data->id_plane);
    strcat(buf, "_");
    strcat(buf, dateBuf);
    strcat(buf, ".txt");

    fd = open(buf, O_CREAT | O_WRONLY, 777);
    if (fd == -1) {
        perror("Can't open the file");
    }
    return fd;
}
