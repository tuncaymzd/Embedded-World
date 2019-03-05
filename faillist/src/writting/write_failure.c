#include <stdio.h>
#include <stdlib.h>

int write_failure(struct data_failure*, int fd) {
    fprintf(fd, "%s.%i.%s.%s\n", "FAILURE",data_failure.nb_failure,": ", data_failure.id_failure);
    fprintf(fd, "%s.%s\n", "TIME: ", data_failure.datetime_failure);
    fprintf(fd, "%s.%s\n", "COMPENENT FAILURE: ", data_failure.id_component_failure);
    fprintf(fd, "%s.%i\n", "LEVEL CRITICITY :", data_failure.level_criticity_failure);
    fprintf(fd, "%s.%s\n", "COMMENT :", data_failure.comment_failure);
}
