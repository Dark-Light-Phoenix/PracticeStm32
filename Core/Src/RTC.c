#include "RTC.h"

uint8_t RTC_ConvertFromDecToBin (uint8_t dec)
{
	uint8_t res = ((dec>>4)*10+(0xD0 & dec));
	return res;
}
uint8_t RTC_ConvertFromBinToDec (uint8_t bin)
{
	uint8_t res = ((bin/10)<<4 | (bin%10));
	return res;
}
