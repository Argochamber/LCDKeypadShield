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

	LCDKeypadShield();

	int readInput();
	int getLastAdc();

	void print(String s);
	void setCursor(int x, int y);
	
	void init();
	
protected:
	LiquidCrystal core;
	int last_adc;
	
};

#endif
