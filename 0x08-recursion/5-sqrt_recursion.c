#include "main.h"

/**
 * _sqrt_recursion - recursive of natural square root
 * @n: receives passed integer to function
 *
 * Return: to _find_sqrt, -1 if n not positive value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_find_sqrt(n, 0));
}

/**
 * _find_sqrt - iterates to find square root
 * @n: actual number being evaluated
 * @i: iterator
 *
 * Return: -1 if no root found, i(root) if found
 */

int _find_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_find_sqrt(n, i + 1));
}
