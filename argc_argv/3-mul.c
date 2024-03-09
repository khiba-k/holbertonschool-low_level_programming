#include <stdio.h>
#include <stdlib.h>
/**
 *main - function prints product of two numbers
 *@argc: argument count
 *@argv: argument vector
 *Return: what to return/ end of function
 */
int main(int argc, char *argv[])
{
int i, j;
i = j = 0;
if (argc == 3)
{
i = atoi(argv[1]);
j = atoi(argv[2]);
printf("%d\n", i *j);
return (0);
}
else
printf("Error\n");
return (1);
}
