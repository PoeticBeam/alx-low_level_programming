#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 *
 * @b: constant character, receives argument
 * Return: converted number on success or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int pivot = 0;

	if (*b == 0)
		return (0);

	while (b[i])
	{
		if (b[i] > 49)
			return (0);
		else if (b[i] == 49)
		{
			pivot <<= 1;
			pivot = pivot + 1;
		}
		else
		{
			pivot <<= 1;
		}
		i++;
	}
	return (pivot);
}
