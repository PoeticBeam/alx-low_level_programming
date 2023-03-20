#include <stdio.h>
#include<unistd.h>

/**
 * main - Entry point
 * Description: Write a C program that
 * prints exactly with proper grammar, and that
 * piece of art is useful" - Dora
 * Korpar, 2015-10-19
 * ,followed by a new line.t
 * Return: Always 1 (success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora", 40); +
	write(2, " Korpar, 2015-10-19\n", 19);
	return (1);
}
