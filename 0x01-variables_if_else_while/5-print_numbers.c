#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * Description: the function serves as
 *the start point for code most times.
 * Return: 0 (for success)
 */

int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num = num + 1;
	}
	putchar('\n');
	return (0);
}
