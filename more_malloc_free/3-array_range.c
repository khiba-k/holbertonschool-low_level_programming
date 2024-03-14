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
	for (i = min; i <= max; i++)
		len++;
	j = malloc((len + 1) * sizeof(j));
	k = 0;
	i = min;
	while (i <= max)
	{
		j[k] = i;
		k++;
		i++;
	}
	return (j);
}
