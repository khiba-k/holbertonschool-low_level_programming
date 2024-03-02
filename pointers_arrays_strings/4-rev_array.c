#include "main.h"

/**
 * reverse_array - function reverses integers
 * @a: parmeter for integers
 * @n: parameter for number of elements
 */

void reverse_array(int *a, int n)
{
int i;
for (i = n - 1; a[i] >= 0 && a[i] != '\0'; i--)
{
_putchar(a[i]);
}
}
