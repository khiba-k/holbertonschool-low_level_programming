#include "main.h"

/**
 *_strlen_recursion - function prints length of string
 *@s: parameter of string
 *Return: value to return and end of function
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (s[i] != '\0')
return (1 + _strlen_recursion(s + 1));
return (0);
}
