#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *string_nconcat - function concatenates strings
 *@s1: first string
 *@s2: second string
 *@n: s2 number of bytes
 *Return: value to return/ end of function
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, sum, len = 0, cat = 0;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		len++;
	}
		;
	for (j = 0; j < n; j++)
		;
	sum = len + j;
	c = malloc((sum + 1) * sizeof(char));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		c[cat++] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
		c[cat++] = s2[j];
	c[cat++] = '\0';
	return (c);
	free(c);
}
