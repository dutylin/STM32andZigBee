#ifndef __ADC_H
#define __ADC_H

#include "stm32f10x.h"

u16 Get_Adc_Average(u8 ch,u8 times);
void ADC_GPIO_config();
void ADC_config();
u16 Get_Adc(u8 ch);  
float  Analyze_AdcData(u8 ch);

#endif 