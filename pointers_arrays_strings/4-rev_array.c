#include "main.h"

/**
 * reverse_array - function reverses integers
 * @a: parmeter for integers
 * @n: parameter for number of elements
 */

void reverse_array(int *a, int n)
{
int length = 0, length1, length2, actlength = n - 1;
int arr[100];
for (length1 = 0, length2 = 0; length1 < n; length1++, length2++)
arr[length1] = a[length2];
if (n > 0)
{
while (length < n)
{
a[length] = arr[actlength];
actlength--;
length++;
}
}
}
