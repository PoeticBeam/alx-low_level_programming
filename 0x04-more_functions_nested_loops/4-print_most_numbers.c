#include <stdio.h>

/**
 * print_most_numbers - print except 2 and 4
 * @void: always void
 *
 */

void print_most_numbers(void)
{
	int a;

	a = 48;
	while (a <= 57)
	{
		if (a != 50 && a != 52)
		{
			putchar(a);
			a += 1;
		}
		else
		{
			a += 1;
		}
	}
	putchar('\n');
}
