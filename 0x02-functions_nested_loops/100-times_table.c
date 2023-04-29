#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints n times table, starting with 0
 * up to 15 times table.
 * Return: nothing
 */

void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0;  j <= n; j++)
		{
			if (j != 0)
			{
				printf("%2d", i * j);
			}
			else
			{
				printf("%d", i * j);
			}
			if (j != n)
			{
				printf(",");
				printf(" ");
			}
		}
		putchar('\n');
	}
}
