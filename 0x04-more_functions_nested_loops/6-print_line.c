#include "main.h"
#include <stdio.h>

/**
 * print_line - draws straight line in the terminal
 * @n: number of times to print _
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
