#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - function begins
 *Return: end of function
 */
int main(void)
{
int n;
int lastNum = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (lastNum > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
}
else if (lastNum == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastNum);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
}
return (0);
}
