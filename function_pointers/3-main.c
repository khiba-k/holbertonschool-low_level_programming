#include <stdio.h>
#include "3-calc.h"
/**
 *
 *
 */
int main (int argc, char* argv[])
{

	int arg1, arg3;
	
	arg1 = atoi(argv[1]);
	arg3 = atoi(argv[3]);
	printf("%d\n"get_op_func(argv[2])((arg1, arg3));
	
	return (0);
}
