#include "main.h"

/**
 *_puts - function prints array
 *@str: string variable
 */
void _puts(char *str)
{
  int n;
  for (n = 0; n != str['\0']; n++)
    {
      _putchar(str[n]);
    }
  _putchar('\n');
}
