#include <stdio.h>

/**
 * print_numbers - check the code
 * @void: always void
 * Return: 0
 */

void print_numbers(void)
{
	int a;

	a = 48;
	while (a <= 57)
	{
		putchar(a);
		a += 1;
	}
	putchar('\n');
}
