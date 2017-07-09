#include <Arduboy2.h>
#include "Arduboy2Ext.h"

Arduboy2Ext arduboy;

void setup() {

  arduboy.begin();

}

void loop() {

  arduboy.clear();

  if (mode == 0) {
    
    arduboy.setTextWrap(true);
    arduboy.setCursor(30, 0);
    arduboy.print("Standard text wrapping at left most position.");
    arduboy.display();

  }
  else {

    arduboy.setTextVertSpacing(9);
    arduboy.setTextWrap(true, 24, 115);
    arduboy.setCursor(25, 0);
    arduboy.print("Wrap between pixels 25 and 120with spacing of9.");
    arduboy.display();

  }

  arduboy.delayShort(100);

}

