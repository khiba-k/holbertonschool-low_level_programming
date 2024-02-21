#include <stdio.h>

/**
 *main - begins function
 *Return: end of function
 */
int main(void)
{
int num;
char ch;
for (num = 0; num < 10; num++)
{
putchar((num % 10) + '0');
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
