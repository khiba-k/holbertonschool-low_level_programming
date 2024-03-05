#include "main.h"
#include <stdio.h>
/**
 * 
 *  
 */
void set_string(char **s, char *to)
{
  char i;
  &i = *to;
  **s = &i;
  printf("%c", **s);
}
