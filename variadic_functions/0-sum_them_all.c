#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - function returns sum of its parameters
 *@n: number of elements
 *Return: value to return/ end of function
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j;

	j = 0;
	if (n != 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			j += va_arg(ap, int);
		}
	va_end(ap);
	return (j);
	}

	return (0);
}
