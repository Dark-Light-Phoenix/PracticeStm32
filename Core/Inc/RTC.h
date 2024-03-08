#ifndef INC_RTC_H_
#define INC_RTC_H_

#include "stm32f4xx_hal.h"

uint8_t RTC_ConvertFromBinToDec (uint8_t bin);
uint8_t RTC_ConvertFromDecToBin (uint8_t dec);

#endif /* INC_RTC_H_ */
