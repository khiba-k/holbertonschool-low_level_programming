#include <stdio.h>
#include "main.h"

/**
 *clear_bit - function sets the value of bit to zero
 *@n: pointer to number
 *@index: index of bit to change
 *Return: value to return
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}

