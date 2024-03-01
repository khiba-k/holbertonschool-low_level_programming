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
for (i = 0; i < (n / 2); i++)
{
j = a[i];
a[i] = a[j - i - 1];
a[j - i - 1] = j;
}
}
