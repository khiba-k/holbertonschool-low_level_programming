#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#include <stdarg.h>
typedef struct funckey
{
	void (*f)(va_list toast);
	char spec;
} funckey;


#endif /* VATIADIC_H */
