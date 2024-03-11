#include <stdio.h>
#include "main.h"

/**
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		putchar(c);
	}
	return (NULL);
}

