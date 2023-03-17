#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (success)
 *Write a C program that prints the size
 *of various types on the computer it is
 *compiled and run on.
*/

int main(void)
{
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(long int));
	printf("%lu\n", sizeof(long long int));
	printf("%lu\n", sizeof(float));
	return (0);
}
