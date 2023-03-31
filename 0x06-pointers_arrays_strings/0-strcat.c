#include <stdio.h>

/**
 * _strcat - function returns concatenated string
 * @dest: destination (points to)
 * @src: source (points to)
 * Return: _strcat
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

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
