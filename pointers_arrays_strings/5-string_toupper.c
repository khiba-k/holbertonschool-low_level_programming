#include "main.h"

/**
 *string_toupper - function changes string to uppercase
 *@s: parameter for string
 *Return: returns the output
 */
char *string_toupper(char *s)
{
int i = 0, len;
while (s[len])
{
for (i = 97; i < 123; i++)
{
if (s[len] == i)
s[len] = i - 32;
}
len++;
}
return (s);
}
