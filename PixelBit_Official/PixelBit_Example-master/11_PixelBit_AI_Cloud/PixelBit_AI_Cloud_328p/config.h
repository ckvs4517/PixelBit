#ifndef _CONFIG_H_
#define _CONFIG_H_

#define DEBUG 0

#define UART_BAUDRATE 57600
#define UART_BUFFER 200

#define ATM_EVN_BTN_A_PRE "BTN_A_PRE"
#define ATM_EVN_BTN_B_PRE "BTN_B_PRE"
#define ATM_EVN_BTN_A_REL "BTN_A_REL"
#define ATM_EVN_BTN_B_REL "BTN_B_REL"

#define MICRO_BIT_PIN_0 3
#define MICRO_BIT_PIN_1 A0
#define MICRO_BIT_PIN_2 A1
#define MICRO_BIT_PIN_3 A2
#define MICRO_BIT_PIN_4 A3
#define MICRO_BIT_PIN_5 4
#define MICRO_BIT_PIN_6 6
#define MICRO_BIT_PIN_7 7
#define MICRO_BIT_PIN_8 2
#define MICRO_BIT_PIN_9 8
#define MICRO_BIT_PIN_10 A7
#define MICRO_BIT_PIN_11 5
#define MICRO_BIT_PIN_12 9
#define MICRO_BIT_PIN_13 13
#define MICRO_BIT_PIN_14 12
#define MICRO_BIT_PIN_15 11
#define MICRO_BIT_PIN_16 10
#define MICRO_BIT_PIN_19 A5
#define MICRO_BIT_PIN_20 A4

#define APIN_BUTTON_A MICRO_BIT_PIN_5
#define APIN_BUTTON_B MICRO_BIT_PIN_11
#define APIN_WHEEL_R_A MICRO_BIT_PIN_2
#define APIN_WHEEL_R_B MICRO_BIT_PIN_13
#define APIN_WHEEL_L_A MICRO_BIT_PIN_8
#define APIN_WHEEL_L_B MICRO_BIT_PIN_14

#define BTN_LVL_PRESSED LOW
#define BTN_LVL_RELEASE HIGH

#endif     //_CONFIG_H_