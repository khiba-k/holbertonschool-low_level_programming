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
printf("FIZZ");
}
else if (num % 5 == 0)
{
putchar('B');
putchar('U');
putchar('Z');
putchar('Z');
putchar(' ');
}
else if (num % 3 == 0 && num % 5 == 0)
{
putchar('F');
putchar('I');
putchar('Z');
putchar('Z');
putchar('B');
putchar('U');
putchar('Z');
putchar('Z');
putchar(' ');
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
