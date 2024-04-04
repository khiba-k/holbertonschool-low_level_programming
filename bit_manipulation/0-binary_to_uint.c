#include <stdio.h>
#include "main.h"

/**
 *binary_to_uint - function converts binary to unit
 *@b: pointer to string
 *Return: value to return
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int val = 0;

	if (b == NULL)
		return (0);
	if (b[i] != '1' && b[i] != '0')
		return (0);
	for (; (b[i] == '1') || (b[i] == '0'); i++)
	{
		val <<= 1;
		val += b[i] - '0';
	}
	return (val);
}
