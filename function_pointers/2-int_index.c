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

	for (i = 0; i < size; i++)
		if ((*cmp)(array[i]))
		{
			return (i);
		}
	if (size <= 0 || !(array) || !(cmp))
	{
		return (-1);
	}
	return (-1);
}
