#include "main.h"

/**
 *more_numbers - function name
 */
void more_numbers(void)
{
int j;
int i = j;
for (i = 1; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
