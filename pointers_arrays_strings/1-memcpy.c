#include "main.h"

/**
 *_memcpy - funcion copies elements of one array to another array
 *@dest: destination parameter
 *@src: source parameter
 *@n: number of elements to copy
 *Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int j;
for (j = 0; j < n; j++)
{
dest[j] = src[j];
}
return (dest);
}
