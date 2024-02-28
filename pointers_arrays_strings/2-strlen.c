#include "main.h"

/**
 *_strlen - function returns length of string
 *Return: returns length of code
 *@s: variable of string
 */
int _strlen(char *s)
{
char s[100];
int i;
int length;
for (i = 0; s[i] != '\0'; ++i)
{
++length;
}
return (length);
}

