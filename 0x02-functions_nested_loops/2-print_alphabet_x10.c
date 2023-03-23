#include <stdio.h>

/**
* print_alphabet_x10 - prints lowercase alphabets
* Description: Write a function that prints 10 times the alphabet
* in lowercase, followed by a new line.
* Return: 0 (success)
*/

void print_alphabet_x10(void)
{
int a = 97, j;

while (j <= 9)
{
	a = 97;
	while (a <= 122)
	{
	putchar(a);
	a = a + 1;
	}
	putchar('\n');
	j++;
}
putchar('\n');
return;
}
