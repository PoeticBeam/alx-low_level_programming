#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in memory
 * @str: old string passed to function
 *
 * Return: NULL if no character or space unavailable, copy str2 on success
 */

char *_strdup(char *str)
{
	char *str2;
	int i, r;

	if (str == NULL || str == 0)
		return (NULL);
	for (i = 0; i != '\0'; i++);
	str2 = (char *)malloc(sizeof(char) * (i + 1));
	if (str2 == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		str2[r] = str[r];
	return (str2);
	free(str2);
}
