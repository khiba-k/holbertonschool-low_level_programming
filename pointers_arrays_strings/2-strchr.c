#include "main.h"
#include <stdio.h>
/**
 *_strchr - function returns pointer
 *@s: pointer
 *@c: character
 *Return: what to return
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
{
s++;
}
else
{
return (s);
}
}
if (c == '\0')
return (s);
return (NULL);
}
