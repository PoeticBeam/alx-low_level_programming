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

	lowercase = 'a';
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		putchar('\n');
		lowercase = lowercase + 1;
	}

	return (0);
}
