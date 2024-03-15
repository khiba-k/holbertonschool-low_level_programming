#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *str_concat - function concatenates two strings
 *@s1: parameter for first string
 *@s2: parameter for second string
 *Return: value to be returned/ function ends
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0, sum, cat_sum = 0;
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
		len1++;
		for (j = 0; s2[j] != '\0'; j++)
		{
			len2++;
		}
	}
	sum = len1 + len2;
	c = malloc((sum + 1) * sizeof(char));
	if (c == NULL)
	{
		return (NULL);
	}
	for (sum = 0; s1[sum]; sum++)
		c[cat_sum++] = s1[sum];
	for (sum = 0; s2[sum]; sum++)
		c[cat_sum++] = s2[sum];

	return (c);
	if (c == NULL)
	{
		return (NULL);
	}

}
