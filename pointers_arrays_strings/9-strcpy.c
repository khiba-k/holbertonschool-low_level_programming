#include "main.h"

/**
 * _strcpy - function copies a string
 * @dest: Parameter to copy string to
 * @src: Parameter to copy from
 * Return: End of function
 */
char *_strcpy(char *dest, const char *src)
{
int index = 0;
while (src[index])
{
dest[index] = src[index];
index++;
}
return (dest);
}
