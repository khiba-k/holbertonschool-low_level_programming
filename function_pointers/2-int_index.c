#include <stdio.h>
#include "function_pointers.h"

/**
 *int_index - function searches for an integer
 *@array: parameter for an array of numbers
 *@size: size of array
 *@cmp: pointer to function that compares values
 *Return: value to be returned/ end of function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if ((*cmp)(array[i]))
		{
			return (i);
		}
	return (-1);
}
