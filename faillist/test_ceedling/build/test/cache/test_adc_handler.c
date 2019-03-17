#include "adc_handler.h"
#include "unity.h"


















static T_ADCHandler _adc_handler;

static T_ADCHandler_Res _ctor_result;

void setUp(void)

{

    T_ADCHandler_CtorParams params = {0};





    params.max_counts = 0x3ff;





    params.bsp_max_voltage = 10 * 100;





    params.nominal_add_volts = 0 ;







    _ctor_result = adc_handler__ctor(&_adc_handler, &params);

}



void tearDown(void)

{

    adc_handler__dtor(&_adc_handler);

}















void test_ctor_ok(void)

{



    UnityAssertEqualNumber((_U_SINT)((ADC_HANDLER_RES__OK)), (_U_SINT)((_ctor_result)), (((void *)0)), (_U_UINT)72, UNITY_DISPLAY_STYLE_INT);

}



void test_counts_to_voltage(void)

{

    T_ADCHandler_Voltage voltage;







    voltage = adc_handler__voltage__get_by_counts_value(

            &_adc_handler, 0

            );

    UnityAssertEqualNumber((_U_SINT)((0 * 100)), (_U_SINT)((voltage)), (((void *)0)), (_U_UINT)84, UNITY_DISPLAY_STYLE_INT);







    voltage = adc_handler__voltage__get_by_counts_value(

            &_adc_handler, 0x3ff

            );

    UnityAssertEqualNumber((_U_SINT)((10 * 100)), (_U_SINT)((voltage)), (((void *)0)), (_U_UINT)91, UNITY_DISPLAY_STYLE_INT);







    voltage = adc_handler__voltage__get_by_counts_value(

            &_adc_handler, 0x3ff / 3

            );

    UnityAssertEqualNumber((_U_SINT)(((3.33 * 100))), (_U_SINT)((voltage)), (((void *)0)), (_U_UINT)98, UNITY_DISPLAY_STYLE_INT);

}
