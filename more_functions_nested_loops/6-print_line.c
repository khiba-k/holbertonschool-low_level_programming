#include "main.h"

/**
 *print_line - function name
 *@n: parameter
 */
void print_line(int n)
{
for (n = n; n > 0; n--)
{
if (n > 9)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
}
_putchar('\n');
}
