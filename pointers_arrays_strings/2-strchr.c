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
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
printf("%c", c);
}
}
return (0);
}
