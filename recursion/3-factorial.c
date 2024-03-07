#include "main.h"
#include <stdio.h>
/**
 *factorial - function prints factorials of integers
 *@n: parameter for integers
 *Return: what value to return
 */
int factorial(int n)
{
if (n == 0 || n == 1)
return (1);
if (n > 1)
return (n * factorial(n - 1));
else
return (-1);
}
