# LCD Keypad Shield
### Arduino

##### Argochamber interactive 2016

* * *

This library has implemented the library
```C++
#include <LiquidCrystal.h>
```

Use it as a _wrapper_ for the shield, the keypad shield pins are the **same every time**, so it's a waste of time to use the `<LiquidCrystal.h>` spare.

### Example of use

Also the usage of a __Shield__ *Speeds up the wiring time*.

```Arduino
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

```Arduino
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
