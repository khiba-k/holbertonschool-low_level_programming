#include "main.h"
#include <stdio.h>
/**
 *print_array - prints arrays
 *@a: parameter
 *@n: paramter
 */
void print_array(int *a, int n)
{
for (n = 0; a[n] != '\0'; n++)
{
if (n == 0)
{
printf("%d", a[n]);
}
else
{
printf(", %d", a[n]);
}
}
printf("\n");
}
