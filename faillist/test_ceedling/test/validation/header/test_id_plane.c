//
// Created by Tuncay Turkoglu on 17/03/2019.
//

/*******************************************************************************
 *    INCLUDED FILES
 ******************************************************************************/

//-- unity: unit test framework
#include "unity.h"

//-- module being tested : id_plane
#include "id_plane.h"


/*******************************************************************************
 *    DEFINITIONS
 ******************************************************************************/

/*******************************************************************************
 *    PRIVATE TYPES
 ******************************************************************************/

/*******************************************************************************
 *    PRIVATE DATA
 ******************************************************************************/
unsigned char id_plane[12];
unsigned char id_plane2[12];
unsigned char id_plane_null[12];

/*******************************************************************************
 *    PRIVATE FUNCTIONS
 ******************************************************************************/


/*******************************************************************************
 *    SETUP, TEARDOWN
 ******************************************************************************/

void setUp(void)
{
    strcpy(id_plane,"SU-ABB");
    strcpy(id_plane2, "SU-ABB-ABCDEFGH");
    strcpy(id_plane_null, NULL);
}

void tearDown(void)
{
}

/*******************************************************************************
 *    TESTS
 ******************************************************************************/

void test_faillist_valid_header_id_plane_is_valid(void)
{
    faillist_validated_data_header_t hp;
    TEST_ASSERT_EQUAL_STRING(id_plane, "SU-ABB");
    TEST_ASSERT_EQUAL_STRING(id_plane2, "SU-ABB-ABCDEFGH");
    TEST_ASSERT_EQUAL_INT(faillist_valid_header_id_plane(&hp, id_plane), 1);
    TEST_ASSERT_EQUAL_INT(faillist_valid_header_id_plane(&hp, id_plane_null), 0);
    TEST_ASSERT_EQUAL_INT(faillist_valid_header_id_plane(&hp, id_plane_2), 0);
}

