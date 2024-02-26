#include "main.h"
/**
 *print_square - name of function that prints square
 *@size: parameter
 */
void print_square(int size)
{
int c;
int i = size;
if (size > 0)
{
for (i = size; i > 0; i--)
{
for (c = 0; c < size; c++)
_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
