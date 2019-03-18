#include "nb_failures.h"
#include "unity.h"




unsigned int nb2;

unsigned int nb_null;

void setUp(void)

{

    nb2 = 1000;

    nb_null = ((void *)0);

}



void tearDown(void)

{

}











void test_faillist_valid_header_nb_failures_is_valid(void)

{

    int i = 1;

    while (i < 1000){

        UnityAssertEqualNumber((_U_SINT)((faillist_valid_header_nb_failures(i))), (_U_SINT)((0)), (((void *)0)), (_U_UINT)59, UNITY_DISPLAY_STYLE_INT);

        i++;

    }

}



void test_faillist_valid_header_nb_failures_is_not_valid(void)

{

    UnityAssertEqualNumber((_U_SINT)((faillist_valid_header_nb_failures(nb2))), (_U_SINT)((1)), (((void *)0)), (_U_UINT)66, UNITY_DISPLAY_STYLE_INT);

}



void test_faillist_valid_header_nb_failures_null(void) {

    UnityAssertEqualNumber((_U_SINT)((faillist_valid_header_nb_failures(nb_null))), (_U_SINT)((1)), (((void *)0)), (_U_UINT)70, UNITY_DISPLAY_STYLE_INT);

}
