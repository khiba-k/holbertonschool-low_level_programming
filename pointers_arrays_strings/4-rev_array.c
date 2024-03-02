#include "main.h"

/**
 * reverse_array - function reverses integers
 * @a: parmeter for integers
 * @n: parameter for number of elements
 */

void reverse_array(int *a, int n)
{
int i;
int j;
for (i = 0; a[i] != '\0'; i++)
{
n++;
for (j = n - 1; a[j] >= 0; j--)
{
_putchar(a[i]);
}
}
}
