#include "main.h"

/**
 *swap_int - function to swap values
 *@a: value of first integer
 *@b: value of second integer
 */
void swap_int(int *a, int *b)
{
int one = *a;
int two = *b;
*b = one;
*a = two;
}
