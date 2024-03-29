#include "main.h"

/**
 *_strncpy - function copies string
 *@dest: destination parameter
 *@src: source parameter
 *@n: number of copies
 *Return: returns copied strings
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for (; n > i; i++)
dest[i] = '\0';
return (dest);
}
