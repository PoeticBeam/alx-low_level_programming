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
	char lowercase;

	lowercase = 'z';
	while (lowercase >= 'a')
	{
		putchar(lowercase);
		lowercase = lowercase - 1;
	}
	putchar('\n');
	return (0);
}
