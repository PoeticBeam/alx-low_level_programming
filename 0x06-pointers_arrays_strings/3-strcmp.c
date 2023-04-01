#include <stdio.h>

/**
 * _strcmp - compares two strings per value of characters
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 for same, 1 for greater, -1 for less
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	i++;
	if (s1[i] > s2[i])
	return (15);

	else if (s1[i] < s2[i])
	return (-15);

	else
	return (0);
}
