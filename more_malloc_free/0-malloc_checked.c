#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked - function allocates memory
 *@b: parameter for value
 *Return: value to return/ end of function
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *pointr;

	pointr = malloc(b);
	if (pointr == NULL)
		exit(98);
	return (pointr);
}
