#include "main.h"

/**
 *print_line - function name
 *@n: parameter
 */
void print_line(int n)
{
for (; n > 0; n--)
{
_putchar((n % 10) + '0');
}
_putchar('\n');
}
