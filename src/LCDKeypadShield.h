/**
 * Keypad LCD Shield for arduino Wrapper.
 * Provided that the pinout will never change (It's a shield man!), we provide this wrapper to quick up the programming.
 * ---
 * Argochamber Interactive 2016
 */

#ifndef __LCD_KEYPADSHIELD_H_
#define __LCD_KEYPADSHIELD_H_

#include <Arduino.h>
#include <LiquidCrystal.h>

#define btnRIGHT  0
#define btnUP     1
#define btnDOWN   2
#define btnLEFT   3
#define btnSELECT 4
#define btnNONE   5

class LCDKeypadShield {
public:

  LCDKeypadShield(uint8_t rs = 8, uint8_t enable = 9, uint8_t d0 = 4, uint8_t d1 = 5, uint8_t d2 = 6, uint8_t d3 = 7);

  int readInput();
  int getLastAdc();

  void print(String s);
  void setCursor(uint16_t x = 0, uint16_t y = 0);

  void init(uint16_t width = 16, uint16_t height = 2);

protected:
  LiquidCrystal core;
  int last_adc;

};

#endif
