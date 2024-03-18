#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - function itterates arrays
 *@array: array to be printed
 *@size: size of aray to be printed
 *@action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
