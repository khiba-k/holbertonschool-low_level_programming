#include "main.h"
/**
 *_strpbrk - function locates first occurence of bytes in
 *@s: variable to locate from
 *@accept: variable
 *Return: value to return
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i] != '\0'; i++)
if (accept[i] == *s)
{
return (s);
}
s++;
}
return (NULL);
}
