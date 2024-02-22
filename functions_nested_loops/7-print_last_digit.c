#include "main.h"

/**
 *print_last_digit - function begins
 *@p: parameter name
 *Return: end of function
 */
int print_last_digit(int p)
{
int j = p % 10;
_putchar((j % 10) + '0');
return (0);
}
