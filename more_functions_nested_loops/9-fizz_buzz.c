#include <stdio.h>

/**
 *main - function name
 *Return: end of function
 */
int main(void)
{
int num;
for (num = 1; num < 101; num++)
{
if (num % 3 == 0)
{
printf("FIZZ ");
}
else if (num % 5 == 0)
{
printf("BUZZ ");
}
else if (num % 3 == 0 && num % 5 == 0)
{
printf("FIZZBUZZ ");
}
else
{
if (num > 9)
{
putchar(num / 10 + '0');
}
putchar((num % 10) + '0');
putchar(' ');
}
}
return (0);
}