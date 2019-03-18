#include "open_file.h"
#include "unity.h"




void setUp(void)

{



}



void tearDown(void)

{

}











void test_open_file_is_valid(void)

{

    faillist_validated_data_header_t *d;

    __builtin___strcpy_chk (d->id_plane, "YA-ABB", __builtin_object_size (d->id_plane, 2 > 1 ? 1 : 0));



    UnityAssertEqualNumber((_U_SINT)((faillist_writing_open_file(d))), (_U_SINT)((0)), (((void *)0)), (_U_UINT)58, UNITY_DISPLAY_STYLE_INT);

}



void test_open_file_is_not_valid(void)

{



}



void test_open_file_null(void) {



}
