#include "main.h"
#include <stdio.h>
/**
 *_strspn - function gets length of prefix substring
 *@s: string variable
 *@accept: prefix substring variable
 *Return: returns value
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
int k = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != 32)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
k++;
}
}
}
else
{
return (k);
}
}
return (k);
}
