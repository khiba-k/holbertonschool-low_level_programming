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
for (i = 0; i < n; n++)
{
for (j = 0; j < n; j++)
{
if (i == j)
{
_putchar(slash);
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}