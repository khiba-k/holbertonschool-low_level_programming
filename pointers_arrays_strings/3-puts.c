#include "main.h"

/**
 *_puts - function prints array
 *@str: string variable
 */
void _puts(char *str)
{
int n = 0;
while (str[n])
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
