#include <stdlib.h>
#include <time.h>
#include <memory.h>
#include "datetime.h"

int faillist_valid_failure_datetime(faillist_validated_data_failure_t *failure, unsigned int datetime) {
    if (failure == NULL) {
        return EXIT_FAILURE;
    }

    time_t now = time(NULL); // get the actual system time
    const time_t d = (time_t) datetime; // have to cache it to avoid BAD_ACCESS if we use the parameter with gmtime/strftime

    if (now == -1) { // the time(NULL) call has failed
        return EXIT_FAILURE;
    }

    if (d > now) { // the given datetime should not be greater than the actual system time
        return EXIT_FAILURE;
    }

    // the datetime parameter is valid, copy a human readable datetime to failure structure
    strftime(failure->datetime, FAILLIST_VALIDATED_FAILURE_DATETIME_MAX_SIZE, "%Y_%m_%d_%H_%M_%S", gmtime(&d));

    return EXIT_SUCCESS;
}
