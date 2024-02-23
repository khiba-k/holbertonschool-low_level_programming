#include "main.h"

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
_putchar((n % 10) + '0');
}
else
{
_putchar((n % 10) + '0');
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
_putchar((n % 10) + '0');
}
else
{
_putchar((n % 10) + '0');
_putchar(',');
_putchar(' ');
}
}
}
}
