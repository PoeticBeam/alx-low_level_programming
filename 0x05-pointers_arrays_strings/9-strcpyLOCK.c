#include "main.h"

/**
 * _strcpy - copies string from source to destination
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	if (src == 0)
	{
		*dest = '\0';
		return (dest);
	}

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
