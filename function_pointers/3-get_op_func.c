#include <stdio.h>
#include "3-calc.h"
/**
 *get_op_func - function gets operators
 *@s: parameter of operator
 *Return: value to return
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    while (i < 5)
    {
	    if (*ops[i].op == *s && !(*(s + 1)))
		return(ops[i].f);
	    i++;
    }
    return (NULL);
}
