#include "main.h"

/**
 * factorial - generates factorial of any int number
 * @n: number n passes to function
 *
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

