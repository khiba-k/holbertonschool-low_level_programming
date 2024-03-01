#include "main.h"

/**
 * _strcpy - function copies a string
 * @dest: Parameter to copy string to
 * @src: Parameter to copy from
 * Return: End of function
 */
char *_strcpy(char *dest, const char *src)
{
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
}
