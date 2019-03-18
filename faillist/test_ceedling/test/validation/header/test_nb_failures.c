//
// Created by Tuncay Turkoglu on 17/03/2019.
//

/*******************************************************************************
 *    INCLUDED FILES
 ******************************************************************************/

//-- unity: unit test framework
#include "unity.h"

//-- module being tested : id_plane
#include <string.h>
#include "nb_failures.h"


/*******************************************************************************
 *    DEFINITIONS
 ******************************************************************************/

/*******************************************************************************
 *    PRIVATE TYPES
 ******************************************************************************/

/*******************************************************************************
 *    PRIVATE DATA
 ******************************************************************************/

unsigned int nb2;
unsigned int nb_null;

/*******************************************************************************
 *    PRIVATE FUNCTIONS
 ******************************************************************************/


/*******************************************************************************
 *    SETUP, TEARDOWN
 ******************************************************************************/

void setUp(void)
{
    nb2 = 1000;
    nb_null = NULL;
}

void tearDown(void)
{
}

/*******************************************************************************
 *    TESTS
 ******************************************************************************/

void test_faillist_valid_header_nb_failures_is_valid(void)
{
    int i = 1;
    while (i < 1000) {
        TEST_ASSERT_EQUAL_INT(faillist_valid_header_nb_failures(i), 0);
        i++;
    }
}

void test_faillist_valid_header_nb_failures_is_not_valid(void)
{
    TEST_ASSERT_EQUAL_INT(faillist_valid_header_nb_failures(nb2), 1);
}

void test_faillist_valid_header_nb_failures_null(void) {
    TEST_ASSERT_EQUAL_INT(faillist_valid_header_nb_failures(nb_null), 1);
}
