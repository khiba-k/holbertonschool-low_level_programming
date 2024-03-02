#include "main.h"

/**
 * cap_string - function capitalizes words of a string
 * @str: string parameter
 * Return: returns string
 */

char *cap_string(char *str)
{
int i;
int j;
int k;
char nots[] = ",;.!?(){}\n\t\" ";
for (i = 0, k = 0; str[i] != '\0'; i++)
{
if (str[0] > 96 && str[0] < 123)
k = 1;
for (j = 0; nots[j] != '\0'; j++)
{
if (nots[j] == str[i])
k = 1;
}
if (k)
{
if (str[i] > 96 && str[i] < 123)
{
str[i] -= 32;
k = 0;
}
else if (str[i] > 64 && str[i] < 91)
k = 0;
else if (str[i] > 47 && str[i] < 58)
k = 0;
}
}
return (str);
}
