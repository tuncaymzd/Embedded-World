#include <stdlib.h>
#include <unistd.h>
#include "writing/open_file.h"
#include "writing/header.h"
#include "writing/failure.h"
#include "validation/header.h"
#include "validation/failure.h"
#include "parsing/header.h"
#include "parsing/failure.h"
#include "data/parsed_data_header.h"
#include "data/validated_data_header.h"
#include "data/parsed_data_failure.h"
#include "data/validated_data_failure.h"
#include "error_report.h"

void error_report(char **error) {
    faillist_parsed_data_header_t hp;
    faillist_validated_data_header_t hv;
    int fd;

    hp = faillist_parse_header(error);
    if (faillist_valid_header(&hv, &hp) == EXIT_FAILURE) {
        return;
    }

    fd = faillist_writing_open_file(&hv);
    faillist_writing_header(&hv, fd);

    for (unsigned int i = 0; i < hp.nb_failures; i++) {
        faillist_parsed_data_failure_t fp;
        faillist_validated_data_failure_t fv;
        fp = faillist_parse_failure(error);
        if (faillist_valid_failure(&fv, &fp) == EXIT_FAILURE) {
            return;
        }
        fv.nb_failure = i + 1;
        faillist_writing_failure(&fv, fd);
    }

    close(fd);
}
