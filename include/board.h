#ifndef BOARD_H
#define BOARD_H

#include "user_config.h"

void board_init( void );
bool board_setOutput( int output, bool state );
bool board_getOutput( int output );
bool board_getInput( uint8_t input );
int board_sensorGetAirPressure ( void );
int board_sensorGetTemperature ( void );
void statusLedTimerInit();
void statusLedTimerSet(uint32_t ms);
void statusLedTimerStop( void );
void board_statusLed( uint8_t mode );
void statusLed2TimerInit();
void statusLed2TimerSet(uint32_t ms);
void statusLed2TimerStop( void );
void board_statusLed2( uint8_t mode );
void board_handle_gpio_interrupt( int8_t key );
void pwmCb( void );
void setPWM(uint8_t r, uint8_t g, uint8_t b);
uint8_t getPWM_R( void );
uint8_t getPWM_G( void );
uint8_t getPWM_B( void );
void board_setWS2812( uint8_t * buffer, uint16_t length );
void board_checkAllInputs( void );
void board_ws2812_rainbow ( bool state, uint8_t mode );
void board_ws2812_rainbow_init ( void );
void board_wbInit( void );
void board_wbStop( void );
void board_wbUp( void );
void board_wbDown( void );
uint8_t board_wbMode( void );
bool board_wbState( void );

#ifndef OUTPUT1
  #define OUTPUT1 -1
#endif
#ifndef OUTPUT2
  #define OUTPUT2 -1
#endif
#ifndef OUTPUT3
  #define OUTPUT3 -1
#endif
#ifndef OUTPUT4
  #define OUTPUT4 -1
#endif
#ifndef OUTPUT5
  #define OUTPUT5 -1
#endif
#ifndef OUTPUT6
  #define OUTPUT6 -1
#endif
#ifndef OUTPUT7
  #define OUTPUT7 -1
#endif
#ifndef OUTPUT8
  #define OUTPUT8 -1
#endif
#ifndef BUTTON1
  #define BUTTON1 -1
#endif
#ifndef BUTTON2
  #define BUTTON2 -1
#endif
#ifndef BUTTON3
  #define BUTTON3 -1
#endif
#ifndef BUTTON4
  #define BUTTON4 -1
#endif
#ifndef BUTTON5
  #define BUTTON5 -1
#endif
#ifndef BUTTON6
  #define BUTTON6 -1
#endif
#ifndef BUTTON7
  #define BUTTON7 -1
#endif
#ifndef BUTTON8
  #define BUTTON8 -1
#endif
#ifndef LED
  #define LED -1
#endif
#ifndef LED2
  #define LED2 -1
#endif
#ifndef I2C_MCP_INT
  #define I2C_MCP_INT -1
#endif

#endif
