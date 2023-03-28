#include <unistd.h>
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * @str: pointer to string address passed to function
 */

void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '0')
		i++;
	for (i -= 1; i >= 0; i--)
		putchar(str[i]);
	putchar('\n');
}
