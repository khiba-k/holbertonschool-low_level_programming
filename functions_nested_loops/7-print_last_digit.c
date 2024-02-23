#include "main.h"

/**
 *print_last_digit - function begins
 *@p: parameter name
 *Return: end of function
 */
int print_last_digit(int p)
{
int last = p % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last % 10 + '0');
return (last);
}
