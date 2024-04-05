#include <stdio.h>
#include "main.h"

/**
 *flip_bits - function returns number of bits
 *@n: ...
 *@m: ...
 *Return: value to return
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num;

	num = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			num++;
	return (num);
}
