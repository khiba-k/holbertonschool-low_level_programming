#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * 
 * 
*/
int *array_range(int min, int max)
{
	int i;
	int *j, len;

	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
		len++;
	j = malloc(len * sizeof(j));
	for (len = 0; j[len]; len++)
		j[len] = i;
	return (j);
}
