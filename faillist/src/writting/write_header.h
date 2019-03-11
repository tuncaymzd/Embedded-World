#ifndef WRITE_HEADER_H
#define WRITE_HEADER_H

#include "../data/validated_data_header.h"
/**
 * Write and format the informations give by the `validated_data_header` structure.
 * The parameters should be an `validated_data_header` and an int the fd.
 *
 * The parameters  `fd` and `validated_data_header` must not be null.
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
int write_header(int fd, struct faillist_validated_data_header* data);

#endif //WRITE_HEADER_H