#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 * Return: 0 (success)
 */

void print_alphabet(void)
{
int a = 97;

while (a <= 122)
{
putchar(a);
a = a + 1;
}
putchar('\n');
return;
}

