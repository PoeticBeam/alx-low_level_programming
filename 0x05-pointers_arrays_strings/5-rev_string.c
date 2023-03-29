#include "main.h"
#include <string.h>

/**
 * rev_string - reverses string
 * @s: parameter passes sttrinf to function
 */

void rev_string(char *s)
{
	int counter = 0;
	int i;
	int n;

	i = strlen(s);
	for (n = 0; n < i / 2; n++)
	{
		counter = s[n];
		s[n] = s[i - n - 1];
		s[i - n - 1] = counter;
	}
}
