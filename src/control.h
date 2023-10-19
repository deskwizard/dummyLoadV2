#ifndef _CONTROL_H_
#define _CONTROL_H_

#include "defines.h"

#define MAX_CURRENT 4000

#define OUTPUT_ON HIGH
#define OUTPUT_OFF LOW

#define RANGE_LOW 1
#define RANGE_HIGH 0

#define ALARM_FAN_FAIL 0
#define ALARM_OVER_TEMP 1
#define ALARM_OVER_CURRENT 2

void configureControls();
void setOutputState(bool state);
bool getOutputState();
void setOutputRange(bool value);
bool getOutputRange();
void setAlarm(uint8_t alarmType);
void clearAlarm();
bool getAlarmFlag();
void setCurrent(uint16_t current);
void setDAC(uint16_t value);
uint16_t getCurrent();
uint16_t getMaxCurrent();
uint16_t readChannelSE(uint8_t channel);
void testDAC();

#endif