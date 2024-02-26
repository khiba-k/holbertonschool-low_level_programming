#include "main.h"

/**
 *print_diagonal - function prints diagonal line
 *@n: parameter
 */
void print_diagonal(int n)
{
for (; n > 0; n++)
{
if (n != 0)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
