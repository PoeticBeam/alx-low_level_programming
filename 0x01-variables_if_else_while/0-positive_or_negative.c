#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this is the entry function
 * Description: There isn't a lot to talk about
 *here, I'll leave it short
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
		printf("%d is negative\n", n);
	return (0);
}
