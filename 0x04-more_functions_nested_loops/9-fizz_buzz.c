#include <stdio.h>

/**
 * main - function fizz multiples of 3
 * buzz multiples of 5
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0 && i != 100)
			printf("Buzz ");
		else if (i % 100 == 0)
			printf("Buzz");
		else
			printf("%d ", i);
	}
	putchar('\n');
	return (0);
}
