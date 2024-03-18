#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - function prints name
 *@name: name to be printed
 *@f: function/pointer that points to name
 */
void print_name(char *name, void (*f)(char *))
{
	char *ptr = name;

	(*f)(ptr);
}

