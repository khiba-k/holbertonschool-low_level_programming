#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print integer
 *@n: variable name
 */
void print_to_98(int n)
{
while (n > 98)
{
printf("%d", n);
_putchar(',');
_putchar(' ');
n--;
}
while (n < 98)
{
printf("%d", n);
_putchar(',');
_putchar(' ');
n++;
}
if (n == 98)
{
printf("%d", n);
printf("\n"); 
}
}
