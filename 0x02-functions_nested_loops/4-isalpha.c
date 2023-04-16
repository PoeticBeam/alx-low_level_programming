#include "main.h"

/**
 * _isalpha - function checks for alphabetic character
 * @c: the character passed
 *
 * Return: 1 if lowercase, 0 if not
 */

int _isalpha(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
}
