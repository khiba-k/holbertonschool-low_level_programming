#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print integer
 *@n: variable name
 */
void print_to_98(int n)
{
if (n >= 98)
{
for (; n >= 98; n--)
{
if (n == 98)
{
printf("%d", n);
}
else
{
printf("%d", n);
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d", n);
}
else
{
printf("%d", n);
_putchar(',');
_putchar(' ');
}
}
}
}
