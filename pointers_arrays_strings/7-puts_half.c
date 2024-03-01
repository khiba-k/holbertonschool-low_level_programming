#include "main.h"
/**
 *puts_half - function prints half of a string
 *@str: parameter name
 */
void puts_half(char *str)
{
int length, i;
length = 0;
while (str[length] != '\0')
length++;
i = length / 2;
if (length % 2 == 1)
i++;
while (i < length)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
