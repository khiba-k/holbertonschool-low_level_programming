#include "main.h"

/**
 *print_diagonal - function prints diagonal line
 *@n: parameter
 */
void print_diagonal(int n)
{
char slash = '\\';
int i;
int j;
if (n > 0)
{
for (i = 0; i < n; n++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
