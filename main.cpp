/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

DigitalOut led1(LED1);



int main()
{
    while (true)
    {
        led1=!led1;
        wait_us(1000000);
    }
}
