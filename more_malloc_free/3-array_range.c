#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *array_range - function creates an array of integers
 *@min: minimum integer
 *@max: maximum integer
 *Return: value to return/ end of function
*/
int *array_range(int min, int max)
{
	int i;
	int *j, len, k;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;
	j = malloc(len * sizeof(int));
	if (j == NULL)
	{
	return (NULL);
	}
	k = 0;
	i = min;
	while (i <= max)
	{
		j[k] = i;
		k++;
		i++;
	}
	return (j);
	free(j);
}
