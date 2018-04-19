# LCD Keypad Shield
### Arduino

**Note**: The library is two years old, not tested on last version of Arduino.

If you're interested on the project, open an issue.

##### Argochamber interactive 2016

* * *

This library is a wrapper for `LiquidCrystal.h`.

It uses almost the same Api, but methods such `init` and the constructor have
default values that fit the LCD shield.

### Example of usage

```C++
#include <LiquidCrystal.h> // This may not be needed in Linux, but windows does.
#include <LCDKeypadShield.h>

LCDKeypadShield lcd; //This is the main object.

void setup() {
  // Example of print
  lcd.init();
  lcd.setCursor(0,0);
  lcd.print("Hello World!");
}

void loop() {
  // put your main code here, to run repeatedly:
  // ...
}
```

##### Without the library implemented

```C++
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // Example of print
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}

void loop() {
  // put your main code here, to run repeatedly:
  // ...
}
```
