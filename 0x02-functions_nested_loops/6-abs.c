#include "main.h"

/**
 * _abs - function computes absolute value of an integer
 * @t: receives integer for computation
 *
 * Return: absolute value
 */

int _abs(int t)
{
	if (t < 0)
	{
		t = t * (-1);
		return (t);
	}
	else
		return (t);
}
