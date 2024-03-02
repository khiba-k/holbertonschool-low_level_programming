#include "main.h"

/**
 *string_toupper - function changes string to uppercase
 *@s: parameter for string
 *Return: returns the output
 */
char *string_toupper(char *s)
{
int i = 0, j;
while (s[i])
{
for (j = 97; j < 123; j++)
{
if (s[i] == j)
s[i] = j - 32;
}
i++;
}
return (s);
}
