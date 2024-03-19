#include <stdio.h>
#include "3-calc.h"
/**
 *main - function pefoms simple operations
 *@argc: argument count
 *@argv: value of arguments
 *arg1: value of first argument
 *arg3: value of third argument
 *Return: value to return
 */
int main(int argc, char *argv[])
{

	int arg1, arg3;

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}
	arg1 = atoi(argv[1]);
	arg3 = atoi(argv[3]);
	if (argv[3] == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n"), exit(100);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n"), exit(99);
	}
	printf("%d\n", (get_op_func(argv[2])(arg1, arg3)));
	return (0);
}
