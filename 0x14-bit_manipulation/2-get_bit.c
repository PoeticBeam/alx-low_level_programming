#include <stdio.h>
#include "main.h"

/**
 * get_bit - check the code
 *
 * @n: parameter takes integer
 * @index: position of bit
 * Return: value of bit at index or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (!n)
		return (-1);

	mask = 1UL << index;

	if ((n & mask) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
