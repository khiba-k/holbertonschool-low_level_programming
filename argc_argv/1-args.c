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
for (i = 0; i < argc; i++)
{
printf("%d\n", i);
}
return (0);
}
