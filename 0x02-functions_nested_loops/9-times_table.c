#include "main.h"
#include <stdio.h>

/**
 * times_table - prints 9 times table, starting with 0
 * Return: nothing
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0;  j < 10; j++)
		{
			if (j != 0)
			{
				printf("%2d", i * j);
			}
			else
			{
				printf("%d", i * j);
			}
			if (j != 9)
			{
				printf(",");
				printf(" ");
			}
		}
		putchar('\n');
	}
}
