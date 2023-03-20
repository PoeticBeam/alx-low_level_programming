#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * Description: the function serves as
 * the start point for code most times.
 * Return: 0 (for success)
 */

int main(void)
{
	int h;

	for (h = 48; h <= 57; h++)
	{
	putchar(h);
	}
	for (h = 97; h <= 102; h++)
	{
	putchar(h);
	}
	putchar('\n');
	return (0);
}
