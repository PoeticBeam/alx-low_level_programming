#include <stdio.h>
#include "main.h"

/**
 * print_binary - check the code
 *
 * @n: the integer number
 * Returns: the binary representation of the number
 */

void print_binary(unsigned long int n)
{
	int k;
	int leading_zeroes = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (!n)
		return;

	k = sizeof(unsigned long int) * 8 - 1;

	while (k >= 0)
	{
		unsigned long int mask = 1UL << k;

		if ((n & mask) != 0)
		{
			leading_zeroes = 0;
			_putchar('1');
		}
		else if (!leading_zeroes)
		{
			_putchar('0');
		}

		k--;
	}
}
