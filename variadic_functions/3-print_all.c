#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 *print_char - function prints char
 *@toast: variable of va_list
 */
void print_char(va_list toast)
{
	printf("%c" va_arg(toast, int));
}


/**
 *print_char - function prints char
 *@toast: variable of va_list
 */
void print_integer(va_list toast)
{
	printf("%d", va_arg(toast, int));
}


/**
 *print_char - function prints char
 *@toast: variable of va_list
 */
void print_float(va_list toast)
{
	printf("%f", va_arg(toast, int));
}


/**
 *print_char - function prints char
 *@toast: variable of va_list
 */
void print_string(va_list toast)
{
	char *s = va_arg(toast, int);
	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 *print_all - function prints anything
 *@format: format type of arguments
 */
void print_all(const char * const format, ...)
{
	typedef struct ops {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
