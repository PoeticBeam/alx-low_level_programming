#include "main.h"

/**
 * _pow_recursion - function returns value of x raised to power y
 * @x: value of x
 * @y: value of y
 *
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	result = (x * _pow_recursion(x, y - 1));
	return (result);
}
