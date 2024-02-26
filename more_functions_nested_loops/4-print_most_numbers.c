#include "main.h"

/**
 *print_most_numbers - function name
 */
void print_most_numbers(void)
{
int i = 0;
while (i <= 9)
{
while ((i != 2) || (i != 4))
{
_putchar((i % 10) + '0');
}
i++;
}
}
