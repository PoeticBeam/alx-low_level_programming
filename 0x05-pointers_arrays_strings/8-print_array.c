#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array in order of entry
 * @a: pointer a
 * @n: size of array
 */

void print_array(int *a, int n)
{
	for (n=0; n < 5; n++)
	{
	printf("%d, ", a[n]);
	}
	printf("\n");
}
