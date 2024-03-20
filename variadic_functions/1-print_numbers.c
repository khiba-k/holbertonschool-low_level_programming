#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - function prints numbers
 *@separator: string between numbers
 *@n: number of elements
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int j;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, int);
		printf("%d", j);
		if (*separator != '\0' && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
