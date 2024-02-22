#include "main.h"

/**
 *_islower(int c) - function begins
 *Return: end of function
 *@c: int variable name
*/
int _islower(int c)
{
int zer = 0;
int one = 1;
if (c >= 'a' && c <= 'z')
{
_putchar((zer % 10) + '0');
}
else
{
_putchar((one % 10) + '0');
}
return (0);
}
