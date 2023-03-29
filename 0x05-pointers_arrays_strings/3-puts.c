#include <stdio.h>
#include "main.h"

/**
 * _puts - check the code
 * @str: parameter for string
 */

void _puts(char *str)
{
	int i = 0;
	int t = 0;

	while (str[i] != '\0')
		i++;
	for (t = 0; t < i; t++)
		_putchar(str[t]);
	_putchar('\n');
}
