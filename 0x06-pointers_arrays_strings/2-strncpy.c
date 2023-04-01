#include <stdio.h>

/**
 * _strncpy - function copies string from source to destination
 * @dest: destination pointer to string destination
 * @src: source pointer to source destination
 * @n: integer n for number of characters to copy
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}

	while (n > 0)
	{
		dest[i] = '\0';
		n--;
	}

	return (dest);
}
