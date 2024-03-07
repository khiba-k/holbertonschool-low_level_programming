#include <stdio.h>

/**
 *main - function prints name of program
 *@argc: argument count
 *@argv: argument vector
 *Return: end of function
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
