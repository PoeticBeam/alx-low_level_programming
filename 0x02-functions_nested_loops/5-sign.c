#include "main.h"

/**
 * print_sign - function prints sign of a number
 * @n: the number passed
 *
 * Return: 1 if n positive, -1 if negative, 0 if 0
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
