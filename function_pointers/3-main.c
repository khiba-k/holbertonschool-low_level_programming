#include <stdio.h>
#include "3-calc.h"
/**
 *
 *
 */
int main (int argc, char* argv[])
{

	int arg1, arg3;

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg3 = atoi(argv[3]);
	if (argc >= 4 || (*argv[2] == '/' && arg3 == 0) || (*argv[2] == '%' && arg3 == 0))	
	{
		printf("Error");
		exit(100);
	}
	if(argv[2] == NULL)
	{
		printf("Error");
		exit (99);
	}
	printf("%d\n", (get_op_func(argv[2])(arg1, arg3)));
	return (0);
}
