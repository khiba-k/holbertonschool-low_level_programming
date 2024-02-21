#include <stdio.h>

/**
 *main - begins function
 *Return: end of function
 */
int main(void)
{
int num;
for (num = '0'; num <= 9; num++)
{
putchar((num % 10) + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
