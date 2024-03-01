#include "main.h"

/**
 *_strncat - function cats strings
 *@dest: destination
 *@src: source
 *@n: terminate if more bytes
 *Return: returns concatenated strings
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
{
dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}
