#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *get_bit - function returns value of bit
 *@n: argument for index
 *@index: index to get bit
 *Return: value to return
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (0);

	return ((n >> index) & 1);
}
