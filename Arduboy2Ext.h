#ifndef ARDUBOY2EXT_H
#define ARDUBOY2EXT_H

#include "Arduboy2.h"

#define DEFAULT_VERT_SPACING 12 

class Arduboy2Ext : public Arduboy2 {
  
   protected:
     int16_t cursor_wrap_leftPos;    
     int16_t cursor_wrap_rightPos;   
     int16_t vert_spacing;      

   public:
     Arduboy2Ext();
      
  /** \brief                          
   * Set or disable text wrap mode and wrapping positions.
   *
   * \param w `true` enables text wrap mode. `false` disables it.
   * \param l left hand X position to wrap text to.  Default is 0.
   * \param r right hand X position to wrap text at.  Default is WIDTH
   *
   * \details
   * Text wrap mode is enabled by specifying `true`. In wrap mode, the text
   * cursor will be moved to the start of the next line (based on the current
   * text size) if the following character wouldn't fit entirely at the end of
   * the current line (where the rightmost column value is defined by r).  
   * Wrapping text will reset the X coordinate to l.

   * If wrap mode is disabled, characters will continue to be written to the
   * same line. A character at the right edge of the screen may only be
   * partially displayed and additional characters will be off screen.
   */
  void setTextWrap(bool w, int16_t l, int16_t r);            

  void setTextWrap(bool w);            
  
   /** \brief                         //SJH
   * Set wrapping positions, left and right.
   *
   * \param l left hand X position to wrap text to.  Default is 0.
   * \param r right hand X position to wrap text at.  Default is WIDTH
   *
   * \details
   * Set the left most and right most X positions for wrapping text.
   * Only effective if setTextWrap / textWrap is true.
   */ 
  void setTextWrapPositions(int16_t l, int16_t r);      

  /** \brief                          
   * Set vertical line spacing.
   *
   * \param y amount to increase y coordinate on wrap, default is DEFAULT_VERT_SPACING
   *
   * \details
   * Sets the value by which to increase the text cursor Y value when
   * wrapping text or rendering a line feed.  Only effective if setTextWrap /
   * textWrap is true.
   */
  void setTextVertSpacing(int16_t y);             
  
  virtual size_t write(uint8_t);
  
};
#endif
