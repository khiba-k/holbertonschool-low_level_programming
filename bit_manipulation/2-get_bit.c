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
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);

}
