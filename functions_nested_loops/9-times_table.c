#include "main.h"

/**
 * times_table - prototype name
 * void - void function
*/

void times_table(void)
{
int i;
int num;
int product;
int r;
int c;
for (i = 0; i < 10; i++)
{
for (num = 0; num < 10; num++)
{
product = num * i;
if (product > 9)
{
r = product % 10;
c = (product - r) / 10;
_putchar(44);
_putchar(32);
_putchar(c + '0');
_putchar(r + '0');
}
_putchar('\n');
}
}
}
