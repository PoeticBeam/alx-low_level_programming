#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - recursively counts string
 * @s: accepts string input from main
 *
 * Return: integer strlen
 */

int _strlen_recursion(char *s)
{
	int strlen = 0;

	if (*s != '\0')
	{
	strlen++;
	strlen += _strlen_recursion(s + 1);
	}
	return (strlen);
}
