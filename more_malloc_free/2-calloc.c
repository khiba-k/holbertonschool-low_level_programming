#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_calloc - function allocates memory for array
 *@nmemb: parameter for number of elements
 *@size: parameter for number of bytes
 *Return: returns value/ end of function
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int k, j;
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	j = nmemb * size;
	s = malloc(j);
	if (s == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < j; k++)
		s[k] = 0;
	return (s);
}
