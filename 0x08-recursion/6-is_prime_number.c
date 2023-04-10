#include "main.h"

/**
 * is_prime_number - checks for prime numbers
 * @n: integer passed to function
 *
 * Return: 1 (prime number) 0 not prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (really_prime(n, n - 1));
}

/**
 * really_prime - checks if number is truly prime or not
 * @n: number to be checked
 * @i: iterator
 *
 * Return: 1 if prime, 0 for not prime
 */

int really_prime(int n, int i)
{

		if (i == 1)
			return (1);
		if (n % i == 0 && i > 0)
			return (0);
		return (really_prime(n, i - 1));
}
