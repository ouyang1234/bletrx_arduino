#ifndef _MIGRATE_H_
#define _MIGRATE_H_

#include <Arduino.h>
void GPIO_SetBits(byte ignore, byte pin);

void GPIO_ResetBits(byte ignore, byte pin);

byte GPIO_ReadInputDataBit(byte ignore, byte pin);


#endif
