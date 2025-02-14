#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_5x7(char c)
{
  c -= 0x20;
  for (char col = 0; col < 5; col++) {
    for (char row = 0; row < 7; row++) {
      unsigned short rowBits = font_5x7[c][col];
      unsigned short colMask = 1 << (6-row); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}
// had problems with the bitmap not being read correctly. it seemed to be offest by 1.
// I tried different ways of implementing this section but nothing fixed it(even copying
// the 5x7 code on top and changing it to fix 8x12 but it did not work.
void print_char_8x12(char c){
  c += 0x1; // I had to use this in order for it to print somewhat in the correct position.
  for (char col = 0; col < 8 ; col++){
    for(char row = 0; row < 12; row++){
      unsigned short rowBits = font_8x12[c][col];
      unsigned short colMask = 1 << (11-row);
      putchar((rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}
