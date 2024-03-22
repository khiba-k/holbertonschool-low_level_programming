#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * printf_char - printfs a char from var args
 *
 * @toast: va_list to print from
 *
 * Return: void
 */
void printf_char(va_list toast)
{
	printf("%c", (char)va_arg(toast, int));
}

/**
 * printf_int - printfs an int from var args
 *
 * @toast: va_list to print from
 *
 * Return: void
 */
void printf_int(va_list toast)
{
	printf("%d", va_arg(toast, int));
}

/**
 * printf_float - printfs a float from var args
 *
 * @toast: va_list to print from
 *
 * Return: void
 */
void printf_float(va_list toast)
{
	printf("%f", (float)va_arg(toast, double));
}

/**
 * printf_string - printfs a string from var args
 *
 * @toast: va_list to print from
 *
 * Return: void
 */
void printf_string(va_list toast)
{
	char *str = va_arg(toast, char*);

	while (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}

/**
 * print_all - prints various types given a format string for the arguments
 *
 * @format: string containing type information for args
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	const char *ptr;
	va_list toast;
	funckey key[4] = {{printf_char, 'c'}, {printf_int, 'i'},
			   {printf_float, 'f'}, {printf_string, 's'}};
	int keyind = 0, notfirst = 0;

	ptr = format;
	va_start(toast, format);
	while (format != NULL && *ptr)
	{
		if (key[keyind].spec == *ptr)
		{
			if (notfirst)
				printf(", ");
			notfirst = 1;
			key[keyind].f(toast);
			ptr++;
			keyind = -1;
		}
		keyind++;
		ptr += keyind / 4;
		keyind %= 4;
	}
	printf("\n");

	va_end(toast);
}

