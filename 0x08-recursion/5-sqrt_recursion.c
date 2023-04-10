#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - recursive of natural square root
 * @n: receives passed integer to function
 *
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	if ((sqrt(n) % 10) != 0)
		return (-1);
	return (sqrt(_sqrt_recursion(n)));
}


