#include "main.h"

/**
 * puts2 - prints every other char
 * @str: parameter receives string passed to function
 */

void puts2(char *str)
{
	int i = 0;
	int t = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (t = 0; t < i; t += 2)
	{
		_putchar(str[t]);
	}
	_putchar('\n');
}
