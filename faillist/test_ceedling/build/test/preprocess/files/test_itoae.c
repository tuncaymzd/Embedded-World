#include "itoae.h"
#include "unity.h"


















static uint8_t _buf[ 20 ];

void _fill_with_0xff(void)

{

    int i;

    for (i = 0; i < sizeof(_buf); i++){

        _buf[i] = 0xff;

    }

}

void setUp(void)

{

}



void tearDown(void)

{

}















void test_basic( void )

{

    _fill_with_0xff();

    itoae(_buf, 123, 0, 0, '0');

    UnityAssertEqualString((const char*)("123"), (const char*)(_buf), (((void *)0)), (_U_UINT)95);



    _fill_with_0xff();

    itoae(_buf, -123, 0, 0, '0');

    UnityAssertEqualString((const char*)("-123"), (const char*)(_buf), (((void *)0)), (_U_UINT)99);

}



void test_width( void )

{

    _fill_with_0xff();

    itoae(_buf, 123, 0, 5, '0');

    UnityAssertEqualString((const char*)("00123"), (const char*)(_buf), (((void *)0)), (_U_UINT)106);



    _fill_with_0xff();

    itoae(_buf, 123, 0, 5, ' ');

    UnityAssertEqualString((const char*)("  123"), (const char*)(_buf), (((void *)0)), (_U_UINT)110);



    _fill_with_0xff();

    itoae(_buf, -123, 0, 5, '0');

    UnityAssertEqualString((const char*)("-00123"), (const char*)(_buf), (((void *)0)), (_U_UINT)114);



    _fill_with_0xff();

    itoae(_buf, -123, 0, 5, ' ');

    UnityAssertEqualString((const char*)("-  123"), (const char*)(_buf), (((void *)0)), (_U_UINT)118);

}



void test_dpp( void )

{

    _fill_with_0xff();

    itoae(_buf, 123, 1, 0, '0');

    UnityAssertEqualString((const char*)("12.3"), (const char*)(_buf), (((void *)0)), (_U_UINT)125);



    _fill_with_0xff();

    itoae(_buf, 123, 2, 0, '0');

    UnityAssertEqualString((const char*)("1.23"), (const char*)(_buf), (((void *)0)), (_U_UINT)129);



    _fill_with_0xff();

    itoae(_buf, 123, 3, 0, '0');

    UnityAssertEqualString((const char*)("0.123"), (const char*)(_buf), (((void *)0)), (_U_UINT)133);



    _fill_with_0xff();

    itoae(_buf, 123, 4, 0, '0');

    UnityAssertEqualString((const char*)("0.0123"), (const char*)(_buf), (((void *)0)), (_U_UINT)137);



    _fill_with_0xff();

    itoae(_buf, 123, 5, 0, '0');

    UnityAssertEqualString((const char*)("0.00123"), (const char*)(_buf), (((void *)0)), (_U_UINT)141);



    _fill_with_0xff();

    itoae(_buf, -123, 5, 0, '0');

    UnityAssertEqualString((const char*)("-0.00123"), (const char*)(_buf), (((void *)0)), (_U_UINT)145);

}



void test_width_and_dpp( void )

{

    _fill_with_0xff();

    itoae(_buf, 123, 0, 5, ' ');

    UnityAssertEqualString((const char*)("  123"), (const char*)(_buf), (((void *)0)), (_U_UINT)152);



    _fill_with_0xff();

    itoae(_buf, 123, 1, 5, ' ');

    UnityAssertEqualString((const char*)("  12.3"), (const char*)(_buf), (((void *)0)), (_U_UINT)156);



    _fill_with_0xff();

    itoae(_buf, 123, 2, 5, ' ');

    UnityAssertEqualString((const char*)("  1.23"), (const char*)(_buf), (((void *)0)), (_U_UINT)160);



    _fill_with_0xff();

    itoae(_buf, 123, 3, 5, ' ');

    UnityAssertEqualString((const char*)(" 0.123"), (const char*)(_buf), (((void *)0)), (_U_UINT)164);



    _fill_with_0xff();

    itoae(_buf, 123, 4, 5, ' ');

    UnityAssertEqualString((const char*)("0.0123"), (const char*)(_buf), (((void *)0)), (_U_UINT)168);



    _fill_with_0xff();

    itoae(_buf, 123, 5, 5, ' ');

    UnityAssertEqualString((const char*)("0.00123"), (const char*)(_buf), (((void *)0)), (_U_UINT)172);



}
