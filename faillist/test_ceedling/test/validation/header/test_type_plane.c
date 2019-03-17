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
#include "type_plane.h"


/*******************************************************************************
 *    DEFINITIONS
 ******************************************************************************/

/*******************************************************************************
 *    PRIVATE TYPES
 ******************************************************************************/

/*******************************************************************************
 *    PRIVATE DATA
 ******************************************************************************/
unsigned int type_plane;
unsigned int type_plane_not_good;
unsigned int type_plane_null;

/*******************************************************************************
 *    PRIVATE FUNCTIONS
 ******************************************************************************/


/*******************************************************************************
 *    SETUP, TEARDOWN
 ******************************************************************************/

void setUp(void)
{
    type_plane = 0x0140;
    type_plane_not_good = 0x444;
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
    TEST_ASSERT_EQUAL_INT(type_plane, 0x0140);
    TEST_ASSERT_EQUAL_INT(faillist_valid_header_type_plane(&hp, type_plane), 0);
    faillist_valid_header_type_plane(&hp, type_plane);
    TEST_ASSERT_EQUAL_STRING(hp.type_plane, "Airbus A320");
}

void test_faillist_valid_header_id_plane_is_not_valid(void)
{
    faillist_validated_data_header_t hps;
    TEST_ASSERT_EQUAL_INT(type_plane_not_good, 0x444);
    faillist_valid_header_type_plane(&hps, type_plane);
    TEST_ASSERT_NOT_EQUAL(hps.type_plane, "Airbus A320");
    TEST_ASSERT_NOT_EQUAL(hps.type_plane, "Airbus A330");
    TEST_ASSERT_NOT_EQUAL(hps.type_plane, "Airbus A350");
    TEST_ASSERT_NOT_EQUAL(hps.type_plane, "Airbus A380");
    TEST_ASSERT_NOT_EQUAL(hps.type_plane, "Airbus A400M");
    TEST_ASSERT_NOT_EQUAL(hps.type_plane, "Airbus CASA C-295");
    TEST_ASSERT_NOT_EQUAL(hps.type_plane, "Airbus 737");
    TEST_ASSERT_NOT_EQUAL(hps.type_plane, "Airbus 747");
    TEST_ASSERT_NOT_EQUAL(hps.type_plane, "Airbus 767");
    TEST_ASSERT_NOT_EQUAL(hps.type_plane, "Airbus 777");
    TEST_ASSERT_NOT_EQUAL(hps.type_plane, "Airbus 787");
}

void test_faillist_valid_header_id_plane_null(void) {
    faillist_validated_data_header_t hps;
    TEST_ASSERT_EQUAL(faillist_valid_header_type_plane(&hps, NULL), 1);
}
