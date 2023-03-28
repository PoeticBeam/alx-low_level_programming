#include <stdio.h>

/**
 * _puts - prints string passed to function
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	for (i += 1; i >= 0; i++)
		putchar(str[i]);
	putchar('\n');
}
