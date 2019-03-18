#include "type_plane.h"
#include "unity.h"




unsigned int type_plane;

unsigned int type_plane_not_good;

unsigned int type_plane_null;

void setUp(void)

{

    type_plane = 0x0140;

    type_plane_not_good = 0x444;

}



void tearDown(void)

{

}











void test_faillist_valid_header_type_plane_is_valid(void)

{

    faillist_validated_data_header_t hp;

    UnityAssertEqualNumber((_U_SINT)((type_plane)), (_U_SINT)((0x0140)), (((void *)0)), (_U_UINT)58, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((faillist_valid_header_type_plane(&hp, type_plane))), (_U_SINT)((0)), (((void *)0)), (_U_UINT)59, UNITY_DISPLAY_STYLE_INT);

    faillist_valid_header_type_plane(&hp, type_plane);

    UnityAssertEqualString((const char*)(hp.type_plane), (const char*)("Airbus A320"), (((void *)0)), (_U_UINT)61);

}



void test_faillist_valid_header_type_plane_is_not_valid(void)

{

    faillist_validated_data_header_t hps;

    UnityAssertEqualNumber((_U_SINT)((type_plane_not_good)), (_U_SINT)((0x444)), (((void *)0)), (_U_UINT)67, UNITY_DISPLAY_STYLE_INT);

    faillist_valid_header_type_plane(&hps, type_plane);

    if (((hps.type_plane) != ("Airbus A320"))) {} else {UnityFail( (" Expected Not-Equal"), (_U_UINT)(_U_UINT)69);;};

    if (((hps.type_plane) != ("Airbus A330"))) {} else {UnityFail( (" Expected Not-Equal"), (_U_UINT)(_U_UINT)70);;};

    if (((hps.type_plane) != ("Airbus A350"))) {} else {UnityFail( (" Expected Not-Equal"), (_U_UINT)(_U_UINT)71);;};

    if (((hps.type_plane) != ("Airbus A380"))) {} else {UnityFail( (" Expected Not-Equal"), (_U_UINT)(_U_UINT)72);;};

    if (((hps.type_plane) != ("Airbus A400M"))) {} else {UnityFail( (" Expected Not-Equal"), (_U_UINT)(_U_UINT)73);;};

    if (((hps.type_plane) != ("Airbus CASA C-295"))) {} else {UnityFail( (" Expected Not-Equal"), (_U_UINT)(_U_UINT)74);;};

    if (((hps.type_plane) != ("Airbus 737"))) {} else {UnityFail( (" Expected Not-Equal"), (_U_UINT)(_U_UINT)75);;};

    if (((hps.type_plane) != ("Airbus 747"))) {} else {UnityFail( (" Expected Not-Equal"), (_U_UINT)(_U_UINT)76);;};

    if (((hps.type_plane) != ("Airbus 767"))) {} else {UnityFail( (" Expected Not-Equal"), (_U_UINT)(_U_UINT)77);;};

    if (((hps.type_plane) != ("Airbus 777"))) {} else {UnityFail( (" Expected Not-Equal"), (_U_UINT)(_U_UINT)78);;};

    if (((hps.type_plane) != ("Airbus 787"))) {} else {UnityFail( (" Expected Not-Equal"), (_U_UINT)(_U_UINT)79);;};

}



void test_faillist_valid_header_type_plane_null(void) {

    faillist_validated_data_header_t hps;

    UnityAssertEqualNumber((_U_SINT)((faillist_valid_header_type_plane(&hps, ((void *)0)))), (_U_SINT)((1)), (((void *)0)), (_U_UINT)84, UNITY_DISPLAY_STYLE_INT);

}
