#include "main.h"
#include <stdio.h>
/**
 *_memset - function sets memory of b into s
 *@s: destination variable
 *@b: source variable
 *@n: number of times to print
 *Return: returns output
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;
for (j = 0; j < n; j++)
{
s[j] = b;
}
return (s);
}
