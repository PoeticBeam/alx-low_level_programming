#include <stdio.h>

/**
 * swap_int - swaps values of int a and b
 * @a: pointer a
 * @b: pointer b
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;

}
