#include "id_plane.h"
#include "unity.h"




unsigned int a;

unsigned int b;

unsigned int c_null;

void setUp(void)

{

    c_null = ((void *)0);

}



void tearDown(void)

{

}











void test_faillist_valid_header_id_plane_is_valid(void)

{



}



void test_faillist_valid_header_id_plane_is_not_valid(void)

{

}



void test_faillist_valid_header_id_plane_null(void) {

    faillist_validated_data_header_t hps;

    UnityAssertEqualNumber((_U_SINT)((faillist_valid_header_id_plane(&hps, c_null))), (_U_SINT)((1)), (((void *)0)), (_U_UINT)66, UNITY_DISPLAY_STYLE_INT);

}
