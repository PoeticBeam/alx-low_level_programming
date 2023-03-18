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
	if (lowercase != 'e' && lowercase != 'q')
		{
		putchar(lowercase);
		lowercase = lowercase + 1;
		}
	else
		lowercase = lowercase + 1;
	}
	putchar('\n');
	return (0);
}
