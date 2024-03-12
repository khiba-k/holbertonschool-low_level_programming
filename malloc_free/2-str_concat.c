#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * 
 * 
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0,len2 = 0, sum;
	char *c;

	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		len2++;
	}
	sum = len1 + len2;
	c = malloc(sum * sizeof(c));
        strcpy(c, s1);
        strcat(c, s2);
	return (c);
	if (c == NULL)
	{
		return (NULL);
	}

}
