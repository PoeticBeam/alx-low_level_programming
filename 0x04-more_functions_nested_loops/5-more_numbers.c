#include <stdio.h>

/**
 *  more_numbers - 10 times the numbers 0-14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			putchar((j / 10) + '0');
			putchar(j % 10 + '0');
		}
		putchar('\n');
	}
}
