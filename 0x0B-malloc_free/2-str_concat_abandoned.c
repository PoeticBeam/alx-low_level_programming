#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string destination
 * @s2: string source
 *
 * Return: NULL (failure/empty string); s1 (success)
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *new_space;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;
	for (j = 0; s2[j] != '\0'; j++)
	{
		s1[i] = s2[j];
		i++;
	}
	s1[i] = '\0';

	i = 0;
	while (s1[i] != '\0')
		i++;

	new_space = (char *)malloc(sizeof(char) * (i + 1));
	if (new_space == NULL || new_space == 0)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		new_space[k] = s1[k];
	new_space[k] = '\0';
	return (new_space);
	free(new_space);
}
