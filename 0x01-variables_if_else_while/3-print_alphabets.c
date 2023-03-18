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
	char uppercase;

	lowercase = 'a';
	uppercase = 'A';
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase = lowercase + 1;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase = uppercase + 1;
	}
	putchar('\n');
	return (0);
}
