#include <stdio.h>

/**
 * _strcmp - compares two strings and returns ascii diff
 *  of first unequal comparison
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 equal string (-ve) for s1 < s2 (+ve) for s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
	i++;
	}

	return (s1[i] - s2[i]);
}
