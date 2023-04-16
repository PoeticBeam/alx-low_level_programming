#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - function prints every minute of the day
 * Return: nothing
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			printf("%.2d:%.2d\n", i, j);
		}
	}
}
