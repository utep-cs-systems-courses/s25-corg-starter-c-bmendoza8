#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

// Arrows
void print_arrow(int size){
  for(int i = 0; i < size; i++){
    for(int j =0; j < size - i; j++)//center arrow
      putchar(' ');

    for(int j = 0; j < 2 * i+1; j++)//2*i+1 make it 1,3,5
      putchar('*');

    putchar('\n');
  }
  //arrow lime
  for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){//center line
      putchar(' ');
    }
    putchar('*');//after ' ' then move to nextln
    putchar('\n');
  }
}

       
   

