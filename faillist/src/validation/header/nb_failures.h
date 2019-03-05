#ifndef FAILLIST_VALIDATION_HEADER_NB_FAILURES_H
#define FAILLIST_VALIDATION_HEADER_NB_FAILURES_H

/**
 * Validate the `nb_failures` parameter of the `faillist_parsed_data_header` structure.
 * The parameter should be greater or equal than 0 and lower or equal than 999.
 *
 * Return EXIT_SUCCESS in case of success and EXIT_FAILURE otherwise.
 *
 * @see `Faillist - Request for proposal V2.pdf` document for the specification
 *
 * @param nb_failures the `nb_failures` found in the `faillist_parsed_data_header` structure
 * @return EXIT_SUCCESS | EXIT_FAILURE
 */
int faillist_valid_header_nb_failures(unsigned int nb_failures);

#endif //FAILLIST_VALIDATION_HEADER_NB_FAILURES_H
