#include <stdio.h>
#include <stdlib.h>

int open_file(struc data_header*) {
  fp = fopen("Extract_report_" + data_header.id_plane + "_" + data_header.datetime_failure + ".txt", "rw");
}
