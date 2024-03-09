#include <stdio.h>

/**
 * main - function prints number of arguments
 *@argc: argument count
 *@argv: argument vector
 *Return: end of function
*/
int main(int argc, char *argv[]__attribute__((unused)))
{
int i;
if (argc < 1)
{
printf("0");
}
else
{
for (i = 0; i < argc; i++)
{}
printf("%d", i - 1);
}
printf("\n");
return (0);
}
