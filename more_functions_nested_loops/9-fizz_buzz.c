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
if (num % 3 == 0 && num % 5 == 0)
{
printf("FizzBuzz ");
}
else if (num % 3 == 0)
{
printf("Fizz ");
}
else if (num % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d", num);
}
}
return (0);
}
