#include <stdio.h>

/**
 * _isupper - function returns 1 (success) if uppercase
 * @c: integer c receiving assigned value
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
