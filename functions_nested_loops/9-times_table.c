#include "main.h"

/**
 * times_table - prototype name
 * void - void function
*/

void times_table(void)
{
int i;
int sum;
int product;
for (i = 0; i <= 9; i++)
{
for (sum = 0; sum <= 9; sum++)
{
product = i * sum;
if (sum == 0)
{
_putchar('0' + product);
}
else if (product <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(product + '0');
}
else if (product > 9)
{
_putchar(',');
_putchar(' ');
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
}
_putchar('\n');
}
}
