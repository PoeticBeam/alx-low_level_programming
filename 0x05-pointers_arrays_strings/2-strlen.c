#include <stdio.h>

/**
 * _strlen - function for checking string length
 * @s: parameter (pointer s) to variable of type char
 *
 * Return: string_length
 */

int _strlen(char *s)
{
	int string_length = 0;
		while (s[string_length])
			string_length++;
	return (string_length);
}
