#include "mock_xc.h"
#include "mock_adc_handler.h"
#include "mock_bsp_adc.h"
#include "appl_adc.h"
#include "unity.h"






















extern T_ADCHandler *_appl_adc__adc_handler__get(enum E_ApplAdcChannel channel);

void setUp(void)

{





    enum E_ApplAdcChannel channel;

    for (channel = 0; channel < APPL_ADC_CH_CNT; channel++){

        adc_handler__ctor_CMockIgnoreAndReturn(56, ADC_HANDLER_RES__OK);

    }





    appl_adc__init();

}



void tearDown(void)

{



}















void test_voltage_get(void)

{



    bsp_adc__value__get_CMockExpectAndReturn(84, APPL_ADC_CH__I_SETT, 123);

    adc_handler__voltage__get_by_counts_value_CMockExpectAndReturn(95, _appl_adc__adc_handler__get(APPL_ADC_CH__I_SETT), 123, 456);

    T_ADCHandler_Voltage voltage = appl_adc__voltage__get(

            APPL_ADC_CH__I_SETT

            );





    UnityAssertEqualNumber((_U_SINT)((456)), (_U_SINT)((voltage)), (((void *)0)), (_U_UINT)104, UNITY_DISPLAY_STYLE_INT);

}



void test_voltage_get_wrong_channel_number(void)

{



    __builtin_software_breakpoint_CMockExpect(110);







    appl_adc__voltage__get(

            APPL_ADC_CH_CNT

            );

}
