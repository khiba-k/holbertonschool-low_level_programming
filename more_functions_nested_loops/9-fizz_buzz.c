#include <stdio.h>

/**
 *main - function name
 *Return: end of function
 */
int main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if (num % 3 == 0 && num % 5 == 0)
{
printf("FizzBuzz ");
}
else if (num % 5 == 0)
{
if (num == 100)
{
printf("Buzz");
}
else
printf("Buzz ");
}
else if (num % 3 == 0)
printf("Fizz ");
else
printf("%d ", num);
}
printf("\n");
return (0);
}
