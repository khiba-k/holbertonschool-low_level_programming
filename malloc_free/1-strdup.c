#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function duplicates string
 *@str: parameter for string
 *Return: value to return
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		;
		s = malloc(j * sizeof(*str) + 1);
		if (s == NULL)
			return (NULL);

		for (i = 0; i < j; i++)
			s[i] = str[i];
		s[i] = '\0';
			return (s);
}
