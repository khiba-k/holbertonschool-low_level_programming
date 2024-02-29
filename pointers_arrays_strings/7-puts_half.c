#include "main.h"
/**
 *puts_half - function prints half of a string
 *@str: parameter name
 */
void puts_half(char *str)
{
int i = 0;
int len = 0;
int m = 0;
while (str[i] != '\0')
{
i++;
}
if (len % 2 == 0)
{
for (len = i / 2; str[len] != '\0'; len++)
{
_putchar(str[len]);
}
}
else if (len % 2 != 0)
{
for (m = (len - 1) / 2; m < len - 1; m++)
{
_putchar(str[m]);
}
}
_putchar('\n');
}
