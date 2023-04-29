#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @i: integer passed to function
 *
 * Return: c
 */

int print_last_digit(int i)
{
	int c = 0;

	if (i != 0)
		c = (i % 10);
	else
		c = 0;
	return (c);
}
