#include <Arduboy2.h>
#include "Arduboy2Ext.h"

Arduboy2Ext arduboy;  

void setup() {

  arduboy.begin();
  arduboy.setFrameRate(30);

}

void loop() {

  arduboy.clear();

  arduboy.setTextWrap(true);
  arduboy.setCursor(30, 0);
  arduboy.print("Standard text wrapping at left most position.");
  arduboy.display();

  arduboy.delayShort(5000);


  arduboy.setTextVertSpacing(9);

  arduboy.setTextWrap(true, 24, 115);
  arduboy.setCursor(25, 24);
  arduboy.print("Wrap between pixels 25 and 120 with spacing of 9.");
  arduboy.display();

  arduboy.delayShort(5000);

}

