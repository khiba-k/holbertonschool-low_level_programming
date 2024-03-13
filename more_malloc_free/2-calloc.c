#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_calloc - function allocates memory for array
 *@nmemb: parameter for number of elements
 *size: parameter for number of bytes
 *Return: returns value/ end of function
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, len, k, j;
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		len++;
	}
	j = len * size;
	s = malloc(j);
	for (k = 0; k < nmemb; k++)
		;
	return (s);
}
