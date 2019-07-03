#include <stdlib.h>
#include <unistd.h>
#include <printf.h>

#include "error_report.h"

#include "data/parsed_data_header.h"
#include "data/validated_data_header.h"
#include "data/parsed_data_failure.h"
#include "data/validated_data_failure.h"
#include "parser/header.h"
#include "parser/failure.h"
#include "validator/header.h"
#include "validator/failure.h"
#include "writer/open_file.h"
#include "writer/header.h"
#include "writer/failure.h"

void error_report(char *error) {
    faillist_parsed_data_header_t hp;
    faillist_validated_data_header_t hv;
    int fd;

    char *error_ptr_cpy = &(*error);
    char **error_ptr = &error_ptr_cpy;

    if (faillist_parse_header(&hp, error_ptr) == EXIT_FAILURE) {
        return;
    }
    if (faillist_valid_header(&hv, &hp) == EXIT_FAILURE) {
        return;
    }

    printf("Parsed Header:\n\tID PLANE: %s\n\tTYPE PLANE: %x\n\tNB FAILURES: %d\n",
           hp.id_plane, hp.type_plane, hp.nb_failures);
    printf("Validated Header:\n\tID PLANE: %s\n\tTYPE PLANE: %s\n\tNATIONALITY: %s\n",
           hv.id_plane, hv.type_plane, hv.nationality);

    fd = faillist_writer_open_file(&hv);
    if (fd == -1) {
        return;
    }

    faillist_writer_header(&hv, fd); // IGNORE ERRORS

    for (unsigned int i = 0; i < hp.nb_failures; i++) {
        faillist_parsed_data_failure_t fp;
        faillist_validated_data_failure_t fv;
        if (faillist_parse_failure(&fp, error_ptr) == EXIT_FAILURE) {
            return;
        }
        if (faillist_valid_failure(&fv, &fp) == EXIT_FAILURE) {
            return;
        }
        fv.nb_failure = i + 1;

        printf("Parsed Failure:\n\tID FAILURE: %d\n\tDATE: %d\n\tID COMPONENT: %d\n\tLEVEL: %d\n\tCOMMENT SIZE: %d\n\tCOMMENT: %s\n",
               fp.id_failure, fp.datetime, fp.id_component, fp.level_criticity, fp.comment_failure_size,
               fp.comment_failure);
        printf("Validated Failure:\n\tNB FAILURE: %d\n\tID FAILURE: %s\n\tDATE: %s\n\tCOMPONENT: %s\n\tLEVEL: %d\n\tCOMMENT: %s\n",
               fv.nb_failure, fv.id_failure, fv.datetime, fv.component_failure, fv.level_criticity, fv.comment_failure);

        faillist_writer_failure(&fv, fd); // IGNORE ERRORS
    }

    close(fd);
}
