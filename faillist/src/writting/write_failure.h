#ifndef WRITE_FAILURE_H
#define WRITE_FAILURE_H

#include "../data/validated_data_failure.h"
/**
 * Write and format the informations give by the `validated_data_faillure` structure.
 * The parameters should be an `validated_data_faillure` and an int the fd.
 *
 * The parameters  `fd` and `validated_data_faillure` must not be null.
 *
 * Return EXIT_SUCCESS in case of success and EXIT_FAILURE otherwise.
 *
 * @see `Faillist - Request for proposal V2.pdf` document for the specification
 * @see `Embedded_World-Request_for_proposal-Annex1.xlsx`
 *
 * @param fd
 * @param data
 * @return EXIT_SUCCESS | EXIT_FAILURE
 */
int write_failure(int fd, struct faillist_validated_data_failure* data);

#endif //WRITE_FAILURE_H