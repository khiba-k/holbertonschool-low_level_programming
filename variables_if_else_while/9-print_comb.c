#include <stdio.h>

/**
 *main - begins function
 *Return: end of function
 */
int main(void)
{
char num;
for (num = '0'; num <= 9; num++)
{
putchar(num);
putchar(',');
}
putchar('\n');
return (0);
}
