#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * Description: Program prints all possible
 * combinations of single-digit numbers
 * Return: 0 (for success)
 */

int main(void)
{
int c;

for (c = 0; c <= 9; c++)
	{
	putchar(c + '0');
	if (c == 9)
		break;
	putchar(',');
	putchar(' ');
	}
return 0;
}
