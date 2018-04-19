/**
 * Keypad LCD Shield for arduino Wrapper.
 * Provided that the pinout will never change (It's a shield man!), we provide this wrapper to quick up the programming.
 * ---
 * Argochamber Interactive 2016
 */

#include <LCDKeypadShield.h>

LCDKeypadShield::LCDKeypadShield(uint8_t rs, uint8_t enable, uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3)
  : core(rs, enable, d0, d1, d2, d3)
{
  // Nothing more...


}

void LCDKeypadShield::init(uint16_t width, uint16_t height){
  this->core.begin(width, height); // Initialize the lcd.
}

int LCDKeypadShield::readInput() {
  this->last_adc = analogRead(0);      // read the value from the sensor
  // my buttons when read are centered at these valies: 0, 144, 329, 504, 741
  // we add approx 50 to those values and check to see if we are close
  if (last_adc > 1000) return btnNONE; // We make this the 1st option for speed reasons since it will be the most likely result
  // For V1.1 us this threshold
  if (last_adc < 50)   return btnRIGHT;
  if (last_adc < 250)  return btnUP;
  if (last_adc < 450)  return btnDOWN;
  if (last_adc < 650)  return btnLEFT;
  if (last_adc < 850)  return btnSELECT;

  return btnNONE;  // when all others fail, return this...
}

int LCDKeypadShield::getLastAdc() {
  return this->last_adc;
}

void LCDKeypadShield::setCursor(uint16_t x, uint16_t y){
  this->core.setCursor(x,y);
}

void LCDKeypadShield::print(String s){
  this->core.print(s);
}
