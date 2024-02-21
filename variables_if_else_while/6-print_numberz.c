#include <stdio.h>

/**
 * main -Begins function
 *
 * Return: End of function.
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar((num % 10) + '0');
}
putchar('\n');
return (0);
}
