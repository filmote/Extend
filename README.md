##Don’t like the default behaviour? Extend and overwrite it!##

The great think about the Arduino and Arduboy environment is that it is uses C / C++, which allows you to create your own classes or extend others.  When creating my Dominoes game (repository at https://github.com/filmote/DominoesArduboy), I wanted the text to be shown on the right hand side of the screen in place of the boneyard, as shown below.

![Extend](https://github.com/filmote/Extend/blob/master/images/Domino.png)

The Arduboy2 library provides a great set of text functions.  The problem I faced, however, was that the standard wrapping reset the text to begin in position 0 when it wrapped regardless of the starting position.  This can be seen in the code sample and screen shot below.

```
#include <Arduboy2.h>
Arduboy2 arduboy;

arduboy.setTextWrap(true);
arduboy.setCursor(30, 0);
arduboy.print("Standard text wrapping at left most position.");
arduboy.display();
```

![Extend](https://github.com/filmote/Extend/blob/master/images/Extend_1.png)

To achieve the wrapping I wanted, I extended the standard class and added overrode the standard setTextWrapping() function to include additional parameters for the left and right pixel wrapping positions.  I have also added a new function to set the vertical spacing, so that I can reduce the spacing to include more text on the screen or space the text out nicely. 

```
#include <Arduboy2.h>
#include "Arduboy2Ext.h"

Arduboy2Ext arduboy;

arduboy.setTextVertSpacing(9);
arduboy.setTextWrap(true, 25, 120);
arduboy.setCursor(25, 0);
arduboy.print("Wrap between pixels 25 and 120 with spacing of 9.");
arduboy.display();
```

![Extend](https://github.com/filmote/Extend/blob/master/images/Extend_2.png)

#Show me the source!#

The sample code for this extension can be found in my [repository] (https://github.com/filmote/Extend) https://github.com/filmote/Extend.
