#include "main.h"
#include <stdio.h>
/**
 * 
 *  
 */
void print_chessboard(char (*a)[8])
{
  int i;
  for (i = 0; (*a)[i] != '\0'; i++)
    {
_putchar(*a);
    }
}
