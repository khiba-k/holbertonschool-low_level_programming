#include <stdio.h>
#include "main.h"

/**
 *set_bit - function sets value of bit to one
 *@n: pointer to number
 *@index: index of value to change
 *Return: value to return
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
