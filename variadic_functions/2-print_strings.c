#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - function prints strings
 *@separator: function separates strings
 *@n: number of elements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list bread;

	va_start(bread, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(bread, char *));
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

