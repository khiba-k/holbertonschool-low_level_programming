#include "main.h"

/**
 *_strstr - function locates substring
 *@haystack: where substring is located
 *@needle: The string that neds to be located
 *Return: What value to return
 */
char *_strstr(char *haystack, char *needle)
{
int s = 0;
int i;
while (needle[s] != '\0')
s++;
while (*haystack)
{
for (i = 0; needle[i]; i++)
{
if (haystack[i] != needle[i])
break;
}
if (i != s)
haystack++;
else
return (haystack);
}
return (NULL);
}
