#include "main.h"

/**
 *print_sign - function begins
 *@n: parameter name
 *Return: what should be returned
 */
int print_sign(int n)
{
if (n > '0')
{
_putchar('+');
return (1);
}
else if (n < '0')
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}

