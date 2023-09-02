#ifndef _PINS_H_
#define _PINS_H_

// Lets try to keep the noisy pins on the opposite side
// from the DAC and ADC

/*
    Currently Free:
        D4      * Reserved for display
        D5      * Reserved for display
        D10
        A4
        A5
        A6
        A7
*/


#define pinNTC A0

#define pinOutputStateLED A1
#define pinOutputEnable A2
#define pinDacOutput A3

#define pinEncoderA D0
#define pinEncoderB D1
#define pinEncoderSwitch D2

#define pinRangeSwitch D3

#define pinFanEnable D6
#define pinFanPWM D7
#define pinFanTach D8

#define pinEnableSwitch D9

#define pinDebugLED D11

#define debugSerialRX D12
#define debugSerialTX D13

#endif
